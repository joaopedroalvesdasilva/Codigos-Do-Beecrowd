/**
 * @file BEE 1049.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 19-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	string a, b, c;
	
	cin >> a >> b >> c;
	
	if(a == "vertebrado"){
		if(b == "ave"){
			if(c == "onivoro"){
				cout << "pomba\n";
			}else if (c == "carnivoro"){
				cout << "aguia\n";
			}
		}else if(b == "mamifero"){
			if(c == "herbivoro"){
				cout << "vaca\n";
			}else if(c == "onivoro"){
				cout << "homem\n";
			}
		}
	}else if(a == "invertebrado"){
		if(b == "inseto"){
			if(c == "hematofago"){
				cout << "pulga\n";
			}else if(c == "herbivoro"){
				cout << "lagarta\n";
			}
		}else if (b == "anelideo"){
			if (c == "hematofago"){
				cout << "sanguessuga\n";
			}else if (c == "onivoro"){
				cout << "minhoca\n";
			}
		}
	}
}