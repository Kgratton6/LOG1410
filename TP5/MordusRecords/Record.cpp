///////////////////////////////////////////////////////////
//  Record.cpp
//  Implementation of the Class Record
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Record.h"


Record::Record(std::string title)
	: m_properties(title)
{
}

Record* Record::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	Record* recordptr = new Record("none");
	recordptr->m_properties = *m_properties.clone();
	return recordptr;
}

DateProperty& Record::addProperty(std::string name, int day, int month, int year)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�

	DateProperty dateProperty{ name, day, month, year };
	BaseProperty* basePropertyCopy = dateProperty.clone();
	DateProperty* datePropertyCopy = static_cast<DateProperty*>(basePropertyCopy);
	m_properties.addProperty(*datePropertyCopy);
	return *datePropertyCopy;
}

IntProperty& Record::addProperty(std::string name, int value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	IntProperty intProperty{ name, value };
	BaseProperty* basePropertyCopy = intProperty.clone();
	IntProperty* intpropertyCopy = static_cast<IntProperty*>(basePropertyCopy);
	m_properties.addProperty(*intpropertyCopy);
	return *intpropertyCopy;
}

FloatProperty& Record::addProperty(std::string name, float value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	FloatProperty floatProperty{ name, value };
	BaseProperty* basePropertyCopy = floatProperty.clone();
	FloatProperty* floatPropertyCopy = static_cast<FloatProperty*>(basePropertyCopy);
	m_properties.addProperty(*floatPropertyCopy);
	return *floatPropertyCopy;
}

SectionProperty& Record::addProperty(std::string name)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	SectionProperty sectionProperty{ name };
	BaseProperty* basePropertyCopy = sectionProperty.clone();
	SectionProperty* sectionPropertyCopy = static_cast<SectionProperty*>(basePropertyCopy);
	m_properties.addProperty(*sectionPropertyCopy);
	return *sectionPropertyCopy;
}

StringProperty& Record::addProperty(std::string name, std::string value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	StringProperty stringProprety{ name, value };
	BaseProperty* basePropertyCopy = stringProprety.clone();
	StringProperty* stringPropretyCopy = static_cast<StringProperty*>(basePropertyCopy);
	m_properties.addProperty(*stringPropretyCopy);
	return *stringPropretyCopy;
}

URLProperty& Record::addProperty(std::string name, std::string displayText, std::string URL)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
	URLProperty URLproprety{ name, displayText, URL };
	BaseProperty* basePropertyCopy = URLproprety.clone();
	URLProperty* URLpropretyCopy = static_cast<URLProperty*>(basePropertyCopy);
	m_properties.addProperty(*URLpropretyCopy);
	return *URLpropretyCopy;
}

PropertyIterator Record::begin()
{
	// � compl�ter
	return m_properties.begin();
}

PropertyIterator Record::end()
{
	// � compl�ter
	return m_properties.end();
}

PropertyIterator_const Record::cbegin() const
{
	// � compl�ter
	return m_properties.cbegin();
}

PropertyIterator_const Record::cend() const
{
	return m_properties.cend();
}

void Record::deleteProperty(PropertyIterator_const child)
{
	m_properties.deleteProperty(child);
}

std::ostream& operator<<(std::ostream& o, const Record& rec)
{
	return o << rec.m_properties << std::endl;
}
