/**
 * @file BEE 1015.cpp
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
	
	double x1, x2, y1, y2, p1, p2, dist;
	
	cin >> x1; cin >> y1;
	cin >> x2; cin >> y2;
	
	p1 = (x2-x1);
	p2 = (y2-y1);
	
	dist = sqrt(pow(p1,2)+pow(p2,2));
	
	cout << fixed << setprecision(4);
	cout << dist << endl;
}