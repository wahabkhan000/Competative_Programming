#include<iostream>
using namespace std;
int last_digit(long n) {
     int fact[10] = {1, 1,2,6,4,2,2,4,2,8};
    int result = 1;
    while (n>=10) {
        if (((n/10)%10)%2==0) {
            result = (result*6)%10;
        }
        else {
            result = (result*4)%10;
        }
        result = (result*fact[n%10])%10;
        n/=5;
    }
    result = (result*fact[n])%10;
    return result;
}
int main(){
  long int n = 0;
  cin>>n;
  cout<<last_digit(n)<<endl;
}
  
