// Containers with most water 


#include<iostream>
#include<vector>


using namespace std;

// optimal approach using two pointers
int maxWater(vector<int> height){
    int maxWater = 0; // answer

    int left =0;
    int right = height.size()-1;

    while(left < right){
        int width = right - left;
        int ht = min(height[left], height[right]);

        int water = ht * width ;
        maxWater = max(maxWater, water);

        height[left] < height[right] ? left++ : right--;
    }

    return maxWater;
}

int main(){
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    vector<int> height(size);

    cout<<"Enter the heights of the Lines ";
    for(int i=0; i<size; i++){
        cin>>height[i];
    }

    int result = maxWater(height);
    cout<<"The maximum amount of water that can be contained is : "<<result<<endl;
}