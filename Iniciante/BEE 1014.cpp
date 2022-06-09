/**
 * @file BEE 1014.cpp
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
	
	int dist;
	double comb, combTotal;
	
	cin >> dist;
	cin >> comb;
	
	combTotal = dist/comb;
	
	cout << fixed << setprecision(3);
	cout << combTotal << " km/l\n";
}