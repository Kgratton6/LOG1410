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
}

std::string DateProperty::getValueAsString() const 
{
	// À compéter
}

std::ostream& DateProperty::printToStream(std::ostream& o) const
{
	// À compéter
}
