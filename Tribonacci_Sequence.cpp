#include <iostream>
#include <vector>
using namespace std;
int main() {
    int count=0;cout<<"Enter count:"<<endl;cin>>count;
    vector<int>p;
    vector<int>v;
    for(int i=0;i<3;i++){
        cout<<"Enter starting value";
        int a;cin>>a;
        p.push_back(a);
    }
    int a=p[0],b=p[1],c=p[2];
    v.push_back(a),v.push_back(b),v.push_back(c);
    int j=1;
    int d=0;
    while(j>0){
        d=a+b+c;
        v.push_back(d);
        if(j==count-3){
            for(auto x:v){
            cout<<x<<" ";
            }
            return 0;
        }
        a=b,b=c,c=d;
        j++;
    }
}
