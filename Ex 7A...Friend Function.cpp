#include <iostream>
#include<conio.h>
using namespace std;
class friendfunc
{
    float a,b,c,d,e;
    friend void cal_avg(friendfunc &);
    public:
        void get_data()
        {
            cout<<"\nEnter 5 different values:\n";
            cin>>a>>b>>c>>d>>e;
            }

};
void cal_avg(friendfunc &f)
{
    float avg=(f.a+f.b+f.c+f.d+f.e)/5;
    cout<<"Average ="<<avg;
    }
    int main()
    {
        friendfunc ob;
        ob.get_data();
        cal_avg(ob);
        getch();
        }
