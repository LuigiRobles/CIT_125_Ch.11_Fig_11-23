// CIT 125 Intro To C++ Luigi Robles
// 07-24-2020 Summer Term
// Ch.11 Figure 11-23
// gets and displays number of people whose Facebook time
// exceeds a specific number of minutes

#include <iostream>
using namespace std;

int main()
{	//array declaration
	int pollResults[25] = { 35,120,75,60,20,
							25,15,90,85,35,
							60,15,10,25,60,
							100,90,10,120,5,
							40,70,30,25,5 };
	
	//declare and intialize variable
	int minutes = 0;
	int numOVer = 0;

	//input part of IPO
	cout << "Search for minutes over: ";
	cin >> minutes;

	//search the array
	for (int sub = 0; sub < 25; sub += 1)
		if (pollResults[sub] > minutes)
			numOVer += 1;
		//end if
	//end for 

	//output part of IPO
	cout << endl << "Number who spend more than " << minutes
		<< " minutes" << endl;
	cout << "per day on Facebook: " << numOVer << endl;
	return 0;
}	//end of main function