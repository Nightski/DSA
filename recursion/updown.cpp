#include<bits/stdc++.h>
using namespace std;

void printer(int n){
    if(n == 0) return;

    static int i = 1;
    if(i <= n){
        cout<<i<<" ";
        i++;
        printer(n);
        i--;
        cout<<i<<" ";
    }
}

int main(){
    printer(5);
    return 0;
}
