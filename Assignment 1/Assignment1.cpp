// Assignment1.cpp : ATM Withdrawl 
/*Gevon Pablo
  INFO 450 
  Spring 2018
*/

#include "stdafx.h"
#include <iostream>
using namespace std;




int main()
{
	int withdrawamount;
	int fifty, twenty, tens, five, one;
	char proceed;
	// variables for first assignment

	cout << "please enter amount you wish to withdraw --> ", cin >> withdrawamount;

		
		
	
	/* loop making sure the withdraw amount stays between 1-300*/

	 do 
	{
		 if (withdrawamount >= 50)
		 {
			 fifty = (withdrawamount / 50);
			 withdrawamount = (withdrawamount - (50 * fifty));
			 if (fifty > 0)
			 {
				 cout <<"you have "<< fifty << " $50 bill(s). " << endl;
			 }
		 }

		 if (withdrawamount >= 20)
		 {
			 twenty = (withdrawamount / 20);
			withdrawamount = (withdrawamount - (20 * twenty));
			 if (twenty > 0)
			 {
				 cout << "you have " << twenty << " $20 bill(s). " << endl;
			 }
		 }

		 if (withdrawamount >= 10)
		 {
			tens = (withdrawamount / 10);
			 withdrawamount = (withdrawamount - (10 * tens));
			 if (tens > 0)
			 {
				 cout << "you have " << tens << " $10 bill(s). " << endl;
			 }
		 }

		 if (withdrawamount >= 5)
		 {
			 five = (withdrawamount / 5);
			 withdrawamount = withdrawamount - (5 * five);
			 if (five > 0)
			 {
				 cout << "you have " << five << " $5 bill(s). " << endl;
			 }
		 }

		 if (withdrawamount >= 1)
		 {
			 one = (withdrawamount / 1);
			 withdrawamount = (withdrawamount - (1 * one));
			 if (one > 0)
			 {
				 cout << "you have " << one << " $1 bill(s). " << endl;
			 }
		 }
		 //if statments for calcualting amout of bills $50, 20, 10, 5 , and 1s

		 if (withdrawamount == 0)
		 {
			 cout << "would you like to make another withdrawal? Enter Y to continue N to exit" << endl;
			 cin >> proceed;
			 cout << " " << endl;
			 if (proceed == 'y' || proceed == 'Y')
			 {
				 cout << "please enter amount you wish to withdraw --> ", cin >> withdrawamount;
			 }
			 else if (proceed='n' || proceed== 'N')

			 {
				 exit(0);
			 }
		 }

		do
		 {
			 if (withdrawamount > 300)
			 {
				 cout << "Sorry but the max you can withdraw is $300.00" << endl;
				 cout << "please enter amount you wish to withdraw --> ", cin >> withdrawamount;
				 cout << " " << endl;
			 }
			 if (withdrawamount < 1)
			 {
				 cout << "Sorry but the min you can withdraw is $1.00" << endl;
				 cout << "please enter amount you wish to withdraw --> ", cin >> withdrawamount;
				 cout << " " << endl;
			 }
		}while (withdrawamount > 300 || withdrawamount < 1);

		
			
		} while (withdrawamount <= 300 || withdrawamount >= 1);

		/* loop for making figuring out the amount of each bill and to ask if user would like to proceed with withdrawls*/

    return 0;
}

