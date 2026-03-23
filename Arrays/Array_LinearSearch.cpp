// Linear Search in an Array

#include<iostream>

using namespace std;

int linearSearch(int arr[], int size, int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int num;
    cout<<"\nEnter the number to search : ";
    cin>>num;

    int result = linearSearch(arr, size, num);

    if(result != -1){
        cout<<"Element found at position: "<<result+1<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }

    return 0;
}