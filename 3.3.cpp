#include <iostream>

using namespace std;

void doubleNumber(int num) {num=num*2;} //se debe de realizar el paso por referencia '&'
//void doubleNumber(int &num) {num=num*2;}

int main()
{
    int num=35;
    doubleNumber(num);
    cout<<num; //Deberia imprimir 70
    return 0;
}
