#include <string>
#include <iostream>
using namespace std;

bool IsLeapYear(int num)
{

    return (num % 400 == 0 || (num % 100 != 0 && num % 4 == 0));
}

int Day(int num)
{
    return IsLeapYear(num) ? 366 : 365;
}

int Hours(int num)
{
    return Day(num) * 24;
}

int Minutes(int num)
{
    return Hours( num) * 60;
}

int Seconds(int num)
{
    return  Minutes(num)* 60;
}

int ReadNumber()
{
    int Number;
    cout << "\nEnter a Number? ";
    cin >> Number;
    return Number;
}


int main()
{
    int num=ReadNumber();
    int day=Day(num);
    int houres=Hours(num);
    int minuts=Minutes(num);
    int seconds=Seconds(num);
    cout << "Number of Days in Year [ "<< num<<" ] is "<<day <<endl;
    cout << "Number of Hours in Year [ "<< num<<" ] is "<<houres <<endl;
    cout << "Number of Minutes in Year [ "<< num<<" ] is "<<minuts <<endl;
    cout << "Number of Seconds in Year [ "<< num<<" ] is "<<seconds <<endl;
    return 0;
}