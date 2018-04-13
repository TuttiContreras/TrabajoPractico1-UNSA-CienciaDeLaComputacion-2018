#include <iostream>

using namespace std;

int sum(const int x, const int y)
{
    return x+y;
}

//int sum(const int x, const int y, const int z) {return x+y+z;}

int main()
{
    //la funcion solo cuenta con dos argumentos y se le está enviando 3
    cout <<sum(1,2,3);  //deberia imprimir 6
    return 0;
}
