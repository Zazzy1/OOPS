#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

cout<<"\n\n\n\tElectricity Board Charges\n";
cout<<"\n\tTo Discourage Large Consumption of energy\n\n";



char name[20];
cout<<"\n\nEnter USER name :-";
cin>>name;

cout<<"\n\nEnter Number of Units Consumed:-";
float unit;
cin>>unit;

float tc;
if(unit<=100)
    tc=unit*0.60;
else if(unit<=200)
    tc=unit*0.80;
else
    tc=unit*0.90;


float surchase=0;
if(tc>300)
    surchase=tc*0.15;

float total_cost;
total_cost = 50 + surchase + tc;

cout<<"\n\nYOUR BILL AMOUNT IS "<<total_cost;

getch();
}
