/**
 * @file BEE 1045.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 17-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	double a, b, c, A, A1, B, C;
	
	cin >> a; cin >> b; cin >> c;
	
	A = (a+b + abs(a-b))/2;
	B = (a+b)-A;
	A1 = A;
	A = (A+c + abs(A-c))/2;
	C = (A1+c)-A;
	
	if (A >= (B+C)){
		cout << "NAO FORMA TRIANGULO\n";
	}else if(pow(A,2) == (pow(B,2)+pow(C,2))){
		cout << "TRIANGULO RETANGULO\n";
	}else if (pow(A,2) > (pow(B,2)+pow(C,2))){
		cout << "TRIANGULO OBTUSANGULO\n";
	}else if (pow(A,2) < (pow(B,2)+pow(C,2))){
		cout << "TRIANGULO ACUTANGULO\n";
	}if (A == B and B == C){
		cout << "TRIANGULO EQUILATERO\n";
	}else if (A != B and B == C or A == B and B != C or A != C and B == A or A == C and A != B){
		cout << "TRIANGULO ISOSCELES\n";
	}
}