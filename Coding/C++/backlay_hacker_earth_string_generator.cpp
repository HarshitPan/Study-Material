#include<bits/stdc++.h>
using namespace std;

int check_string(string s,string s1,int i,int l)
{
    int check=0;
    for(int j=i;j<i+l;j++)
    {
        if(s[j]!=' ')
        {
            if(s[j]!=s1[j-i])
            {
                return check;
            }
        }
    }
    return 1;
} 

string add_string(string s,string s1,int i,int l)
{
    for(int j=i;j<i+l;j++)
    {
        if(s[j]==' ')
        {
            s[j]=s1[j-i];
        }
    }
    return s;
}

string find_string(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    string s="";
    int check;
    for(int i=0;i<l1+l2-1;i++)
    {
        s=s+" ";
    }
    for(int i=0;i<l2;i++)
    {
        if(s2[i]=='T')
        {
            check=check_string(s,s1,i,l1);
            if(check)
            {
                s=add_string(s,s1,i,l1);
            }
            else
            {
                return "-1";
            }
        }
    }
    for(int i=0;i<l1+l2-1;i++)
    {
        if(s[i]==' ')
            s[i]='A';
    }
    return s;
}

int main()
{
    string s1,s2;
    cout<<"Enter s1 ->";
    cin>>s1;
    cout<<"Enter s2 ->";
    cin>>s2;
    cout<<"Answer ->"<<find_string(s1,s2)<<endl;
    return 0;

}