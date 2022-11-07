#include <iostream>

using namespace std;

int main() {
	int n, input;
	bool enteredOdd = false;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> input;
		if(input % 2 != 0){
			enteredOdd = true;
			cout << input << " " << i+1;
			break;
		}
	}
	return 0;
}
