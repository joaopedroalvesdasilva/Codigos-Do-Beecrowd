/**
 * @file BEE 1005.cpp
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
	
	double a, b, media;
	
	cin >> a;
	cin >> b;
	
	media = ((a*3.5)+(b*7.5))/11;
	
	cout << fixed << setprecision(5);
	cout << "MEDIA = " << media << "\n";
}