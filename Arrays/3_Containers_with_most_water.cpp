// Containers with most water 

#include<iostream>
#include<vector>

using namespace std;

// brute-force approach
int maxWater(vector<int> height){

    int maxWater = 0; //answer

    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            int width = j-i;
            int ht = min(height[i], height[j]);
            int water = ht * width;
            maxWater = max(maxWater, water);
        }
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
