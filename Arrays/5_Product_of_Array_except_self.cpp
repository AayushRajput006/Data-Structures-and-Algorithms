// Product of Array Except Self


#include<iostream>
#include<vector>

using namespace std;

vector<int> productOfArray(vector<int> nums){

    // Brute force approach
    int size= nums.size();

    vector<int> ans(size,1);

    for(int i=0; i<size; i++){

        for(int j=0; j<size; j++){

            if(i != j){
                ans[i] *= nums[j];
            }
        }
    }

    return ans;

}


int main(){

    int size;
    cout<< "Enter the size of Array : ";
    cin>> size;

    vector<int> arr(size);

    cout<<"Enter the Array Elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }


    cout<< " Product of Array Except Self : ";

    vector<int> product = productOfArray(arr);
    
    for(int i=0 ; i<size; i++){
        cout<<product[i]<< " ";
    }

    return 0;

}