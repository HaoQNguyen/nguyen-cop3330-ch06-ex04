#include "function.h"

int main()
{
    vector<Name_value> v;

    string name;
    int value;
    int sameName = 0;

    while (true)
    {
        cout << "Enter name followed by value. Enter \"NoName 0\" to finish: ";
        cin >> name;
        cin >> value;

        if ((name == "NoName") && (value == 0))
            break;

        for (int i = 0; i < v.size(); ++i)
        {
            if(v[i].getName() == name)
            {
                printf("Name already entered!\n");
                sameName = 1;
                break;
            }
        }

        if (sameName == 1)
        {
            sameName = 0;
            continue;
        }

        Name_value newNameValue;
        newNameValue.setName(name);
        newNameValue.setValue(value);
        v.push_back(newNameValue);
    }

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].getName() << " - " << v[i].getValue() << endl;
    }

    return 0;
}