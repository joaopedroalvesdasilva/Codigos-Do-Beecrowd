/**
 * @file BEE 1008.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 12-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int a, b;
	double c;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << a << "\n";
	cout << "SALARY = U$ " << b*c << "\n";
}