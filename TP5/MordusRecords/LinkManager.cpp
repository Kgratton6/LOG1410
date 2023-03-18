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
	// À compléter: ajouter un nouveau lien en construisant un lien qui sera copié
	// 	            insérer la copie dans le conteneur STL
	//              retourner la référence à la copie qui vient d'être créée
}

Link& LinkManager::addLink(const Link& link)
{
	// À compléter: ajouter un nouveau lien en clonant le lien qui est passé en paramètre
	// 	            insérer la copie dans le conteneur STL
	//              retourner la référence à la copie qui vient d'être créée
}

LinkIterator LinkManager::begin()
{
	// À compléter
}

LinkIterator LinkManager::end()
{
	// À compléter
}

LinkIterator_const LinkManager::cbegin() const
{
	// À compléter
}

LinkIterator_const LinkManager::cend() const
{
	// À compléter
}

void LinkManager::deleteLink(LinkIterator_const child)
{
	// À compléter
}

LinkIterator LinkManager::findLinkName(std::string name)
{
	// À compléter : parcourir les éléments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom passé en paramètre
}

LinkIterator_const LinkManager::findLinkName(std::string name) const
{
	// À compléter : parcourir les éléments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom passé en paramètre
}

LinkIterator LinkManager::findLinkType(std::string linkType)
{
	// À compléter : parcourir les éléments contenus dans le conteneur et retourner le 1er dont le type correspond au type passé en paramètre
}

LinkIterator_const LinkManager::findLinkType(std::string linkType) const
{
	// À compléter : parcourir les éléments contenus dans le conteneur et retourner le 1er dont le type correspond au type passé en paramètre
}

