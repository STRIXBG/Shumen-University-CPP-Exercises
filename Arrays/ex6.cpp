#include <iostream>

using namespace std;

int main() {
	int n, min, repeat = 0, array[16];
	bool firstInput = true;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> array[i];
		if(firstInput){
			min = array[i];
			firstInput = false;
		}
		if(min > array[i])
			min = array[i];
	}
	cout << min << " ";
	for(int i=0; i<n; i++){
		if(array[i] == min)
			repeat++;
	}
	cout << repeat;
	return 0;
}
