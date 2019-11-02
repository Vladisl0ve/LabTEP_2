#include <iostream>
#include "CTable.h"


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
	cout << "Size after function: "; testBezparm.vShowSize(); cout << endl;
	cout << "#####___Additional exercise___####\n" << endl;

	string password1 = "GoodPassword";
	string password2 = "Hello";
	string password3 = "Heelloo4";
	string password4 = "asdafff";
	string password5 = "SDGGGSDG";

	testBezparm.setPassword(password2);
	cout << "---------" << endl;
	testBezparm.setPassword(password3);
	cout << "---------" << endl;
	testBezparm.setPassword(password4);
	cout << "---------" << endl;
	testBezparm.setPassword(password5);
	cout << "---------" << endl;
	testBezparm.setPassword(password1);
	cout << "---------" << endl;

	system("pause");
	return 0;
}