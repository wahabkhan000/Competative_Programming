#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int index_row=0;
    int index_col=0;
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin>>arr[i][j];
            if (arr[i][j]==1) {
                index_row=i;
                index_col=j;
            }
        }
    }
    if (index_col>=2) {
        index_col-=2;
    }
    else {
        index_col=2-index_col;
    }
    if (index_row>=2) {
        index_row-=2;
    }
    else {
        index_row=2-index_row;
    }
    cout<<index_col+index_row<<endl;
}
