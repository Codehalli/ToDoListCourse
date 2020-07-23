#ifndef DATE_H
#define DATE_H
 
#include <iostream>
#include <iomanip>
using namespace std;
class Date
{
 private:
     int month;
     int day;
     int year;
 public:
     Date(); //Default constructor
     Date( int month, int day, int year );
	 //parameterized constructor
     int getMonth() const;
     int getDay() const;
     int getYear() const;
 
     void setMonth( int newMonth );
     void setDay( int newDay );
     void setYear( int newYear );
 
     void printDate( std::ostream &out ) const ;
};
 
#endif