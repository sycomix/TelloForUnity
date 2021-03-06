// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include <Windows.h>
#include <tchar.h>

#include "Unity/IUnityInterface.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		OutputDebugString(_T("DLL_PROCESS_ATTACH"));
		break;
    case DLL_THREAD_ATTACH:
		OutputDebugString(_T("DLL_THREAD_ATTACH"));
		break;
    case DLL_THREAD_DETACH:
		OutputDebugString(_T("DLL_THREAD_DETACH"));
		break;
    case DLL_PROCESS_DETACH:
		OutputDebugString(_T("DLL_PROCESS_DETACH"));
		break;
    }
    return TRUE;
}

