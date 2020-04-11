#include <windows.h>
#include <stdio.h>

int g_iValue = 0;

DWORD WINAPI MyThreadFunction(LPVOID lpParam)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		Sleep(1000);
		printf("Thread! %d %d\n", i, --g_iValue);
		
	}
	return 0;
}

void main(void)
{
	DWORD dwThreadID;
	HANDLE hThread;
	int i;

	hThread = CreateThread
	(
		NULL, 0,
		MyThreadFunction,
		NULL, 0, &dwThreadID
	);

	for (i = 0; i < 5; i++)
	{
		Sleep(500);
		g_iValue += 2;
		printf("Main! %d %d\n", i, g_iValue);
	}

	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
}
