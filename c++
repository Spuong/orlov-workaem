#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int sum(int num1, int num2, char operation) {
	if (operation == '+') {
		return num1 + num2;
	}
	else if (operation == '-') {
		return num1 - num2;
	}
	else if (operation == '*') {
		return num1 * num2;
	}
	else if (operation == '%') {
		return num1 % num2;
	}
	else if (operation == '/') {
		return num1 / num2;
	}
	else if (operation == '^') {
		return pow(num1, num2);
	}
	else if (operation == '//') {
		return num1 / num2 / num2;
	}
	else if (operation == '**') {
		return num1 * num2 * num2;
	}
	else {
		cout << "[+] Функция вернула ошибку, с кодом: ";
			return 0;
	}
	
}

int main() {
	setlocale(0, "");
	int num1;
	int num2;
	char operation;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << endl;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << endl;
	cout << "Введите дейcтвие: ";
	cin >> operation;
	cout << endl;

	cout << "Результат: " << sum(num1, num2, operation);


	int _;
	cin >> _;
	return 0;
}






