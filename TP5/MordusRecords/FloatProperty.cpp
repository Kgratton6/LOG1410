///////////////////////////////////////////////////////////
//  FloatProperty.cpp
//  Implementation of the Class FloatProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#include "FloatProperty.h"


FloatProperty::FloatProperty(std::string name, float f)
	: BaseProperty(name), m_value(f)
{
}

FloatProperty* FloatProperty::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
}

std::string FloatProperty::getValueAsString() const
{
	// � comp�ter
}

std::ostream& FloatProperty::printToStream(std::ostream& o) const
{
	// � comp�ter
}