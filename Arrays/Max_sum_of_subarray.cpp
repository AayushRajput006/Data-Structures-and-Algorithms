// Maximum sum of the subarray

#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;

    int maxSum = 0;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for(int start= 0; start<size; start++){
        int currSum=0;

        for(int end=start; end<size; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Maximum sum of subarray: " << maxSum << endl;
}