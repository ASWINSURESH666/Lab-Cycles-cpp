#include <iostream>
using namespace std;
class student
{
private:
    std::string name,grade;
    int roll_no;
    int mark1,mark2,mark3;

public:
    void input();
    char calcgrade(int, int, int);
    void display();
};

void student::input()
{   
    cout << "\nEnter your name: ";
    cin >> name;
    cout << "\n enter your roll no: ";
    cin >> roll_no;
    cout << "\n enter the marks out of 100";
    cout << "\n enter the mark of subject 1: ";
    cin >> mark1;
    cout << "\n enter the mark of subject 2: ";
    cin >> mark2;
    cout << "\n enter the mark of subject 3: ";
    cin >> mark3;
}

char student::calcgrade(int m1, int m2, int m3)
{
    int tm, tg;
    char grade;
    tm = m1 + m2 + m3;
    tg = (tm / 3);
    if (tg >= 90)
    {
        grade = 'A';
    }
    else if (tg >= 80 and tg < 90)
    {
        grade = 'B';
    }
    else if (tg >= 70 and tg < 80)
    {
        grade = 'C';
    }
    else if (tg >= 60 and tg < 70)
    {
        grade = 'D';
    }
    else if (tg >= 50 and tg < 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}

void student::display()
{
    if (mark1,mark2,mark3>100)
    {
        cout << "you have been entered invalid mark";
    }
    else
    {
        cout << "\n****Result****";
        cout << "\n students name:" << name;
        cout << "\n roll_no" << roll_no;
        cout << "\n grade=" << calcgrade(mark1, mark2, mark3)<<"\n" ;
    }
}

int main()
{
    student a1,a2,a3;
    a1.input();
    a1.display();
    a2.input();
    a2.display();
    a3.input();
    a3.display();
}