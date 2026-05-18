#include<iostream>
using namespace std;
int main(){
    int n=0;cin>>n;
    int k=0;cin>>k;
    int count=0;
    int j=0;
    for (int i=1;i<=n;i++) {
        j+=i*5;
        if ((j+k)<=240) {
            count++;
        }
        else {
            break;
        }
    }
    cout<<count<<endl;
}
