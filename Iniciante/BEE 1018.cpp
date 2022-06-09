/**
 * @file BEE 1018.cpp
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
	
	int valor, n100, t100, n50, t50, n20, t20, n10, t10, n5, t5, n2, t2, n1;
	
	cin >> valor;
	
	cout << valor << endl;
	
	n100 = valor/100;
	t100 = valor%100;
	cout << n100 << " nota(s) de R$ 100,00\n";
	
	n50 = t100/50;
	t50 = t100%50;
	cout << n50 << " nota(s) de R$ 50,00\n";
	
	n20 = t50/20;
	t20 = t50%20;
	cout << n20 << " nota(s) de R$ 20,00\n";
	
	n10 = t20/10;
	t10 = t20%10;
	cout << n10 << " nota(s) de R$ 10,00\n";
	
	n5 = t10/5;
	t5 = t10%5;
	cout << n5 << " nota(s) de R$ 5,00\n";
	
	n2 = t5/2;
	t2 = t5%2;
	cout << n2 << " nota(s) de R$ 2,00\n";
	
	n1 = t2;
	cout << n1 << " nota(s) de R$ 1,00\n";
}