#include <iostream>
#include <cstdlib> //Alguna funciones matematicas

using namespace std;

int difference(const int x, const int y) //funcion debe retornar algun valor
{
    int diff=abs(x-y); //'abs' es el valor absoluto
    //return diff;
}

int main()
{
    cout <<difference(24, 1238)<< endl;
    return 0;
}
