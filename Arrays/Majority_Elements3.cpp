// Majority element in Array in Moore's Voting Algorithm

#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>&nums){

    int freq=0;
    int ans =0;

    for(int i=0; i<nums.size(); i++){
        if(freq==0){
            ans= nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    int count=0;
    for(int i=0; i<nums.size(); i++){
        if(ans == nums[i]){
            count++;
        }
    }
    
    if(count > nums.size()/2){
        return ans;
    }
    else{
        return -1; // Return -1 if no majority element is found
    }
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
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }


    return 0;
}                                                                                           