#include <iostream>
using namespace std;
int main (void)
{
    float mindis, maxdis, sum=0, avg=0, count20, count100;
    float dis[10]={};
    for (int i=0; i<10; i++)
    {
       cout<<"Enter distance: "<<i+1<<":"<<endl;
       cin>>dis[i];
    }
    for (int i=0; i<10; i++)
    {
        if (dis[i]<dis[i+1]&&dis[i]<mindis)
        {
            mindis=dis[i];
        }
        else if(dis[i]>dis[i+1])
        {
            maxdis=dis[i];
        }
    }
    for (int i=0; i<10; i++)
    {
        sum=sum + dis[i];
    }
    avg=sum/10;
    for (int i=0; i<10; i++)
    {
        if (dis[i]<20)
        {
            count20++ ;
        }
        else if (dis [i]>100)
        {
            count100++ ;
        }
    }
    cout<<"The minimum distance is: "<<mindis<<endl;
    cout<<"The maximum distance is: "<<maxdis<<endl;
    cout<<"The average distance is: "<<avg<<endl;
    cout<<"Number of distances less than 20: "<<count20<<endl;
    cout<<"Number of distances greater than 100: "<<count100<<endl;

}