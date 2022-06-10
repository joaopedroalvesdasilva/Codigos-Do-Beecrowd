/**
 * @file BEE 1040.cpp
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
	
	double n1, n2, n3, n4, media, ne, mediaF;
	
	cin >> n1; cin >> n2; cin >> n3; cin >> n4;
	
	media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
	cout << fixed << setprecision(1);
	cout << "Media: " << media << endl;
	if (media >= 7.0){
		cout << "Aluno aprovado.\n";
	}else if (media < 5.0){
		cout << "Aluno reprovado.\n";
	}else if (media >= 5.0 and media <=6.9){
		cout << "Aluno em exame.\n";
		cin >> ne;
		cout << "Nota do exame: " << ne << endl;
		mediaF = (media + ne)/2;
		if (mediaF >= 5.0){
			cout << "Aluno aprovado.\n";
			cout << "Media final: " << mediaF << endl;
		}else {
			cout << "Aluno reprovado.\n";
			cout << "Media final: " << mediaF << endl;
		}
	}
}