#ifndef ITEMS_H
#define ITEMS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Item{
	public:
	int quantityInInventory;
	bool wearable;
	bool consumable;
	void use();
	string visualDescription;
	string effectDescription;
	
};

class Wearable: public Item{
	public:

	void wear();
	Wearable (string nameP, string visDescriptionP, string effectDescriptionP, vector<vector<int> > effects,int bodyPartP, bool underGarmetP, bool isChastityP);
	/*
	inline void use(){
		wear();
	}
	*/

}; 

class Consumable: public Item{
	public:
	
	
	Consumable(string name, string visDescriptionP, string effectDescriptionP, vector<vector<int> > effects );
};

#endif
