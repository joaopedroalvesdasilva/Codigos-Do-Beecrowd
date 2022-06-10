/**
 * @file BEE 1044.cpp
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
	
	int a, b;
	
	cin >> a; cin >> b;
	
	if(b%a != 0 and  a%b != 0){
		cout << "Nao sao Multiplos\n";
	}else {
		cout << "Sao Multiplos\n";
	}
}