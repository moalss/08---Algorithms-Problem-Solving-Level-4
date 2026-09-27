#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int num){
    return (num%400==0|| (num%100!=0 && num%4==0)); 
}


int main()
{
if(IsLeapYear(2004)){
    cout << "Leap Year";
}else{
    cout <<"Not Leap Year";
}

}