#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        bool even=false;
        bool odd=false;
        vector<int>v;
        int length;
        cin>>length;
        for(int j=0;j<length;j++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int element : v){
            if(element % 2==0){
                even=true;
            }
            else{
                odd=true;
            }
        }
        if(odd == true && even == true){
            sort(v.begin(),v.end());
        }
        for(int entity : v){
            cout<<entity<<" ";
        }
        cout<<endl;
    }
}
