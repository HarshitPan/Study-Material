#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int n=26;
    int key;
    char encrupt[100];
    int size=0;
    cout<<"Enter key(Integer) ->";
    cin>>key;
    cout<<endl<<"Enter the string ->";
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        int value=str[i]-65;
        value=(value+key)%n;
        encrupt[i]=65+value;
        size++;
    }
    cout<<"\nAdditive Cypher -> ";
    for(int i=0;i<size;i++)
    {
        cout<<encrupt[i];
    }
    cout<<endl;
    return 0;
}