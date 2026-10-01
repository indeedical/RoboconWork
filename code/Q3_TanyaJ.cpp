#include <iostream>
using namespace std;
int r[8]={};
int readv(int s[8])
{
    for (int i=0; i<8; i++)
    {
        cout<<"Enter value "<<(i+1)<<endl;
        cin>>r[i];
    }
}
int linep(int s[8])
{
    int sum=0, activateds=0;
    for (int i=0; i<8; i++)
    {
        if (r[i]==1)
        {
            sum+=i;
            activateds++;
        }

    }
    if (activateds==0)
    {
        return -1;
    }
    return ((double) sum/activateds);
}
int movement(double p)
{
    if(p<0)
    {
        cout<<"Line Lost";
    }
    else if(p>=3.0&&p<=4.0)
    {
        cout<<"Line Position: Center \n Action: Move Forward";
    }
    else if(p<3)
    {
        cout<<"Line Position: Left \n Action: Move Left";
    }
    else
    {
        cout<<"Line Position: Right \n Action: Move Right";
    }
}
int main()
{
    readv(r);
    double p= linep(r);
    movement(p);
    return 0;
}