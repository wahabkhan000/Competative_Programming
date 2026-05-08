#include<iostream>
using namespace std;
int main(){
    int test_case=0;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int number=0;
        cin>>number;
        int count=0;
        for(int j=1;j<=number;j++){
            int copy=j;
            int rem=j%10;
            bool flag=true;
            while(copy>0){
                if(copy%10 != rem){
                    flag=false;
                    break;
                }
                copy/=10;
            }
            if(flag){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
