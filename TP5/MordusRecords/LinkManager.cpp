///////////////////////////////////////////////////////////
//  LinkManager.cpp
//  Implementation of the Class LinkManager
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "LinkManager.h"

LinkManager::LinkManager()
{
}

Link& LinkManager::addLink(std::string linkType, const Record& rec1, const Record& rec2, bool bidirectional)
{
	// � compl�ter: ajouter un nouveau lien en construisant un lien qui sera copi�
	// 	            ins�rer la copie dans le conteneur STL
	//              retourner la r�f�rence � la copie qui vient d'�tre cr��e
}

Link& LinkManager::addLink(const Link& link)
{
	// � compl�ter: ajouter un nouveau lien en clonant le lien qui est pass� en param�tre
	// 	            ins�rer la copie dans le conteneur STL
	//              retourner la r�f�rence � la copie qui vient d'�tre cr��e
}

LinkIterator LinkManager::begin()
{
	// � compl�ter
}

LinkIterator LinkManager::end()
{
	// � compl�ter
}

LinkIterator_const LinkManager::cbegin() const
{
	// � compl�ter
}

LinkIterator_const LinkManager::cend() const
{
	// � compl�ter
}

void LinkManager::deleteLink(LinkIterator_const child)
{
	// � compl�ter
}

LinkIterator LinkManager::findLinkName(std::string name)
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom pass� en param�tre
}

LinkIterator_const LinkManager::findLinkName(std::string name) const
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom pass� en param�tre
}

LinkIterator LinkManager::findLinkType(std::string linkType)
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le type correspond au type pass� en param�tre
}

LinkIterator_const LinkManager::findLinkType(std::string linkType) const
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le type correspond au type pass� en param�tre
}

