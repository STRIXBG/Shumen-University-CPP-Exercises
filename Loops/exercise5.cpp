#include <iostream>

using namespace std;

int main() {
	int numbers, input;
	int sum = 0;
	cin >> numbers;
	for(int i=0; i<numbers; i++){
		cin >> input;
		if(input % 2 == 0)
			sum += input;
	}
	cout << sum;
	return 0;
}
