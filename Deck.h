#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
using namespace std;

class Deck
{
	public:
		Deck();
		~Deck();
		
		fillPile();
	private:
		vector<Card> pile;
		vector<Card> playerHand;
		vector<Card> computerHand;
};
#endif
