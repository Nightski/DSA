#include<iostream>
#include<unordered_map>
#include<queue>
#include<string>
using namespace std;

string scf(string s){
  unordered_map<char, int> m;
  for(char c:s){
    m[c]++;
  }
  priority_queue<pair<int, char>> pq;
  for(auto const& [key, value]:m){
    pq.push({value, key});
  }
  
  string x;
  while(!pq.empty()){
    auto[value, key] = pq.top();
    pq.pop();
    x.append(value, key);
  }
  return x;
}

int main(){
  string s= "tree";
  string ans = scf(s);
  cout<<ans<<endl;
  return 0;
}
