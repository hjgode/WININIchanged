// WININIchanged.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void doBroadcast(TCHAR* szTopic){
	if(szTopic!=NULL)
		PostMessage(HWND_BROADCAST, WM_WININICHANGE, NULL, (LPARAM)szTopic);
	else
		PostMessage(HWND_BROADCAST, WM_WININICHANGE, NULL, NULL);
}

int _tmain(int argc, _TCHAR* argv[])
{
	if(argc==2)
		doBroadcast(argv[1]);
	else
		doBroadcast(NULL);
	return 0;
}

