#include <iostream>
using namespace std;
float price(char serviceCode, char period, float time);
string letter(char serviceCode);
main()
{
    char serviceCode, period;
    float time;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    if (serviceCode == 'R' || serviceCode == 'r')
    {
        cout << "Enter the number of minutes used: ";
        cin >> time;
        cout << "Service Type: " << letter(serviceCode) << endl;
        cout << "Total Minutes Used: " << time << " minutes" << endl;
        cout << "Amount Due: $" << price(serviceCode, period, time);
    }
    else if (serviceCode == 'P' || serviceCode == 'p')
    {

        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> period;
        cout << "Enter the number of minutes used: ";
        cin >> time;
        cout << "Service Type: " << letter(serviceCode) << endl;
        cout << "Total Minutes Used: " << time << " minutes" << endl;
        cout << "Amount Due: $" << price(serviceCode, period, time);
    }
}
float price(char serviceCode, char period, float time)
{
    float charges;
    float time1;
    if ((serviceCode == 'P' || serviceCode == 'p') && (period == 'N' || period == 'n') && time <= 100)
    {
        charges = 25;
    }
    if ((serviceCode == 'P' || serviceCode == 'p') && (period == 'D' || period == 'd') && time <= 75)
    {
        charges = 25;
    }
    if ((serviceCode == 'P' || serviceCode == 'p') && (period == 'N' || period == 'n') && time > 100)
    {
        time1 = time - 100;
        charges = 25 + (0.05 * time1);
    }
    if ((serviceCode == 'P' || serviceCode == 'p') && time > 75)
    {
        time1 = time - 75;
        charges = 25 + (0.10 * time1);
    }
    if ((serviceCode == 'R' || serviceCode == 'r') && time > 50)
    {
        time1 = time - 50;
        charges = 10.00 + (0.20 * time1);
    }
    if ((serviceCode == 'P' || serviceCode == 'p') && (period == 'D' || period == 'd') && time > 50)
    {
        time1 = time - 50;
        charges = 10.00 + (0.20 * time1);
    }
    return charges;
}
string letter(char serviceCode)
{
    if (serviceCode == 'P' || serviceCode == 'p')
    {
        return ("Premium");
    }
    if (serviceCode == 'R' || serviceCode == 'r')
    {
        return ("Regular");
    }
}