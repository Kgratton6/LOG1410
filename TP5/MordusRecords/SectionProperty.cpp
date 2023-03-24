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
	// À compléter: construire un objet identique à celui passé en argument en copiant tous ses enfants
	if (this != &rhs) {
		for (auto&& property : rhs.m_propertyContainer) {
			std::unique_ptr<BaseProperty> propretyClone = std::make_unique<BaseProperty>(property->clone());
			m_propertyContainer.push_back(propretyClone);
		}
	}
}

SectionProperty* SectionProperty::clone() const
{
	// À compéter: alloue un nouvel objet identique à this et retourne le pointeur
	SectionProperty* newSectionProperty = new SectionProperty{this->m_name};
	for (auto&& property : this->m_propertyContainer) {
		std::unique_ptr<BaseProperty> propretyClone = std::make_unique<BaseProperty>(*property->clone());
		newSectionProperty->addProperty(*propretyClone);
	}
	return newSectionProperty;
}

std::string SectionProperty::getValueAsString(void) const
{
	// À compéter: retourner une chaine vide
	return "";
}

BaseProperty& SectionProperty::addProperty(const BaseProperty& prop)
{
	// À compléter: ajouter une nouvelle propriété en clonant celle qui est passé en paramètre
	// 	            insérer la copie dans le conteneur STL
	//              retourner la référence à la copie qui vient d'être créée
	std::unique_ptr<BaseProperty> myBasepropertyCopy = std::make_unique<BaseProperty>(*prop.clone());
	m_propertyContainer.push_back(myBasepropertyCopy);
	return *myBasepropertyCopy;
}

PropertyIterator SectionProperty::begin()
{
	// À compéter
	return m_propertyContainer.begin();
}

PropertyIterator SectionProperty::end()
{
	// À compéter
	return m_propertyContainer.end();
}

PropertyIterator_const SectionProperty::cbegin() const
{
	// À compéter
	return m_propertyContainer.cbegin();
}

PropertyIterator_const SectionProperty::cend() const
{
	// À compéter
	return m_propertyContainer.cend();
}

void SectionProperty::deleteProperty(PropertyIterator_const child)
{
	// À compéter
	m_propertyContainer.erase(child);
}

std::ostream& SectionProperty::printToStream(std::ostream& o) const
{
	// À compéter: imprimer le nom de la section sur le stream
	//             incrementer l'indentation
	//             iter sur les éléments contenus dans le conteneur 
	//                imprimer chaque élément sur le stream
	//             décrémenter l'indentation
	o << m_name << "\n";
	o << m_indent;
	m_indent++;
	for (auto&& property : this->m_propertyContainer) {
		o << m_indent << property;
	}
	m_indent--;
	return o;
}