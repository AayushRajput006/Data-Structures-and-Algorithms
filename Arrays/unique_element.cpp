//  Given a non-empty array of integers, every element appears twice except for one. Find that single one.
// Must implement a solution with a linear runtime complexity and use only constant extra space.


#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec={1,2,3,2,1,4,3};

    int res=0;

    for(int num : vec){
        res = res ^ num;
    }

    cout<<"The single number is: "<<res<<endl;

    // Remember : (a ^ a) = 0 and (a ^ 0) = a

}
