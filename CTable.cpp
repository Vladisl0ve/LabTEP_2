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
	sName = s_Name;
	piTable = new int[iTableLen];
	iSize = iTableLen;
	cout << "Parametr: " << sName << endl;
}

CTable::CTable(const CTable& pcOther)
{
	sName = pcOther.sName + "_copy";
	iSize = pcOther.iSize;
	piTable = new int[pcOther.iSize];
	for (int ii = 0; ii < iSize; ii++)
	{
		piTable[ii] = pcOther.piTable[ii];
	}
	cout << "Kopuj: " << sName << endl;
}

void CTable::vSetName(string s_Name)
{
	sName = s_Name;
}

bool CTable::bSetNewSize(int iTableLen)
{

	if (!bCheckErrForNewTable(iTableLen))
		return false;

	int* pi_newTable = new int[iTableLen];


	if (iSize < iTableLen)
	{
		for (int ii = 0; ii < iSize; ii++)
		{
			pi_newTable[ii] = piTable[ii];
		}
	}
	else
	{
		for (int ii = 0; ii < iTableLen; ii++)
		{
			pi_newTable[ii] = piTable[ii];
		}
	}
	delete piTable;
	iSize = iTableLen;
	piTable = pi_newTable;
	return true;
}

CTable* CTable::pcClone() {
	CTable* copy = new CTable(sName, iSize);
	return copy;
}

void CTable::vShowName()
{
	cout << "Name: " << sName << endl;
}

void CTable::vShowSize()
{
	cout << "Size: " << iSize << endl;
}

bool CTable::bCheckErr(int iCheackable)
{
	if (iCheackable < 0)
	{
		cout << "Error, new size must be greater than 0" << endl;
		cout << iCheackable << " is less than 0" << endl;
		return false;
	}
	if (iCheackable == 0)
	{
		cout << "Error, new size must be greater than 0" << endl;
		cout << iCheackable << " is equal to 0" << endl;
		return false;
	}
	return true;
}

bool CTable::bCheckErrForNewTable(int iCheackable)
{
	if (!bCheckErr(iCheackable))
		return false;

	/*if (iCheackable <= iSize)
	{
		cout << "Error, new size must be greater than previous size" << endl;
		cout << iCheackable << " is less than previous size" << endl;
		return false;
	}*/
	if (iCheackable == iSize)
	{
		//cout << "Error, new size must be greater than previous size" << endl;
		cout << "ERROR: " << iCheackable << " is equal to previous size" << endl;
		return false;
	}
	return true;
}

void CTable::v_mod_tab(CTable* pcTab, int iNewSize)
{


	pcTab->bSetNewSize(iNewSize);
}

void CTable::v_mod_tab(CTable cTab, int iNewSize)
{

	cTab.bSetNewSize(iNewSize);
}

void CTable::vSetValueAt(int iOffset, int iNewVal)
{
	if (iOffset >= iSize) {
		cout << "Error, value must be less than table's size" << endl;
		cout << iOffset << " is greater than table's size (or equal to)" << endl;
		return;
	}
	piTable[iOffset] = iNewVal;
}

void CTable::vPrint()
{
	for (int ii = 0; ii < iSize; ii++)
	{
		cout << ii << ": " << piTable[ii] << endl;
	}
}

CTable::~CTable()
{
	cout << "Usuwam: " << sName << endl;
	delete piTable;
}
