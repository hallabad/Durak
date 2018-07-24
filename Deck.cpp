#include "Deck.h"

Deck::Deck()
{
}

Deck::~Deck()
{
}

Deck::fillPile(){
	for (int i=6; i < 15;i++){
		pile.push_back(i,'H');
	}
