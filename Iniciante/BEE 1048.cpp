/**
 * @file BEE 1048.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 18-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	double s, a, p;
	
	cin >> s;
	
	cout << fixed << setprecision(2);
	if (s >= 0 and s <= 400.00){
		a = (s*15)/100;
		cout << "Novo salario: " << s+a << endl;
		cout << "Reajuste ganho: " << a << endl;
		cout << "Em percentual: 15 %" << endl;
	
	}else if (s >= 400.01 and s <= 800.00){
		a = (s*12)/100;
		cout << "Novo salario: " << s+a << endl;
		cout << "Reajuste ganho: " << a << endl;
		cout << "Em percentual: 12 %" << endl;
	
	}else if (s >= 800.01 and s <= 1200.00){
		a = (s*10)/100;
		cout << "Novo salario: " << s+a << endl;
		cout << "Reajuste ganho: " << a << endl;
		cout << "Em percentual: 10 %" << endl;
	
	}else if (s >= 1200.01 and s <= 2000.00){
		a = (s*7)/100;
		cout << "Novo salario: " << s+a << endl;
		cout << "Reajuste ganho: " << a << endl;
		cout << "Em percentual: 7 %" << endl;
	
	}else if (s >= 2000.01){
		a = (s*4)/100;
		cout << "Novo salario: " << s+a << endl;
		cout << "Reajuste ganho: " << a << endl;
		cout << "Em percentual: 4 %" << endl;
	
	}
}