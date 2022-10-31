#include <iostream>

using namespace std;

int main() {
	int numbers, input, min = 0;
	bool firstInput = true;
	cin >> numbers;
	for(int i=0; i<numbers; i++){
		cin >> input;
		if(firstInput){
			min = input;
			firstInput = false;
		}
		else if(input < min){
			min = input;
		}
	}
	cout << min;
	return 0;
}
