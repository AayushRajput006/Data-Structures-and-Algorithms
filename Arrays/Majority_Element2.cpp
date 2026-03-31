// Find the majority element in the given array using sorting approach


#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int majorityElement(vector<int>&nums){

    int n= nums.size();
    sort(nums.begin(), nums.end());
    return nums[n/2];

}

int main(){
    int size; 
    cout<<"Enter the size of the Array : ";
    cin>>size;

    vector<int> nums(size);
    cout<<"Enter the elements of the Array : ";
    for(int i=0; i<size; i++){
        cin>>nums[i];
    }

    int result = majorityElement(nums);

    cout << "The majority element is: " << result << endl;

    return 0;
}