#include <iostream>
using namespace std;

int main()
{

	// ---------------------------(RANDOMS)--------------------------

	/*
	int x;
	cin >> x;

	if (x > 0) {
		if (x > 10)
			cout << "X is greater than 10" << endl;

		else if (x == 10)
			cout << "X = 10" << endl;

		else
			cout << "X is less than 10" << endl;
	}

	else
		cout << "X isn't positive \n";
	*/

	// ----------------------------

	/*
	int x;
	cin >> x;

	cout << ((x > 10) ? "X > 10" : "X !< 10");

	if (x > 10)
		cout << "x>10";
	else
		cout << "x!>10";
	*/

	// -----------------------------------------------------------------------------------------

	// ---------------------------(APPS)----------------------------

	// 1- Check if the number is Even or Odd with If Condition 

	/*
	* First Way :
	
	int x;
	cout << "Enter ur Number: ";
	cin >> x;

	if (x % 2 == 0)
		cout << "X is Even" << endl;

	else
		cout << "X is Odd" << endl;

	//----

	* Second Way :
	
	cout << ((x % 2 == 0) ? "X is Even\n" : "X is odd\n");
	*/

	//------------------

	// 2- Check Days of the week with Switch Statement

	/*
	int x;
	cin >> x;

	switch (x)
	{
	case 1:
		cout << "Day 1" << endl;
		break;

	case 2:
		cout << "Day 2" << endl;
		break;

	case 3:
		cout << "Day 3" << endl;
		break;

	case 4:
		cout << "Day 4" << endl;
		break;

	case 5:
		cout << "Day 5" << endl;
		break;

	case 6:
		cout << "Day 6" << endl;
		break;

	case 7:
		cout << "Day 7" << endl;
		break;

	default:
		cout << "Enter a Valid Day!!" << endl;

	}
	*/

	//------------------ 

	// 3- Create Examination venue (number and name) with nested if Condition 

	/*
	int number; 
	cout << "Enter Your Number: ";
	cin >> number;

	string name;
	cout << "Enter Your Name: ";
	cin >> name;

	if (number > 0 && number <= 30) // Ahmed, Ali
	{
		if (name == "Ahmed")
			cout << "Go to Ahmed Section" << endl;

		else if (name == "Ali")
			cout << "Go to Ali Section" << endl;

		else
			cout << "Search for Your Section" << endl;

	}

	else if (number > 30 && number <= 60) // Rawan, Rana
	{
		if (name == "Rawan" || name == "Rana")
			cout << "Go to Rawan & Rana Section" << endl;

		else
			cout << "Search for your Section" << endl;
	}
	else if (number > 60 && number <= 90) // Ziad, Zeina
	{
		if (name == "Ziad" || name == "Zeina")
			cout << "Go to Ziad & Zeina Section" << endl;

		else
			cout << "Search for your Section" << endl;
	}
	else
	{
		cout << "Good Luck" << endl;
	}
	*/

	//------------------

	// 4- Create Discount System with (nationality and membership) with if Condition

	/*
	string nationality, membership;
	
	cout << "Enter Your Nationality: ";
	cin >> nationality;
	
	cout << "Enter Your Membership: ";
	cin >> membership;
	
	if (nationality == "Egyptian" && membership == "VIP")
		cout << "You Will get 15% discount" << endl;
	
	else if (nationality == "Egyptian" && membership == "member")
		cout << "You Will get 2% discount" << endl;
	
	else if (nationality == "American" && membership == "VIP")
		cout << "You Will get Ownership of the place" << endl;
	
	else if (nationality == "American" && membership == "member")
		cout << "You Will get 50% discount" << endl;
	
	else
		cout << "Enter a Valid membership & nationality" << endl;
	*/
}
