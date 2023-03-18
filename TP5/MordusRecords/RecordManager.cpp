///////////////////////////////////////////////////////////
//  RecordManager.cpp
//  Implementation of the Class RecordManager
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include <algorithm>

#include "RecordManager.h"

RecordManager::RecordManager()
{
}

Record& RecordManager::addRecord(std::string name)
{
    // � compl�ter: ajouter une nouvelle fiche en construisant une fiche qui sera copi�e
    // 	            ins�rer la copie dans le conteneur STL
    //              retourner la r�f�rence � la copie qui vient d'�tre cr��e
}

Record& RecordManager::addRecord(const Record& rec)
{
    // � compl�ter: ajouter une nouvelle fiche en clonant la fiche pass�e en param�tre
    // 	            ins�rer la copie dans le conteneur STL
    //              retourner la r�f�rence � la copie qui vient d'�tre cr��e
}

RecordIterator RecordManager::begin()
{
    // � compl�ter
}

RecordIterator RecordManager::end()
{
    // � compl�ter
}

RecordIterator_const RecordManager::cbegin() const
{
    // � compl�ter
}

RecordIterator_const RecordManager::cend() const
{
    // � compl�ter
}

void RecordManager::deleteRecord(RecordIterator_const child)
{
    // � compl�ter
}

RecordIterator RecordManager::findRecord(std::string name)
{
    // � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom correspond au nom pass� en param�tre
    return std::find_if(m_records.begin(), m_records.end(), [&](const RecordPtr& rec) { return rec->getTitle() == name; });
}

RecordIterator_const RecordManager::findRecord(std::string name) const
{
    // � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom correspond au nom pass� en param�tre
    return std::find_if(m_records.cbegin(), m_records.cend(), [&](const RecordPtr& rec) { return rec->getTitle() == name; });
}
