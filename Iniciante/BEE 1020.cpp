/**
 * @file BEE 1020.cpp
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
	
	int idade, dia, mes, mesS, ano, anoS;
	
	cin >> idade;
	
	ano = idade/365;
	anoS = idade%365;
	
	mes = anoS/30;
	mesS = anoS%30;
	
	dia = mesS;
	
	cout << ano << " ano(s)" << endl; 
	cout << mes << " mes(es)" << endl; 
	cout << dia << " dia(s)" << endl;
}