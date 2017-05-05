#include <iostream>
#include <string>

using namespace std;

string decimalBinario(int);

int main(){
	int opcion;
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Ejercicio 1"<<endl;
		cout<<"2. Ejercicio 2"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Ingrese la opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int numero;
				cout<<"Ingrese el número: ";
				cin>>numero;
				cout<<decimalBinario(numero)<<endl;
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
		}
	}while(opcion!=3);
	return 0;
}

string decimalBinario(int decimal){
	int cifras=0;
	int resto;
	string binario1="";
	string binario2="";
	do{	
		resto=decimal%2;
		binario1=binario1+10*cifras+resto;
		decimal=decimal/2;
		cifras++;	
	}while(decimal/2>0);
	binario2=binario1;
	return binario2;
}
