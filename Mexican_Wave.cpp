#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<string> v;
    string y;
    getline(cin,y);
    string r=y;
    int n=r.length();
    for (int i=0;i<n;i++) {
        if (y[i]>='A'&&y[i]<='Z') {
            y[i]+=32;
        }
    }
    r=y;
    for (int i=0;i<n;i++) {
       if (r[i]!=' ') {
           if (r[i]>='a'&&r[i]<='z') {
               r[i]-=32;
           }
           v.push_back(r);
           r=y;
       }
    }
    for (string a : v) {
        cout<<a<<" ";
    }
}
