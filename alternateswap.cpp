
#include<iostream>
using namespace std;
int main() {
	int arr[] = { 2,4,6,1,7 };
	int size = 5;
	for (int i = 0;i <= size;i += 2) {
		if (arr[i + 1]<size) {
			swap(arr[i], arr[i + 1]);
		}
	
	}
	for (int i = 0;i <= size;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
