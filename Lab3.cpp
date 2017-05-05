#include <iostream>
#include <string>

using namespace std;

void decimalBinario(int);
void ejercicio1(int);
void ejercicio2(int);
void imprimeMatriz();

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
				ejercicio1(numero);
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

void decimalBinario(int decimal){
	int cifras=0;
	int decimal1=decimal;
	do{
		cifras++;
		decimal=decimal/2;
	}while(decimal>0);
	//cout<<cifras;
	int binario1[cifras];
	int cifra=0;
	int malvado=0;
	do{
		binario1[cifra]=decimal1%2;
		if(binario1[cifra]!=0){
			malvado++;
		}
		cifra++;
		decimal1=decimal1/2;
	}while(decimal1>0);
	//cout<<"unos: "<<malvado<<endl;
	for(int i=0;i<cifras;i++){
		cout<<binario1[cifras-i-1]<<" ";
	}
	if(malvado%2==0){
		cout<<"Es malvado"<<endl;
	}else{
		cout<<"No es malvado"<<endl;
	}
}

void ejercicio1(int numero){
	for(int i=0;i<numero;i++){
		decimalBinario(i);
	}
}

void ejercicio2(int n){
	
}

void imprimeMatriz(){
	
}
