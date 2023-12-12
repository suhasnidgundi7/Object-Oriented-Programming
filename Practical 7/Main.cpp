#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> state_populations = {
        {"California", 39538223},
        {"Texas", 29145505},
        {"Florida", 21538187},
        {"New York", 20201249},
        {"Pennsylvania", 13002700}};

    string state_name;
    cout << "Enter the name of a state: ";
    getline(cin, state_name);

    if (state_populations.find(state_name) != state_populations.end())
    {
        cout << "The population of " << state_name << " is " << state_populations[state_name] << "." << endl;
    }
    else
    {
        cout << "The state " << state_name << " was not found in the map." << endl;
    }

    return 0;
}
