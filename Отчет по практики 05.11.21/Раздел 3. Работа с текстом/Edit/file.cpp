#include <windows.h>         // подключение библиотеки с функциями API 

HINSTANCE hb1;

// Глобальные переменные:
HINSTANCE hInst; 	// Указатель приложения
LPCTSTR szWindowClass = "Kravets";
LPCTSTR szTitle = "Program";

// Предварительное описание функций 
ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Основная программа 
int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	MSG msg;
	// Регистрация класса окна 
	MyRegisterClass(hInstance);

	// Создание окна приложения
	if (!InitInstance (hInstance, nCmdShow)) 
	{
		return FALSE;
	}
	// Цикл обработки сообщений
	while (GetMessage(&msg, NULL, 0, 0)) 
	{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
	}
	return msg.wParam;
}

//Регистрация класса
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex; 
	wcex.cbSize         = sizeof(WNDCLASSEX); 
	wcex.style			= CS_HREDRAW | CS_VREDRAW ;	// стиль окна
	wcex.lpfnWndProc	= (WNDPROC)WndProc; // оконная процедура
	wcex.cbClsExtra		= 0;						
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;		// указатель приложения
	wcex.hIcon			= LoadIcon(NULL, IDI_APPLICATION);		// опре-деление иконки
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);    // опреде-ление курсора
	wcex.hbrBackground	= (HBRUSH)GetStockObject(WHITE_BRUSH);   // ус-тановка фона
	wcex.lpszMenuName	= NULL;		// определение меню
	wcex.lpszClassName	= szWindowClass;	// имя класса
	wcex.hIconSm		= NULL;

	return RegisterClassEx(&wcex); // регистрация класса окна
}

//Создание окна приложения
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   HWND hWnd;

   hInst = hInstance; // сохраняет указатель приложения в переменной hInst

   hWnd=CreateWindow(szWindowClass, // имя класса окна
   szTitle,   // имя приложения
   WS_OVERLAPPEDWINDOW, // стиль окна
   CW_USEDEFAULT,	// положение по Х
   CW_USEDEFAULT, 	// положение по Y
   1000,    // размер по Х
   800,    // размер по Y
   NULL,	// описатель родительского окна
   NULL,       // описатель меню окна
   hInstance,  // указатель приложения
   NULL);     // параметры создания.

   if (!hWnd) // Если окно не создалось, функция возвращает FALSE
   {
      return FALSE;
   }
   ShowWindow(hWnd, nCmdShow);		// Показать окно
   UpdateWindow(hWnd);			// Обновить окно
   return TRUE;				//Успешное завершение функции
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
		case WM_CREATE: // Сообщение приходит при создании окна

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

		case WM_PAINT:  // Перерисовать окно
			hdc = BeginPaint(hWnd, &ps);	// Начать графический вывод
			EndPaint(hWnd, &ps);	// Закончить графический вывод
			break;

		case WM_DESTROY: // Завершение работы
			 PostQuitMessage(0);
			 break;
		default: 
			return DefWindowProc(hWnd, message, wParam, lParam); 
   }
return 0;
}
