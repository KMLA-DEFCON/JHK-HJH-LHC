#include <iostream>
using namespace std;

int a = 0;

int addition(){
	a += 1;
}

int main(){
	for (; a < 10; addition()){
		cout << a;
	}
}
