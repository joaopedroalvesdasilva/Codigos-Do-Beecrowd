/**
 * @file BEE 1010.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 13-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int p1, n1, p2, n2;
	double v1, v2, soma;
	
	cin >> p1; cin >> n1; cin >> v1;
	cin >> p1; cin >> n2; cin >> v2;
	
	soma= (n1*v1)+(n2*v2);
	
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << soma << "\n";
}