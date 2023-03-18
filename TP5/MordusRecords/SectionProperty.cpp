///////////////////////////////////////////////////////////
//  SectionProperty.cpp
//  Implementation of the Class SectionProperty
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "SectionProperty.h"


SectionProperty::SectionProperty(std::string name)
	: BaseProperty(name)
{
}

SectionProperty::SectionProperty(const SectionProperty& rhs)
	: BaseProperty(rhs)
{
	// � compl�ter: construire un objet identique � celui pass� en argument en copiant tous ses enfants
}

SectionProperty* SectionProperty::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
}

std::string SectionProperty::getValueAsString(void) const
{
	// � comp�ter: retourner une chaine vide
}

BaseProperty& SectionProperty::addProperty(const BaseProperty& prop)
{
	// � compl�ter: ajouter une nouvelle propri�t� en clonant celle qui est pass� en param�tre
	// 	            ins�rer la copie dans le conteneur STL
	//              retourner la r�f�rence � la copie qui vient d'�tre cr��e
}

PropertyIterator SectionProperty::begin()
{
	// � comp�ter
}

PropertyIterator SectionProperty::end()
{
	// � comp�ter
}

PropertyIterator_const SectionProperty::cbegin() const
{
	// � comp�ter
}

PropertyIterator_const SectionProperty::cend() const
{
	// � comp�ter
}

void SectionProperty::deleteProperty(PropertyIterator_const child)
{
	// � comp�ter
}

std::ostream& SectionProperty::printToStream(std::ostream& o) const
{
	// � comp�ter: imprimer le nom de la section sur le stream
	//             incrementer l'indentation
	//             iter sur les �l�ments contenus dans le conteneur 
	//                imprimer chaque �l�ment sur le stream
	//             d�cr�menter l'indentation
}