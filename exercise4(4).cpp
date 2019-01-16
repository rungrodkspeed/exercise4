#include<iostream>
#include<cmath>
using namespace std;
 
 double findvalueY(double x){
     double a = pow(x,3);
     double b = pow(x,2);
     double c = 2*x+1;
     double e = c/b;
     double degree = a*3.1416/180;
     return sin(degree)/log(e);
 }

int main(){
    cout << findvalueY(3);
    return 0;
}