
/** 
  * File:     Date.cpp 
  * Author:   WaldnerCeline
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Date
  */

#include "Date.h"
#include <iostream>

Date::Date(int day, int month, int year){ //construteur
	m_month = month;
	m_day = day;
	m_year = year;
}

int Date::getMonth(){
	return m_month;
}

void Date::setMonth(int month){
	if(( month > 0) && (month <= 12)) {
		m_month = month;
	}
	else{
		std::cout << "Error, month is not in the range 1-12" << std::endl;
	}
}


int Date::getDay(){
	return m_day;
}

void Date::setDay(int day){
	if(( day > 0) && ( day <= 12)) {
		m_day = day;
	}
	else{
		std::cout << "Error, day is not in the range 1-31" << std::endl;
	}
}


int Date::getYear(){
	return m_year;
}

void Date::setYear(int year){
	if( year >= 2019) {
		m_year = year;
	}
	else{
		std::cout << "Error, this year already passed" << std::endl;
	}
}


void Date::modifDate(int day, int month, int year){ //methode pour modifier la date, elle fait appel au setter
	setDay(day);
	setMonth(month);
	setYear(year);
}

