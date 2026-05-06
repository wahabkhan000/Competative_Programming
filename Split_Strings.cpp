#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
  int n=s.length();
  if( n % 2 != 0 ){
    s+="_";
    n++;
  }
  vector<string>v;
  for(int i=0;i<n;i=i+2){
    string a;
    a+=s[i];
    a+=s[i+1];
    v.push_back(a);
  }
    for(string b : v){
        cout<<b<<endl;
    }
}
