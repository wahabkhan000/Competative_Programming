#include <iostream>
using std::cout,std::cin,std::string,std::endl;

string hex(int number) {
    string s;
    if (number>255) {
        number = 255;
    }
    if (number<0) {
        number = 0;
    }
    while (number>0) {
        int rem = number%16;
        char a = 'A';
        if (rem>9) {
            rem-=10;
            a=a+rem;
            s=a+s;
        }
        else {
            s=std::to_string(rem)+s;
        }
        number/=16;
    }
    if (s.length() == 0) {
        s=std::to_string(00)+s;
    }
    if (s.length()==1) {
        s=std::to_string(0)+s;
    }
    return s;
}

int main() {
    int r = 0,g = 0,b = 0;
    cin>>r>>g>>b;
    cout<<hex(r)+hex(g)+hex(b);
}
