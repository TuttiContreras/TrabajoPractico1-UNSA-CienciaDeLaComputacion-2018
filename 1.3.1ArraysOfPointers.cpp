#include <iostream>

using namespace std;

int main()
{
    const char*suitName[] = {"Clubs","Diamonds","Spades","Clubs"};
    cout<<"Ingresa un numero entre el 1 y el 4: ";
    unsigned int suitNum;
    cin>>suitNum;
    if (suitNum<=3)
        cout<<suitName[suitNum-1];
    return 0;
}
