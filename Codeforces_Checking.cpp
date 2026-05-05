#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    string a="codeforces";
    for(int i=0;i<test_case;i++){
        bool flag=false;
        string s;
        cin>>s;
        for(int j=0;j<10;j++){
            if(s[0]==a[j]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
