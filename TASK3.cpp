#include<iostream>
using namespace std;

string findZodiacSign(int day,string month);

main()
{
    string month;
    int day;

    cout << "Enter the day of birth: ";
    cin >> day;

    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;

    string zodaicSign=findZodiacSign(day,month);
    cout << "Zodiac Sign: " << zodaicSign ;
}
string findZodiacSign(int day,string month)
{
    string zodaicSign;
    
    if((day<=21 && month=="March") || (day<=19 && month=="April"))
    {
        zodaicSign="Aries";
    }
    else if((day<=20 && month=="April") || (day<=20 && month=="May"))
    {
        zodaicSign="Taurus";
    }
    else if((day<=21 && month=="May") || (day<=20 && month=="June"))
    {
        zodaicSign="Gemini";
    }
    else if((day<=21 && month=="June") || (day<=22 && month=="July"))
    {
        zodaicSign="Cancer";
    }
    else if((day<=23 && month=="July") || (day<=22 && month=="August"))
    {
        zodaicSign="Leo";
    }
    else if((day<=23 && month=="August") || (day<=22 && month=="September"))
    {
        zodaicSign="Virgo";
    }
    else if((day<=23 && month=="September") || (day<=22 && month=="October"))
    {
        zodaicSign="Libra";
    }
    else if((day<=23 && month=="October") || (day<=21 && month=="November"))
    {
        zodaicSign="Scorpio";
    }
    else if((day<=22 && month=="November") || (day<=21 && month=="December"))
    {
        zodaicSign="Sagittarius";
    }
    else if((day<=22 && month=="December") || (day<=19 && month=="January"))
    {
        zodaicSign="Capricorn";
    }
    else if((day<=20 && month=="January") || (day<=18 && month=="February"))
    {
        zodaicSign="Aquarius";
    }
    else if((day<=19 && month=="February") || (day<=20 && month=="March"))
    {
        zodaicSign="Pisces";
    }
    return zodaicSign;
}