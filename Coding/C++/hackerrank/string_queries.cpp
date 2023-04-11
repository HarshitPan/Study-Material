#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char strings[200][1000],queries[200][1000];
    int count[1000];
    int str_size,que_size;
    cin>>str_size;
    for(int i=0;i<str_size;i++)
    {
        scanf("%s",strings[i]);
    }
    cin>>que_size;
    for(int i=0;i<que_size;i++) count[i]=0;
    for(int i=0;i<que_size;i++)
    {
        scanf("%s",queries[i]);
    }
    for(int i=0;i<que_size;i++)
    {
        for(int j=0;j<str_size;j++)
        {
            if(!strcmp(strings[j],queries[i]))
            {
                count[i]++;
            }
        }
    }
    for(int i=0;i<que_size;i++) cout<<count[i]<<endl;
    return 0;
}