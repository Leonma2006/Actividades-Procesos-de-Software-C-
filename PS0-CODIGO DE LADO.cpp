#include <iostream>
using namespace std;
int main(){
	int a,b,area;
	cout<<"Ingrese el lado 1: ";
	cin>>a;
	cout<<" Ingrese el lado 2: ";
	cin>>b;
	if(a<=0 || b<=0){
		cout<<"No pueden ser los lados negativos o 0";
	}else if(a=b){
		area=a*b;
		cout<<"El area del cuadrado es:"<<area;
	}else{
		area=a*b;
		cout<<" El area del rectangulo es: "<<area;	
	}
	return 0;

	
}