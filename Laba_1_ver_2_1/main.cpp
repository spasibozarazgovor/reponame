#include <iomanip>     // манипулятор setprecision(16)
#include <windows.h>   // SetConsoleOutputCP(1251);
 
// подключение своих модулей
#include "MyClass.h"
#include "MyInput.h"
using namespace std;
int main()
{
	int ESC=27, tt, t=0;
	int d;
	float a,c;
	cout << setprecision(16);
    SetConsoleOutputCP(1251); // Подключение кириллицы
#ifdef _DEBUG
	 cout << " ===================== Работает режим Debug =====================" << endl;
#endif
    do    // цикл (выход Ctrl-C, ESC)
    {
     cout << "\n--------- test #" << ++t << " -----------" << endl;
     cout << "  Вычисляем вариант:" << endl;
     cout << "        y = (tg(c)-d*23)/(2*a-1)" << endl;
	 inputData(a, c, d);
	 TCalc Object(a, c, d);
     tt=Object.show();
    } while (tt!=ESC);// конец цикла
#ifdef _DEBUG   
   cout << "\n\n    Нажмите любую клавишу - ВЫХОД ....." << endl;
   _getch();
#endif
   return 0;
}