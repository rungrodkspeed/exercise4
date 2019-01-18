#include<iostream>
using namespace std;

int greatDivisor(int x)
{
	int i=x-1;
	if(x == 1){
		return x;
    }else{
    	while(x%i !=0){
    		i--;
		}
		return i;
	}
}

int main(){
	cout << greatDivisor(93);
}
	
