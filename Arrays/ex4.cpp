#include <iostream>

using namespace std;

int checkDigits(int n){
	int count = 0;
	while(n!=0){
		count++;
		n/=10;
	}
	return count;
}

int main() {
	int array[16];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> array[i];
	}
	for(int i=0; i<n; i++){
		if(checkDigits(array[i]) == 3)
			cout << i << " ";
	}
	return 0;
}
