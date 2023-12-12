#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Record
{
    string name;
    string dob;
    string telephone_number;
};

bool compare(Record r1, Record r2)
{
    return r1.name < r2.name;
}

int main()
{
    vector<Record> records = {
        {"Suhas Nidgundi", "17/12/2004", "8767087357"},
        {"Sanskruti Pawar", "29/09/2004", "0000000000"},
        {"Mayuresh Mane", "12/01/2003", "0897123421"},
        {"Nikhil Thorat", "04/04/2003", "0987654321"},
        {"Anand Nidgundi", "05/05/2004", "1234567890"}};

    cout << "Unsorted Records:" << endl;
    for (auto record : records)
    {
        cout << "Name: " << record.name << ", DOB: " << record.dob << ", Telephone Number: " << record.telephone_number << endl;
    }

    sort(records.begin(), records.end(), compare);

    cout << "Sorted Records:" << endl;
    for (auto record : records)
    {
        cout << "Name: " << record.name << ", DOB: " << record.dob << ", Telephone Number: " << record.telephone_number << endl;
    }

    return 0;
}
