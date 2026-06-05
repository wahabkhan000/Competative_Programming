#include <iostream>
#include <vector>
using namespace std;
void multiplication_table(int n){
  vector<vector<int>>v(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      v[i][j]=(i+1)*(j+1);
    }
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cout<<v[i][j]<<" ";
      }
      cout<<endl;
  }
}
int main(){
    int n;cin>>n;
    multiplication_table(n);
}
