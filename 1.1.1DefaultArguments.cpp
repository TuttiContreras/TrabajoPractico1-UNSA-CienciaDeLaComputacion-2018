#include <iostream>
#include <stdio.h>
using namespace std;

void ingresar( int &cant, char *send){
	cout<<"¿Que mensaje desea repetir? = ";
	cin>>send;
	cout<<"¿Cuantas veces desea repetir el mensaje? = ";
	cin>>cant;
}

void print(int cant, char *send){
	for (int i=0; i<cant; ++i){
		cout<<send<<"\n";
	}
}

int main(){
	int cant; char *send= new char[30];
	ingresar(cant, send);
	print(cant, send);
	return 0;
}
