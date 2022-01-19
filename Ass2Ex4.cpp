/* WAP to input Distance between the Cities in Km and Convert it into Meter,Centimeter,Feet and 
Inches */

#include<iostream>

using namespace std;

float converttometer(float dist)
{
   return dist*1000;
}

float coverttocentimeter(float dist)
{
    return dist*100000;
}

float converttofeet(float dist)
{
    return dist*3280.83;
}

float  converttoinches(int dist)
{
    return dist*39370.079;
}

int main()
{
    float dist;

    cout<<"\n Enter distance between two Cities in Km : ";
    cin>>dist;

    float meter = converttometer(dist);
    cout<<"\n"<<dist<<" Km in meter is equal to "<<meter;

    float cen = coverttocentimeter(dist);
    cout<<"\n"<<dist<<" Km in centimeter is equal to "<<cen;

    float feet = converttofeet(dist);
    cout<<"\n"<<dist<<" Km in feet is equal to "<<feet;

    float inches = converttoinches(dist);
    cout<<"\n "<<dist<<" Km in inches is equal to "<<inches;

    return 0;
}