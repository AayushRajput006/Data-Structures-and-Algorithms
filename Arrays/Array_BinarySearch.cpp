// Binary Search in an Array

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int num){
    int left=0, right=size-1;

    while(left<=right){
        int mid = (left + right)/2; // To avoid overflow

        if(arr[mid]==num){
            return mid; // Return the index of the element if found
        }
        else if(arr[mid]<num){
            left=mid+1; // Search in the right half
        }
        else{
            right=mid-1; // Search in the left half
        }
    }
    return -1; // Return -1 if the element is not found
}

int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements in sorted order : "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int num;
    cout<<"\nEnter the number to search : ";
    cin>>num;

    int result = binarySearch(arr, size, num);

    if(result != -1){
        cout<<"Element found at position: "<<result+1<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }

    return 0;
}