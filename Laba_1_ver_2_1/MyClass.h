#ifndef __MYCLASS_H
#define __MYCLASS_H  

#include <iostream>
#include <math.h>      // fabsl()
#include <float.h>     // DBL_MAX
#include <conio.h>     // _getch()
using namespace std;

// !!!!! Константы ЗДЕСЬ должны быть описаны как static
static char* Error_Res = "Переполнение при вычислении результата !!!!!!!!!";
static char* Error_Zero = "Возможно деление на НОЛЬ !!!!!!!!!";
static char* CONTINUE="\n\n    Нажмите любую клавишу - ПРОДОЛЖЕНИЕ    или ESC - ВЫХОД .....\n";
class TCalc
{ private:    
     // описание статических данных-членов класса:
     // входные
	int *d;
	float *a,*c;
	//результат
	double *y;
	void Calc();
	public:
	// Конструктор
	TCalc(float av, float cv, int dv);
	//Деструктор
	~TCalc(); // уничтожение данных-членов класса
	int show ();
};     // TCalc
#endif  /* __MYCLASS_H */