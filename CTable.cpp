#include "CTable.h"

CTable::CTable()
{
	sName = CONST_NAME;
	piTable = new int[CONST_SIZE];
	iSize = CONST_SIZE;
	cout << "Bezp: " << sName << endl;
}

CTable::CTable(string s_Name, int iTableLen)
{
	this->vSetName(s_Name);
	this->bSetNewSize(iTableLen);
	cout << "Parametr: " << sName << endl;
}

CTable::CTable(CTable& pcOther)
{
	sName = pcOther.sName + "_copy";
	piTable = pcOther.piTable;
	cout << "Kopuj: " << sName << endl;
}

void CTable::vSetName(string s_Name)
{
	sName = s_Name;
}

bool CTable::bSetNewSize(int iTableLen)
{
	if (iTableLen <= 0)
	{
		cout << "Error, new size must be greater than 0" << endl;
		return false;
	}

	int* pi_newTable = new int[iTableLen];
	iSize = iTableLen;
	piTable = pi_newTable;
	delete pi_newTable;

	return true;
}

CTable* CTable::pcClone()
{
	return this;
}

void CTable::vShowName()
{
	cout << "Name: " << sName << endl;
}

void CTable::vShowSize()
{
	cout << "Size: " << iSize << endl;
}

void CTable::v_mod_tab(CTable* pcTab, int iNewSize)
{
	pcTab->bSetNewSize(iNewSize);
}

void CTable::v_mod_tab(CTable cTab, int iNewSize)
{
	cTab.bSetNewSize(iNewSize);
	cout << "New "; cTab.vShowSize();
}

CTable::~CTable()
{
	cout << "Usuwam: " << sName << endl;
}
