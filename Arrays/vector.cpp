// Introduction to Vectors in C++

#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector<int> vec1={1,2,3,4,5};

    vector<int> vec2(5,0); // creates a vector of size 5 with all elements initialized to 0

    cout<<vec1[1]<<endl;
    cout<<vec2[1]<<endl;

    // Iterating through a vector using for-each loop
    for(int num:vec1){
        cout<<num<<" ";
    }

    return 0;
    
}