#include <iostream>
using namespace std;

void fillArray(int arr[], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << " ";
	}
}

int* findMinAndMax(int arr[], int arrLength) {
    int* minMaxArr = new int[2];
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < arrLength; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    minMaxArr[0] = min;
    minMaxArr[1] = max;
    cout << endl << minMaxArr[0] << " " << minMaxArr[1] << endl;
    return minMaxArr;
}

void calcSum(int arr1[], int arr2[], int arr3[]) {
    int minSum = arr1[0] + arr2[0] + arr3[0];
    int maxSum = arr1[1] + arr2[1] + arr3[1];
    cout << "The sum of min elements is " << minSum << endl;
    cout << "The sum of max elements is " << maxSum << endl;
}

int main() {
	int a, b, c;
	cout << "Enter the length of the array: " << endl;
	cin >> a >> b >> c;
	int array1[a];
	int array2[b];
	int array3[c];
	cout << endl;
	
	fillArray(array1, a);
	int* newArr1 = findMinAndMax(array1, a);
	cout << endl;
	
	fillArray(array2, b);
	int* newArr2 = findMinAndMax(array2, b);
	cout << endl;
	
	fillArray(array3, c);
	int* newArr3 = findMinAndMax(array3, c);
	cout << endl;
	
	calcSum(newArr1, newArr2, newArr3);
}
