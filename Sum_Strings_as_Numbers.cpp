#include <iostream>
using std::cout,std::cin,std::string,std::endl;
int main() {
    string a;cin>>a;
    string b;cin>>b;
    string m;
    int first = a.length()-1;
    int second = b.length()-1;
    if (first>second) {
        int dif = first-second;
        second+=dif;
        for (int i=0;i<dif;i++) {
            b=std::to_string(0)+b;
        }
    }
    else if (second>first) {
        int dif = second-first;
        first+=dif;
        for (int i=0;i<dif;i++) {
            a=std::to_string(0)+a;
        }
    }
    int rem = 0;
    int first_num = 0,second_num = 0;
    while (first>=0||second>=0) {
        first_num = a[first]-48;
        second_num = b[second]-48;
        int sum = first_num+second_num+rem;
        m = std::to_string(sum%10)+m;
        rem = (sum)/10;
        first_num = 0,second_num = 0;
        first--,second--;
    }
    if (rem>0) {
        m=std::to_string(rem)+m;
    }
    cout<<m<<endl;
}
