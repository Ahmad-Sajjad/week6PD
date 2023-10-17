#include <iostream>

using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int homeTownhomeTownWeekends);

main()
{
    string yearType;
    int holidays, weekends;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> weekends;
    int result = calculateVolleyballGames(yearType, holidays, weekends);
    cout << result;
}

int calculateVolleyballGames(string yearType, int holidays, int homeTownWeekends)
{
    int total;
    int a;

    if (yearType == "leap")
    {
        holidays = holidays * 0.67;
        homeTownWeekends = homeTownWeekends * 0.75;
        total = holidays + homeTownWeekends;
        a = 48 - 48 * 0.15;
        a = a + total + 1;
    }

    else
    {
        holidays = holidays * 0.67;
        homeTownWeekends = homeTownWeekends * 0.75;
        total = holidays + homeTownWeekends;
        a = 48 - 48 * 0.15;
        a = a + total;
        a = a - a * 0.15;
        if (a >= 44)
            a += 2;
        else
            a += 1;
    }
    return a;
}