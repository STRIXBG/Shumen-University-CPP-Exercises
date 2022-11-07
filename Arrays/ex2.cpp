#include <iostream>

using namespace std;

bool oneDigit(int n){
	if(n / 10 == 0)
		return true;
	return false;
}

int main() {
	int array[16];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> array[i];
	}
	for(int i=0; i<n; i++){
		if(oneDigit(array[i]))
			cout << array[i] << " ";
	}
	return 0;
}
