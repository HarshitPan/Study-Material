#include<iostream>
using namespace std;

void toCapital(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<97+26)
        {
            a[i]=a[i]-(97-65);
        }
    }
} 

int isPresent(char arr[][5],char ascii,int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(ascii=='I' || ascii=='J')
            {
                if(arr[i][j]=='I' || arr[i][j]=='J')
                {
                    return 1;
                }
            }
            else
            {
                if(arr[i][j]==ascii)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int getRow(char mat[][5],char ascii)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]==ascii)
            {
                return i;
            }
        }
    }
    return -1;
}

int getColumn(char mat[][5],char ascii)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]==ascii)
            {
                return j;
            }
        }
    }
    return -1;
}


int main()
{
    char key[100];
    char mat[5][5];
    int added=0;
    cout<<"Enter key ->";
    cin>>key;
    char msg[100];
    cout<<"Enter message ->";
    cin>>msg;
    for(int i=0;msg[i]!='\0';i+=2)
    {
        if(msg[i+1]=='\0')
        {
            msg[i+2]='\0';
            msg[i+1]='X';
            break;
        }
        if(msg[i]==msg[i+1])
        {
            int j;
            for(j=i+1;msg[j]!='\0';j++);
            msg[j+1]='\0';
            for(;j!=i+1;j--)
            {
                msg[j]=msg[j-1];
            }
            msg[i+1]='X';
        }
    }
    cout<<msg;
    char ascii=65;
    int index=0;
    toCapital(key);
    toCapital(msg);
    //cout<<key<<" "<<msg;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;)
        {
            if(added)
            {
                if(isPresent(mat,ascii,i))
                {
                    ascii++;
                    continue;
                }
                mat[i][j]=ascii;
                ascii++;
                j++;
            }
            else 
            {
                if(key[index]=='\0')
                {
                    added=1;
                    continue;
                }
                if(isPresent(mat,key[index],i))
                {
                    index++;
                    continue;
                }
                mat[i][j]=key[index];
                index++;
                j++;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    char encrupt[100];
    int pos=0;
    for(int i=0;msg[i]!='\0';i+=2)
    {
        int r1=getRow(mat,msg[i]);
        int c1=getColumn(mat,msg[i]);
        int r2=getRow(mat,msg[i+1]);
        int c2=getColumn(mat,msg[i+1]);
        if(r1==r2)
        {
            encrupt[pos++]=mat[r1][(c1-1)%5];
            encrupt[pos++]=mat[r2][(c2-1)%5];
        }
        else if(c1==c2)
        {
            encrupt[pos++]=mat[(r1+1)%5][c1];
            encrupt[pos++]=mat[(r2+1)%5][c2];
        }
        else 
        {
            encrupt[pos++]=mat[r1][c2];
            encrupt[pos++]=mat[r2][c1];
        }
    }
    encrupt[pos++]='\0';
    cout<<endl<<"Change -> "<<msg<<" "<<encrupt;
    cout<<endl;
    return 0;
}