#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    float v[a];
    for (int j=0;j<a;j++) {
        cin>>v[j];
    }
    float n;
    if (v[0]==v[1]||v[0]==v[2])
        n=v[0];
    else
        n=v[1];
    for (int i=0;i<a;i++){
        if (v[i]!=n)
            cout<< v[i];
    }
    cout<< 0.0;
}
