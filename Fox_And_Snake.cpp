#include<iostream>
using namespace std;
int main(){
    int row=0,col=0;
    cin>>row>>col;
    string final;
    bool flag=false;
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            if (i%2==0) {
                final+="#";
            }
            else {
                if (j==col-1&&flag==false) {
                    final+='#';
                }
                else if (j==0&&flag==true) {
                    final+="#";
                }
                else {
                    final+=".";
                }
            }
        }
        if (i%2!=0) {
            if (flag==false) {
                flag=true;
            }
            else {
                flag=false;
            }
        }
        final+="\n";
    }
    cout<<final<<endl;
}
