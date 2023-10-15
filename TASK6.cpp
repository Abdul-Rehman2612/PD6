#include<iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);

main()
{
    int numberOfStays;
    string month,hotelPrices;

    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;

    cout << "Enter the number of stays: ";
    cin >> numberOfStays;

    hotelPrices = calculateHotelPrices(month,numberOfStays);
    cout << hotelPrices ;
}
string calculateHotelPrices(string month,int numberOfStays)
{
    float priceAppartmentStay,totalPriceApartment;
    if (numberOfStays>14)
    {
        if (month=="May" || month=="October")
        {
            priceAppartmentStay=65;
            priceAppartmentStay=priceAppartmentStay-(priceAppartmentStay*0.1);
        }
        else if (month=="June" || month=="September")
        {
            priceAppartmentStay=68.70;
            priceAppartmentStay=priceAppartmentStay-(priceAppartmentStay*0.1);
        }
        else if(month=="July" || month=="August")
        {
            priceAppartmentStay=77;
            priceAppartmentStay=priceAppartmentStay-(priceAppartmentStay*0.1);
        }
    }
    else
    {
        if (month=="May" || month=="October")
        {
            priceAppartmentStay=65;
        }
        else if (month=="June" || month=="September")
        {
            priceAppartmentStay=68.70;
        }
        else if (month=="July" || month=="August")
        {
            priceAppartmentStay=77;
        }
    }

    float priceStudioStay,totalPriceStudio;
    if(month=="May" || month=="October")
    {
        if(numberOfStays>7 && numberOfStays<=14)
        {   
            priceStudioStay=50;
            priceStudioStay=priceStudioStay-(priceStudioStay*0.05);
            
        }
        else if(numberOfStays>14)
        {
            priceStudioStay=50;
            priceStudioStay=priceStudioStay-(priceStudioStay*0.3);
        }
        else
        {
            priceStudioStay=50;
        }
    }
    else if(month=="June" || month=="September")
    {
        if(numberOfStays>14)
        {
            priceStudioStay=75.20;
            priceStudioStay=priceStudioStay-(priceStudioStay*0.2);
        }
        else
        {
            priceStudioStay=75.20;
        }
    }
    else if(month=="July" || month=="August")
    {
        priceStudioStay=76;
    }
    totalPriceStudio=numberOfStays*priceStudioStay;
    totalPriceApartment=numberOfStays*priceAppartmentStay;
    return "Apartment: "+to_string(totalPriceApartment)+"$.\nStudio: "+to_string(totalPriceStudio)+"$.";
}