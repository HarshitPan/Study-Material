#include<iostream>
using namespace std;
const int key=4;

int toDecimal(int x)
{
    int temp=1;
    int i=0;
    int decimal=0;
    while(x!=0)
    {
        decimal+=(x%10)*temp;
        temp=temp*2;
        x=x/10;
    }
    //cout<<endl<<"Decimal ->"<<decimal<<endl;
    return decimal;
}
int toBinary(int x)
{
    int temp=0;
    int i=1;
    while(x!=0)
    {
        temp+=i*(x%2);
        x=x/2;
        i*=10;
    }
    return temp;
}
int toInt(char a[],int length)
{
    int temp=1;
    int data=0;
    for(int i=length-1;i>=0;i--)
    {
        //cout<<endl<<data<<" "<<temp<<" "<<a[i]<<endl;
        data+= (int(a[i])-48)*temp;
        temp*=10;
    }    
    //cout<<endl<<"Int ->" <<data<<endl;
    return data;
}
void toString(int x,char data[])
{
    int i=0;
    while(x!=0)
    {
        data[key-i-1]=x%10+48;
        x/=10;
        i++;
    }
    //cout<<data;
}

int _1sCompliment(int data,int length)
{
    //cout<<"IN COMPLIMENT";
    char data_string[length];
    toString(data,data_string);
    //cout<<"String good"<<endl;
    for(int i=0;i<key;i++)
    {
        if(data_string[i]=='0')
        {
            data_string[i]='1';
        }
        else
        {
            data_string[i]='0';
        }
    }
    //cout<<"answer ->"<<data_string<<endl;
    return toInt(data_string,length);
}

int calCode(char data[][key+1],int length)
{
    int sum=0;
    for(int i=0;i<key;i++)
    {
        //cout<<"sum ->"<<sum<<" "<<data[i];
        sum+= toDecimal(toInt(data[i],length));
        //cout<<endl;
    }
    //cout<<sum<<" -> "<<toBinary(sum)<<endl;
    sum=toBinary(sum);
    int check=1;
    for(int i=0;i<key;i++)
    {
        check*=10;
    }
    int carry=sum/check;
    if(carry!=0)
    {
        sum=sum%check;
        sum=toDecimal(sum)+toDecimal(carry);
    }
    return _1sCompliment(toBinary(sum),length);
}


int main()
{
    char data[]="1011010101110101";
    cout<<"Data is -> "<<data;
    int length=0;
    for(int i=0;data[i]!='\0';i++)length++;
    char new_data[length/key][key+1];
    int k=0;
    for(int i=0,j=0;i<length;i++,j++)
    {
        if(j==key)
        {
            j=0;
        }
        if(i%key==0 && i!=0) k++;
        new_data[k][j]=data[i];    
    }
    // for(int i=0;i<length/key;i++)
    // {
    //     for(int j=0;j<key;j++)
    //     {
    //         cout<<new_data[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    for(int i=0;i<key;i++)
    {
        new_data[i][key]='\0';
    }
    // for(int i=0;i<key;i++)
    // {
    //     cout<<new_data[i]<<endl;
    // }
    int code=calCode(new_data,length/key);
    cout<<"\nCode is -> "<<code;
    cout<<endl;
    return 0;
}