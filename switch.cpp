#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter a Alphabet: ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'A': cout<<"It is a vowel "<<endl;
        break;
        case 'e':
        case 'E': cout<<"It is a vowel "<<endl;
        break;
        case 'i':
        case 'I': cout<<"It is a vowel "<<endl;
        break;
        case 'o':
        case 'O': cout<<"It is a vowel "<<endl;
        break;
        case 'u':
        case 'U': cout<<"It is a vowel "<<endl;
        break;
        default: cout<<"The Given Alphabet is not a Vowel"<<endl;

    }
    return 0;
}