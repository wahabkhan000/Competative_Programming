#include <iostream>
#include<vector>
using namespace std;
int main() {
    int loop_variable=0;
    cin>>loop_variable;
    for (int i=0;i<loop_variable;i++) {
        bool flag=false;
        vector<int>input(3);
        for (int j=0;j<3;j++) {
            cin>>input[j];
        }
        for (int k=0;k<3;k++) {
            for (int l=k+1;l<3;l++) {
                if (input[k]+input[l]>=10) {
                    flag =true;
                }
            }
        }
        if (flag) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
