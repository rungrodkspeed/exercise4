#include<iostream>
using namespace std;

void myFunc(int x){
    int count = 0;
    while(count<x){
        cout << "N";
        count ++;
    }
    cout << "\n";
}
int main(){
    int i = 1;
    while(i <= 5){
        myFunc(i);
        i++;
    }
    return 0;
}