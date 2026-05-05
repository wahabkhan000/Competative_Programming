#include<iostream>
using namespace std;
int main(){
    int distance;
    cin>>distance;
    int count=0;
    while(distance>5){
        distance-=5;
        count++;
    }
    count++;
    cout<<count<<endl;
}
