#include<iostream>
using namespace std;
char* timeConversion(char *s)
{
    char *new_time=new char[8];
    if(s[8]=='A' && s[0]=='1' && s[1]=='2')
    {
        new_time[0]='0';
        new_time[1]='0';
    }
    else if(s[8]=='P' && s[0]=='1' && s[1]=='2')
    {
        new_time[0]='1';
        new_time[1]='2';
    }
    else if(s[8]=='P')
    {
        int a=int(s[0]);
        int b=int(s[1]);
        a-=48;
        b-=48;
        a=a*10+b;
        a+=12;
        for(int j=1;j>=0;j--)
        {
            int temp=(a%10)+48;
            new_time[j]=char(temp);
            a/=10;
        }
    }
    else 
    {
        new_time[0]=s[0];
        new_time[1]=s[1];
    }
    int i=2;
    for(;i<8;i++)
    {
        new_time[i]=s[i];
    }
    return new_time;
}
int main()
{
    char *time=new char[10];
    scanf("%s",time);
    char *new_time=timeConversion(time);
    for(int i=0;i<8;i++)
    {
        cout<<new_time[i];
    }
    return 0;
}