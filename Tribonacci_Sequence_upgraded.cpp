#include<vector>
using namespace std;
std::vector<int> tribonacci(std::vector<int> p, int n)
{
  vector<int>v;
  if(n==0){
    return {};
  }
  int a=p[0],b=p[1],c=p[2];
  v.push_back(a),v.push_back(b),v.push_back(c);
  for(int i=3;i<n;i++){
    int d=0;
    d=a+b+c;
    v.push_back(d);
    a=b,b=c,c=d;
  }
  int e=v.size()-n;
  for(int i=0;i<e;i++){
    v.pop_back();
  }
  return v;
}
