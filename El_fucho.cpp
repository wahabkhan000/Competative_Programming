#include<iostream>
using namespace std;
int main(){
    int test_case=0;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int test=0;
        cin>>test;
        int final=0;
        for(int j=0;j<test-1;j++){
            final+=2;
        }
        cout<<final<<endl;
    }
}
