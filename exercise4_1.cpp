#include<iostream>
using namespace std;

void myFunc(int x){
    if(x%2 == 0){
        cout << "A";
    }else{
        cout << "B";
    }
}
int i=0;
int main(){
    while(i<5){
        myFunc(i);
        i++;

    }
    return 0;
}
