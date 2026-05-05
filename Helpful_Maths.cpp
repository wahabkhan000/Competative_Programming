#include<iostream>
using namespace std;
int main(){
  string given;
  cin>>given;
  int length_string=given.length();
  string copy;
  char ch='1';
  bool flag=false;
  for(int i=0;i<3;i++){
      int count=0;
      for(int j=0;j<length_string;j++){
          if(given[j]==ch){
              count++;
          }
      }
      for(int k=0;k<count;k++){
          if(flag){
              copy+="+";
          }
          copy+=to_string(ch-48);
          flag=true;
      }
      ch++;
  }
  cout<<copy<<endl;
}
