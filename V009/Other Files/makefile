#NOTE: See bottom. If make does not have .cpp file, it won't check to see if it's been updated. I don't know how we got this far.


CC= g++
CFLAGS = -Wall -g
OBJFLAGS = -c
OBJDIR = /home/HotSauceUseName/Documents/Actually\ Programmed\ Software/Weather\ Everything/Weather\ Code/V009/Other\ Files/o\ Files
OBJDIR2 = /home/HotSauceUseName/Documents/Actually\ Programmed\ Software/Weather\ Everything/Weather\ Code/V009/Other
OBJFI = ./o\ files/

./../Weather9EXE: $(OBJFI)Weather009.o $(OBJFI)Quest.o $(OBJFI)FoodQuest.o $(OBJFI)LostGirl.o $(OBJFI)DiaperQuest.o $(OBJFI)BeachQuest1.o $(OBJFI)Girl.o
	$(CC) $(CFLAGS) -o ./../Weather9EXE $(OBJFI)Weather009.o $(OBJFI)Quest.o $(OBJFI)FoodQuest.o $(OBJFI)LostGirl.o $(OBJFI)DiaperQuest.o $(OBJFI)BeachQuest1.o $(OBJFI)Girl.o


$(OBJFI)Weather009.o: Weather009.cpp Quest.h FoodQuest.h LostGirl.h DiaperQuest.h BeachQuest1.h HelperObjectClass.h Girl.h Quest.cpp FoodQuest.cpp LostGirl.cpp DiaperQuest.cpp BeachQuest1.cpp HelperObjectClass.cpp Girl.cpp
	$(CC) $(CFLAGS) -c Weather009.cpp -o $(OBJFI)Weather009.o


$(OBJFI)Quest.o: Quest.h Quest.cpp
	g++ -c Quest.cpp -o $(OBJFI)Quest.o
	

$(OBJFI)FoodQuest.o: FoodQuest.h Quest.h FoodQuest.cpp Quest.cpp
	g++ -c FoodQuest.cpp -o $(OBJFI)FoodQuest.o

$(OBJFI)LostGirl.o: LostGirl.h Quest.h LostGirl.cpp Quest.cpp
	g++ -c LostGirl.cpp -o $(OBJFI)LostGirl.o

$(OBJFI)DiaperQuest.o: DiaperQuest.h Quest.h  DiaperQuest.cpp Quest.cpp
	g++ -c DiaperQuest.cpp -o $(OBJFI)DiaperQuest.o

$(OBJFI)BeachQuest1.o: BeachQuest1.h Quest.h BeachQuest1.cpp Quest.cpp
	g++ -c BeachQuest1.cpp -o $(OBJFI)BeachQuest1.o

#Pound = Comment
#$(OBJFI)HelperObjectClass.o: HelperObjectClass.h
#	g++ -c HelperObjectClass.cpp -o $(OBJFI)elperObjectClass.o

$(OBJFI)Girl.o: Girl.h Girl.cpp
	g++ -c Girl.cpp -o $(OBJFI)Girl.o