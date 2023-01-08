#include <iostream>
using namespace std;
main()
{
int hour, hs, minute, mins, min;

cout << "Enter Hours: ";
cin >> hour;
cout << "Enter minutes: ";
cin >> minute;

minute = minute + 15;
mins = minute % 60;
min = minute / 60;
hour = hour + min;
if (hour > 23)
{
hs = hour % 24;
cout << hs << ":" << mins;
}
if (hour < 23)
{
cout << hour << ":" << mins;
}


}