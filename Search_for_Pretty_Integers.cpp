#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>p;
    vector<int>v;
    int n=0;
    int m=0;
    cin>>n;
    cin>>m;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        p.push_back(a);
    }
    for (int i=0;i<m;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    int least=v[0];
    int least1=p[0];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (p[i]==v[j]) {
                cout<<p[i]<<endl;
                return 0;
            }
        }
    }
    if (least<=least1) {
        cout<<(least*10)+least1<<endl;
    }
    else {
        cout<<(least1*10)+least<<endl;
    }
}
