/**
 * @file BEE 1019.cpp
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

int main (){
	
	int seg, segT, horas, min, minT;
	
	cin >> seg;
	
	min = seg/60;
	segT = seg%60;
	
	horas = min/60;
	minT = min%60;
	
	cout << horas << ":" << minT << ":" << segT << endl;
}