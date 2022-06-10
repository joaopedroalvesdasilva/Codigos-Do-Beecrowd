/**
 * @file BEE 1060.cpp
 * 
 * @author João Pedro Alves (pedroalvesdasilva165@gmail.com)
 * @date 10-03-2022
 * 
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    float n;
    int contador=0;
    for(int i=0;i<6;i++){
        cin >> n;

        if(n>0){
            contador++;
        }
    }
    printf("%d valores positivos\n",contador);
}