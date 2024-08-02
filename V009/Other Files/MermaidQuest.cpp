#include "Quest.h" // header in local directory
#include <iostream> // header in standard library

#include "MermaidQuest.h"
using namespace std;




void MermaidQuest::startQuest(){
	standardElements.at(1) = true;
		cout << getQuestName() << " Started!" <<endl;
		fishCaught = 0;	
	}

string MermaidQuest::getQuestName(){
		return "Fish Quest (Mermaid Quest)";
	}
	
void MermaidQuest::restartFishQuest(){
			cout << "Wasn't planning on using this.\nMay affect game data. Do a hard reset if error\n. see \"MermaidQuest.cpp\" : restartQuest\n";
			startQuest();
			standardElements.at(2) = true;
			
}

void MermaidQuest::incFishCaught(){
	fishCaught++;
}

int MermaidQuest::getFishCaught(){
	return fishCaught;
	}
	
void MermaidQuest::giveUpMermaidQuest(int a){
	//assumes 1
	if(a == 1){
		cout <<"You toss all of your fish back.\n She pulls you into the water, then to a secluded beach.\nYou make sweet love in missionary postion. Your head above the water line, hers below.\n";
		cout <<"Every once in awhile her head is exposed to the air and she suffocates, her pussy tightening. Each time she has a massive smile on her face at the thrill of being suffocated.\n";
		cout <<"She takes you back to your boat, gives you a kiss on the cheek, winks and swims away.\n";
		
		Quest::QuestOver(-1);
	}
}
void MermaidQuest::displayQuestObjective(){
		cout << "Collect 10 fish" << endl;
	}
	
bool MermaidQuest::checkQuestComplete(){
		if (fishCaught >= 10){
		return true;
		}
		return false;
	}

