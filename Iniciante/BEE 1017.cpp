/**
 * @file BEE 1017.cpp
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
	
	int km, dist, temp;
	double comb;
	
	cin >> temp;
	cin >> km;
	
	dist = km*temp;
	
	comb = dist/12.0;
	
	cout << fixed << setprecision(3);
	cout << comb << endl;
}