#include <iostream>
#include <string>
using namespace std;


/*
durch 400 teilbar
ODER
durch 4 teilbar UND nicht durch 100 teilbar

sonst → kein Schaltjahr
*/
bool IsLeapYear(short year)
{

    if ((year % 400) == 0){

     
    }
    if(year %100==0){
    return false;
    }

     if(year %4==0){
    return true;
    }

    return false;
    
}

int ReadYear()
{
int year;
cout << "\nEnter a Year? ";
cin >> year;
return year;
}

int main()
{
if(IsLeapYear(1971)){
    cout << "Leap Year";
}else{
    cout <<"Not Leap Year";
}

}