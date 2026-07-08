#include <iostream>
#include <vector>
using std::cout,std::cin,std::string,std::endl;

struct  ListNode {
    int val;
    ListNode *next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::string a;
        std::string b;
        ListNode *value = l1;
        while(value){
            a=std::to_string(value->val)+a;
            value = value->next;
        }
        ListNode *value_1 = l2;
        while(value_1){
            b=std::to_string(value_1->val)+b;
            value_1 = value_1->next;
        }
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
        ListNode *Head = nullptr;
        for (int i=0;i<m.length();i++) {
            if (Head == nullptr) {
                Head = new ListNode(m[i]-48);
            }else {
                ListNode *temp = new ListNode(m[i]-48);
                temp->next = Head;
                Head = temp;
            }
        }
        return Head;
    }

int main() {
    ListNode *Head = nullptr;
    int length_1 = 0;
    cout<<"Enter the length of first number: "<<endl;
    cin>>length_1;
    for (int i=0;i<length_1;i++) {
        if (Head == nullptr) {
            int n;cin>>n;
            Head = new ListNode(n);
        }else {
            int n;cin>>n;
            ListNode *temp = new ListNode(n);
            temp->next = Head;
            Head = temp;
        }
    }
    int length_2 = 0;
    cout<<"Enter the length of second number: "<<endl;
    cin>>length_2;
    ListNode *Head_1 = nullptr;
    for (int i=0;i<length_2;i++) {
        if (Head_1 == nullptr) {
            int n;cin>>n;
            Head_1 = new ListNode(n);
        }else {
            int n;cin>>n;
            ListNode *temp = new ListNode(n);
            temp->next = Head_1;
            Head_1 = temp;
        }
    }
    ListNode *print;
    print = addTwoNumbers(Head,Head_1);
    while (print) {
        cout<<print->val;
        print = print->next;
    }
    delete print;
    delete Head_1;
    delete Head;
}
