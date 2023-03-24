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
	if (this != &rhs) {
		for (auto&& property : rhs.m_propertyContainer) {
			std::unique_ptr<BaseProperty> propretyClone = std::make_unique<BaseProperty>(property->clone());
			m_propertyContainer.push_back(propretyClone);
		}
	}
}

SectionProperty* SectionProperty::clone() const
{
	// � comp�ter: alloue un nouvel objet identique � this et retourne le pointeur
	SectionProperty* newSectionProperty = new SectionProperty{this->m_name};
	for (auto&& property : this->m_propertyContainer) {
		std::unique_ptr<BaseProperty> propretyClone = std::make_unique<BaseProperty>(*property->clone());
		newSectionProperty->addProperty(*propretyClone);
	}
	return newSectionProperty;
}

std::string SectionProperty::getValueAsString(void) const
{
	// � comp�ter: retourner une chaine vide
	return "";
}

BaseProperty& SectionProperty::addProperty(const BaseProperty& prop)
{
	// � compl�ter: ajouter une nouvelle propri�t� en clonant celle qui est pass� en param�tre
	// 	            ins�rer la copie dans le conteneur STL
	//              retourner la r�f�rence � la copie qui vient d'�tre cr��e
	std::unique_ptr<BaseProperty> myBasepropertyCopy = std::make_unique<BaseProperty>(*prop.clone());
	m_propertyContainer.push_back(myBasepropertyCopy);
	return *myBasepropertyCopy;
}

PropertyIterator SectionProperty::begin()
{
	// � comp�ter
	return m_propertyContainer.begin();
}

PropertyIterator SectionProperty::end()
{
	// � comp�ter
	return m_propertyContainer.end();
}

PropertyIterator_const SectionProperty::cbegin() const
{
	// � comp�ter
	return m_propertyContainer.cbegin();
}

PropertyIterator_const SectionProperty::cend() const
{
	// � comp�ter
	return m_propertyContainer.cend();
}

void SectionProperty::deleteProperty(PropertyIterator_const child)
{
	// � comp�ter
	m_propertyContainer.erase(child);
}

std::ostream& SectionProperty::printToStream(std::ostream& o) const
{
	// � comp�ter: imprimer le nom de la section sur le stream
	//             incrementer l'indentation
	//             iter sur les �l�ments contenus dans le conteneur 
	//                imprimer chaque �l�ment sur le stream
	//             d�cr�menter l'indentation
	o << m_name << "\n";
	o << m_indent;
	m_indent++;
	for (auto&& property : this->m_propertyContainer) {
		o << m_indent << property;
	}
	m_indent--;
	return o;
}