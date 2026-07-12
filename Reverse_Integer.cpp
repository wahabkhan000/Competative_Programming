#include <iostream>
#include<cmath>
using std::cout,std::cin,std::endl;
class Solution {
public:
    int reverse(int y) {
        long long x = y;
        bool flag = false;
        if (x<0) {
            x *= -1;
            flag = true;
        }
        std::string a = std::to_string(x);
        int length = a.length()-1;
        long long int final_ans = 0;
        while (x>0) {
            int rem = x%10;
            long long int power = std::pow(10,length);
            power *= rem;
            final_ans+=power;
            length--;
            x/=10;
        }
        if (flag) {
            final_ans*=-1;
        }
        if(final_ans>2147483647||final_ans<-2147483648){
            return 0;
        }
        return final_ans;
    }
};
int main() {
    int value= 0;
    cin>>value;
    Solution s1;
    cout<<s1.reverse(value);
}
