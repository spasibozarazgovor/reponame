#ifndef __MYCLASS_H
#define __MYCLASS_H  

#include <iostream>
#include <math.h>      // fabsl()
#include <float.h>     // DBL_MAX
#include <conio.h>     // _getch()
using namespace std;

// !!!!! ��������� ����� ������ ���� ������� ��� static
static char* Error_Res = "������������ ��� ���������� ���������� !!!!!!!!!";
static char* Error_Zero = "�������� ������� �� ���� !!!!!!!!!";
static char* CONTINUE="\n\n    ������� ����� ������� - �����������    ��� ESC - ����� .....\n";
class TCalc
{ private:    
     // �������� ����������� ������-������ ������:
     // �������
	int *d;
	float *a,*c;
	//���������
	double *y;
	void Calc();
	public:
	// �����������
	TCalc(float av, float cv, int dv);
	//����������
	~TCalc(); // ����������� ������-������ ������
	int show ();
};     // TCalc
#endif  /* __MYCLASS_H */