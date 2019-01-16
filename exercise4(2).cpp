#include<iostream>
using namespace std;

int greatDivisor(int x)
{
    int i=2;
    while(i<x && x%i != 0){
            i++;
        }
    return i;
}

int main(){
    cout << greatDivisor(49);
}