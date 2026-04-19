# include <iostream>
using namespace std;
int main() {
    int lenght;
    cout<<"Enter the length of array: ";
    cin>>lenght;
    int find_numbers_time;
    cout<<"Enter the number of times you want to find the number: ";
    cin>>find_numbers_time;
    int arr[lenght];
    cout<<"Enter the entities of array at once or one by one: ";
    for (int i=0;i<lenght;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<lenght;i++){
        int count=1;
        for (int j=i+1;j<lenght;j++) {
            if (arr[j]==arr[i]) {
                count++;
            }
            if (count==find_numbers_time) {
                cout<<"The number "<<"\""<<arr[i]<<"\""<<" occurs "<<"\""<<find_numbers_time<<"\""<<" times at "<<"\""<<i<<"\""<<" and "<<"\""<<j<<"\""<<" index in given array."<<endl;
                return 0;
            }
        }
    }
    cout<<"There is not any number which occurs "<<"\""<<find_numbers_time<<"\""<<" times in given array"<<endl;
    return 0;
}
