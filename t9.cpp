#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int height, int x, int y);

main()
{
    int height, x, y;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    string result = checkPointPosition(height, x, y);
    cout << result;
}

string checkPointPosition(int height, int x, int y)
{

    if ((x >= 0 && x <= 3 * height && (y == 0 || y == height)))
    {
        return "Border";
    }
    else if ((y >= 0 && y <= 4 * height && (x == 0 || x == 2 * height)))
    {
        return "Border";
    }
    else if ((x == height && y >= height && y <= 3 * height))
    {
        return "Border";
    }
    else if (x > 0 && x < 2 * height && y > 0 && y < 4 * height)
    {
        return "Inside";
    }
    else
    {
        return "Outside";
    }
}