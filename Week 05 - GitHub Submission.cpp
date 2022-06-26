// Week 05 - GitHub Submission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>


//namespace for std
using namespace std;

//variable
int TotalSmall = 0,
	TotalMedium = 0,
	TotalLarge = 0,
	TotalXXXS =0;
char selection;

//showusage
void ShowUsage() {

	//output
	cout << setw(58) << setfill('*') << "*" << endl;
	cout << "****Welcome to my Johnny Utah's PointBreak Surf Shop*******"<< endl;
	cout << setw(58) << setfill('*') << "*" << endl;
	cout << endl;
	cout << "To show program usage 'S' " << endl;
	cout << "To purchase a surfboard press 'P'" << endl;
	cout << "To display current purchases press 'C' " << endl;
	cout << "To display total amount due press 'T' " << endl;
	cout << "To quit the program prss 'Q'" << endl;
	cout << endl;
}

//makepurchase 
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXS) {
	char size;
	int quantiy;
	cout << "Please enter the quanity and type (S=small, M=medium, L=large , x = XXXS) of surfboard would like to purchase: ";
	// user input
	cin >> quantiy >> size;

	//if else statement for size
	if (size == 's' or size == 'S') {
		iTotalSmall = iTotalSmall + quantiy;
	}
	else if (size == 'm' or size == 'M') {
		iTotalMedium = iTotalMedium + quantiy;
	}
	else if (size == 'l' or size == 'L') {
		iTotalLarge = iTotalLarge + quantiy;
	}
	else if (size == 'x' or size == 'X') {
		iTotalXXXS = iTotalXXXS + quantiy;
	}

}
//DisplayPurchase
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS) {
	// if statement for if no purchases made yet by user
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXS == 0) {
		cout << "No purchases made yet" << endl;
	}
	//if statement ofr item brought by user
	if (iTotalSmall > 0) {
		cout << "The total number of small surfborads is " << iTotalSmall << endl;
	}
	if (iTotalMedium > 0) {
		cout << "The total number of Medium surfborads is " << iTotalMedium << endl;
	}
	if (iTotalLarge > 0) {
		cout << "The total number of Large surfborads is " << iTotalLarge << endl;
	}
	if (iTotalXXXS > 0) {
		cout << "The total number of XXXS surfborads is " << iTotalXXXS << endl;

	}
}


//DisplayTotal
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS){
	// if statement for if no purchases made yet by user
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXS == 0)  {
		cout << "No purchases made yet" << endl;
	}

	//variable 
	int totalsm, totalmd, totallr, totalXXXS;
	// totoal
	totalsm = iTotalSmall * 175;
	totalmd = iTotalMedium * 190;
	totallr = iTotalLarge * 200;
	totalXXXS = iTotalXXXS * 150;

	//if statement for number of iteam brought 
	if (iTotalSmall > 0) {
		cout << "The total number of small surfborads is " << iTotalSmall << " at a total of $" << totalsm << endl;
	}
	if (iTotalMedium > 0) {
		cout << "The total number of small surfborads is " << iTotalMedium << " at a total of $" << totalmd << endl;
	}
	if (iTotalLarge > 0) {
		cout << "The total number of small surfborads is " << iTotalLarge << " at a total of $" << totallr << endl;
	}
	if (iTotalXXXS > 0) {
		cout << "The total number of XXXS surfborads is " << iTotalXXXS << " at a total of $" << totalXXXS << endl;
	}

	
	if (totalsm > 0 or totalmd > 0 or totallr > 0 or totalXXXS >0) {
		//total due
		cout << "Amount due: $" << totalsm + totalmd + totallr + totalXXXS << endl;
	}
}

// main statement
int main() {


	//title
	ShowUsage();

	//while for quit
	while (selection != 'Q')
	{	

		//user input 
		cout << "Please enter selection: ";
		cin >> selection;

		// swich statement
		switch (selection)
		{
			case 'S':
			ShowUsage();
			system("cls");
			ShowUsage();
			break;

			case 'P':
				MakePurchase(TotalSmall, TotalMedium, TotalLarge, TotalXXXS);
				cout << endl;
				break;

			case 'C':
				DisplayPurchase(TotalSmall, TotalMedium, TotalLarge, TotalXXXS);
				cout << endl;
				break;
			case 'T':
				DisplayTotal(TotalSmall, TotalMedium, TotalLarge, TotalXXXS);
				cout << endl;
				break;
			case 'Q':
				cout << "Thnak You" << endl;
				break;
		}


	}


	return 0;
}