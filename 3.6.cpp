#include <iostream>

using namespace std;

const int ARRAY_LEN = 10;

int main()
{
    //'ARRAY_LEN' 'arr' 'yPtr' No estan declarados.
    int arr[ARRAR_LEN] = {10};  //Note implicit initialization of
                                //other elements
    int *xPtr = arr, yPtr = arr + ARRAY_LEN - 1;
    cout<<*xPtr<<' '<<*yPtr;    //deberia imprimir 10 0
    return 0;
}
