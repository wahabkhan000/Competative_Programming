#include <string>
#include<iostream>
using namespace std;

string createPhoneNumber(int arr [10]){
  string s;
  s="("+to_string(arr[0])+to_string(arr[1])+to_string(arr[2])+")"+" "
    +to_string(arr[3])+to_string(arr[4])+to_string(arr[5])+"-"
    +to_string(arr[6])+to_string(arr[7])+to_string(arr[8])+to_string(arr[9]);
  return s;
}
int main(){
  int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  cout<<createPhoneNumber(arr);
}
