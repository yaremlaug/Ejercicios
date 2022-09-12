#include <iostream>
using namespace std;

string parImar(int num); //prototipo de funcion

int main(){
	int numero;
	string cadena;
	cout<<"ingrese el numero:";
	cin>>numero;
	cadena=parImar(numero);
	cout<<"El numero es:" <<cadena;
	return 0;
}

string parImar(int num){
	string resultado;
	if(num%2==0){
		resultado="par";
	}else if (num%2==1){
		resultado="impar";
	}
	return rsultado;
}
