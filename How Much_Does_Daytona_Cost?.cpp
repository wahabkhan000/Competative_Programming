#include<iostream>
int main(){
    int test=0;std::cin>>test;
    for(int j=0;j<test;j++){
        int n=0,k=0;
        std::cin>>n;
        std::cin>>k;
        int arr[n];
        int flag=0;
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
            if(arr[i]==k){
                flag=1;
            }
        }
        if(flag==1){
            std::cout<<"YES"<<std::endl;
        }
        else{
            std::cout<<"NO"<<std::endl;
        }
    }
}
