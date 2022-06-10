/**
 * @file BEE 1041.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 29-08-2021
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	double x, y;
	
	cin >> x; cin >> y;
	
	if (x == 0 and y == 0)
	{
		cout << "Origem\n";
	}
	else if (x == 0)
	{
		cout << "Eixo Y\n";
	}
	else if (y == 0)
	{
		cout << "Eixo X\n";
	}
	else if (x > 0 and y > 0)
	{
		cout << "Q1\n";
	}
	else if (x < 0 and y > 0)
	{
		cout << "Q2\n";
	}
	else if (x < 0 and y < 0)
	{
		cout << "Q3\n";
	}
	else
	{
		cout << "Q4\n";
	}
}