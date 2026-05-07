#include <iostream>
#include <string>
using namespace std;
int main()
{
    int length,Time;
    cin>>length>>Time;
    string sequence;
    cin>>sequence;
    for(int j=0;j<Time;j++){
        for(int i=0;i<length;i++){
            if(sequence[i]=='B' && sequence[i+1]=='G'){
                swap(sequence[i],sequence[i+1]);
                i++;
            }
        }
    }
    cout<<sequence;
}
