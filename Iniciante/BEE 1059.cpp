/**
 * @file BEE 1059.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 24-04-2022
 * 
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>

using namespace std;

int par(int n){
    if(n==100){
        return n;
    }
    else{
        cout << n << endl;
    }
    
    return par(n+2);
}

int main()
{
    cout << par(2) << endl;
}