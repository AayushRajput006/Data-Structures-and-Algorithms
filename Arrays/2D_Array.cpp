// Column major 2D Array

#include<iostream>

using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter the number of rows and columns : ";
    cin>>rows>>cols;

    int arr[rows][cols];

    cout<<"Enter the elements of the Array : "<<endl;

    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cin>>arr[j][i];
        }
    }

    cout<<endl;

    cout<<"Elements in Row Major order : "<<endl;
    for(int i=0; i<rows;i++){
        for(int j=0; j<cols; j++){
            cout<<arr[j][i]<<" ";
        }
    }

    cout <<endl;

    cout<<"Elements in Column Major Order : "<<endl;
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;

}