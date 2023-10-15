#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

main()
{
    string yearType;
    int holidays,hometownWeekends;

    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;

    int numberOfGames = calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout <<numberOfGames;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{  
    if (yearType=="leap" || yearType=="normal")
    {
        float weeksInYear=48;
        float weeksNottraveling=(weeksInYear-hometownWeekends)*3.0/4.0;
        float playingdays=weeksNottraveling+hometownWeekends+holidays*2.0/3.0;
    
        if (yearType=="leap")
        {
            playingdays=playingdays+(playingdays*15)/100;
        }
        if(yearType=="normal")
        {
            playingdays=playingdays;
        }
        int result = floor(playingdays);
        return result;
    }
}
