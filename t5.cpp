#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, float quantity);
main()
{
    string fruit;
    string day;
    float quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;
    float result = calculateFruitPrice(fruit, day, quantity);
    if (result >= 0)
    {
        cout << result;
    }
    else
    {
        cout << "error";
    }
}
float calculateFruitPrice(string fruit, string day, float quantity)
{
    float price = 0;
    if ((day == "Saturday" || day == "Sunday") && fruit == "banana")
    {
        price = quantity * 2.70;
    }
    else if ((day == "Saturday" || day == "Sunday") && fruit == "apple")
    {
        price = quantity * 1.25;
    }
    else if ((day == "Saturday" || day == "Sunday") && fruit == "orange")
    {
        price = quantity * 0.90;
    }
    else if ((day == "Saturday" || day == "Sunday") && fruit == "grapefruit")
    {
        price = quantity * 1.60;
    }
    else if ((day == "Saturday" || day == "Sunday") && fruit == "kiwi")
    {
        price = quantity * 3.00;
    }
    else if ((day == "Saturday" || day == "Sunday") && fruit == "pineapple")
    {
        price = quantity * 5.60;
    }
    else if ((day == "Saturday" || day == "Sunday") && fruit == "grapes")
    {
        price = quantity * 4.20;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "grapes")
    {
        price = quantity * 3.85;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "pineapple")
    {
        price = quantity * 5.50;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "kiwi")
    {
        price = quantity * 2.70;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "grapefruit")
    {
        price = quantity * 1.45;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "orange")
    {
        price = quantity * 0.85;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "apple")
    {
        price = quantity * 1.20;
    }
    else if ((day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") && fruit == "banana")
    {
        price = quantity * 2.50;
    }
    else
    {
        return -1;
    }
    return price;
}