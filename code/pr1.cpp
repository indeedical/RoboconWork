#include <iostream>
using namespace std;
class SmartSpeaker
{
    public:
    int setVolume(int l)
    {
        cout<<"Volume set to:"<<l<<endl;
    }
    int setBrightness(int l)
    {
        cout<<"Brightness set to:"<<l<<endl;
    }
    int setBass(int l)
    {
        cout<<"Bass set to:"<<l<<endl;
    }
    int setTreble(int l)
    {
        cout<<"Treble set to:"<<l<<endl;
    }
};
int main()
{
    SmartSpeaker SS;
    int l;
    char c;
    cout<<"Enter choice, V for volume, B for brightness, S for Bass, T for treble: ";
    cin>> c;
    cout<<"Enter value for level:";
    cin>> l;
    switch(c)
    {
        case 'V':
        SS.setVolume(l);
        break;
        case 'B':
        SS.setBrightness(l);
        break;
        case 'S':
        SS.setBass(l);
        break;
        case 'T':
        SS.setTreble(l);
        break;
        default: cout<<"Invalid input"<<endl;

    }
    return 0;
}