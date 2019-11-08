/** 
  * File:     Date.h 
  * Author:   WaldnerCeline
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Date
  */


#ifndef _date_h
#define _date_h

#include<string>

class Date {
public:
	Date(int day, int month, int year);
	int getMonth();
	int getDay();
	int getYear();
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);
	void modifDate(int day, int month, int year);
	

private:
	int m_month;
	int m_day;
	int m_year;




};




#endif // _date_h
