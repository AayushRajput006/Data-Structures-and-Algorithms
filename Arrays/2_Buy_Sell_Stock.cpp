// Best time to Buy & Sell Stock 

#include<iostream>
#include<vector>

using namespace std;

int maxprofit(vector<int> prices){
    
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i=1; i<prices.size(); i++){

        if(prices[i]> minPrice){
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        else{
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

int main(){
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    vector <int> prices(size);
    cout<<"Enter the stock prices for each day : ";
    for(int i=0; i<size; i++){
        cin>>prices[i];
    }

    int result = maxprofit(prices);
    cout<<"The maximum profit that can be achieved is : "<<result<<endl;
}