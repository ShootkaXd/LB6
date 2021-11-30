#include <windows.h>         // ����������� ���������� � ��������� API 

HINSTANCE hb1;

// ���������� ����������:
HINSTANCE hInst; 	// ��������� ����������
LPCTSTR szWindowClass = "Kravets";
LPCTSTR szTitle = "Program";

// ��������������� �������� ������� 
ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// �������� ��������� 
int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	MSG msg;
	// ����������� ������ ���� 
	MyRegisterClass(hInstance);

	// �������� ���� ����������
	if (!InitInstance (hInstance, nCmdShow)) 
	{
		return FALSE;
	}
	// ���� ��������� ���������
	while (GetMessage(&msg, NULL, 0, 0)) 
	{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
	}
	return msg.wParam;
}

//����������� ������
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex; 
	wcex.cbSize         = sizeof(WNDCLASSEX); 
	wcex.style			= CS_HREDRAW | CS_VREDRAW ;	// ����� ����
	wcex.lpfnWndProc	= (WNDPROC)WndProc; // ������� ���������
	wcex.cbClsExtra		= 0;						
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;		// ��������� ����������
	wcex.hIcon			= LoadIcon(NULL, IDI_APPLICATION);		// ����-������� ������
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);    // ������-����� �������
	wcex.hbrBackground	= (HBRUSH)GetStockObject(WHITE_BRUSH);   // ��-������� ����
	wcex.lpszMenuName	= NULL;		// ����������� ����
	wcex.lpszClassName	= szWindowClass;	// ��� ������
	wcex.hIconSm		= NULL;

	return RegisterClassEx(&wcex); // ����������� ������ ����
}

//�������� ���� ����������
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   HWND hWnd;

   hInst = hInstance; // ��������� ��������� ���������� � ���������� hInst

   hWnd=CreateWindow(szWindowClass, // ��� ������ ����
   szTitle,   // ��� ����������
   WS_OVERLAPPEDWINDOW, // ����� ����
   CW_USEDEFAULT,	// ��������� �� �
   CW_USEDEFAULT, 	// ��������� �� Y
   1000,    // ������ �� �
   800,    // ������ �� Y
   NULL,	// ��������� ������������� ����
   NULL,       // ��������� ���� ����
   hInstance,  // ��������� ����������
   NULL);     // ��������� ��������.

   if (!hWnd) // ���� ���� �� ���������, ������� ���������� FALSE
   {
      return FALSE;
   }
   ShowWindow(hWnd, nCmdShow);		// �������� ����
   UpdateWindow(hWnd);			// �������� ����
   return TRUE;				//�������� ���������� �������
}
 
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	RECT rt;
    static HINSTANCE hInstance;
	static HWND hb1;


	switch (message) 
	{
		case WM_CREATE: // ��������� �������� ��� �������� ����

			hb1 = CreateWindow (TEXT ("edit"), NULL, WS_CHILD | WS_VISIBLE |
				WS_HSCROLL | WS_VSCROLL | WS_BORDER | ES_LEFT | ES_MULTILINE |
                ES_AUTOHSCROLL | ES_AUTOVSCROLL, 0, 0, 0, 0, hWnd, (HMENU)1, 
				hInstance, NULL);
			break;

		case WM_SETFOCUS:
          SetFocus(hb1);
          break;
          
        case WM_SIZE: 
          MoveWindow(hb1,0,0,LOWORD(lParam),HIWORD(lParam),TRUE);
         break;

		case WM_PAINT:  // ������������ ����
			hdc = BeginPaint(hWnd, &ps);	// ������ ����������� �����
			EndPaint(hWnd, &ps);	// ��������� ����������� �����
			break;

		case WM_DESTROY: // ���������� ������
			 PostQuitMessage(0);
			 break;
		default: 
			return DefWindowProc(hWnd, message, wParam, lParam); 
   }
return 0;
}
