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

Date::Date() {
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
	if(( day > 0) && ( day <= 31)) {
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
 
	setMonth(month);
	setYear(year);
        int dayMax = 0;
	if(month == 1 || month == 3  || month == 5 || month == 7 || month == 8 || month == 9 || month == 31){
	    dayMax = 31;	
	}else
	{
		if(month == 4 || month == 6 || month == 9 || month == 11) {
			dayMax = 30;	
		}
		else
		{
			//Calcule année bissextile
			if((year%4==0 && year%100!=0)||year%400==0){
				dayMax = 29;
			}else {
				dayMax = 28;
			}
		}
	}
	
	if(day>dayMax)
	{
		std::cout<<"Erreur le jours "+std::to_string(day)+" n'est pas dans le mois de "+std::to_string(month)+" ! "<<std::endl;
	} else
	{
		setDay(day);
	}
}

