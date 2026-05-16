#include<iostream>
using namespace std;
int main(){
    int test_case=0;
    cin>>test_case;
    for (int i=0;i<test_case;i++) {
        int length=0;
        cin>>length;
        string input;
        cin>>input;
        int count=0;
        int start=0,end=length-1;
        while (start<=end) {
            if (input[start]!=input[end]) {
                count++;
            }
            else {
                break;
            }
            start++,end--;
        }
        cout<<length-2*(count)<<endl;
    }
}
