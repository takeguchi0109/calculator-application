#include "Calculator.h"
#include<iostream>
using namespace std;

Calculator::Calculator()
{
	cout << "Calculator�I�u�W�F�N�g�𐶐����܂���" << endl;

}
Calculator::~Calculator()
{
	cout<< "Calculator�I�u�W�F�N�g���폜���܂���" << endl;
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