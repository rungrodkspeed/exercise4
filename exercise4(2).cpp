#include<iostream>
using namespace std;

int greatDivisor(int x){
    int i=0;
    while(i<x){
        if(x%i == 0){
            cout << x;
        }else{
            i++;
        }
    }
    return 0;
}

int main(){
    cout << greatDivisor(97);
}