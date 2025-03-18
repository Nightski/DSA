#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

bool isomorphic(string& s, string& t){
  if(s.length() != t.length()) return false;
  
  unordered_map<char, int> m1, m2;
  
  for(int i=0;i<s.length();i++){
    if(m1.find(s[i]) == m1.end()){
      m1[s[i]] = i;
    }
    if(m2.find(t[i]) == m2.end()){
      m2[t[i]] = i;
    }
    if(m1[s[i]] != m2[t[i]]) return false;
  }
  return true;
}

int main(){
  string s  = "egg";
  string t = "abb";
  if(isomorphic(s,t)){
    cout<<"The given pair is isomorphic"<<endl;
  }
  else{
    cout<<"The given pair is not isomorphic"<<endl;
  }
  return 0;
}
