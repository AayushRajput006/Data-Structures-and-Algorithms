// Size and Capacity of a vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec;
    cout<<"Initial size: "<<vec.size()<<endl; // size is 0
    cout<<"Initial capacity: "<<vec.capacity()<<endl; // capacity is implementation-defined, often starts at 0 or 1

    vec.push_back(1);
    cout<<"\nAfter adding 1 element :"<<endl;
    cout<<"size : "<<vec.size()<<endl; // size is 1
    cout<<"capacity :"<<vec.capacity()<<endl; // capacity may increase, often to 1 or 2

    vec.push_back(2);
    cout<<"\nAfter adding one more elements :"<<endl;
    cout<<"Size : "<<vec.size()<<endl; // size is 2
    cout<<"Capacity : "<<vec.capacity()<<endl; // capacity may increase, often to double than previous capacity

    vec.push_back(3);
    cout<<"\nAfter adding one more elements :"<<endl;
    cout<<"Size : "<<vec.size()<<endl; // size is 3
    cout<<"Capacity : "<<vec.capacity()<<endl; // capacity may increase, often to double than previous capacity

    vec.push_back(4);
    cout<<"\nAfter adding one more elements :"<<endl;
    cout<<"Size : "<<vec.size()<<endl; // size is 4
    cout<<"Capacity : "<<vec.capacity()<<endl; // capacity remains same as preevious because it has enough capacity to accommodate the new element

    vec.push_back(5);
    vec.push_back(6);
    cout<<"\nAfter adding two more elements :"<<endl;
    cout<<"Size : "<<vec.size()<<endl; // size is 6
    cout<<"Capacity : "<<vec.capacity()<<endl; // capacity may increase, often to double than previous capacity
    return 0;
}
