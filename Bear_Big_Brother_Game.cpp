#include <iostream>
using namespace std;
int main() {
    int Limak;
    cout<<"Enter Limak's Age: ";
    cin>>Limak;
    int Bob;
    cout<<"Enter Bob's Age: ";
    cin>>Bob;
    int l=1;
    int m=Limak;
    int n=Bob;
    int count=0;
    while (l>0){
        m=m*3;
        n=n*2;
        count++;
        if (m>n) {
            cout<<"Limak Will be Heavier then Bob in "<<count<<" Years.";
            return 0;
        }
    }
}
