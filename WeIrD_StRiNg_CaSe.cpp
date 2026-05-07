#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int index=0;
    int n=s.length();
    for(int i=0;i<n;i++){
      if(s[i]==' '){
        index=0;
      }
      else{
        if(index%2==0){
          if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
          }
        }
        else{
          if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
          }
        }
        index++;
      }
    }
  cout<< s;
}
