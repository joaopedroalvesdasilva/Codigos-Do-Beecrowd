/**
 * @file BEE 1006.cpp
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
	
	double a, b, c, media;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	media = ((a*2)+(b*3)+(c*5))/10;
	
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << media << "\n";