#include<iostream>
using namespace std;

void trial(int a,void (*c)(int))
{
    c(a);
    cout<<endl<<a;
}
void disp(int x)
{
    cout<<"Hello World...";
}

int main()
{
    trial(10,disp);
    return 0;   
}