#include <iostream>
#include <cmath>
using std::cout,std::cin,std::endl;

struct Node {
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    int test = 0; cin>>test;
    for (int i = 0; i<test; i++) {
        int length = 0; cin>>length;
        Node *Head = NULL;
        for (int j = 0; j<length; j++) {
            if (Head == NULL) {
                int input = 0; cin>>input;
                Head = new Node(input);
            }
            else {
                int input = 0; cin>>input;
                Node *temp = new Node(input);
                temp->next = Head;
                Head = temp;
            }
        }
        Node *Print = Head;
        long long int sum=0;
        while (Print!=NULL) {
            sum += Print->data;
            Print = Print->next;
        }
        double square = sqrt(sum);
        if (square-(int)square == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        delete Head;
    }
}
