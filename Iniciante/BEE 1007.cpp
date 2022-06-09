/**
 * @file BEE 1007.cpp
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
	
	int A, B, C, D, DIF;
	
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	
	DIF = (A*B - C*D);
	
	cout << "DIFERENCA = " << DIF << "\n";
}