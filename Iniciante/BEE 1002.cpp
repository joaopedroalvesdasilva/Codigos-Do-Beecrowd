/**
 * @file BEE 1002.cpp
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
	
	double raio, area, pi;
	
	pi = 3.14159;
	
	cin >> raio;
	
	area = pow(raio,2)*pi; 
	
	cout << fixed << setprecision(4); 
	cout << "A=" << area << "\n" ;
}