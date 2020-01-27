#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>
#include <fstream>
#include <stdio.h>

using namespace std;

namespace laf {
	void list_func() {
		string funcs = to_string(system("cat *.cpp | grep void"));
		cout << funcs[0];
    }
		
}

namespace laf_conf {
	void make_conf() {
		system("rm conf.laf.json");
		system("curl https://gitlab.com/snippets/1933351/raw.json >> conf.laf.json");
		cout << "\n\nlaf log | Successful download of the configuration file.\n\n";
	}
}

namespace laf_func {
	void ls_files() {
		system("ls");
		cout << "\n\n";
		
	}
}

// the id of the function is not fixed at this point and can get stuck with other versions.

namespace laf_console {
	void execute(int func_id) {
		switch (func_id) {
			case 0:
				laf::list_func();
				break;
			case 1:
				laf_func::ls_files();
				break;
			case 2:
				laf_func::ls_files();
				break;
			default:
				cout << "laf err 1x001 | Wrongly defined function id.\n\n";
				break;
		}
	}
}