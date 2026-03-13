#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int count=0;
    int count1=0;
    for (int i=0;i<a;i++) {
        int n;
        cin>>n;
        if (count>10&&count1==0) {
            cout<<"Second"<<endl;
        }
        else{
            if (n%3!=0) {
                cout<<"First"<<endl;
                count++;
            }
            else {
                cout<<"Second"<<endl;
                count1++;
            }
        }
    }
}
