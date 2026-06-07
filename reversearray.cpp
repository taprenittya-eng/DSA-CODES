//arr is given
#include<climits>
#include<iostream>
using namespace std;
int main() {
	int arr[100] = { 2,6,3,4,8 };
	int i=0, j=4;
	while (i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	cout << "reversed array is: ";
	for (int x = 0;x <5;x++) {
		cout << arr[x] << " ";
	}
	return 0;
}

//user given array
#include<climits>
#include<iostream>
using namespace std;
int main() {
	int arr[100], size;
	cout << "size of array: ";
	cin >> size;
	cout << "elements of array is: ";
	for (int x = 0;x < size;x++) {
		cin>>arr[x];
	}
	int i=0, j=4;
	while (i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	cout << "reversed array is: ";
	for (int x = 0;x <size;x++) {
		cout << arr[x] << " ";
	}
	return 0;
}
