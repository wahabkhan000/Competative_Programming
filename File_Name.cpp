#include<iostream>
#include<string>
namespace print {
    void cout(const int data) {
        std::cout<<data<<std::endl;
    }
}
int main(){
    int length=0;std::cin>>length;
    char input[length];
    std::cin>>input;
    input[length]=' ';
    int remove_count=0,final_count=0;
    int i=0;
    while (input[i]!='\0'){
        if (input[i]=='x') {
            remove_count++;
        }
        else {
            if (remove_count>=3) {
                remove_count-=2;
                final_count+=remove_count;
            }
            remove_count=0;
        }
        i++;
    }
    print::cout(final_count);
}
