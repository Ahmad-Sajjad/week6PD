#include<iostream>
using namespace std;

string checkStudentStatus(int startingHour, int startingMinutes, int arrivalHour, int arrivalMinutes);

main()
{
    int startingHour,startingMinutes,arrivalHour,arrivalMinutes;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> startingHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> startingMinutes;
    cout << "Enter Student hour of arrival: ";
    cin >> arrivalHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> arrivalMinutes;
    string result=checkStudentStatus(startingHour,startingMinutes,arrivalHour,arrivalMinutes);
    cout << result;
}
string checkStudentStatus(int startingHour, int startingMinutes, int arrivalHour, int arrivalMinutes)
{
    string m,h;
    int timeLeft,hourLefts,MinLeft,extraTime,extraHours,extraMin;
    if(startingHour>=24)
    {
        startingHour=startingHour%24;
    }
    if(arrivalHour>=24)
    {
        arrivalHour=arrivalHour%24;
    }
    int Time1=startingHour*60+startingMinutes;
    int Time2=arrivalHour*60+arrivalMinutes;
    if(Time1>Time2 && (Time1-Time2)>30)
    {
        timeLeft=Time1-Time2;
        hourLefts=timeLeft/60;
        MinLeft=timeLeft%60;
        if (hourLefts>=1)
        {
            m=to_string(MinLeft);
            h=to_string(hourLefts);
            return "Early\n"+h+":"+m+" hours before the start";
        }
        if(hourLefts<1)
        {
            m=to_string(MinLeft);
            return "Early\n"+m+" minutes before the start";
        }
    }
    else if(Time1>=Time2 && (Time1-Time2)<=30)
    {
        if(Time1==Time2)
        {
            return "On time";
        }
        else
        {
            m=to_string(Time1-Time2);
            return "On time\n"+m+" minutes before the start";
        }
    }
    else if(Time1<Time2)
    {
        extraTime=Time2-Time1;
        extraHours=extraTime/60;
        extraMin=extraTime%60;
        if (extraHours>=1)
        {
            m = to_string(extraMin);
            h = to_string(extraHours);
            return "Late\n"+h+":"+m+" hours after the start";
        }
        if(extraHours<1)
        {
            m = to_string(extraMin);
            return "Late\n"+m+" minutes after the start";
        }
        
    }
}