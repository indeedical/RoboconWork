#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int digitc[10]={0};
    if (num==0)
    {
        digitc[0]=1;
    }
    else
    {
        while (num>0)
        {
            int d= num % 10;
            digitc[d]++;
            num/=10;
        }

    }
    cout<<"Digit count for each number:"<<endl;
    for (int i=0;i<10;i++)
    {
        if (digitc[i]>0)
        {
            cout<<"Digit " <<i<<":"<<digitc[i]<<endl;
        }
    }
}