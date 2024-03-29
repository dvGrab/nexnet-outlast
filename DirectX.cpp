#include "DirectX.h"
#include "Menu.h"
#include <d3dx11tex.h>

#include "cursor_img.h"

#define PRESENT_PATTERN "\x48\x89\x6C\x24\x18\x48\x89\x74\x24\x20\x41\x56\x48\x83\xEC\x20\x41\x8B\xE8"
#define PRESENT_MASKING "xxxxxxxxxxxxxxxxxxx"

#define RESIZE_PATTERN "\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x48\x89\x74\x24\x00\x57\x41\x56\x41\x57\x48\x83\xEC\x30\x44\x8B\xFA"
#define RESIZE_MASKING "xxxx?xxxx?xxxx?xxxxxxxxxxxx"

CG::UClass* Pickup = nullptr;

CWorld* World = new CWorld();
CPlayers* Players = new CPlayers();
CNPCS* NPC = new CNPCS();
CMisc* Misc = new CMisc();

float size = 101;
bool resize = false;

HRESULT __fastcall ResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	if (DirectX->Targetview)
	{
		ImGui_ImplDX11_Shutdown();
		ImGui::DestroyContext();

		DirectX->Targetview->Release();
		DirectX->Targetview = nullptr;
	}

	if (DirectX->Context)
	{
		DirectX->Context->Release();
		DirectX->Context = nullptr;
	}

	if (DirectX->Device)
	{
		DirectX->Device->Release();
		DirectX->Device = nullptr;
	}

	return DirectX->ResizeBufferPtr(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

HRESULT __fastcall Present(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags)
{
	DirectX->initialize(SwapChain);

	if (DirectX->Device != nullptr)
	{
		DirectX->begin();

		DirectX->text({ 0, 0 }, { 255, 255, 255, 100 }, false, DirectX->Standart, u8"NEXNET.CC - The Outlast Trials");

		Menu->paint();

		if (Engine->get_world() == nullptr) {
			DirectX->end();
			return DirectX->PresentPtr(SwapChain, SyncInterval, Flags);
		}

		printf_s("Debug 1\n");


		if (Engine->get_viewport() == nullptr) {
			DirectX->end();
			return DirectX->PresentPtr(SwapChain, SyncInterval, Flags);
		}

		printf_s("Debug 2\n");

		if (Engine->get_controller() == nullptr) {
			DirectX->end();
			return DirectX->PresentPtr(SwapChain, SyncInterval, Flags);
		}

		printf_s("Debug 3\n");

		if (Engine->get_viewport()->GameInstance == nullptr) {
			DirectX->end();
			return DirectX->PresentPtr(SwapChain, SyncInterval, Flags);
		}

		printf_s("Debug 4\n");

		if (Engine->get_localplayer() == nullptr) {
			DirectX->end();
			return DirectX->PresentPtr(SwapChain, SyncInterval, Flags);
		}

		printf_s("Debug 5\n");

		//Misc->nightvision(); 
		//Misc->speedhack();

		for (int i = 0; i < Engine->get_level().Count(); i++)
		{
			auto level = Engine->get_level()[i];

			if (level == nullptr)
				continue;

			for (int j = 0; j < level->AActors.Count(); j++)
			{
				auto actor = level->AActors[j];

				if (actor == nullptr)
					continue;

				if (actor == Engine->get_localplayer())
					continue;

				Players->render(actor);
			Misc->render(actor);
				World->render(actor);
				NPC->render(actor);
			}
		}

		if (Players->Feature["player_crosshair"]) {
			auto width = DirectX->get_width() / 2;
			auto height = DirectX->get_height() / 2;

			DirectX->line({ width - 5, height }, { width + 6, height }, { 255, 255, 0, 255 });
			DirectX->line({ width , height - 5 }, { width , height + 6 }, { 255, 255, 0, 255 });
		}

		DirectX->end();

	}


	return DirectX->PresentPtr(SwapChain, SyncInterval, Flags);
}

void CDirectX::begin() {
	ImGui_ImplWin32_NewFrame();
	ImGui_ImplDX11_NewFrame();
	ImGui::NewFrame();
}

void CDirectX::end()
{
	ImGui::Render();

	if (this->Context && this->Targetview)
		this->Context->OMSetRenderTargets(1, &this->Targetview, NULL);

	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

void CDirectX::imgui()
{
	ImGui::CreateContext();

	auto IO = ImGui::GetIO();
	ImFontConfig Config;

	static const ImWchar tahomaRanges[] = {
		0x0020, 0x00FF, // Basic Latin + Latin Supplement
		0x0100, 0x024F, // Latin Extended-A + Latin Extended-B
		0x0250, 0x02FF, // IPA Extensions + Spacing Modifier Letters
		0x0300, 0x03FF, // Combining Diacritical Marks + Greek/Coptic
		0x0400, 0x044F, // Cyrillic
		0x0600, 0x06FF, // Arabic
		0x0400, 0x052F, // Cyrillic + Cyrillic Supplement
		0x0530, 0x06FF, // Armenian + Hebrew + Arabic
		0x0E00, 0x0E7F, // Thai
		0x1E00, 0x1FFF, // Latin Extended Additional + Greek Extended
		0x2000, 0x20CF, // General Punctuation + Superscripts and Subscripts + Currency Symbols
		0x2100, 0x218F, // Letterlike Symbols + Number Forms
		0,
	};

	Config.GlyphRanges = tahomaRanges;
	Config.RasterizerMultiply = 1.125f;
	Config.OversampleH = 1;
	Config.OversampleV = 1;

	this->Standart = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\consola.ttf", 15, &Config);
	this->ESP = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\consola.ttf", 12, &Config);
	this->Big = IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\consola.ttf", 23, &Config);

	IO.IniFilename = nullptr;

	DXGI_SWAP_CHAIN_DESC desc;
	this->Swapchain->GetDesc(&desc);

	if (!ImGui_ImplWin32_Init(desc.OutputWindow))
		printf_s("ImGui_ImplWin32_Init couldnt be initialized.\n");

	if (!ImGui_ImplDX11_Init(this->Device, this->Context))
		printf_s("ImGui_ImlpDX11_Init couldnt be initialized.\n");
}

void CDirectX::initialize(IDXGISwapChain* ptr)
{
	if (this->Device != nullptr)
		return;

	this->Swapchain = ptr;

	this->Swapchain->GetDevice(__uuidof(ID3D11Device), (void**)&this->Device);

	this->Device->GetImmediateContext(&this->Context);

	this->Swapchain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&this->BackBuffer);

	this->Device->CreateRenderTargetView(this->BackBuffer, NULL, &this->Targetview);

	this->BackBuffer->Release();

	this->DirectX = LoadLibraryA("d3dx11_43.dll");

	char buf[32];
	for (int i = 50; i >= 30; i--)
	{
		sprintf_s(buf, "D3DCompiler_%d.dll", i);
		HMODULE mod = LoadLibraryA(buf);
	}

	if (this->DirectX)
	{
		this->D3DX11CreateShaderResourceViewFromMemory = (D3DX11CreateShaderResourceViewFromMemory_t)GetProcAddress(this->DirectX, "D3DX11CreateShaderResourceViewFromMemory");

		this->load_picture(CursorIcon, sizeof(CursorIcon), ImageIds::CURSOR);
	}

	this->imgui();
}

void CDirectX::hook()
{
	CUtilities* Utilities = new CUtilities();

	auto Handle = reinterpret_cast<HMODULE>(GetModuleHandleA("GameOverlayRenderer64.dll"));

	if (Handle)
	{
		auto present = Utilities->FindPatternModule((PBYTE)PRESENT_PATTERN, PRESENT_MASKING, Handle);

		this->PresentPtr = (CDirectX::PresentType)(present);

		auto resize = Utilities->FindPatternModule((PBYTE)RESIZE_PATTERN, RESIZE_MASKING, Handle);

		this->ResizeBufferPtr = (CDirectX::ResizebufferType)(resize);

		DetourRestoreAfterWith();
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)this->PresentPtr, Present);
		DetourAttach(&(PVOID&)this->ResizeBufferPtr, ResizeBuffers);
		DetourTransactionCommit();
	}
}

void CDirectX::unhook()
{
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(&(PVOID&)this->PresentPtr, Present);
	DetourDetach(&(PVOID&)this->ResizeBufferPtr, ResizeBuffers);
	DetourTransactionCommit();
}

std::string ConvertWideToUtf8(const std::wstring& wstr)
{
	int count = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), wstr.length(), NULL, 0, NULL, NULL);
	std::string str(count, 0);
	WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, &str[0], count, NULL, NULL);
	return str;
}

void CDirectX::load_picture(unsigned char* Bytes, SIZE_T size, ImageIds id)
{
	D3DX11_IMAGE_LOAD_INFO Info;
	ID3DX11ThreadPump* Pump{ nullptr };

	if (this->D3DX11CreateShaderResourceViewFromMemory)
		this->D3DX11CreateShaderResourceViewFromMemory(this->Device, Bytes, size, &Info, Pump, &this->Images[id], 0);
}

void CDirectX::image(CG::FVector2D position, CG::FVector2D size, int id, CG::FLinearColor color)
{
	if (this->D3DX11CreateShaderResourceViewFromMemory)
	{
		auto drawlist = ImGui::GetForegroundDrawList();
		auto Color = IM_COL32(color.R, color.G, color.B, color.A);

		auto x = position.X;
		auto y = position.Y;

		auto width = position.X + size.X;
		auto height = position.Y + size.Y;

		drawlist->AddImage((PVOID)this->Images[id], ImVec2(x, y), ImVec2(width, height), ImVec2(0, 0), ImVec2(1, 1), Color);
	}
}
 
void CDirectX::text(CG::FVector2D position, CG::FLinearColor color, bool centered, ImFont* font, const char* text, ...)
{
	char Message[256];

	va_list arguments;

	va_start(arguments, text);

	vsnprintf(Message, sizeof(Message), text, arguments);

	va_end(arguments);

	ImGui::PushFont(font);

	auto drawlist = ImGui::GetForegroundDrawList();
	auto size = ImGui::CalcTextSize(Message);

	if (centered)
		position.X = position.X - (size.x / 2.0f);

	drawlist->AddText(ImVec2(position.X + 1, position.Y + 1), IM_COL32(0, 0, 0, color.A), Message);
	drawlist->AddText(ImVec2(position.X, position.Y), IM_COL32(color.R, color.G, color.B, color.A), Message);

	ImGui::PopFont();
}

ImVec2 CDirectX::get_text_size(const char* text, ImFont* font)
{
	ImGui::PushFont(font);
	auto value = ImGui::CalcTextSize(text);
	ImGui::PopFont();
	return value;
}

void CDirectX::rect(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddRect(ImVec2(position.X, position.Y), ImVec2(position.X + size.X, position.Y + size.Y), IM_COL32(0, 0, 0, color.A), 0.0f, 0, 3.0f);
	drawlist->AddRect(ImVec2(position.X, position.Y), ImVec2(position.X + size.X, position.Y + size.Y), Color, 0.0f, 0, 1.0f);
}

void CDirectX::filled(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color, float rounded)
{
	auto drawlist = ImGui::GetForegroundDrawList();

	auto x = position.X;
	auto y = position.Y;

	auto width = position.X + size.X;
	auto height = position.Y + size.Y;

	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddRectFilled(ImVec2(x, y), ImVec2(width, height), Color, rounded, 0);
}

void CDirectX::filled_multicolor(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color[4], float rounded)
{
	auto drawlist = ImGui::GetForegroundDrawList();

	auto x = position.X;
	auto y = position.Y;

	auto width = position.X + size.X;
	auto height = position.Y + size.Y;

	ImU32 colors[4];

	for (int i = 0; i < 4; i++)
		colors[i] = IM_COL32(color[i].R, color[i].G, color[i].B, color[i].A);

	drawlist->AddRectFilledMultiColor(ImVec2(x, y), ImVec2(width, height), colors[0], colors[1], colors[2], colors[3]);
}

void CDirectX::line(CG::FVector2D from, CG::FVector2D to, CG::FLinearColor color)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddLine(ImVec2(from.X, from.Y), ImVec2(to.X, to.Y), Color, 1);
}

void CDirectX::circle(CG::FVector2D from, CG::FLinearColor color, float radius, int segments)
{
	auto drawlist = ImGui::GetForegroundDrawList();
	auto Color = IM_COL32(color.R, color.G, color.B, color.A);

	drawlist->AddCircle(ImVec2(from.X, from.Y), radius, Color, segments, 1.0f);
}


float CDirectX::get_width()
{
	D3D11_VIEWPORT vp;
	UINT nvp = 1;
	this->Context->RSGetViewports(&nvp, &vp);
	return vp.Width;
}

float CDirectX::get_height()
{
	D3D11_VIEWPORT vp;
	UINT nvp = 1;
	this->Context->RSGetViewports(&nvp, &vp);
	return vp.Height;
}