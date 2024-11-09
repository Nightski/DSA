#include<iostream>
#include<vector>
using namespace std;

int profitcal(vector<int>& prices){
    int minpr = INT_MAX;
    int maxprofit = INT_MIN;
    int curr = 0;
    for(int price: prices){
        minpr = min(minpr, price);
        curr = price - minpr;
        maxprofit = max(maxprofit, curr);
    }
    return maxprofit;
}

int main(){
    vector<int> prices{7,4,1,6,9,5};
    cout<<"max profit: "<<profitcal(prices)<<endl;

    return 0;
}
