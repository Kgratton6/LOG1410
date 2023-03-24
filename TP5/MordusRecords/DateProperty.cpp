///////////////////////////////////////////////////////////
//  DateProperty.cpp
//  Implementation of the Class DateProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#include "DateProperty.h"

DateProperty::DateProperty(std::string name, int day, int month, int year)
	: BaseProperty(name), m_date(day,month,year)
{
}

BaseProperty* DateProperty::clone() const 
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	Date date = this->getDate();
	BaseProperty*  datePropertyptr = new  DateProperty { this->m_name, date.getDay(), date.getMonth(), date.getYear() };
	return datePropertyptr;
}

std::string DateProperty::getValueAsString() const 
{
	return this->getDate().toString();
}

std::ostream& DateProperty::printToStream(std::ostream& o) const
{
	o << this->getDate().toString();
	return o;
}
