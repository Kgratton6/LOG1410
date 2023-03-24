///////////////////////////////////////////////////////////
//  IntProperty.cpp
//  Implementation of the Class IntProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "IntProperty.h"

IntProperty::IntProperty(std::string name, int i)
	: BaseProperty(name), m_value(i)
{
}

IntProperty* IntProperty::clone() const
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	IntProperty* intPropertyptr = new  IntProperty{ m_name, m_value };
	return intPropertyptr;
}

std::string IntProperty::getValueAsString() const
{
	// À compéter
	return std::to_string(m_value);
}

std::ostream& IntProperty::printToStream(std::ostream& o) const
{
	// À compéter
	o << getValueAsString();
	return o;
}