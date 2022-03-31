#include <iostream>
using namespace std;

int x, y;

int main(){
	cin >> x >> y;
	char board[x][y];
	for (int i = 0; i<y; i++){
		char input[50];
		cin >> input;
		for (int j = 0; j<x; j++){
			board[j][i] = input[j];
		}
	}
	
	int arr[50];
	for (int i = 0; i<50; i++) cout << arr[i];
}
