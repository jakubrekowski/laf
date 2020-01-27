#include <iostream>
#include <cstdlib>
#include "laf.h"

using namespace std;

int main(void) {
	int func_id;
	cout << "===============[ laf tester ]===============\n\n";

	cout << "Files in project:\n ";
	system("ls");
	cout << "\n\nEnter the id of the selected function:\n > ";
	cin >> func_id;

	cout << "\n====================[-]=====================\n\n\n";

  	laf_console::execute(func_id);

	return 0;
}