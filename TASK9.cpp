#include<iostream>
using namespace std;

string checkPointPosition(int h, int x,int y);

main()
{
    int h,x,y;
    
    cout << "Enter height: ";
    cin >> h;

    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    cout << checkPointPosition(h,x,y);
}
string checkPointPosition(int h, int x, int y)
{
    int sizeofbox;
    if(x<=h && x > 0)
    {
        sizeofbox=h*h;
        if((x==0 || x==h) && y<=h)
        {
            return "Border";
        }
        else if(y<h)
        {
            return "Inside";
        }
        else
        {
            return "Outside";
        }
        
    }
    else if(x>h && x<=(h*2))
    {
        sizeofbox=4*h*h;
        if((x==h || x==(2*h)) && y<=(4*h))
        {
            return "Border";
        }
        else if(y<(4*h))
        {
            return "Inside";
        }
        else
        {
            return "Outside";
        }
    }
    else if(x>(2*h) && x<=(3*h))
    {
        sizeofbox=h*h;
        if((x==(h*3) || x==(h*4)) && y<=h)
        {
            return "Border";
        }
        if(y<h)
        {
            return "Inside";
        }
        else
        {
            return "Outside";
        }
    }
    else
    {
        return "Outside";
    }
    
}