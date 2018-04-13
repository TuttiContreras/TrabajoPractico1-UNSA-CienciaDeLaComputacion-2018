#include <iostream>
#include <stdio.h>
using namespace std;

void setString(char **str){
	int x;
	cout<<"Ingrese cualquier numeros entero = ";
	cin>>x;
	if (x<0)
		*str="Es negativo";
	else
		*str="Es positivo";
}

int main(){
	char *str;
	setString(&str);
	cout<<str;
	return 0;
}
