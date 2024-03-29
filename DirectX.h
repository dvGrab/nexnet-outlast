#pragma once

#include "Main.h"

#include <dxgi.h>
#include <d3d11.h>

#include "Includes/d3dx11tex.h"
#include "Includes/d3dx11core.h"

#include "imgui.h"
#include "backends/imgui_impl_dx11.h"
#include "backends/imgui_impl_win32.h"

HRESULT __fastcall Present(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags);

typedef HRESULT(__stdcall* D3DX11CreateShaderResourceViewFromMemory_t)(
	ID3D11Device* pDevice, LPCVOID pSrcData, SIZE_T SrcDataSize, D3DX11_IMAGE_LOAD_INFO* pLoadInfo, ID3DX11ThreadPump* pPump, ID3D11ShaderResourceView** ppShaderResourceView, HRESULT* pHResult);

enum ImageIds {
	CURSOR = 0,
	FEMBOY = 1,
	PIN = 2
};

class CDirectX {
private:
	HMODULE DirectX = NULL;
	ID3D11ShaderResourceView* Images[3];
	D3DX11CreateShaderResourceViewFromMemory_t D3DX11CreateShaderResourceViewFromMemory = nullptr;

public:
	IDXGISwapChain* Swapchain = nullptr;
	ID3D11Device* Device = nullptr;
	ID3D11DeviceContext* Context = nullptr;
	ID3D11RenderTargetView* Targetview = nullptr;
	ID3D11Texture2D* BackBuffer = nullptr;

	typedef HRESULT(__fastcall*PresentType)(IDXGISwapChain*pSwapChain, UINT SyncInterval, UINT Flags);
	PresentType PresentPtr = nullptr;

	typedef HRESULT(__fastcall* ResizebufferType)(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
	ResizebufferType ResizeBufferPtr = nullptr;

	ImFont* Standart = nullptr;
	ImFont* Big = nullptr;
	ImFont* ESP = nullptr;

	void hook();
	void unhook();

	void initialize(IDXGISwapChain* ptr);
	void imgui();
	void begin();
	void end();

	void load_picture(unsigned char* Bytes, SIZE_T size, ImageIds id);
	void image(CG::FVector2D position, CG::FVector2D size, int id, CG::FLinearColor Color);
	void text(CG::FVector2D position, CG::FLinearColor color, bool centered, ImFont* font, const char* text, ...);
	ImVec2 get_text_size(const char* text, ImFont* font);
	void rect(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color);
	void filled(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color, float rounded);
	void filled_multicolor(CG::FVector2D position, CG::FVector2D size, CG::FLinearColor color[4], float rounded);
	void line(CG::FVector2D from, CG::FVector2D to, CG::FLinearColor color);
	void circle(CG::FVector2D from, CG::FLinearColor color, float radius, int segments);
	float get_width();
	float get_height();
};
extern CDirectX* DirectX;