/**
 * @file BEE 1013.cpp
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
	
	int a, b, c, mab, mtotal;
	
	cin >> a; cin >> b; cin >> c;
	
	mab = (a+b+ abs(a-b))/2;
	
	mtotal = (mab+c+ abs(mab-c))/2;
	
	cout << mtotal <<  " eh o maior\n";
}