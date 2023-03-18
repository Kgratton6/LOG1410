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
}

DateProperty& Record::addProperty(std::string name, int day, int month, int year)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
}

IntProperty& Record::addProperty(std::string name, int value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
}

FloatProperty& Record::addProperty(std::string name, float value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
}

SectionProperty& Record::addProperty(std::string name)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
}

StringProperty& Record::addProperty(std::string name, std::string value)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
}

URLProperty& Record::addProperty(std::string name, std::string displayText, std::string URL)
{
	// � compl�ter: Ajouter une nouvelle propri�t� en fournissant un objet qui sera copi�
	//              retourner la r�f�rence � la propri�t� qui vient d'�tre copi�e en convertissant 
	//              son type au bon type d�riv�
}

PropertyIterator Record::begin()
{
	// � compl�ter
}

PropertyIterator Record::end()
{
	// � compl�ter
}

PropertyIterator_const Record::cbegin() const
{
	// � compl�ter
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
