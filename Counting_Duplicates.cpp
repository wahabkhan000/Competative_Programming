#include <string>
#include<iostream>
using namespace std;
int main(){
string in;
cin>>in;
  string s=in;
  int n=in.length();
  int count_1=0;
  for(int i=0;i<n;i++){
      if(s[i]>='A'&&s[i]<='Z'){
          s[i]+=32;
      }
  }
  for(int i=0;i<n;i++){
    int count=1;
    if(s[i]!='*'){
        for(int j=i+1;j<n;j++){
        if(s[i]==s[j]){
            count++;
            s[j]='*';
            }
        }
    }
    if(count>1){
        count_1++;
    }
  }
  cout<<count_1;
}
