#include<iostream>
using namespace std;

void subs(string& s, string cur, int ind){
    if(ind == s.length()){
        cout<<cur<<endl;
        return;
    }
    subs(s, cur, ind + 1);
    subs(s, cur + s[ind],ind + 1);
}
int main(){
    string s = "ABC";
    subs(s,"",0);
    return 0;
}
