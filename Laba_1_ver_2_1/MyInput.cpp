#include "MyInput.h"
// �������� ��������� ��� ������������ ������ ( float � �� ���������, double)
int CheckFlt(long double t, const double MIN, const double MAX)
{
 if (fabsl(t)>MAX)
  {
   cout << ErrorLimits;
   cout << Explanation
        << MIN << To << MAX << endl;
   return 1;
   }
 return 0;
}