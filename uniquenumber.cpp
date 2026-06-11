#include<climits>
#include<iostream>
using namespace std;
int findunique(int* arr, int size) {
	int ans = 0;
	for (int i = 0;i < size;i++) {
		ans = ans ^ arr[i];
	}
	return ans;
}
int main() {
	int size, arr[100];
	cout << "enter size of array: ";
	cin >> size;
	cout << "eneter elements: ";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}
	int unique= findunique(arr, size);
	cout << "unique number in the array is: " << unique;
}
