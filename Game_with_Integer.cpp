#include<iostream>
namespace apple {
    void print(const std::string& string) {
        std::cout<<string<<std::endl;
    }
}
int main(){
    int test=0;std::cin>>test;
    while (test--) {
        int Case=0;std::cin>>Case;
        if (Case%3==0) {
            apple::print("Second");
        }
        else {
            apple::print("First");
        }
    }
}
