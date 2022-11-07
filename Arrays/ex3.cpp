#include <iostream>

using namespace std;

int main() {
	int array[15];
	for(int i=0; i<15; i++){
		cin >> array[i];
	}
	for(int i=14; i>=0; i--){
		if(array[i] % 3 == 0)
			cout << array[i] << " ";
	}
	return 0;
}
