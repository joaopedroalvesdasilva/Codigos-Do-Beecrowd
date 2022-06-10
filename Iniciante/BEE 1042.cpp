/**
 * @file BEE 1042.cpp
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
	
	int a, b, c;
	
	cin >> a; cin >> b; cin >> c;
	
	if (a > b and a > c and b > c){
		cout << c << endl << b << endl << a << endl;
	}else if (a > b and a > c and c > b){
		cout << b << endl << c << endl << a << endl;
	}else if (b > a and b > c and a > c){
		cout << c << endl << a << endl << b << endl;
	}else if (b > a and b > c and c > a){
		cout << a << endl << c << endl << b << endl;
	}else if (a > c and a > b and b > c){
		cout << c << endl << b << endl << a << endl;
	}else if (a > c and a > b and c > b){
		cout << b << endl << c << endl << a << endl;
	}else if (b > c and b > a and a > c){
		cout << c << endl << a << endl << b << endl;
	}else if (b > c and b > a and c > a){
		cout << a << endl << c << endl << b << endl;
	}else if (c > b and c > a and b > a){
		cout << a << endl << b << endl << c << endl;
	}else if (c > b and c > a and a > b){
		cout << b << endl << a << endl << c << endl;
	}else if (c > a and c > b and a > b){
		cout << b << endl << a << endl << c << endl;
	}else if (c > a and c > b and b > a){
		cout << a << endl << b << endl << c << endl;
	}
	
	cout << endl << a << endl << b << endl << c << endl;
	
}