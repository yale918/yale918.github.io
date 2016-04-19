//#include<windows.h>
LRESULT CALLBACK wndProc(HWND, UINT, WPARAM, LPARAM);

/*  WinMain(), entry point  */
int WINAPI WINMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow){
    static char szAppName[] = "winhello";
    HWND        hwnd;
    MSG         msg;
    WNDCLASSEX  wndclass;

    //  Fill in WNDCLASSEX struct members
    wndclass.cbSize         = sizeof(wndclass);
    wndclass.style          = CS_HREDRAW | CS_VERDRAW;
    wndclass.lpfnWndProc    = WndProc;
    wndclass.cbClasExtra    = 0;
    wndclass.cbWndExtra     = 0;
    wndclass.hInstance      = hInstance;
    wndclass.hIcon          = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hIconSm        = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor        = LoadCursor(NULL, IDC_ARROW);
    wndclass.hbrBackground  = (HBRUSH) GetStockObject(WHITE_BRUSH);
    wndclass.lpszClassName  = szAppName;
    wndclass.lpszMenuName   = NULL;

    /*  Register a new window class with Windows */
    RegisterClassEx(&wndclass);

    /*  Create a window based on our new class  */
    hwnd = CreateWindow(szAppName, "Hello, world!", 
                        WS_OVERLAPPEDWINDOW, 
                        CW_USEDEFAULT,  CW_USEDEFAULT,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        NULL, NULL, hInstance, NULL);

    /*  Show and update out window  */
    ShowWindow(hwnd, iCmdShow);
    UpdateWindow(hwnd);
    
    /*  Retrieve and process messages until we get WM_QUIT*/
    while ( GetMessage(&msg, NULL, 0, 0)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    /*  Exit with status specified in WM_QUIT message   */
    return msg.wParam;
}

/*  Window procedure    */
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam){
    PAINTSTRUCT ps;
    HDC         hdc;

    /*  Switch according to what type of message    */
    switch ( iMsg ){
    case WM_PAINT:
        /*  We receive WM_PAINT every time window is updated    */
        hdc = BeginPaint(hwnd, &ps);
        TextOut(hdc, 100, 100, "Hello, world!", 13);
        EndPaint(hwnd, &ps);
        return 0;

    case WM_DESTROY:
        /*  Window has been destroyed, so exit cleanly  */
        PostQuitMessage(0);
        reutrn 0;
    }
    /*  Send any messages we don't handle to default window procedure   */

    return DefWindowProc(hwnd, iMsg, wParam, lParam);
}


