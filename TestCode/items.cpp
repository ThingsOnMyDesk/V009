#include "items.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;




	Wearable::Wearable(string nameP, string visDescriptionP, string effectDescriptionP, vector<vector<int> > effects, int bodyPartP, bool underGarmetP, bool isChastityP){
		
	Item::wearable = true;
	bool undergarmet = false;
	int bodyPart=-1;
	bool isChastity = false;
	
	string convertedBodyArea = "";
		if (bodyPartP == 1){
			convertedBodyArea = "Chest";
		}else if (bodyPartP == 2){
			convertedBodyArea = "Waist";
		}
		
		

	
		cout << "You created: " << nameP <<".\nIt looks like: " << visDescriptionP <<".\nAs you use it, you notice: " << effectDescriptionP <<endl;
		cout <<".\nIt goes on " << convertedBodyArea << endl;
		
		if(underGarmetP == true){
			cout << "It is an undergarmet\n";
		}else{
			cout << "It is NOT an undergarmet\n";
		}
		
		
		if(isChastityP == true){
			cout << "It is a Chas Cage\n";
		}else{
			cout << "It is NOT a Chas Cage\n";
		}
		
		
	}
	
	void Wearable::wear(){}



	
	Consumable::Consumable(string nameP, string visDescriptionP, string effectDescriptionP, vector<vector<int> > effects ){
		Item::consumable = true;
		cout << "You created: " << nameP <<".\nIt looks like: " << visDescriptionP <<".\nAs you use it, you notice: " << effectDescriptionP <<endl;
	}

