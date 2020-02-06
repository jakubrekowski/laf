#include <iostream>
#include <fstream>

using namespace std;

namespace laf {
	void list_func() {
		// system("rm functions.laf");
		system("cat *.cpp | grep void >> functions.laf"); 
  
		string combine;
		string input;

		ifstream dataFile("functions.laf");

		if (dataFile)
			while (getline(dataFile, input))
				combine += input;

		for (int i = 0; i < combine.size()+1; i++)
		{
			if (combine[i] == ' ' && combine[i+1] == '{')
			{
				combine[i] = ';';
				combine[i+1] = ' ';
			}
		}

		system("rm functions.laf");

		cout << combine << endl;
    }

	void define_func() {
		// system("rm functions.laf");
		system("cat *.cpp | grep void >> functions.laf"); 
  
		string combine;
		string input;

		ifstream dataFile("functions.laf");

		if (dataFile)
			while (getline(dataFile, input))
				combine += input;

		for (int i = 0; i < combine.size()+1; i++)
		{
			if (combine[i] == '{')
			{
				combine[i] = ';';
			}
		}

		system("rm functions.laf.h");
		system("touch functions.laf.h");
		ofstream to_file;
		to_file.open("functions.laf.h");

		if (to_file.is_open())
		{
			to_file << combine;
		}
		to_file.close();

		system("rm functions.laf");
	}
		
}

namespace laf_func {
	void ls_files() {
		system("ls");
		cout << "\n\n";
		
	}
}

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
				laf::define_func();
				break;
			default:
				cout << "laf err 1x001 | Wrongly defined function id.\n\n";
				break;
		}
	}

	void panel() {
		int func_id;
		cout << "===============[ laf panel ]===============\n\n";

		cout << "Files in project:\n ";
		system("ls");
		cout << "\nFunctions used in project\n";
		laf::list_func();
		cout << "\n\nEnter the id of the selected function:\n > ";
		cin >> func_id;

		cout << "\n====================[]====================\n\n\n";

		laf_console::execute(func_id);
	}

	void info() {
		cout << " :::            :::        :::::::::: \n :+:          :+: :+:      :+:         \n +:+         +:+   +:+     +:+          \n +#+        +#++:++#++:    :#::+::#      \n +#+        +#+     +#+    +#+            \n #+#        #+#     #+#    #+#             \n ########## ###     ###    ###              \n\n";

		cout << "Copyright © 2020 by Jakub Rekowski\nhttps://github.com/jakubrekowski/laf\n\nSupport me with PayPal and support this project\nhttps://www.paypal.me/jakubReq\n\nThis work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.\nhttp://creativecommons.org/licenses/by-sa/4.0/";

		cout << endl << endl;
	}
}

#include "functions.laf.h"
