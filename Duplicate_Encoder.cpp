#include <string>
#include<iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  string a;
  int n=s.length();
  for(int i=0;i<n;i++){
    if(s[i]>='A'&&s[i]<='Z'){
      s[i]+=32;
    }
  }
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if(s[i]==s[j]){
        count++;
      }
    }
    if(count==1){
      a+='(';
    }
    else{
      a+=')';
    }
  }
  cout<<a;
}
