#include <iostream>
using namespace std;
string findZodiacSign(int birthDate, string month);
main()
{
    int birthDate;
    string month;
    cout << "Enter the day of birth: ";
    cin >> birthDate;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    string final = findZodiacSign(birthDate, month);
    cout << "Zodiac Sign: " << final;
}
string findZodiacSign(int birthDate, string month)
{
    string result;
    if ((month == "March" && birthDate <= 21) || (month == "April" && birthDate <= 19))
    {
        result = "Aries";
    }
    else if ((month == "April" && birthDate <= 20) || (month == "May" && birthDate <= 20))
    {
        result = "Taurus";
    }
    else if ((month == "May" && birthDate <= 21) || (month == "June" && birthDate <= 20))
    {
        result = "Gemini";
    }
    else if ((month == "June" && birthDate <= 21) || (month == "July" && birthDate <= 22))
    {
        result = "Cancer";
    }
    else if ((month == "July" && birthDate <= 23) || (month == "August" && birthDate <= 22))
    {
        result = "Leo";
    }
    else if ((month == "August" && birthDate <= 23) || (month == "September" && birthDate <= 22))
    {
        result = "Virgo";
    }
    else if ((month == "September" && birthDate <= 23) || (month == "October" && birthDate <= 22))
    {
        result = "Libra";
    }
    else if ((month == "October" && birthDate <= 23) || (month == "November" && birthDate <= 21))
    {
        result = "Scorpio";
    }
    else if ((month == "November" && birthDate <= 22) || (month == "December" && birthDate <= 21))
    {
        result = "Sagittarius";
    }
    else if ((month == "December" && birthDate <= 22) || (month == "January" && birthDate <= 19))
    {
        result = "Capricorn";
    }
    else if ((month == "January" && birthDate <= 22) || (month == "February" && birthDate <= 18))
    {
        result = "Aquarius";
    }
    else if ((month == "February" && birthDate <= 19) || (month == "March" && birthDate <= 20))
    {
        result = "Pisces";
    }
    return result;
}