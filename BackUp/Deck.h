#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
using namespace std;

class Deck
{
	public:
		Deck();
		~Deck();
		void fillPile();
		void shuffle();
		void Draw();
		//Getters
		int getCPU(){return computerHand.size();}
		int getPile(){return pile.size();}
		int getHand(){return playerHand.size();
		}
		//More funcctions
		void playerAttack();
		void prtHand(){
			cout << "Cards in Hand:";
			for (int i=0; i <playerHand.size(); i++){
				cout << " | " << setw(2) << left <<playerHand[i].getValue() <<setw(1) << left << playerHand[i].getSuit() <<" | ";
			}
			cout << "\nCards number :";
			for (int i=0; i <playerHand.size(); i++){
				cout << " | " <<setw(3) << i <<" | ";
			}
		}
		void prtTable(){
			cout <<"================================================================================================================="<< endl;
			cout << "Player played:";
			for (int i=0; i <userTable.size(); i++){
				cout << " | " << setw(2) << left <<userTable[i].getValue() <<setw(1) << left << userTable[i].getSuit() <<" | ";
			}
		}
		void getTrumpCard();
	private:
		vector<Card> pile;
		vector<Card> playerHand;
		vector<Card> computerHand;
		vector<Card> userTable;
		vector<Card> computerTable;
		Card trump;
};
#endif
