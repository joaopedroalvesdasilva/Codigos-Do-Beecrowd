/**
 * @file BEE 1009.cpp
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
	
	string nome;
	double salarioFixo, totalVendas, salarioTotal;
	
	cin >> nome;
	cin >> salarioFixo;
	cin >> totalVendas;
	
	salarioTotal = (15*totalVendas)/100 + salarioFixo;
	
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << salarioTotal << "\n";
}