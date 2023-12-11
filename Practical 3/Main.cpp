#include <iostream>
#include <string>
using namespace std;

class Publication
{
private:
    string title;
    float price;

public:
    Publication(string title = "", float price = 0.0)
    {
        this->title = title;
        this->price = price;
    }

    void insertData()
    {
        cin.ignore();
        cout << "Enter the title: ";
        getline(cin, title);
        cout << "Enter the price: ";
        cin >> price;
    }

    void displayData()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication
{
private:
    int page_count;

public:
    Book(string title = "", float price = 0.0, int page_count = 0)
    {
        Publication(title, price);
        this->page_count = page_count;
    }

    void insertData()
    {
        Publication::insertData();
        cout << "Enter the page count: ";
        cin >> page_count;
    }

    void displayData()
    {
        Publication::displayData();
        cout << "Page count: " << page_count << endl;
    }
};

class Tape : public Publication
{
    float playing_time;

public:

    Tape(string title = "", float price = 0.0, float playing_time = 0.0){
        Publication(title, price);
        this->playing_time = playing_time;
    }

    void insertData()
    {
        Publication::insertData();
        cout << "Enter the playing time (in minutes): ";
        cin >> playing_time;
    }

    void displayData()
    {
        Publication::displayData();
        cout << "Playing time (in minutes): " << playing_time << endl;
    }
};

int main()
{
    Book b;
    Tape t;

    try
    {
        b.insertData();
        b.displayData();

        t.insertData();
        t.displayData();
    }
    catch (...)
    {
        cout << "An exception occurred. All data members have been replaced with zero values." << endl;
        b = Book();
        t = Tape();
        b.displayData();
        t.displayData();
    }

    return 0;
}
