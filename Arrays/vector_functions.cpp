// commonly used vector functions

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<char> vec1={'a','b','c','d','e'};

    for(char ch : vec1){
        cout<<ch<<" ";
    }

    // size() -> returns the number of elements in the vector
    cout<<"\nSize of vec1: "<<vec1.size()<<endl;

    // push_back() -> adds an element to the end of the vector
    vec1.push_back('f');
    cout<<"After push_back('f'): ";
    for(char ch : vec1){
        cout<<ch<<" ";
    }

    // pop_back() -> removes the last element from the vector
    vec1.pop_back();
    cout<<"\nAfter pop_back(): ";
    for(char ch : vec1){
        cout<<ch<<" ";
    }

    // clear() -> removes all elements from the vector
    vec1.clear();
    cout<<"\nAfter clear(), size of vec1: "<<vec1.size()<<endl;

    // empty() -> checks if the vector is empty
    if(vec1.empty()){
        cout<<"vec1 is empty"<<endl;
    } else {
        cout<<"vec1 is not empty"<<endl;
    }

    // insert() -> inserts an element at a specific position
    vector<int> vec2={1,2,3,4,5};
    vec2.insert(vec2.begin()+2, 10); // inserts 10 at index 2
    cout<<"After insert(10) at index 2: ";
    for(int num : vec2){
        cout<<num<<" ";
    }

    // erase() -> removes an element from a specific position
    vec2.erase(vec2.begin()+2); // removes the element at index 2
    cout<<"\nAfter erase() at index 2: ";
    for(int num : vec2){
        cout<<num<<" ";
    }

    // front() -> returns the first element of the vector
    cout<<"\nFirst element of vec2: "<<vec2.front()<<endl;

    // back() -> returns the last element of the vector
    cout<<"Last element of vec2: "<<vec2.back()<<endl;

    // at() -> returns the element at a specific index with bounds checking
    cout<<"Element at index 4 of vec2: "<<vec2.at(4)<<endl;

    // swap() -> swaps the contents of two vectors
    vector<int> vec3={6,7,8,9,10};
    vec2.swap(vec3);
    cout<<"After swapping vec2 and vec3, \nvec2: ";
    for(int num : vec2){
        cout<<num<<" ";
    }
    cout<<"\nvec3: ";
    for(int num : vec3){
        cout<<num<<" ";
    }
}