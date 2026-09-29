#include <iostream>
using namespace std;
int main (void)
{
    int marks[6]={};
    for (int i=0; i<6; i++)
    {
       cout<<"Enter marks of student "<<i+1<<":"<<endl;
       cin>>marks[i];
    }
    cout<<"Marks of students are: "<<marks[0]<<", "<<marks[1]<<", "<<marks[2]<<", "<<marks[3]<<", "<<marks[4]<<", "<<marks[5]<<endl;
    return 0;
}