/**
 * @file BEE 1046.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 18-08-2021 
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	int hi, hf, ht;
	
	cin >> hi; cin >> hf;
	
	if(hi == hf ){
		cout << "O JOGO DUROU 24 HORA(S)\n";
	}else if (hi>hf){
		ht = abs(abs(hi - hf) - 24);
		cout << "O JOGO DUROU " << ht << " HORA(S)\n";
	}else{
		ht = hf - hi;
		cout << "O JOGO DUROU " << ht << " HORA(S)\n";
	}
}