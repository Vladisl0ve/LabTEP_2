#include <iostream>
#include "CTable.h"

/*TO DO:
	1. Remove "waste-code" for testing
	2. Add #pragma once (and read about that!)
	3. Fix deallocating (add full-dealloc including nullptr)
	4. Check all returns

*/
int main()
{
	CTable testBezparm;
	testBezparm.vShowSize();
	CTable testParm("TestParam", 5);
	CTable testKopuj(testBezparm);
	cout << "#########\n" << endl;
	CTable* pc_new_tab;
	pc_new_tab = testBezparm.pcClone();
	cout << "#########\n" << endl;
	testBezparm.vShowSize();
	testBezparm.v_mod_tab(testBezparm, 300);
	testBezparm.vShowSize();
	cout << "#########\n" << endl;
	testBezparm.v_mod_tab(&testBezparm, 3);
	testBezparm.vShowSize();
	cout << "#########\n" << endl;
	testBezparm.~CTable();
	testParm.~CTable();
	testKopuj.~CTable();

	system("pause");
	return 0;
}