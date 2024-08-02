#ifndef MERMAIDQUEST_H // include guard
#define MERMAIDQUEST_H
//#include <iostream>
#include "Quest.h"


	class MermaidQuest: public Quest{
		private:
		int fishCaught;
		//
		//                        bread, panini, steak;
		//bool girlIsInParty = false;
		public:
		//std::string Objective = "Find the Girl";
		void startQuest();
		void restartFishQuest();
		void incFishCaught();
		int getFishCaught();
		void giveUpMermaidQuest(int);
		std::string getQuestName();
		void displayQuestObjective();
		bool checkQuestComplete();
		
	};

#endif
