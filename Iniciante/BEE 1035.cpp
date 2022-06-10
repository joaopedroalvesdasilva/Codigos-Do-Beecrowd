/**
 * @file BEE 1035.cpp
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
	
	int a, b, c, d;
	
	cin >> a; cin >> b; cin >> c; cin >> d;
	
	if(b > c and d > a and (c+d) > (a+b)){
		cout << "Valores aceitos\n";
	}else{
		cout << "Valores nao aceitos\n";
	}
}