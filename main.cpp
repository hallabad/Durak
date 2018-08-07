#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

//Prototype
void prtTable(Deck&);

int main() {
	Deck cards;
	cards.shuffle();
	cards.Draw();
	prtTable(cards);
	return 0;
}

void prtTable(Deck& cards){
	system ("CLS");
	cout << "Computer Hand:" << cards.getCPU() << "\nPile:" << cards.getPile() << "\t Trump Card:"<< endl;
	cards.prtHand();
}
