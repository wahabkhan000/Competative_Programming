#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        int count_A=0;
        int count_B=0;
        for (int j=0;j<5;j++) {
            if (s[j]=='A') {
                count_A++;
            }
            else {
                count_B++;
            }
        }
        if (count_A>count_B) {
            cout<<"A"<<endl;
        }
        else {
            cout<<"B"<<endl;
        }
    }
}
