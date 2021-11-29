#include <iostream>
#include <vector>

using namespace std;

class Name_value
{
    private:
        string name;
        int value;
    
    public:
        Name_value()
        {
            name = "";
            value = 0;
        }

        void setName(string n)
        {
            name = n;
        }

        void setValue(int v)
        {
            value = v;
        }

        string getName()
        {
            return name;
        }

        int getValue()
        {
            return value;
        }
};