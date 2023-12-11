#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile("output.txt");

    if (outfile.is_open())
    {
        outfile << "This is the first line of the file." << endl;
        outfile << "This is the second line of the file." << endl;
        outfile.close();
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    ifstream infile("output.txt");

    if (infile.is_open())
    {
        string line;
        while (getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    return 0;
}
