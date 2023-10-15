#include<iostream>
using namespace std;
float serviceCharges(char serviceCode,int minutes,char time);
main()
{
    float totalAmountDue;
    int minutes;
    char serviceCode,time;
    string service;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;

    if(serviceCode=='P' || serviceCode=='p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    totalAmountDue=serviceCharges(serviceCode,minutes,time);

    if(serviceCode=='P' || serviceCode=='p')
    {
        service="Premium";
        cout << "Service Type: " << service << endl;
    }
    if(serviceCode=='R' || serviceCode=='r')
    {
        service="Regular";
        cout << "Service Type: " << service << endl;
    }
    cout << "Total Minutes Used: " << minutes << " minutes" << endl ;
    cout << "Amount Due: $" << totalAmountDue ; 
    
}
float serviceCharges(char serviceCode,int minutes,char time)
{
    float amountDue=0.0;
    if(serviceCode=='P' || serviceCode=='p')
    {
        if((time=='d') || (time=='D'))
        {
            if(minutes<=75)
            {
                amountDue=25;
            }
            if(minutes>75)
            {
                amountDue=25+(minutes-75)*0.10;
            }
        }
        if((time=='n') || (time=='N'))
        {
            if(minutes<=100)
            {
                amountDue=25;
            }
            if(minutes>100)
            {
                amountDue=25+(minutes-100)*0.05;
            }
        }
    }
    if(serviceCode=='R' || serviceCode=='r')
    {
        if(minutes<=50)
        {
            amountDue=10;
        }
        if(minutes>50)
        {
            amountDue=10+(minutes-50)*0.20;
        }
    }
    return amountDue;
}