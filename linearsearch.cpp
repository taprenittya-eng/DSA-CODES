//user driven
#include<climits>
#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int size, key;
	cout << "Size is: ";
	cin >> size;
	cout << "elements are";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}
	cout << "the element to search: ";
	cin >> key;

	for (int i = 0;i < size;i++) {
		if (key == arr[i]) {
			cout << "searching done" << i;
			return 0;
		}
	}cout << "element not found";
	return 0;
	}

//array and key provided
#include<climits>
#include<iostream>
using namespace std;
int main() {
	int arr[100] = { 2,6,3,4,8 };
	int key = 4;
	for (int i = 0;i < 100;i++) {
		if (key == arr[i]) {
			cout << "searching done" << i;
			return 0;
		}
	}cout << "element not found";
	return 0;
	}
