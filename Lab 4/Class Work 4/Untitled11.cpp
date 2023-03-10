#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    
    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;

        default: 
            printf("Consonant");
    }

    return 0;
}
