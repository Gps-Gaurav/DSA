# include <iostream>
using namespace std;
#include <limits.h>

// Function to find the maximum element in an array 
int  maxElementArray(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int maxi_element = maxElementArray(arr, n);
    cout << "The maximum element in the array is: " << maxi_element << endl;
}