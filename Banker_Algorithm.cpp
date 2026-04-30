#include<iostream>
using namespace std;
int main() {
    int loop_variable=3;
    char a='A';
    int row_index=0;
    int saved_index=0;
    int row_index_copy[3];
    int execution[3];
    int allocated_resources[3][3];
    int Max_need[3][3];
    int remaining_need[3][3];
    int total_available_resources[3];
    int total_allocated_resources[3];
    cout<<"=========================== \"For simplicity\" We assume the number of processes are 3 =========================="<<endl;
    cout<<endl;
    cout<<"========== \"For simplicity\" We assume the total resources are A = \"CPU\", B = \"PRINTER\", C = \"MEMORY\" =========="<<endl;
    cout<<endl;
    for (int i=0;i<loop_variable;i++) {
        cout<<"Please enter the number of available resource of "<<a<<": ";
        cin>>total_available_resources[i];
        a++;
    }
    a='A';
    for (int i=0;i<loop_variable;i++) {
        for (int j=0;j<loop_variable;j++) {
            cout<<"Please enter the numbers of allocated resources of "<<a<<" to process "<<i+1<<" :";
            cin>>allocated_resources[i][j];
            a++;
        }
        a='A';
    }
    for (int i=0;i<loop_variable;i++) {
        for (int j=0;j<loop_variable;j++) {
            cout<<"Please enter the numbers of Maximum Need of "<<a<<" of process "<<i+1<<" :";
            cin>>Max_need[i][j];
            a++;
        }
        a='A';
    }
    for (int i=0;i<loop_variable;i++) {
        for (int j=0;j<loop_variable;j++) {
            if (allocated_resources[i][j]<Max_need[i][j]) {
                remaining_need[i][j]=Max_need[i][j]-allocated_resources[i][j];
            }
            else {
                remaining_need[i][j]=0;
            }
        }
    }
    for (int i=0;i<loop_variable;i++) {
        total_allocated_resources[i]=allocated_resources[0][i]+allocated_resources[1][i]+allocated_resources[2][i];
        if (total_available_resources[i]>total_allocated_resources[i]) {
            total_available_resources[i]-=total_allocated_resources[i];
        }
        else {
            total_available_resources[i]=0;
        }
    }
    cout<<"The availability of Resources are given below: "<<endl;
    for (int i=0;i<loop_variable;i++) {
        if (remaining_need[i][0]<=total_available_resources[0] &&
            remaining_need[i][1]<=total_available_resources[1] &&
            remaining_need[i][2]<=total_available_resources[2]) {
            total_available_resources[0]+=allocated_resources[i][0];
            total_available_resources[1]+=allocated_resources[i][1];
            total_available_resources[2]+=allocated_resources[i][2];
            execution[saved_index]=i;
            saved_index++;
            for (int j=0;j<loop_variable;j++) {
                cout<<total_available_resources[j]<<" ";
            }
            cout<<endl;
        }
        else {
            execution[2]=i;
            row_index_copy[row_index]=i;
            row_index++;
        }
    }
    for (int i=0;i<loop_variable;i++) {
        if (i==row_index_copy[i]) {
            if (remaining_need[i][0]<=total_available_resources[0] &&
            remaining_need[i][1]<=total_available_resources[1] &&
            remaining_need[i][2]<=total_available_resources[2]) {
                total_available_resources[0]+=allocated_resources[i][0];
                total_available_resources[1]+=allocated_resources[i][1];
                total_available_resources[2]+=allocated_resources[i][2];
            }
            else {
                auto n=0;
                cout<<"========== Danger! Deadlock will occur =========="<<endl;
                cout<<"Press any key to stop!";
                if (cin>>n) {
                    return 0;
                }
            }
        }
    }
    for (int i=0;i<loop_variable;i++) {
        cout<<total_available_resources[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Processes will execute in this order: ";
    for (int i=0;i<loop_variable;i++) {
        cout<<"P"<<execution[i]<<" ";
    }
    cout<<endl;
    cout<<"--------------------------------------------\n"
          "| PSID | Alloc Res | Max--Need | Remn-Need |\n"
          "|  P0  |  "<<allocated_resources[0][0]<<"  "<<allocated_resources[0][1]<<"  "<<allocated_resources[0][2]<<"  |  "<<Max_need[0][0]<<"  "<<Max_need[0][1]<<"  "<<Max_need[0][2]<<"  |  "<<remaining_need[0][0]<<"  "<<remaining_need[0][1]<<"  "<<remaining_need[0][2]<<"  |\n"
          "|  P1  |  "<<allocated_resources[1][0]<<"  "<<allocated_resources[1][1]<<"  "<<allocated_resources[1][2]<<"  |  "<<Max_need[1][0]<<"  "<<Max_need[1][1]<<"  "<<Max_need[1][2]<<"  |  "<<remaining_need[1][0]<<"  "<<remaining_need[1][1]<<"  "<<remaining_need[1][2]<<"  |\n"
          "|  P2  |  "<<allocated_resources[2][0]<<"  "<<allocated_resources[2][1]<<"  "<<allocated_resources[2][2]<<"  |  "<<Max_need[2][0]<<"  "<<Max_need[2][1]<<"  "<<Max_need[2][2]<<"  |  "<<remaining_need[2][0]<<"  "<<remaining_need[2][1]<<"  "<<remaining_need[2][2]<<"  |\n"
          "--------------------------------------------";
}
