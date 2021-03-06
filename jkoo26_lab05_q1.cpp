#include <iostream>
#include <string>
using namespace std;

//Functions
int findYearParameter(int year)
{
	int yearp;
	if (year < 2000)
	{
		yearp = year - 1900;
		yearp = yearp / 4;
	}
	else
	{
		yearp = year - 2000;
		yearp = yearp / 4;
	}
	return yearp;
	
}
int findMonthParameters(int month)
{
	int monthb;
	switch (month)

	{
	case 1:
		monthb = 1;
	case 2:
		monthb = 4;
	case 3:
		monthb = 4;
	case 4:
		monthb = 0;
	case 5:
		monthb = 2;
	case 6:
		monthb = 5;
	case 7:
		monthb = 5;
	case 8:
		monthb = 3;
	case 9:
		monthb = 6;
	case 10:
		monthb = 1;
	case 11:
		monthb = 4;
	default:
		monthb = 6;
	}
	return monthb;
}
bool isLeapYear(int year)
{

	if (year % 400 == 0 || year % 4 == 0)
		return 1;
	else
		return 0;
}

int yearDigit(int year)
{
	int yearx;
	if (year < 2000)
	{
		yearx = year - 1900;
	}
	else
	{
		yearx = year - 2000;
	}
	return yearx;
}
string findDayOfWeek(int result)
{
	int r;
	string finalDay;
	r = result % 7;
	if (r == 1)
	{
		finalDay = "Sunday";
	}
	else if (r == 2)
	{
		finalDay = "Monday";
	}
	else if (r == 3)
	{
		finalDay = "Tuesday";
	}
	else if (r == 4)
	{
		finalDay = "Wednesday";
	}
	else if (r == 5)
	{
		finalDay = "Thursday";
	}
	else if (r == 6)
	{
		finalDay = "Friday";
	}
	else if (r == 7)
	{
		finalDay = "Saturday";
	}
	return finalDay;
}
	int main()
{
	int day = 0;
	int month = 0;
	int year = 0;
	int yearx;
	


	cout << "Please enter your birthdate" << endl;
	cout << "Day (dd): ";
	cin >> day;
	
	while (day < 1 || day > 31)
	{
		cout << "Invalid day please enter a real day: ";
		cin >> day;
	}
	cout << "Month (mm): ";
	cin >> month;
	
	while (month < 1 || month > 12)
	{
	
		cout << "That is not a real month plase enter the correct month: ";
		cin >> month;
	}
	cout << "Year (yyyy): ";
	cin >> year;
	
	while (year < 1900 || year > 2019)
	{
		cout << "This year is impossible please enter a valid year: ";
		cin >> year;
		
	}
	
	int value1, result, value2;
	
	value1 = findYearParameter(year) + day;
	value2 = value1 + findMonthParameters(month);//Call function

	if (month > 2)
	{
		result = value2;
	}
	else
	{
		result = value2 - isLeapYear(year);//Call function
	}

	if (year >= 2000)
	{
		result = result + 6;
	}
	result = result + yearDigit(year);

	cout << "You were born on a " << findDayOfWeek(result) << endl;//Call Function


	return 0;


}