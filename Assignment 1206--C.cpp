#include<iostream>
#include<string>
using namespace std;

class Showroom
{
    string ShowroomName;
    int NumberOfCarsAvailable;
    int ShowroomArea;
    int ShowroomID;

public:
    Showroom(string name, int cars, int area, int id)
    {
        ShowroomName = name;
        NumberOfCarsAvailable = cars;
        ShowroomArea = area;
        ShowroomID = id;
    }

    Showroom(Showroom &ref)
    {
        ShowroomName = ref.ShowroomName;
        NumberOfCarsAvailable = ref.NumberOfCarsAvailable;
        ShowroomArea = ref.ShowroomArea;
        ShowroomID = ref.ShowroomID;
    }

    void show()
    {
        cout << "Showroom Name: " << ShowroomName << endl;
        cout << "Number of Cars Available: " << NumberOfCarsAvailable << endl;
        cout << "Showroom Area: " << ShowroomArea << endl;
        cout << "Showroom ID: " << ShowroomID << endl;
    }
};

int main()
{
    Showroom s1("City Motors", 50, 1000, 201);
    Showroom s2("Highway Autos", 30, 600, 202);
    Showroom s3 = s1;

    s1.show();
    cout << "------------------" << endl;
    s2.show();
    cout << "------------------" << endl;
    s3.show();

    return 0;
}

