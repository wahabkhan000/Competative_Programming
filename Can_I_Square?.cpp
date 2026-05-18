#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int test=0;cin>>test;
    for (int i = 0; i < test; i++) {
        long long int defalt=0;
        long long int length=0;cin>>length;
        int arr[length];
        for (int j=0;j<length;j++) {
            cin>>arr[j];
            defalt+=arr[j];
        }
        double a=sqrt(defalt);
        long long int b=sqrt(defalt);
        if (b-a==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
