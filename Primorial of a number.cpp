#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
  if(n==0){
    return 1;
  }
  else if (n<0) {
        int b=-1*n;
        int c=1;
        for (int i=1;i<=b;i++) {
            c=c*i;
        }
        int count=0;
        while (b>0) {
            b=b-1;
            count++;
        }
        if (count%2==0) {
            return c;
        }
        else {
            return (-1*c);
        }
    }
  else{
     int c=1;
        for (int i=1;i<=n;i++) {
            c=c*i;
        }
    return c;
  }
}
