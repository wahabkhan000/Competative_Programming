#include <iostream>
int main() {
    int arr[15];
    int search_value=0;
    int count=0;
    bool flag=false;
    std::cout<<"Enter the value in array: ";
    for(int i = 0; i < 15; i++){
        int number = 0;
        do{
            std::cin>>number;
        }while(number == 0);
        arr[i] = number;
    }
    int last=arr[14];
    std::cout<<"Enter search value: ";
    std::cin>>search_value;

    for(int i = 0; i < 15; i++){
        if(search_value == arr[i]){
            count++;
        }
    }

    for(int i=0;i<count;i++){
        flag=false;
        for(int j=0;j<15;j++){
            if(arr[j] == search_value){
                flag=true;
            }
            if(flag == true){
                arr[j]=arr[j+1];
            }
        }
    }

    for(int i=15-count;i<15;i++){
        arr[i]=last;
    }

    for(int i=0;i<15;i++){
        std::cout<<arr[i]<<" ";
    }

}
