/**
 * @file BEE 1036.cpp
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
	
	double a, b, c, delta, r1, r2;
	
	cin >> a; cin >> b; cin >> c;
	
	delta = pow(b,2) - (4*a*c);
	
	if (delta < 0){
		cout << "Impossivel calcular\n";
	}else if (a == 0){
		cout << "Impossivel calcular\n";
	}else {
		r1 = (-b + sqrt(delta))/(2*a);
		r2 = (-b - sqrt(delta))/(2*a);
		
		cout << fixed << setprecision(5);
		cout << "R1 = " << r1 << endl << "R2 = " << r2 << endl;
		
	}	
}