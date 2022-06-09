/**
 * @file BEE 1012.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 16-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	double a, b, c, areaTri, areaQua, areaTra, areaCir, areaRet;
	
	cin >> a; cin >> b; cin >> c;
	
	areaTri = (a*c)/2;
	areaQua = pow(b,2);
	areaTra = ((a+b)*c)/2;
	areaCir = 3.14159*pow(c,2);
	areaRet = a*b;
	
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << areaTri << endl;
	cout << "CIRCULO: " << areaCir << endl;
	cout << "TRAPEZIO: " << areaTra << endl;
	cout << "QUADRADO: " << areaQua << endl;	
	cout << "RETANGULO: " << areaRet << endl;
}
