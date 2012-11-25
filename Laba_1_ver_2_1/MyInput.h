#ifndef __MYINPUT_H
#define __MYINPUT_H

#include <fstream>
#include <iostream>
#include <math.h>

#include <float.h> // Константы DBL_MAX, DBL_MIN, FLT_MAX, FLT_MIN

#include <typeinfo.h> // Динамическая идентификация типов объектов (RTTI)
using namespace std;

// !!!!! Константы ЗДЕСЬ должны быть описаны как static
static char* ErrorLimits = "!!!!!!!! ПРЕВЫШЕН допустимый диапазон !!!!!!!!\n";
static char* Explanation = "Значение должно быть от ";
static char* To =" до ";

int CheckFlt(long double t, const double MIN=-FLT_MIN, const double MAX=FLT_MAX);

// Функция "всепогодного" ввода в переменную k с приглашением INVITE
template <class T>
int input (T& k, const char INVITE)
 {  // Открытие своего входного потока с консоли
    ifstream my_inp ("CON");
    long double t;
    cout << "Введите значение переменной " << INVITE
         << " типа " << typeid(k).name() << " ===> ";
    if (typeid(T)==typeid (float))
        my_inp >> t;
    else 
        my_inp >> k;  // ввод целочисленных переменных и типа double       

    switch (my_inp.rdstate())   // Анализ введенной информации
    { case ios::goodbit:    // с символами все в порядке!
      case ios::eofbit :

        // контроль допустимых диапазонов
        // ----- ВЕЩЕСТВЕННЫЕ числа
        if (typeid(T)==typeid (float))
          if(CheckFlt(t)) return 1;
        if (typeid(T)==typeid (float)) k=(T)t;
        return 0;    // Все в порядке!
      case ios::failbit:             // Есть ошибки ввода символов
      case ios::badbit :
        cout << "\n!!!!! Ошибка ввода символов !!!!!";
        cout << "\nПопробуем еще разок ....." << endl;
        return 1;
      };
    cout << "\n Что-то еще случилось нехорошее на вводе..." << endl;
    return 1;
 }

template <class Ta, class Tc, class Td>
void inputData(Ta& a, Tc& c, Td& d)
{
	// ------------- Ввод исходных данных ----------------------
     while (input(a, 'a'));
     cout <<"Введено значение a=           " << a << endl;
     while (input(c, 'c'));
     cout <<"Введено значение c=           " << c << endl;
	 while (input(d, 'd'));
     cout <<"Введено значение d=           " << d << endl;
}
#endif  /* __MYINPUT_H */