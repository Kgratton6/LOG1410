///////////////////////////////////////////////////////////
//  StringProperty.cpp
//  Implementation of the Class StringProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "StringProperty.h"


StringProperty::StringProperty(std::string name, std::string value)
	: BaseProperty(name), m_value(value)
{
}

StringProperty* StringProperty::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
}

std::string StringProperty::getValueAsString() const
{
	// � comp�ter
}

std::ostream& StringProperty::printToStream(std::ostream& o) const
{
	// � comp�ter
}
