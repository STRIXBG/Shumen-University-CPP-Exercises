#include <iostream>

using namespace std;

int main() {
	int numbers, limit;
	cin >> numbers >> limit;
	int count = 0, input;
	for(int i=0; i<numbers; i++){
		cin >> input;
		if(input <= limit)
			count++;
	}
	cout << count;
	return 0;
}
