#include <iostream>
using namespace std;

int arr[20];
int fib(int a);

int main(){
	int index = 0;
	while (true){
		int x;
		cin >> x;
		if (x == 0) break;
		else arr[index] = x;
		index++;
	}
	fib(10);
}
]
