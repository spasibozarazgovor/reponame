#ifndef __MYINPUT_H
#define __MYINPUT_H

#include <fstream>
#include <iostream>
#include <math.h>

#include <float.h> // ��������� DBL_MAX, DBL_MIN, FLT_MAX, FLT_MIN

#include <typeinfo.h> // ������������ ������������� ����� �������� (RTTI)
using namespace std;

// !!!!! ��������� ����� ������ ���� ������� ��� static
static char* ErrorLimits = "!!!!!!!! �������� ���������� �������� !!!!!!!!\n";
static char* Explanation = "�������� ������ ���� �� ";
static char* To =" �� ";

int CheckFlt(long double t, const double MIN=-FLT_MIN, const double MAX=FLT_MAX);

// ������� "������������" ����� � ���������� k � ������������ INVITE
template <class T>
int input (T& k, const char INVITE)
 {  // �������� ������ �������� ������ � �������
    ifstream my_inp ("CON");
    long double t;
    cout << "������� �������� ���������� " << INVITE
         << " ���� " << typeid(k).name() << " ===> ";
    if (typeid(T)==typeid (float))
        my_inp >> t;
    else 
        my_inp >> k;  // ���� ������������� ���������� � ���� double       

    switch (my_inp.rdstate())   // ������ ��������� ����������
    { case ios::goodbit:    // � ��������� ��� � �������!
      case ios::eofbit :

        // �������� ���������� ����������
        // ----- ������������ �����
        if (typeid(T)==typeid (float))
          if(CheckFlt(t)) return 1;
        if (typeid(T)==typeid (float)) k=(T)t;
        return 0;    // ��� � �������!
      case ios::failbit:             // ���� ������ ����� ��������
      case ios::badbit :
        cout << "\n!!!!! ������ ����� �������� !!!!!";
        cout << "\n��������� ��� ����� ....." << endl;
        return 1;
      };
    cout << "\n ���-�� ��� ��������� ��������� �� �����..." << endl;
    return 1;
 }

template <class Ta, class Tc, class Td>
void inputData(Ta& a, Tc& c, Td& d)
{
	// ------------- ���� �������� ������ ----------------------
     while (input(a, 'a'));
     cout <<"������� �������� a=           " << a << endl;
     while (input(c, 'c'));
     cout <<"������� �������� c=           " << c << endl;
	 while (input(d, 'd'));
     cout <<"������� �������� d=           " << d << endl;
}
#endif  /* __MYINPUT_H */