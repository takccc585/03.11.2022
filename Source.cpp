#include<iostream>
using namespace std;
int main() {
	//1
	/*int marks[5];
	for (int i = 0; i < 5; i++) {
		cin >> marks[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << marks[i]<<" ";
	}*/
	//2
	/*int marks[5];
	for (int i = 0; i < 5; i++) {
		cin >> marks[i];
	}
	for (int i = 4; i >= 0; i--) {
		cout << marks[i] << " ";
	}*/
	//3
	/*int marks[10];
	for (int i = 0; i < 10; i++) {
		cin >> marks[i];
	}
	for (int i = 0; i < 10; i+=2) {
		cout << marks[i] << " ";
	}*/
	//array
	//1
	/*const int n=10;
	int array[n];
	array[0] = 1;
	for (int i = 1; i < n; i++) {
		array[i] = 1 + i * 2;
	}
	for (int i = 0; i < n; i++) {
			cout << array[i] << " ";
	}*/
	//2
	/*const int n = 10;
	int array[n];
	for (int i = 0; i < n; i++) {
		array[i]=pow(2,i);
		cout << array[i] << endl;
	}*/
	
	//3
	/*const int n = 10;
	int array[n],a,d;
	cin >> a >> d;
	for (int i = 0; i < n; i++) {
		array[i]=a+d*i;
		cout << array[i] << endl;
	}*/
	//4
	/*const int n = 10;
	int array[n],a,d;
	cin >> a >> d;
	for (int i = 0; i < n; i++) {
		array[i]=a+d*i;
		cout << array[i] << endl;
	}*/
	//5
	/*const int n = 10;
	int array[n];
	array[0] = 1;
	array[1] = 2;
	for (int i = 2; i < n; i++) {
		array[i] = array[i-2]+array[i-1];
		cout << array[i] << endl;
	}*/
	return 0;
}