#include<iostream>
using namespace std;
int main(){
    int test_case=0;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        long long int test=0;
        cin>>test;
        long long int count=0;
        for(int j=1;j<=9;j++){
            long long int number=0;
            while(number<=test) {
                number=number*10+j;
                if(number<=test){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
