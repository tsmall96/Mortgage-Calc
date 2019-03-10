
/*
Author: Tyler Small

Date: 10/30/18  (updated: March 8th 2019)

File Name: mortgage_small

Purpose: Solve mortgage for families 

Inputs: Keyboard / Numbers

Outputs: Answer to the question

Assumptions: No assumptions

Error Checking: Does this program have any error checking?

Be sure to document all libraries, constants, variables & major 
	steps appropriately throughout this program.

All variables should be declared inside of, (or local to), main.
*/


// Libraries:
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// Constants: 
const int MON_PER_YR = 12; 


int main()
{
	
	// Delcare all variables and state what they contain here:
	string famName;
	float housePri;
    float dwnPay;
	float intRate;
	float amtFinan;
	float amtPerMon;
	float mnthPay;
	
	
	//Title Screen
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl; 																			
	cout << "$                                                                $" << endl;
	cout << "$     Welcome to the mortgage information calculator 2019!       $" << endl;
	cout << "$														          $" << endl;
	cout << "$                                                                $" << endl;
	cout << "$     by: Tsmalls                                                $" << endl;
	cout << "$                                                                $" << endl;
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	system("pause");
	system("cls");

	// User Inputs
	cout << "please enter the name of the family purchasing the home: " << endl;								// Name
	cin >> famName;
	system("cls");

	cout << "please enter the price of the home: " << endl;														// price of the house
	cin >> housePri;
	system("cls");

	cout << "Please enter the down payment percentage (no sign): " << endl;										// down payment percent
	cin >> dwnPay;
	system("cls");

	cout << "Please enter the annual interest rate as a percentage (no sign): " << endl;						// annual rate percent
	cin >> intRate;
	system("cls");


	// Basic Breakdown
	cout << fixed << showpoint;
	cout << "Price of home: " << setw(20) << setprecision(2) << housePri << endl;								// output price of home

	amtFinan = (housePri *(dwnPay / 100));																		// calculate down payment

	cout << "Amount down  : "<<setw(20) << setprecision(2) << amtFinan << endl;									// output amount put down
	cout << "Amount Financed:" << setw(19) << setprecision(2) << (housePri - amtFinan) << endl;					// output how much the loan is 
	cout << "Annual Interest rate:" << setw(13) << setprecision(2) << intRate << "%" << endl;					// out put annual intrest rate

	amtPerMon = (intRate / 100 / MON_PER_YR);																	// Math algorithm for percent a month

	cout << "Monthly Interest rate:" << setw(12) << setprecision(4) << amtPerMon << "%"<< endl;					// Outputs percentage per month

	cout << endl;
	cout << endl;
	cout << endl;

	// 15 year loan 
	mnthPay = (amtPerMon*(housePri - amtFinan)*pow((1 + amtPerMon), 180) / (pow((1 + amtPerMon), 180) - 1));	// Algorithm for monthly payment
	
	cout << "15 year Loan" << endl;
	cout << endl;
	cout << "Monthly Payment:" << setw(20) << setprecision(2) << mnthPay << endl;								// output monthly payment
	cout << "Number of monthly payments:" << setw(9) << setprecision(2) << 15 * MON_PER_YR << endl;				// 15 years times 12 = 180
	cout << "Total Payments: " << setw(20) << setprecision(2) << float(15 * MON_PER_YR * mnthPay) << endl;		// total amount over 180 months
	cout << "Total intrest paid:" << setw(17) << setprecision(2) << float(15 * MON_PER_YR * mnthPay) - (housePri - amtFinan) << endl; // The total in intrest you paid


	cout << endl;
	cout << endl;
	cout << endl;

	// 30 year loan 
	mnthPay = (amtPerMon*(housePri - amtFinan)*pow((1 + amtPerMon), 360) / (pow((1 + amtPerMon), 360) - 1));

	cout << "30 year Loan" << endl;
	cout << endl;
	cout << "Monthly Payment:" << setw(20) << setprecision(2) << mnthPay << endl;
	cout << "Number of monthly payments:" << setw(9) << setprecision(2) << 30 * MON_PER_YR << endl;
	cout << "Total Payments: " << setw(20) << setprecision(2) << float(30 * MON_PER_YR * mnthPay) << endl;
	cout << "Total intrest paid:" << setw(17) << setprecision(2) << float(30 * MON_PER_YR * mnthPay) - (housePri - amtFinan) << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	// 40 year loan 
	mnthPay = (amtPerMon*(housePri - amtFinan)*pow((1 + amtPerMon), 480) / (pow((1 + amtPerMon), 480) - 1));

	cout << "40 year Loan" << endl;
	cout << endl;
	cout << "Monthly Payment:" << setw(20) << setprecision(2) << mnthPay << endl;
	cout << "Number of monthly payments:" << setw(9) << setprecision(2) << 40 * MON_PER_YR << endl;
	cout << "Total Payments: " << setw(20) << setprecision(2) << float(40 * MON_PER_YR * mnthPay) << endl;
	cout << "Total intrest paid:" << setw(17) << setprecision(2) << float(40 * MON_PER_YR * mnthPay) - (housePri - amtFinan) << endl;
	cout << endl;
	cout << endl;

	system("pause");

	return 0;

} // end main




// Example Result

/*
Price of home:            123500.00
Amount down  :             12350.00
Amount Financed:          111150.00
Annual Interest rate:         3.90%
Monthly Interest rate:      0.0033%



Monthly Payment:              816.60
Number of monthly payments:      180
Total Payments:            146988.69
Total intrest paid:         35838.69



Monthly Payment:              524.26
Number of monthly payments:      360
Total Payments:            188733.23
Total intrest paid:         77583.23



Monthly Payment:              457.65
Number of monthly payments:      480
Total Payments:            219671.84
Total intrest paid:        108521.84
*/