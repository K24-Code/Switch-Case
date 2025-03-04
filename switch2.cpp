#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade: ";
    cin>>grade;

    switch(grade){
        case 'A': cout<<"Your Basic Salary is 15,000"<<endl;
        break;
        case 'B': cout<<"Your Basic Salary is 12,000"<<endl;
        break;
        case 'C': cout<<"Your Basic Salary is 10,000"<<endl;
        break;
        case 'D': cout<<"Your Basic Salary is 9,000"<<endl;
        break;
        default: cout<<"Invalid Grade Code"<<endl;

    }
    return 0;
}