#include<iostream>
using namespace std;

string decideActicity(string temperature,string humidity);

main()
{
    string temperature,humidity,result;
    
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;;

    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

    result=decideActicity(temperature,humidity);
    cout << "Recommended activity: " << result ;
}
string decideActicity(string temperature,string humidity)
{
    if(temperature=="warm")
    {
        if (humidity=="dry")
        {
            return "Play tennis" ;
        }
        if(humidity=="humid")
        {
            return "Swim" ;
        }
    }
    if(temperature=="cold")
    {
        if(humidity=="dry")
        {
            return "Play basketball" ;
        }
        if(humidity=="humid")
        {
            return "Watch TV" ;
        }
    }
}