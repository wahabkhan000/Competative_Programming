#include <iostream>
using std::cout,std::cin,std::endl;

int main() {
    int numerator = 0;
    int denominator = 0;
    cout<<"Enter numerator:"<<endl;
    cin>>numerator;
    cout<<"Enter denominator:"<<endl;
    cin>>denominator;
    int divisor=2;
    while (divisor<=numerator && divisor<=denominator) {
        if (numerator%divisor == 0 && denominator%divisor == 0) {
            numerator/=divisor;
            denominator/=divisor;
            divisor=2;
        }
        else {
            divisor++;
        }
    }
    cout<<numerator<<"/"<<denominator<<endl;
}
