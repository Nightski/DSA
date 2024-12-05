#include<iostream>
#include<vector>
using namespace std;

int profitcal(vector<int>& prices){
    int minpr = prices[0];
    int maxprofit = 0;
    for(int i=1;i<prices.size();i++){
        minpr = min(minpr, prices[i]);
        maxprofit = max(maxprofit, prices[i] - minpr);
    }
    return maxprofit;
}

int main(){
    vector<int> prices{7,4,1,6,9,5};
    cout<<"max profit: "<<profitcal(prices)<<endl;

    return 0;
}
