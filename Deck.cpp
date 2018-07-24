#include "Deck.h"

Deck::Deck()
{
}

Deck::~Deck()
{
}

Deck::fillPile(){
	for (int i=6; i < 15;i++){
		pile.push_back(Card(i,'H'));
		cout << pile[i-6].getSuit() << pile[i-6].getValue() << endl;
	}
	for (int i=6; i < 15;i++){
		pile.push_back(Card(i,'D'));
		cout << pile[i].getSuit() << pile[i-6].getValue() << endl;
	}
	for (int i=6; i < 15;i++){
		pile.push_back(Card(i,'C'));
		cout << pile[i+6].getSuit() << pile[i-6].getValue() << endl;
	}
	for (int i=6; i < 15;i++){
		pile.push_back(Card(i,'S'));
		cout << pile[i+6+6].getSuit() << pile[i-6].getValue() << endl;
	}
};
