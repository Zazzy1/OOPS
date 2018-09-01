#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct bio
{
    char name[20];
    int age;
    float sal;
    char designation[20];
    };
    int main()
    {
          int i;
          struct bio info[2];
          for(int i=0;i<2;i++)
            {
                  cout<<"Enter the data : name, age, salary, designation"<<endl;
          cin>>info[i].name>>info[i].age>>info[i].sal>>info[i].designation;
          }
            for(i=0;i<2;i++)
                {
                      cout<<"Given Data for obj["<<i<<"]:- "<<endl;
            cout<<"+++++++++++++++++++++++++++\n";
            cout<<"Name  : "<<info[i].name<<endl;
            cout<<"Age  : "<<info[i].age<<endl;
            cout<<"Salary : "<<info[i].sal<<endl;
            cout<<"Address : "<<info[i].designation<<endl;
            }
              cout<<"Size of the structure Student is :"<<sizeof(info[0]);
              getch();
              }
