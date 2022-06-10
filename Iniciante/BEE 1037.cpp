/**
 * @file BEE 1037.cpp
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
	
	double a;
	
	cin >> a;
	
	if (a >= 0 and a <= 25.00000){
		cout << "Intervalo [0,25]\n";
	}else if (a >= 25.00001 and a <= 50.00000){
		cout << "Intervalo (25,50]\n";
	}else if (a >= 50.00001 and a <= 75.00000){
		cout << "Intervalo (50,75]\n";
	}else if (a >= 75.00001 and a <= 100.00000){
		cout << "Intervalo (75,100]\n";
	}else {
		cout << "Fora de intervalo\n";
	}
}