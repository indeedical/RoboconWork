#include <iostream>
using namespace std;
char c;
class Robot
{
public:
    void mf(int S)
{
    cout<<"Robot is moving forward with speed: "<<S<<endl;
}
void mb(int S)
{
    cout<<"Robot is moving back with speed: "<<S<<endl;
}
void mr(int S)
{
    cout<<"Robot is moving right with speed: "<<S<<endl;
}
void ml(int S)
{
    cout<<"Robot is moving left with speed: "<<S<<endl;
}
};
int main()
{
    Robot r;
    int S;
    cout<<"Enter speed: "<<endl;
    cin>>S;
    cout<<"Enter your choice: F for forward, B for back, R for right, L for left:"<<endl;
    cin>>c;
    switch(c)
        {
            case 'F':
                r.mf(S);
                break;
            case 'B':
                r.mb(S);
                break;
            case 'R':
                r.mr(S);
                break;
            case 'L':
                r.ml(S);
                break;
            default: cout<<"Incorrect input"<<endl;
        }
    return 0;
}