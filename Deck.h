#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

class Deck
{
	public:
		Deck();
		~Deck();
		void fillPile();
		void shuffle();
		void Draw();
		//ACC
		int getCPU(){return computerHand.size();}
		int getPile(){return pile.size();}
		void prtHand(){
			cout << "Cards in Hand:";
			for (int i=0; i <playerHand.size(); i++){
				cout << " | " <<playerHand[i].getSuit() <<playerHand[i].getValue() <<" | ";
			}
		}
		Card getTrumpCard();
	private:
		vector<Card> pile;
		vector<Card> playerHand;
		vector<Card> computerHand;
};
#endif
