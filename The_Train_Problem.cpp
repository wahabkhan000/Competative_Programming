#include <iostream>
#include <vector>
using std::cout,std::cin,std::string,std::endl,std::vector;
bool Comp(const string &before,const string &after) {
    int j=0,k=0;
    if (before.length() != after.length()) {
        return false;
    }
    string before_copy;
    string after_copy;
    for (int i=0;i<before.length();i++) {
        if (before[i]=='>'||before[i]=='<') {
            before_copy+=before[i];
            j++;
        }
        if (after[i]=='>'||after[i]=='<') {
            after_copy+=after[i];
            k++;
        }
    }
    if (after_copy==before_copy) {
        return true;
    }
    else {
        return false;
    }
}
bool comp(const string &before,const string &after) {
    if (before.length() != after.length()) {
        return false;
    }
    else {
        vector<int>b_1;vector<int>b_2;
        vector<int>c_1;vector<int>c_2;
        for (int i=0;i<before.length();i++) {
            if (before[i]=='>') {
                b_1.push_back(i);
            }
            if (before[i]=='<') {
                b_2.push_back(i);
            }
            if (after[i]=='>') {
                c_1.push_back(i);
            }
            if (after[i]=='<') {
                c_2.push_back(i);
            }
        }
        if (c_1.size()==b_1.size() && c_2.size()==b_2.size()) {
            for (int i=0;i<c_1.size();i++) {
                if (b_1[i]>c_1[i]) {
                    return false;
                }
            }
            for (int j=0;j<c_2.size();j++) {
                if (b_2[j]<c_2[j]) {
                    return false;
                }
            }
            return true;
        }
        else {
            return false;
        }
    }
}
int main() {
    string before;cin>>before;
    string after;cin>>after;
    cout<<(Comp(before,after)&comp(before,after));
}
