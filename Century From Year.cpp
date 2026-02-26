#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int year,n;
    cout<<"Enter the year: ";
    cin>>year;
    n=year%100;
    if (n == 0) {
        cout<<year/100;
    }
    else {
        n = year/100;
        n++;
        cout<<"This is "<<n<<"th century";
    }
    return 0;
}
