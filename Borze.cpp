#include<iostream>
using namespace std;
int main(){
    string input;
    cin>>input;
    int n=input.length();
    string final;
    for (int i=0;i<n;i++) {
        if (input[i]=='-'&&input[i+1]=='-') {
            final+=to_string(2);
            i++;
        }
        else if (input[i]=='-'&&input[i+1]=='.') {
            final+=to_string(1);
            i++;
        }
        else {
            final+=to_string(0);
        }
    }
    cout<<final<<endl;
}
