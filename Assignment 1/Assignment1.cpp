// Assignment1.cpp : ATM Withdrawl 
/*Gevon Pablo
  INFO 450 
  Spring 2018
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

/* function for calculating  amount withdrawn amount into dollar bills 50s, 20s, 10s etc...*/
void withdrawMoney(int input)
{
	int withdrawamount = input;
	int fifty, twenty, tens, five, one;
	
	/* CHECK IT OUT!!!  THIS IS DO WHILE LOOP IT MAKES IT RAIN 'drip drip' */
	do
	{
		if (withdrawamount >= 50)
		{
			fifty = (withdrawamount / 50);
			withdrawamount = (withdrawamount - (50 * fifty));
			if (fifty > 0)
			{
				cout << "you have " << fifty << " $50 bill(s). " << endl;
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
		if (withdrawamount == 0)
		{
			
			break;
		}
		

		
	} while (withdrawamount <= 300 || withdrawamount >= 1);

	
} 

int main()
{
	int input;
	char proceed;
	
	// allows user to input a dollar value to be calculated
	cout << "please enter withdrawl amount --> ", cin >> input;
	
	/*While loop for making sure the user follows instructions 
	 Also used for continuing and exiting program. */
	while (input != 'n')
	{
		if (input > 300)
		{
			cout << "Sorry but the max you can withdraw is $300.00" << endl;
			cout << " " << endl;
			cout << "please enter amount you wish to withdraw --> ", cin >> input;
	
		}
		if (input < 1)
		{
			cout << "Sorry but the min you can withdraw is $1.00" << endl;
			cout << " " << endl;
			cout << "please enter amount you wish to withdraw --> ", cin >> input;
			
		}
		else
		{
			withdrawMoney(input);
		
			cout << "another withdrawal? enter Y to continue" << endl;
			cin >> proceed;
			cout << " " << endl;
			if (proceed == 'y' || proceed == 'Y')
			{
				cout << "please withdrawl amount --> ", cin >> input;;
			}

			if (proceed == 'n' || proceed == 'N')
			{
				exit(0);
			}
		}

	}
	

    return 0;
}

