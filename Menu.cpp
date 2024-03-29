#include "Menu.h"


CWindow* CGUI::add(std::string title, std::string description, Vector2 position, Vector2 size)
{
	CWindow* Window = new CWindow();

	Window->set_position(position); 
	Window->set_size(size);
	Window->set_description(description);
	Window->set_title(title);
	Window->set_visibility(true);

	this->Windows.push_back(Window);
	 
	return Window;   
} 
 
CWindow* CGUI::get_byname(std::string title)  
{ 
	CWindow* returnValue = nullptr;
	  
	for (int i = 0; i < this->Windows.size(); i++)  
		if (this->Windows[i]->get_title().find(title) != std::string::npos) 
			returnValue = this->Windows[i];

	return returnValue;
}
 
LRESULT WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if (msg == WM_KEYDOWN) 
		Menu->keyhandler(msg, wParam, true); 

	if (msg == WM_KEYUP)
		Menu->keyhandler(msg, wParam, false);

	if (Menu->event(hWnd, msg, wParam, lParam))
		return false;  

	return CallWindowProcA(Menu->WindowProcedure, hWnd, msg, wParam, lParam); 
}

void CGUI::keyhandler(UINT msg, WPARAM wParam, bool down) {  
	if (wParam == VK_INSERT && down == true) { 
		this->focus = !this->focus;  
	}  
}  

bool CGUI::event(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) 
{
	return focus;
}

void CGUI::restore()
{
	auto window = FindWindow(0, L"The Outlast Trials  ");

	if (window) {
		printf_s("Window hooks have been removed.\n"); 

		SetWindowLongPtrA(window, GWLP_WNDPROC, LONG_PTR(this->OriginalProcedure));
	}  
} 

void CGUI::hook()
{
	auto window = FindWindow(0, L"The Outlast Trials  ");
	 
	if (window) {
		printf_s("Placing window hooks. Found Outlast.\n"); 

		this->OriginalProcedure = WNDPROC(GetWindowLongPtrA(window, GWLP_WNDPROC));
		this->WindowProcedure = WNDPROC(SetWindowLongPtrA(window, GWLP_WNDPROC, LONG_PTR(WndProc)));
	} 
}

void CGUI::paint()  
{  
	if (this->get_focus()) 
	{
		for (int i = 0; i < this->Windows.size(); i++) 
		{
			this->Windows[i]->paint();

			if (i == this->Windows.size() - 1)
				this->Windows[i]->Cursor->paint();
		}
	}  
	    
}     
 
bool CGUI::get_focus()  
{ 
	return this->focus; 
} 