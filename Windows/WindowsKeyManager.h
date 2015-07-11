#pragma once

#include "stdafx.h"
#include "..\Core\IKeyManager.h"
#include "GamePad.h"

struct KeyDefinition {
	char* name;
	uint32_t keyCode;
	wchar_t* description;
};

const KeyDefinition _keyDefinitions[] = {
		//{ "VK_LBUTTON", 0x01, L"Left mouse button" },
		//{ "VK_RBUTTON", 0x02, L"Right mouse button" },
		{ "VK_CANCEL", 0x03, L"Control-break processing" },
		//{ "VK_MBUTTON", 0x04, L"Middle mouse button (three-button mouse)" },
		//{ "VK_XBUTTON1", 0x05, L"X1 mouse button" },
		//{ "VK_XBUTTON2", 0x06, L"X2 mouse button" },
		{ "-", 0x07, L"Undefined" },
		{ "VK_BACK", 0x08, L"Backspace" },
		{ "VK_TAB", 0x09, L"Tab" },
		//{ "-", 0x0A - 0B, L"Reserved" },
		{ "VK_CLEAR", 0x0C, L"Clear" },
		{ "VK_RETURN", 0x0D, L"Enter" },
		//{ "-", 0x0E - 0F, L"Undefined" },
		{ "VK_SHIFT", 0x10, L"Shift" },
		{ "VK_CONTROL", 0x11, L"Ctrl" },
		{ "VK_MENU", 0x12, L"Alt" },
		{ "VK_PAUSE", 0x13, L"Pause" },
		{ "VK_CAPITAL", 0x14, L"Caps Lock" },
		{ "VK_KANA", 0x15, L"IME Kana mode" },
		{ "VK_HANGUEL", 0x15, L"IME Hanguel mode" },
		{ "VK_HANGUL", 0x15, L"IME Hangul mode" },
		//{ "-", 0x16, L"Undefined" },
		{ "VK_JUNJA", 0x17, L"IME Junja mode" },
		{ "VK_FINAL", 0x18, L"IME final mode" },
		{ "VK_HANJA", 0x19, L"IME Hanja mode" },
		{ "VK_KANJI", 0x19, L"IME Kanji mode" },
		//{ "-", 0x1A, L"Undefined" },
		{ "VK_ESCAPE", 0x1B, L"Esc" },
		{ "VK_CONVERT", 0x1C, L"IME convert" },
		{ "VK_NONCONVERT", 0x1D, L"IME nonconvert" },
		{ "VK_ACCEPT", 0x1E, L"IME accept" },
		{ "VK_MODECHANGE", 0x1F, L"IME mode change request" },
		{ "VK_SPACE", 0x20, L"Spacebar" },
		{ "VK_PRIOR", 0x21, L"Page Up" },
		{ "VK_NEXT", 0x22, L"Page Down" },
		{ "VK_END", 0x23, L"End" },
		{ "VK_HOME", 0x24, L"Home" },
		{ "VK_LEFT", 0x25, L"Left Arrow" },
		{ "VK_UP", 0x26, L"Up Arrow" },
		{ "VK_RIGHT", 0x27, L"Right Arrow" },
		{ "VK_DOWN", 0x28, L"Down Arrow" },
		{ "VK_SELECT", 0x29, L"Select" },
		{ "VK_PRINT", 0x2A, L"Print" },
		{ "VK_EXECUTE", 0x2B, L"Execute" },
		{ "VK_SNAPSHOT", 0x2C, L"Print Screen" },
		{ "VK_INSERT", 0x2D, L"Ins" },
		{ "VK_DELETE", 0x2E, L"Del" },
		{ "VK_HELP", 0x2F, L"Help" },
		{ "0", 0x30, L"0" },
		{ "1", 0x31, L"1" },
		{ "2", 0x32, L"2" },
		{ "3", 0x33, L"3" },
		{ "4", 0x34, L"4" },
		{ "5", 0x35, L"5" },
		{ "6", 0x36, L"6" },
		{ "7", 0x37, L"7" },
		{ "8", 0x38, L"8" },
		{ "9", 0x39, L"9" },
		//{ "undefined", 0x3A - 40, L"undefined" },
		{ "A", 0x41, L"A" },
		{ "B", 0x42, L"B" },
		{ "C", 0x43, L"C" },
		{ "D", 0x44, L"D" },
		{ "E", 0x45, L"E" },
		{ "F", 0x46, L"F" },
		{ "G", 0x47, L"G" },
		{ "H", 0x48, L"H" },
		{ "I", 0x49, L"I" },
		{ "J", 0x4A, L"J" },
		{ "K", 0x4B, L"K" },
		{ "L", 0x4C, L"L" },
		{ "M", 0x4D, L"M" },
		{ "N", 0x4E, L"N" },
		{ "O", 0x4F, L"O" },
		{ "P", 0x50, L"P" },
		{ "Q", 0x51, L"Q" },
		{ "R", 0x52, L"R" },
		{ "S", 0x53, L"S" },
		{ "T", 0x54, L"T" },
		{ "U", 0x55, L"U" },
		{ "V", 0x56, L"V" },
		{ "W", 0x57, L"W" },
		{ "X", 0x58, L"X" },
		{ "Y", 0x59, L"Y" },
		{ "Z", 0x5A, L"Z" },
		{ "VK_LWIN", 0x5B, L"Left Windows" },
		{ "VK_RWIN", 0x5C, L"Right Windows" },
		{ "VK_APPS", 0x5D, L"Applications Key" },
		//{ "-", 0x5E, L"Reserved" },
		{ "VK_SLEEP", 0x5F, L"Computer Sleep" },
		{ "VK_NUMPAD0", 0x60, L"Keypad 0" },
		{ "VK_NUMPAD1", 0x61, L"Keypad 1" },
		{ "VK_NUMPAD2", 0x62, L"Keypad 2" },
		{ "VK_NUMPAD3", 0x63, L"Keypad 3" },
		{ "VK_NUMPAD4", 0x64, L"Keypad 4" },
		{ "VK_NUMPAD5", 0x65, L"Keypad 5" },
		{ "VK_NUMPAD6", 0x66, L"Keypad 6" },
		{ "VK_NUMPAD7", 0x67, L"Keypad 7" },
		{ "VK_NUMPAD8", 0x68, L"Keypad 8" },
		{ "VK_NUMPAD9", 0x69, L"Keypad 9" },
		{ "VK_MULTIPLY", 0x6A, L"Multiply" },
		{ "VK_ADD", 0x6B, L"Add" },
		{ "VK_SEPARATOR", 0x6C, L"Separator" },
		{ "VK_SUBTRACT", 0x6D, L"Subtract" },
		{ "VK_DECIMAL", 0x6E, L"Decimal" },
		{ "VK_DIVIDE", 0x6F, L"Divide" },
		{ "VK_F1", 0x70, L"F1" },
		{ "VK_F2", 0x71, L"F2" },
		{ "VK_F3", 0x72, L"F3" },
		{ "VK_F4", 0x73, L"F4" },
		{ "VK_F5", 0x74, L"F5" },
		{ "VK_F6", 0x75, L"F6" },
		{ "VK_F7", 0x76, L"F7" },
		{ "VK_F8", 0x77, L"F8" },
		{ "VK_F9", 0x78, L"F9" },
		{ "VK_F10", 0x79, L"F10" },
		{ "VK_F11", 0x7A, L"F11" },
		{ "VK_F12", 0x7B, L"F12" },
		{ "VK_F13", 0x7C, L"F13" },
		{ "VK_F14", 0x7D, L"F14" },
		{ "VK_F15", 0x7E, L"F15" },
		{ "VK_F16", 0x7F, L"F16" },
		{ "VK_F17", 0x80, L"F17" },
		{ "VK_F18", 0x81, L"F18" },
		{ "VK_F19", 0x82, L"F19" },
		{ "VK_F20", 0x83, L"F20" },
		{ "VK_F21", 0x84, L"F21" },
		{ "VK_F22", 0x85, L"F22" },
		{ "VK_F23", 0x86, L"F23" },
		{ "VK_F24", 0x87, L"F24" },
		//{ "-", 0x88 - 8F, L"Unassigned" },
		{ "VK_NUMLOCK", 0x90, L"Num Lock" },
		{ "VK_SCROLL", 0x91, L"Scroll Lock" },
		//{"-", 0x92-96,"OEM specific"},
		//{ "-", 0x97 - 9F, L"Unassigned" },
		{ "VK_LSHIFT", 0xA0, L"Left Shift" },
		{ "VK_RSHIFT", 0xA1, L"Right Shift" },
		{ "VK_LCONTROL", 0xA2, L"Left Control" },
		{ "VK_RCONTROL", 0xA3, L"Right Control" },
		{ "VK_LMENU", 0xA4, L"Left Menu" },
		{ "VK_RMENU", 0xA5, L"Right Menu" },
		{ "VK_BROWSER_BACK", 0xA6, L"Browser Back" },
		{ "VK_BROWSER_FORWARD", 0xA7, L"Browser Forward" },
		{ "VK_BROWSER_REFRESH", 0xA8, L"Browser Refresh" },
		{ "VK_BROWSER_STOP", 0xA9, L"Browser Stop" },
		{ "VK_BROWSER_SEARCH", 0xAA, L"Browser Search" },
		{ "VK_BROWSER_FAVORITES", 0xAB, L"Browser Favorites" },
		{ "VK_BROWSER_HOME", 0xAC, L"Browser Start and Home" },
		{ "VK_VOLUME_MUTE", 0xAD, L"Volume Mute" },
		{ "VK_VOLUME_DOWN", 0xAE, L"Volume Down" },
		{ "VK_VOLUME_UP", 0xAF, L"Volume Up" },
		{ "VK_MEDIA_NEXT_TRACK", 0xB0, L"Next Track" },
		{ "VK_MEDIA_PREV_TRACK", 0xB1, L"Previous Track" },
		{ "VK_MEDIA_STOP", 0xB2, L"Stop Media" },
		{ "VK_MEDIA_PLAY_PAUSE", 0xB3, L"Play/Pause Media" },
		{ "VK_LAUNCH_MAIL", 0xB4, L"Start Mail" },
		{ "VK_LAUNCH_MEDIA_SELECT", 0xB5, L"Select Media" },
		{ "VK_LAUNCH_APP1", 0xB6, L"Start Application 1" },
		{ "VK_LAUNCH_APP2", 0xB7, L"Start Application 2" },
		//{ "-", 0xB8 - B9, L"Reserved" },
		{ "VK_OEM_1", 0xBA, L"Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \';:\' key VK_OEM_PLUS" },
		{ "VK_OEM_PLUS", 0xBB, L"+" },
		{ "VK_OEM_COMMA", 0xBC, L"," },
		{ "VK_OEM_MINUS", 0xBD, L"-" },
		{ "VK_OEM_PERIOD", 0xBE, L"." },
		{ "VK_OEM_2", 0xBF, L"/" },
		{ "VK_OEM_3", 0xC0, L"`" },
		//{ "-", 0xC1 - D7, L"Reserved" },
		//{ "-", 0xD8 - DA, L"Unassigned" },
		{ "VK_OEM_4", 0xDB, L"[" },
		{ "VK_OEM_5", 0xDC, L"\\" },
		{ "VK_OEM_6", 0xDD, L"]" },
		{ "VK_OEM_7", 0xDE, L"'" },
		{ "VK_OEM_8", 0xDF, L"Used for miscellaneous characters; it can vary by keyboard." },
		//{ "-", 0xE0, L"Reserved" },
		//{ "-", 0xE1, L"OEM specific" },
		{ "VK_OEM_102", 0xE2, L"Either the angle bracket key or the backslash key on the RT 102-key keyboard" },
		//{ "-", 0xE3 - E4, L"OEM specific" },
		{ "VK_PROCESSKEY", 0xE5, L"IME PROCESS" },
		//{ "-", 0xE6, L"OEM specific" },
		{ "VK_PACKET", 0xE7, L"Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP" },
		//{ "-", 0xE8, L"Unassigned" },
		//  {"-",0xE6,"OEM specific"},
		{ "VK_PACKET", 0xE7, L"Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP" },
		//  {"-",0xE8,"Unassigned"},
		//{ "-", 0xE9 - F5, L"OEM specific" },
		{ "VK_ATTN", 0xF6, L"Attn" },
		{ "VK_CRSEL", 0xF7, L"CrSel" },
		{ "VK_EXSEL", 0xF8, L"ExSel" },
		{ "VK_EREOF", 0xF9, L"Erase EOF" },
		{ "VK_PLAY", 0xFA, L"Play" },
		{ "VK_ZOOM", 0xFB, L"Zoom" },
		{ "VK_NONAME", 0xFC, L"Reserved" },
		{ "VK_PA1", 0xFD, L"PA1" },
		{ "VK_OEM_CLEAR", 0xFE, L"Clear" },

		{ "", 0xFFFF + 0x01, L"Pad1 Up" },
		{ "", 0xFFFF + 0x02, L"Pad1 Down" },
		{ "", 0xFFFF + 0x03, L"Pad1 Left" },
		{ "", 0xFFFF + 0x04, L"Pad1 Right" },
		{ "", 0xFFFF + 0x05, L"Pad1 Start" },
		{ "", 0xFFFF + 0x06, L"Pad1 Back" },
		{ "", 0xFFFF + 0x07, L"Pad1 Left Thumb" },
		{ "", 0xFFFF + 0x08, L"Pad1 Right Thumb" },
		{ "", 0xFFFF + 0x09, L"Pad1 Left Bumper" },
		{ "", 0xFFFF + 0x0A, L"Pad1 Right Bumper" },
		{ "", 0xFFFF + 0x0D, L"Pad1 A" },
		{ "", 0xFFFF + 0x0E, L"Pad1 B" },
		{ "", 0xFFFF + 0x0F, L"Pad1 X" },
		{ "", 0xFFFF + 0x10, L"Pad1 Y" }
};

class WindowsKeyManager : public IKeyManager
{
	private:
		GamePad _gamePad;
		HWND _hWnd;

		bool WindowHasFocus();

	public:
		WindowsKeyManager(HWND hWnd);
		~WindowsKeyManager();

		void RefreshState();
		bool IsKeyPressed(uint32_t key);
		uint32_t GetPressedKey();
		wchar_t* GetKeyName(uint32_t key);
		uint32_t GetKeyCode(wchar_t* keyName);
};
