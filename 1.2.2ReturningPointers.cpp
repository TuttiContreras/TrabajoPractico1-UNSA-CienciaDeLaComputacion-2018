#include <iostream>
#include <cstdlib> //define rand(), srand(), RAND_MAX
#include <stdio.h>
using namespace std;

int *getRandNmPtr(){
	int x=rand();
	return &x;
}

int main(){
	int *randNumPtr = getRandNmPtr();
	cout<<randNumPtr;
	return 0;
}
