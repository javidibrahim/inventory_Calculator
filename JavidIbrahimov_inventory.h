#ifndef INVNT_H
#define INVNT_H

class Inventory 
{	
	private:
		int itemNumber, quantity;
		double cost, totalCost;
	public:
		//constructors
		Inventory();
		Inventory(int, int, double);
		~Inventory();
	

		//setters
		void setItemNumber(int);
		void setQuantity(int);
		void setCost(double);
		void setTotalCost();
	
		
		//getters
		int getItemNumber();
		int getQuantity();
		double getCost();
		double getTotalCost();
	
	
};
#endif
