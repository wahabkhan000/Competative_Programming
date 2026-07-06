#include <iostream>
#include <cmath>
using std::cout,std::cin,std::string,std::endl;
int main() {
    double h = 0, a = 0, o = 0;
    cin>>h>>a>>o;
    double rad = (180/3.141592653589793);
    if (h == 0) {
        double angle = std::atan(o/a);
        double radian = rad * angle;
        radian = std::round(radian);
        cout<<radian<<endl;
    }
    else if (a == 0) {
        double angle = std::asin(o/h);
        double radian  = rad * angle;
        radian = std::round(radian);
        cout<<radian<<endl;
    }
    else if (o == 0) {
        double angle = std::acos(a/h);
        double radian  = rad * angle;
        radian = std::round(radian);
        cout<<radian<<endl;
    }
}
