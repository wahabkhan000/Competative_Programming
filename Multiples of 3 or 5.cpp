#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int o = 0 ;
    cin>>n;
    if(n<0){
        cout<<0;
    }
    else{
      for (int i=1;i<n;i++) {
          if (i % 3 == 0||i % 5 == 0) {
              o=o+i;
              }
          }
        cout<<"The sum of Numbers is: "<< o;
      }
    return 0;
}
