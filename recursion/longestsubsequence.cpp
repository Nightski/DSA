#include<iostream>
using namespace std;

int longest(string& p, string& q, int m, int n){
    if(m == 0 || n == 0){
        return 0;
    }
    
    if(p[m - 1] == q[n - 1]){
        return 1 + longest(p,q,m - 1, n - 1);
    }
    
    return max(longest(p,q,m - 1,n),longest(p,q,m,n - 1));
}

int main(){
    string p = "BDABA";
    string q = "HBDAC";
    cout<<longest(p,q,p.length(),q.length());
    return 0;
}
