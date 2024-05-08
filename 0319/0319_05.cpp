#include <iostream>
#include <string>
using namespace std;

class DeskLamp
{
private:
    bool isOn;
public:
    void turnOn();
    void turnOff();
    void print();
};

void DeskLamp::turnOn()
{
    isOn = true;
}

void DeskLamp::turnOff()
{
    isOn = false;
}

void DeskLamp::print()
{
    cout << "램프가 " << (isOn == true ? "켜짐" : "꺼짐") << endl;
}

int main()
{
    DeskLamp lamp;
    lamp.turnOn();
    lamp.print();
    lamp.turnOff();
    lamp.print();
    
    return 0;
}
