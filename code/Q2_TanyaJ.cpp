#include <iostream>
using namespace std;
class Robot
{
    private:
    int speed, battery;
    public:
    Robot() : speed(0), battery(100){}
    int setSpeed()
    {
        cout<<"Speed: "<<endl;
        cin>>speed;
        if (speed>100 || speed<0)
        {
            cout<<"Invalid Input";
        }
    }
    int setBattery()
    {
        cout<<"Battery: "<<endl;
        cin>>battery;
        if (battery>100 || battery<0)
        {
            cout<<"Invalid Input";
        }
    }
    int moveForward()
    {
        if(battery==0)
        {
            cout<<"Battery discharged"<<endl;
        }
        else
        {
            battery-=5;
        }
    }
    int moveBackward()
    {
        if(battery==0)
        {
            cout<<"Battery discharged"<<endl;
        }
        else
        {
            battery-=5;
        }
    }
    int turnLeft()
    {
        if(battery==0)
        {
            cout<<"Battery discharged"<<endl;
        }
        else
        {
            battery-=5;
        }
    }
    int turnRight()
    {
        if(battery==0)
        {
            cout<<"Battery discharged"<<endl;
        }
        else
        {
            battery-=5;
        }
    }
    int getSpeed()
    {
        return speed;
    }

    int getBattery()
    {
        return battery;
    }
};
int main()
{
    Robot r;
    r.setSpeed();
    r.setBattery();
    char c;
    int n;
    cout<<"Enter number of movements: "<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"Enter movement (F- forward, B- backward, L- left, R- right)"<<endl;
        cin>>c;
        if (c=='F')
        {
            r.moveForward();
        }
        else if (c=='B')
        {
            r.moveBackward();
        }
        else if (c=='L')
        {
            r.turnLeft();
        }
        else if (c=='R')
        {
            r.turnRight();
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
    cout<<"Robot Speed: "<<r.getSpeed()<<endl;
    cout<<"Battery: "<<r.getBattery()<<endl;
    return 0;
}