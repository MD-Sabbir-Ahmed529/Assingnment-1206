#include<iostream>
#include<string>
using namespace std;

class Library
{
    string LibraryName;
    int TotalBooks;
    int SittingCapacity;
    int LibraryID;

public:
    Library(string name, int books, int capacity, int id)
    {
        LibraryName = name;
        TotalBooks = books;
        SittingCapacity = capacity;
        LibraryID = id;
    }

    Library(Library &ref)
    {
        LibraryName = ref.LibraryName;
        TotalBooks = ref.TotalBooks;
        SittingCapacity = ref.SittingCapacity;
        LibraryID = ref.LibraryID;
    }

    void show()
    {
        cout << "Library Name: " << LibraryName << endl;
        cout << "Total Number of Books: " << TotalBooks << endl;
        cout << "Total Sitting Capacity: " << SittingCapacity << endl;
        cout << "Library ID: " << LibraryID << endl;
    }
};

int main()
{
    Library l1("Central Library", 15000, 300, 101);
    Library l2("Engineering Library", 8000, 150, 102);
    Library l3 = l1;

    l1.show();
    cout << "------------------" << endl;
    l2.show();
    cout << "------------------" << endl;
    l3.show();

    return 0;
}
