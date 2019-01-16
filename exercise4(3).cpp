#include<iostream>
#include<cmath>
using namespace std;

double findKineticEnergy(double m, double v){
    double squareV = pow(v,2);
    return 0.5*m*squareV;
}

int main(){
    cout << findKineticEnergy(5,5);
    return 0;
}