#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of played matches: ";
    cin>>n;
    string s;
    cout<<"Enter the Leaderboard score ony for Anton(A) and Danik(D): ";
    cin>>s;
    int start=0;
    int count1=0;
    int count=0;
    for (int i=0;i<n;i++) {
        if (s[start]=='A') {
            count1++;
        }
        else {
            count++;
        }
        start++;
    }
    if (count1>count) {
        cout<<"Anton Win";
    }
    else if (count>count1){
        cout<<"Danik Win ";
    }
    else {
        cout<<"Friendship (Tie)";
    }
}
