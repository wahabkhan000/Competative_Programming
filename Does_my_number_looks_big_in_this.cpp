#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int value;
    cin>>value;
    int m=value;
    int count=0;
    int a=value;
  // For getting the value of maximum power
    while(value>0){
        int b=value%10;
        value=value/10;
        count++;
    }
    int f=0;
  // For obtaining the value of final integer 
    while(a>0){
        int b=a%10;
        a=a/10;
        int c=1;
        int j=count;
        while (j>0) {
            j=j-1;
            c=c*b;
        }
        f=f+c;
    }
    if (m==f) {
        cout<<true;
    }
    else {
        cout<<false;
    }
}
