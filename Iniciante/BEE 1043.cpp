/**
 * @file BEE 1043.cpp
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
	
	double a, b, c;
	
	cin >> a; cin >> b; cin >> c;
	
	cout << fixed << setprecision(1);
	
	if (abs(b-c) < a and a < (b+c)){
		cout << "Perimetro = " << a+b+c << endl;
	}else if (abs(a-c) < b and b < (a+c)){
		cout << "Perimetro = " << a+b+c << endl;
	}else if (abs(a-b) < c and c < (a+b)){
		cout << "Perimetro = " << a+b+c << endl;
	}else{
		cout << "Area = " << ((a+b)*c)/2 << endl;
	}
}