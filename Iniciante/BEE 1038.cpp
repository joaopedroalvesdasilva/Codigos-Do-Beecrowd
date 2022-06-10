/**
 * @file BEE 1038.cpp
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

int main ()
{
	
	int a, b;
	double cq, xs, xb, ts, r;
	
	cin >> a; cin >> b;
	
	cout << fixed << setprecision(2);
	if (a == 1)
	{
		cq = 4*b;
		cout << "Total: R$ " << cq << endl;
	}
	else if (a == 2)
	{
		xs = 4.5*b;
		cout << "Total: R$ " << xs << endl;
	}
	else if (a == 3)
	{
		xb = 5*b;
		cout << "Total: R$ " << xb << endl;
	}
	else if (a == 4)
	{
		ts = 2*b;
		cout << "Total: R$ " << ts << endl;
	}else
	{
		r = 1.5*b;
		cout << "Total: R$ " << r << endl;
	}
}