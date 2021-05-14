#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {
	

	
	string filename;
	string line;


	cout << "Enter file name";
	getline(cin, filename);
	

	fstream myfile(filename.c_str());
	
	if (!myfile) {
		cout << "No file";
	}
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			cout << line << endl;
			
		}
		myfile.close();

	}
	else {
		cout << "Can't open file";
	}

	



    myfile.open(filename, ios::app);
	
	if (!myfile) {
		cout << "File not created";

	}
	else {
		cout << "Enter line to add to file" << endl;
		getline(cin, line);
		myfile << "\n" << line;
		myfile.close();
	}
	


	
	
	return 0;
}