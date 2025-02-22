#include <iostream>
using namespace std;

class ResidentialComplex {
private:
    string location;
    int totalUnits;
    int availableUnitsForRent;
    int availableUnitsForSell;
    int unitsRented;
    int unitsSold;

public:
    ResidentialComplex(string loc, int totUnits, int availUnitsForRent, int availUnitsForSell) {
        location = loc;
        totalUnits = totUnits;
        availableUnitsForRent = availUnitsForRent;
        availableUnitsForSell = availUnitsForSell;
        unitsRented = 0;
        unitsSold = 0;
    }

    // Get
    string getLocation() { return location; }
    int getTotalUnits() { return totalUnits; }
    int getAvailableUnitsForRent() { return availableUnitsForRent; }
    int getAvailableUnitsForSell() { return availableUnitsForSell; }
    int getUnitsRented() { return unitsRented; }

    // Set
    void setLocation(string loc) { location = loc; }
    void setTotalUnits(int totUnits) { totalUnits = totUnits; }
    void setAvailableUnitsForRent(int availUnitsForRent) { availableUnitsForRent = availUnitsForRent; }
    void setAvailableUnitsForSell(int availUnitsForSell) { availableUnitsForSell = availUnitsForSell; }

    // Rent and Sell functions(change function)
    int rentUnit(int y) {
        if (availableUnitsForRent >= 0) {
            availableUnitsForRent -= y;
            unitsRented += y;
            return availableUnitsForRent;
        } else {
            return -1; 
        }
    }

    int SellUnit(int z) {
        if (availableUnitsForSell >= 0) {
            availableUnitsForSell -= z;
            unitsSold +=z;
            return availableUnitsForSell;
        } else {
            return -1; 
        }
    }
    
    	//function to return units which rented and we want to return them
	int returnRentedUnits(int i)
	{
		if(availableUnitsForRent>=0)
		{
			availableUnitsForRent+=i;
			unitsRented -=i;
			return availableUnitsForRent;
		}
		
	}

    // Function to show how many units are left after rent and sell
    int showUnitsLeft() {
        int totunitsleft = getAvailableUnitsForRent() + getAvailableUnitsForSell();
        return totunitsleft;
    }

    // Function to show how many units were rented
    int showUnitsRented() {
        return unitsRented;
    }
    
    int showUnitsSold()
    {
    	return unitsSold;
	}
	
};