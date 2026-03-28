// Find the majority element in the given array using brute force approach

#include<iostream>

using namespace std;

int majorityElement(int arr[], int n){
    for(int i=0; i<n; i++){
        int count =1;
        for(int j=i+1; j<n ; j++){
            if(arr[i]== arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
    return -1; // Return -1 if no majority element is found
}

int main(){
    int size; 
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the Array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int result = majorityElement(arr, size);

    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}