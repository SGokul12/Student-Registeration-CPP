#include<iostream>
using namespace std;
struct stu
{
    int i ;
    int regno,m1,m2,m3,n;
    char name[10];
    float avg,tot;
}s1[10];
class student
{
    public:
    int i,n;
    void getdata();
    void calc();
    void display();
};
void student::getdata()
{
    cout<<"enter the no of students:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the regno:";
        cin>>s1[i].regno;
        cout<<"enter the name:";
        cin>>s1[i].name;
        cout<<"enter the mark1:";
        cin>>s1[i].m1;
        cout<<"enter the mark2:";
        cin>>s1[i].m2;
        cout<<"enter the mark3:";
        cin>>s1[i].m3;
    } 
}
void student::calc()
{
    for(i=0;i<n;i++)
    {
        s1[i].tot=s1[i].m1+s1[i].m2+s1[i].m3;
        s1[i].avg=s1[i].tot/3;
    }
}
void student::display()
{
    for(i=0;i<n;i++)
    {
        cout<<"Name:"<<s1[i].name;
        cout<<"Regno:"<<s1[i].regno;
        cout<<"Marks:"<<s1[i].m1<<endl<<s1[i].m2<<endl<<s1[i].m3<<endl;
        cout<<"Total:"<<s1[i].tot;
        cout<<"Average:"<<s1[i].avg;
    }
}
int main()
{
    student s;
    s.getdata();
    s.calc();
    s.display();
    return 0;
}