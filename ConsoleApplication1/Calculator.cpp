#include "Calculator.h"
#include<iostream>
using namespace std;

Calculator::Calculator()
{
	cout << "Calculatorオブジェクトを生成しました" << endl;

}
Calculator::~Calculator()
{
	cout<< "Calculatorオブジェクトを削除しました" << endl;
}

double Calculator::Calculate(double x, char oper, double y) {
	switch (oper) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}