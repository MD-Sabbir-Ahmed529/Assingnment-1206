#include<iostream>
#include<string>
using namespace std;

class IIUC_Auditorium
{
    float Area;
    float Floorspace;
    int Hallid;
    int Maxcapacity;

public:
    IIUC_Auditorium(float a,float f,int id,int capa)
    {
        Area=a;
        Floorspace=f;
        Hallid=id;
        Maxcapacity=capa;
    }
    IIUC_Auditorium(IIUC_Auditorium&ref)
    {
        Area=ref.Area;
        Floorspace=ref.Floorspace;
        Hallid=ref.Hallid;
        Maxcapacity=ref.Maxcapacity;
    }
    void show()
    {
        cout<<"area:"<<Area<<endl;
        cout<<"floor:"<<Floorspace<<endl;
        cout<<"hall id:"<<Hallid<<endl;
        cout<<"Max capacity:"<<Maxcapacity<<endl;
    }
};
int main()
{
    IIUC_Auditorium h1(2000.00,1800.6,101,300);
    IIUC_Auditorium h2(2500.00,2300.6,201,500);
    IIUC_Auditorium h3=h1;

    h1.show();
    h2.show();
    h3.show();

    return 0;

}
