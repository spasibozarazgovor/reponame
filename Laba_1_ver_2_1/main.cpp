#include <iomanip>     // ����������� setprecision(16)
#include <windows.h>   // SetConsoleOutputCP(1251);
 
// ����������� ����� �������
#include "MyClass.h"
#include "MyInput.h"
using namespace std;
int main()
{
	int ESC=27, tt, t=0;
	int d;
	float a,c;
	cout << setprecision(16);
    SetConsoleOutputCP(1251); // ����������� ���������
#ifdef _DEBUG
	 cout << " ===================== �������� ����� Debug =====================" << endl;
#endif
    do    // ���� (����� Ctrl-C, ESC)
    {
     cout << "\n--------- test #" << ++t << " -----------" << endl;
     cout << "  ��������� �������:" << endl;
     cout << "        y = (tg(c)-d*23)/(2*a-1)" << endl;
	 inputData(a, c, d);
	 TCalc Object(a, c, d);
     tt=Object.show();
    } while (tt!=ESC);// ����� �����
#ifdef _DEBUG   
   cout << "\n\n    ������� ����� ������� - ����� ....." << endl;
   _getch();
#endif
   return 0;
}