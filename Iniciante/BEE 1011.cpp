/**
 * @file BEE 1011.cpp
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
	
	double R, pi, volume;
	
	cin >> R;
	
	pi = 3.14159;
	
	volume = (4.0/3)*pi*pow(R,3);
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volume << "\n";
}