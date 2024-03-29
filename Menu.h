#pragma once

#include "Main.h"

#include <WinUser.h>

#pragma comment(lib, "User32.lib")

#include "Window.h"
#include "Cursor.h"

LRESULT WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class CGUI {
private:
	bool leftMousePressed = false;
	bool leftMouseReleased = false;

	std::vector<CWindow*> Windows;

	bool focus;


public:
	bool enter;
	bool old_enter;

	WNDPROC WindowProcedure;
	WNDPROC OriginalProcedure;

	void keyhandler(UINT msg, WPARAM wParam, bool down);

	bool event(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	void restore();
	void hook();
	void paint();

	void paint_description();

	CWindow* add(std::string title, std::string description, Vector2 position, Vector2 size);
	CWindow* get_byname(std::string title);

	bool get_focus();
};

extern CGUI* Menu;
