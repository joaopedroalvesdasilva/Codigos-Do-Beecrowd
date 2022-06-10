/**
 * @file BEE 1021.cpp
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
	
	double valor;
	int valor2, n100, t100, n50, t50, n20, t20, n10, t10, n5, t5, n2, t2, n1;
	int m50, t050, m25, t025, m10, t010, m05, t05, m01, t1;
	
	cin >> valor;
	
	
	valor2 = valor*100;
	
	cout << "NOTAS:\n";
	
	n100 = valor2/10000;
	t100 = valor2%10000;
	cout << n100 << " nota(s) de R$ 100.00\n";
	
	n50 = t100/5000;
	t50 = t100%5000;
	cout << n50 << " nota(s) de R$ 50.00\n";
	
	n20 = t50/2000;
	t20 = t50%2000;
	cout << n20 << " nota(s) de R$ 20.00\n";
	
	n10 = t20/1000;
	t10 = t20%1000;
	cout << n10 << " nota(s) de R$ 10.00\n";
	
	n5 = t10/500;
	t5 = t10%500;
	cout << n5 << " nota(s) de R$ 5.00\n";
	
	n2 = t5/200;
	t2 = t5%200;
	cout << n2 << " nota(s) de R$ 2.00\n";
	
	cout << "MOEDAS:\n";
	
	n1 = t2/100;
	t1 = t2%100;
	cout << n1 << " moeda(s) de R$ 1.00\n";
	
	m50 = t1/50;
	t050 = t1%50;
	cout << m50 << " moeda(s) de R$ 0.50\n";
	
	m25 = t050/25;
	t025 = t050%25;
	cout << m25 << " moeda(s) de R$ 0.25\n";
	
	m10 = t025/10;
	t010 = t025%10;
	cout << m10 << " moeda(s) de R$ 0.10\n";
	
	m05 = t010/5;
	t05 = t010%5;
	cout << m05 << " moeda(s) de R$ 0.05\n";
	
	m01 = t05;
	cout << m01 << " moeda(s) de R$ 0.01\n";
}