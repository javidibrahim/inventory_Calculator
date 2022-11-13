				//Part I - Identification / Algorithm

/*

Javid Ibrahimov
9/11/2022
CS204-Computer Programming II

Program:  Program stores and holds information about item in the inventory class.
It uses an Inventory class that has private member variable: itemNumber, quantity, cost.
Class also includes public member functions such as default constructor which sets 
all member variable values to 0, it also has second constructor that accepts
itemNumber, quantity, cost as arguments. Class will also include setters and getters to access or mutate
certain data. 
Program will get and validate the user input and store it in class variables. 
After getting the needed information, it will print item info and total cost of the item.


***Design (Pseudo/Algorithm)***
(This is a generic algorithm, your algorithms should be more detailed and specific!)

Step 1: Define variables for item number, quantity, cost of the item, total cost, and class object.
Step 2: Create a class that will store user information and do calculations
Step 3: Ask the user to enter item number, quantity and cost of the item
Step 4: Assign these numbers with the help of setters to class private member variables
Step 5: Call a class member function to calculate total and return information given by the user

*******************************

*/

			//Part II - Preprocessor files / Libraries
				
//Define my header files
#include <iostream>
#include <iomanip>

using namespace std;
#include "JavidIbrahimov_inventory.h"

int main()
{
			//Part III - Declare / Initialize Variables

	//Declare and Initialize the variables
	int itemNumber, quantity;
	double cost, totalCost;
	
	//create invnt1 object
	Inventory invnt1(1,2,3.0);
	
			//Part IV - Algorithmic Process
	
	//Getting information from the user

	cout << "Enter item number: ";
	cin >> itemNumber;
	
	//input validation 
	while(itemNumber < 0)
	{
		cout << "Please enter a positive number: ";
		cin >> itemNumber;
	}	
	
	cout << "Enter quantity of purchased items: ";
	cin >> quantity;
	
	//input validation 
	while(quantity < 0)
	{
		cout << "Please enter a positive number: ";
		cin >> quantity;
	}	
	
	cout << "Enter cost per item: $";
	cin >> cost;

	//input validation 
	while(cost < 0)
	{
		cout << "Please enter a positive number: ";
		cin >> cost;
	}
	
	//set values given by the user
	invnt1.setItemNumber(itemNumber);
	invnt1.setQuantity(quantity);
	invnt1.setCost(cost);
	
	//get total cost and display that to user
	cout << "\n\n\nTotal for " << quantity << " pieces of" << " item " << itemNumber << " at price of ";
	cout << fixed << setprecision(2);
	cout << cost << "$ is $";
	cout << invnt1.getTotalCost();
	

			//Part V - Terminate the algorithmic process
	return 0;
}
/*

				//Part 6 - Verification / Validation
				
Test Cases:

Enter item number: 123
Enter quantity of purchased items: 013
Enter cost per item: $-13
Please enter a positive number: 99



Total for 13 pieces of item 123 at price of 99$ is $1287

---------------

Enter item number: 213
Enter quantity of purchased items: 42
Enter cost per item: $0.212412



Total for 42 pieces of item 213 at price of 0.21$ is $8.92

---------------


Enter item number: -92
Please enter a positive number: 41
Enter quantity of purchased items: -23
Please enter a positive number: 112
Enter cost per item: $-4.5
Please enter a positive number: 9.4



Total for 112 pieces of item 41 at price of 9.40$ is $1052.80
 


*/















