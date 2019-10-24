#pragma once
#include <iostream>
using namespace std;

class CTable
{
public:
	CTable();
	CTable(string sName, int iTableLen);
	CTable(const CTable& pcOther);
	CTable* pcClone();

	void vShowName();
	void vShowSize();
	bool bCheckErr(int iCheackable);
	bool bCheckErrForNewTable(int iCheackable);
	void v_mod_tab(CTable* pcTab, int iNewSize);
	void v_mod_tab(CTable cTab, int iNewSize);
	void vSetValueAt(int iOffset, int iNewVal);
	void vPrint();
	~CTable();
private:
	int CONST_SIZE = 10;
	string CONST_NAME = "Default";

	string sName;
	int* piTable;
	int iSize;
	void vSetName(string sName);
	bool bSetNewSize(int iTableLen);


};

