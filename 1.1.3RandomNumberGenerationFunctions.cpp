#include <iostream>
#include <cstdlib> //define rand(), srand(), RAND_MAX
#include <ctime> //define la funcion time()
using namespace std;

int main(){
	srand(time(0));
	int randNum = rand();
	std::cout<<"A random number: "<<randNum<<'/n';
	return 0;
}
