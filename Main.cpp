#include <iostream>
#include "CTable.h"

/*TO DO:
	DONE: 1. Remove "waste-code"
	DONE: 2. Add #pragma once (and read about that!)
	DONE: 3. Fix deallocating (add full-dealloc including nullptr)
	DONE: 4. Check all returns

*/
int main()
{
	CTable testBezparm;
	CTable testParm("TestParam", 5);
	CTable testKopuj(testBezparm);
	cout << "#########\n" << endl;
	CTable* pc_new_tab;
	pc_new_tab = testBezparm.pcClone();
	cout << "#########\n" << endl;
	cout << "Size before function: "; testBezparm.vShowSize();
	testBezparm.v_mod_tab(testBezparm, 300);
	cout << "Size after function: "; testBezparm.vShowSize();
	cout << "#########\n" << endl;
	cout << "Size before function: "; testBezparm.vShowSize();
	testBezparm.v_mod_tab(&testBezparm, 50);
	cout << "Size after function: "; testBezparm.vShowSize();
	cout << "#########\n" << endl;

	system("pause");
	return 0;
}