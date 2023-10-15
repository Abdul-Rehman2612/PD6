#include<iostream>
using namespace std;
float calculateFruitPrices(string fruitName,string dayOfWeek,double quantity);

main()
{
    string fruitName,weekDay;
    double quantity;

    cout << "Enter the fruit name: ";
    cin >> fruitName ;

    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> weekDay ;

    cout << "Enter the quantity: ";
    cin >> quantity ;

    float price=calculateFruitPrices(fruitName,weekDay,quantity);
    if(price>=0.0)
    {
        cout << price ;
    }
    else
    {
        cout << "error";
    }

}
float calculateFruitPrices(string fruitName,string dayOfWeek,double quantity)
{
    float fruitPrices=0.0;
    if(dayOfWeek=="Monday" || dayOfWeek=="Tuesday" || dayOfWeek=="Wednesday" || dayOfWeek=="Thursday" || dayOfWeek=="Friday")
    {
        if(fruitName=="banana")
        {
            fruitPrices=2.50*quantity;
            return fruitPrices;
        }
        if(fruitName=="apple")
        {
            fruitPrices=1.20*quantity;
            return fruitPrices;
        }
        if(fruitName=="orange")
        {
            fruitPrices=0.85*quantity;
            return fruitPrices;
        }
        if(fruitName=="grapefruit")
        {
            fruitPrices=1.45*quantity;
            return fruitPrices;
        }
        if(fruitName=="kiwi")
        {
            fruitPrices=2.70*quantity;
            return fruitPrices;
        }
        if(fruitName=="pineapple")
        {
            fruitPrices=5.50*quantity;
            return fruitPrices;
        }
        if(fruitName=="grapes")
        {
            fruitPrices=3.85*quantity;
            return fruitPrices;
        }
    }
    else if(dayOfWeek=="Saturday" || dayOfWeek=="Sunday" )
    {
        if(fruitName=="banana")
        {
            fruitPrices=2.70*quantity;
            return fruitPrices;
        }
        if(fruitName=="apple")
        {
            fruitPrices=1.25*quantity;
            return fruitPrices;
        }
        if(fruitName=="orange")
        {
            fruitPrices=0.90*quantity;
            return fruitPrices;
        }
        if(fruitName=="grapefruit")
        {
            fruitPrices=1.60*quantity;
            return fruitPrices;
        }
        if(fruitName=="kiwi")
        {
            fruitPrices=3.00*quantity;
            return fruitPrices;
        }
        if(fruitName=="pineapple")
        {
            fruitPrices=5.60*quantity;
            return fruitPrices;
        }
        if(fruitName=="grapes")
        {
            fruitPrices=4.20*quantity;
            return fruitPrices;
        }
    }
    else
    {
        return -1;
    } 
}