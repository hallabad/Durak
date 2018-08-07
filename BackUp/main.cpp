#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

//Prototype
void prtTable(Deck&);

int main() {
	string userInput="";
	Deck cards;
	Card temp;
	
	cards.shuffle();
	cards.Draw();
	system ("CLS");
	prtTable(cards);
	cards.playerAttack();
	
	return 0;
}

void prtTable(Deck& cards){
	cout << "Computer Hand:" << cards.getCPU() << "\nPile:" << cards.getPile() << "\t Trump Card:";
	cards.getTrumpCard();
	cout << endl;
	cards.prtHand();
	cout << endl;
}
