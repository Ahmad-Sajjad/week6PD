#include <iostream>
using namespace std;
string calculateHotelPrice(string month, int days);
main()
{
    string month;
    int days;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;
    string result = calculateHotelPrice(month, days);
    cout<<result;
}
string calculateHotelPrice(string month, int days)
{
    float studioPrice, apartmentPrice;
    if ((month == "May" || month == "October") && days <= 7)
    {
        studioPrice = 50;
        apartmentPrice = 65;
    }
    else if ((month == "May" || month == "October") && (days > 7 && days <= 14))
    {
        studioPrice = 50;
        studioPrice = studioPrice - studioPrice * 0.05;
        apartmentPrice = 65;
    }
    else if ((month == "May" || month == "October") && days > 14)
    {
        studioPrice = 50;
        studioPrice = studioPrice - studioPrice * 0.3;
        apartmentPrice = 65;
        apartmentPrice = apartmentPrice - apartmentPrice * 0.1;
    }
    if ((month == "June" || month == "September") && days <= 7)
    {
        studioPrice = 75.20;
        apartmentPrice = 68.70;
    }
    else if ((month == "June" || month == "September") && days > 14)
    {
        studioPrice = 75.20;
        studioPrice = studioPrice - (studioPrice * 0.2);
        apartmentPrice = 68.70;
        apartmentPrice = apartmentPrice - (apartmentPrice * 0.1);
    }
    else if ((month == "June" || month == "September") && days == 14)
    {
        studioPrice = 75.20;
        apartmentPrice = 68.70;
    }
    if ((month == "July" || month == "August") && days <= 7)
    {
        studioPrice = 76;
        apartmentPrice = 77;
    }
    else if ((month == "July" || month == "August") && days > 14)
    {
        studioPrice = 76;
        apartmentPrice = 77;
        apartmentPrice = apartmentPrice - (apartmentPrice * 0.1);
    }
    apartmentPrice = apartmentPrice * days;
    studioPrice = studioPrice * days;

    return "Apartment: " + to_string(apartmentPrice) + "$.\nStudio: " + to_string(studioPrice) + "$.";
}
