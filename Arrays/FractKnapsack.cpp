#include<bits/stdc++.h>
using namespace std;

struct item{
    int profit, weight;

    item(int profit, int weight){
        this->profit = profit;
        this->weight = weight;
    }
};

static bool comp(struct item a, struct item b){
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2; 
}

double kpsolver(struct item ar[], int w, int n){
    sort(ar, ar + n, comp);
    double ans = 0.0;
    for(int i=0;i<n;i++){
        if(w >= ar[i].weight){
            w -= ar[i].weight;
            ans += ar[i].profit;
        }
        else{
            ans += ar[i].profit * ((double)w / (double)ar[i].weight);
            break;
        }
    }
    return ans;
}


int main(){
    item ar[] = {{60,10},{100,20},{120, 30}};
    int W = 50;
    int n = sizeof(ar) / sizeof(ar[0]);
    cout<<kpsolver(ar, W, n);
    return 0;
}
