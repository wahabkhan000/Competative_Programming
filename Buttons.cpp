#include<iostream>
using namespace std;
int main(){
    int total=0;
    cin>>total;
    for(int i=0;i<total;i++) {
        int anna=0,katie=0,coll;
        cin>>anna>>katie>>coll;
        if (coll%2!=0) {
            anna++;
        }
        int half=coll/2;
        if (anna+half>katie+half) {
            cout<<"First"<<endl;
        }
        else {
            cout<<"Second"<<endl;
        }
    }
}
