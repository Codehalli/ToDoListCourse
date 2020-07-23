/*
Author: Pranav Rao
Date: 5/8/2019
Purpose: To create a date class
*/

#include "Date.h"
//The default constructor 
Date::Date()
{ 
	month = 1;
	day = 1; 	
	year = 2019;
} 
//Date parameter
//To determine the conditions for the date
Date::Date( int m, int d, int y)
{ 
	if (m > 0 && m < 13)
	{
		month = m;
	}
	else
	{
		 month = 1;
	} 
	if (d > 0 && d< 32) 
	{
		day = d;
	}
	else 
	{
		day = 1; 
	}	
	if (y > 0) 
	{
		year = y;
	}
	else 
	{
		year = 2019;
	}
}
//setMonth function
//new month condition
void Date::setMonth(int newMonth)
{
	if (newMonth > 0 && newMonth < 13)
	{
		month = newMonth;
	}
}
//setDay function
//new day condition 
void Date::setDay(int  newDay)
{
	if (newDay > 0 && newDay < 32)
	{
		day = newDay;
	}

}
//setYear function
//new year condition
void Date::setYear(int newYear)
{
	if (newYear > 0)
	{
		year = newYear;
	}
}
//Get functions
//Returns the month, day, and year
int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}
//printDate function
//Outputting the day month and year in m/d/year format.
void Date::printDate(std::ostream &out) const
{

	if ( month < 10 && day < 10 ) 
	{
		out << "0" << month << "/0" << day << "/" << year << endl; 
	} 
	else if ( month < 10 && day > 10 )
	{
		out << "0" << month << "/" << day << "/" << year << endl;
	}
	else if ( month > 10 && day < 10 ) 
	{	
		out << month <<"/0"<<  day <<"/"<< year << endl;
	}
	else
		out << month <<"/"<< day <<"/"<< year << endl;
} 



