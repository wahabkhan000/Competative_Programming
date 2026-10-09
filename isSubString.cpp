#include <iostream>

int isSubstring(const std::string &txt,const std::string &pt) {
    int index = 0;
    int last_index = -1;
    int backup_index = 0;

    while (txt[index] != '\0') {
        if (txt[index] == pt[0]) {
            int index_copy = index;
            backup_index = last_index;
            last_index = index;
            int pt_index = 0;
            while (pt[pt_index] != '\0') {
                if (pt[pt_index] != txt[index_copy]) {
                    last_index = backup_index;
                    break;
                }
                pt_index++;
                index_copy++;
            }
        }
        index++;
    }
    return last_index;
}

int main() {
    std::string txt;
    std::cin>>txt;
    std::string pt;
    std::cin>>pt;
    int index = isSubstring(txt,pt);
    if (index == -1) {
        std::cout<<"Not a subString\n";
    }
    else {
        std::cout<<"Present at "<<index<<"\n";
    }
}
