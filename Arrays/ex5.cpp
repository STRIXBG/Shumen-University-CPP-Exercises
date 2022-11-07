#include <iostream>

using namespace std;

int main() {
	int n, m, S, sum;
	int array[16];
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> array[i];
		S = array[i]*array[i];
		if(m > S){
			sum += S;
		}
	}
	cout << sum << endl;
	for(int i=0; i<n; i++){
		S = array[i]*array[i];
		if(m < S){
			cout << i+1 << " ";
		}
	}
	return 0;
}
