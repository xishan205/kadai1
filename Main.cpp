#include<Dxlib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	DxLib::ChangeWindowMode(true);
	SetWindowText(L"2016199_êºéRàÍòY");
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	
	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();
		ScreenFlip();
	}

	DxLib_End();
	return 0;
}