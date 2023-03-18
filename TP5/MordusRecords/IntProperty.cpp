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
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
}

std::string IntProperty::getValueAsString() const
{
	// � comp�ter
}

std::ostream& IntProperty::printToStream(std::ostream& o) const
{
	// � comp�ter
}