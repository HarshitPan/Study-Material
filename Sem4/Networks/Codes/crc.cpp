#include<iostream>
using namespace std;

void remainder_xor(char data[],int len_data,char divisor[],int len_div,char remainder[])
{
    // for(int i=0;i<len_data;i++)
    // {
    //     cout<<data[i]<<" , ";
    // }
    // cout<<endl;

    for(int i=0;i<=len_data-len_div;i++)
    {
        if(data[i]=='1')
        {
            //cout<<"inside..."<<endl;
            for(int j=i;j<len_div+i;j++)
            {
                //cout<<data[j]<<" "<<j<<" "<<divisor[j-i]<<" "<<j-i<<endl;
                if(data[j]==divisor[j-i])
                {
                    data[j]='0';
                }
                else 
                {
                    data[j]='1';
                }
            }
        }
        // for(int i=0;i<len_data;i++)
        // {
        //     cout<<data[i]<<" , ";
        // }
        // cout<<endl<<i<<endl;
        // cout<<endl;
    }
    // for(int i=0;i<len_data;i++)
    // {
    //     cout<<data[i]<<" , ";
    // }
    // cout<<endl<<"remainder";
    for(int i=len_div-2,j=len_data-1;i>=0;j--,i--)
    {
        //cout<<endl<<data[j];
        remainder[i]=data[j];
    }
}

int main()
{
    char data[100]; //="1101100";
    char divisor[100];  //="1101";
    cout<<"Enter data ->";
    cin>>data;
    cout<<"Enter divisor ->";
    cin>>divisor;
    int len_div=0,len_data=0;
    for(int i=0;divisor[i]!='\0';i++) len_div++;
    for(int i=0;data[i]!='\0';i++) len_data++;
    char remainder[len_div];
    remainder[len_div-1]='\0';
    char new_data[len_data+len_div-1];
    for(int i=0;i<len_data;i++)
    {
        new_data[i]=data[i];
    }
    for(int j=len_data;j<len_data+len_div-1;j++)
    {
        new_data[j]='0';
    }
    // for(int i=0;i<len_data+len_div-2;i++)
    // {
    //     cout<<new_data[i]<<endl;
    // }
    new_data[len_data+len_div-1]='\0';
    //cout<<data<<" "<<new_data<<" "<<divisor<<endl;
    remainder_xor(new_data,len_data+len_div-1,divisor,len_div,remainder);
    // code=data+reminder;
    cout<<"Data -> "<<data<<endl;
    cout<<"Code Generated is -> "<<data<<remainder<<endl;
    return 0;
}