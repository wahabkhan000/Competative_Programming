#include<iostream>
using namespace std;
int main(){
    int test=0;
    cin>>test;
    for(int i=0;i<test;i++){
        int length=0;
        cin>>length;
        int arr[length];
        int count=0;
        int greater=0;
        for (int j=0;j<length;j++) {
            cin>>arr[j];
            if (arr[j]==0) {
                count++;
            }
            else {
                count=0;
            }
            if (count>greater) {
                greater=count;
            }
        }
        cout<<greater<<endl;
    }
}
