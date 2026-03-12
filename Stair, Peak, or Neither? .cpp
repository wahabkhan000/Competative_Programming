#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    for (int i=0;i<a;i++) {
        int b;
        cin>>b;
        int c;
        cin>>c;
        int d;
        cin>>d;
        if (c>b&&c<d) {
            cout<<"STAIR"<<endl;
        }
        else if (c>b&&c>d) {
            cout<<"PEAK"<<endl;
        }
        else {
            cout<<"NONE"<<endl;
        }
    }
}
