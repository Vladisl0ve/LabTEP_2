#include <iostream>
#include "CTable.h"


int main()
{
	CTable testBezparm;
	testBezparm.vShowSize();
	CTable testParm("TestParam", 5);
	CTable testKopuj(testBezparm);
	cout << "#########\n" << endl;
	CTable* pc_new_tab;
	pc_new_tab = testBezparm.pcClone();
	pc_new_tab->vShowName();
	cout << "#########\n" << endl;
	testBezparm.vShowSize();
	testBezparm.v_mod_tab(testBezparm, 300);
	testBezparm.vShowSize();
	cout << "#########\n" << endl;
	testBezparm.v_mod_tab(&testBezparm, 3);
	testBezparm.vShowSize();

	system("pause");
	return 0;
}