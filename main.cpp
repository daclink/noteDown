/*
* Author		: Drew A. Clinkenbeard
* Start Date	: 12 - June - 2014
* Last Update	: 12 - June - 2014
* Purpose		: To create a markdown language for taking in 		
*				  notes. Also to beef up my knowledge of c++ 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main () {

	ofstream myFile;
	myFile.open("example.txt");
	myFile << "writing this to a file.\n";
	myFile.close();
	return 0;

}