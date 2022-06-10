/**
 * @file BEE 1050.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 19-06-2022
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	int d;
	
	cin >> d;
	
	if(d == 61){
		cout << "Brasilia\n";
	}else if(d == 71){
		cout << "Salvador\n";
	}else if(d == 11){
		cout << "Sao Paulo\n";
	}else if(d == 21){
		cout << "Rio de Janeiro\n";
	}else if(d == 32){
		cout << "Juiz de Fora\n";
	}else if(d == 19){
		cout << "Campinas\n";
	}else if(d == 27){
		cout << "Vitoria\n";
	}else if(d == 31){
		cout << "Belo Horizonte\n";
	}else{
		cout << "DDD nao cadastrado\n";
	}
}