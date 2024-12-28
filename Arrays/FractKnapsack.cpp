#include<bits/stdc++.h>
using namespace std;

struct Item{
    int weight, profit;
    Item(int profit, int weight){
        this->profit = profit;
        this->weight = weight;
    }
    Item() : profit(0), weight(0) {} 
};

static bool cmp(struct Item a, struct Item b){
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}

double fns(int W, struct Item arr[], int N){
    sort(arr, arr+N, cmp);
    
    double ans = 0.0;
    for(int i=0;i<N;i++){
        if(arr[i].weight < W){
            W -= arr[i].weight;
            ans += arr[i].profit;
        }
        else{
            ans += (double)arr[i].profit * ((double)W / (double)arr[i].weight);
            break;
        }
    }
    return ans;
}

int main(){
    int W, n;
    cout<<"Enter the capacity of knapsack: ";
    cin>>W;
    cout<<"Enter no of items: ";
    cin>>n;
    Item* arr = new Item[n];
    for(int i=0;i<n;i++){
        int wei, pro;
        cout<<"Enter profit and weight of the item no - "<<i+1<<" : ";
        cin>>pro>>wei;
        arr[i] = Item(pro, wei);
    }
    double ans = fns(W, arr, n);
    cout<<"Maximum profit "<<ans<<endl;
    delete[] arr;
    return 0;
}
