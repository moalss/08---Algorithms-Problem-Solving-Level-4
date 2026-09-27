#include <iostream>
#include <string>
using namespace std;

string NumberToText(int num)
{

    if (num == 0)
    {
        return "";
    }

    if (num >= 1 && num <= 19)
    {
        string arr[] = {"",
                        "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                        "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        return arr[num]+" ";
    }

    if (num >= 20 && num <= 99)
    {
        string arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        return arr[num/10] + NumberToText(num%10)+" "; //25 25/10= 2 Twenty  NumberToText(25%10)= 5 Five
    }

    if(num >= 100 && num <= 199){

        return "One Handret "+ NumberToText(num%100)+" "; //133  one Hundret -> 33 -> thirty -> 3 three

    }
    if(num >= 200 && num <= 999){

        return NumberToText(num/100)+" Hundret "+NumberToText(num%100)+" "; 

    }

     if(num >= 1000 && num <= 1999){

        return "One Tausand "+NumberToText(num%1000)+" "; 

    }

    if(num >= 2000 && num <= 999999){

        return NumberToText(num/1000)+" Tausands "+NumberToText(num%1000)+" "; 

    }

    if(num >= 1000000 && num <= 1999999){

        return "One Millone "+NumberToText(num%1000000)+" "; 

    }

    if(num >= 20000000 && num <= 99999999){

        return NumberToText(num/1000000)+"Millions "+NumberToText(num%1000000)+" "; 

    }

     if(num >= 100000000 && num <= 1999999999){

        return "One Billion "+NumberToText(num%1000000000)+" "; 

    }
  else{

        return NumberToText(num%1000000000) +"Billions "+NumberToText(num%1000000000)+" "; 

    }
}

int ReadNumber()
{
int Number;
cout << "\nEnter a Number? ";
cin >> Number;
return Number;


}

int main ()
{
   cout << NumberToText(ReadNumber());
    return 0;

}