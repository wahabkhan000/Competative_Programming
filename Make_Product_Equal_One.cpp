#include<iostream>
using namespace std;
int main(){
    int test=0;
    cin>>test;
    long long int count=0;
    int negative_count=0;
    bool flag=false;
    for(int i=0;i<test;i++){
        long long int input=0;
        cin>>input;
        if(input>0){
            input--;
            count+=input;
        }
        else if(input<0){
            count+=(-1+(-1*input));
            negative_count++;
        }
        else{
            count++;
            flag=true;
        }
    }
    if(negative_count%2 != 0 && flag!=true){
        count=count+2;
    }
    cout<<count<<endl;
}
