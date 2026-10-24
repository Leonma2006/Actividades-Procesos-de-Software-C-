#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Escribir el valor de a: ";
	cin>>a;
	cout<<"Escribir el valor de b: ";
	cin>>b;
	cout<<"Escribir el valor de c: ";
	cin>>c;
	if(a==0 && b==0 && c==0){
		cout<<"No representan ninguna figura";
	}else if(a<0 || b<0 || c<0){
		cout<<"Ningun valor puede ser negativo";
	}
	}else if(a>0 && b==0 && c==0){
		cout<<"Tu figura es un circulo";
	}else if(a>0 && b==a && c==0){
		cout<<"Tu figura es un cuadrado";
	}else if(a>0 && b>0 && c==0){
		cout<<"Tu figura es un rectangulo";
	}else if(a+b<=c || a+c<=b || b+c<=a){
		cout<<"No representan ninguna figura";
	}else if(a==b && b==c){
		cout<<"Tu figura es un triangulo equilatero";
	}else if(a==b || b==c || c==a){
		cout<<"Tu figura es un triangulo isoceles";
	}else{
		cout<<"Tu tirangulo es un triangulo escaleno";
	}
	return 0;
}
