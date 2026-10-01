#include <iostream>
using namespace std;
double a[5]={};
int td=30;
double bias=0.0;
bool flag= true;
int main()
{
    for (int i=0; i<5; i++)
{
    cout<<"Enter value "<<i+1<<" "<<endl;
    cin>>a[i];
}
for (int i=0;i<5;i++)
{
    if (a[i]<=30)
    {
        bias+=(2-i)*(td-a[i]);
        flag=false;
    }
}
if(flag==false)
{
    if (bias==0.0)
{
    cout<<"Emergency break"<<endl;
}
else if (bias>0)
{
    cout<<"Steer left"<<endl;
}
else if (bias<0)
{
    cout<<"Steer right"<<endl;
}
}
else
{
    cout<<"Path Clear - Cruise Speed"<<endl;
}
return 0;
}
