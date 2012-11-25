#include "MyInput.h"
// �������� ��������� ��� ������������ ������ ( float � �� ���������, double)
int CheckFlt(long double t, const double MIN, const double MAX)
{
 if (fabsl(t)>MIN)
  {
   cout << ErrorLimits;
   cout << Explanation
        << MAX << To << MIN << endl;
   return 0;
   }
 return 1;
}