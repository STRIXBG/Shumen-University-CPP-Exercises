#include <iostream>

using namespace std;

int getDigits(int num){
	int count = 0;
	while(num != 0){
		count++;
		num /= 10;
	}
	return count;
}

int main() {
	int input;
	int count;
	for(int i=0; i<10; i++){
		cin >> input;
		if(getDigits(input) == 3)
			count++;
	}
	cout << count;
	return 0;
}
