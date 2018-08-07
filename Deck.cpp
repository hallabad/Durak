#include "Deck.h"

Deck::Deck()
{
	fillPile();
}

Deck::~Deck()
{
}

void Deck::fillPile(){
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
	cout << "Draw pile Have been filled"<< endl;
};

void Deck::shuffle(){
	random_shuffle ( pile.begin(), pile.end());
	for (int i= 0; i <36; i++){
		cout << pile[i].getSuit() << pile[i].getValue() << "\t";
	}
	cout << "\nDraw pile have been shuffled"<< endl;
	cout << "PILE SIZE:"<< pile.size() << endl;
}

void Deck::Draw(){
	if (playerHand.size()<6){
		for (int i=0; playerHand.size()<6 ; i++){
			playerHand.push_back(pile.back());
			pile.erase(pile.begin()+pile.size()-1);
			cout << playerHand.back().getValue() << playerHand.back().getSuit() << endl;
		}
	}
	cout << "PILE SIZE:"<< pile.size() << endl;
		if (computerHand.size()<6){
		for (int i=0; computerHand.size()<6 ; i++){
			computerHand.push_back(pile.back());
			pile.erase(pile.begin()+pile.size()-1);
			cout << computerHand.back().getValue() << computerHand.back().getSuit() << endl;
		}
	}
	cout << "PILE SIZE:"<< pile.size() << endl;
}

Card Deck::select(string userInput){
	for (int i=0; i < getHand();i++){
		string cardName="";
	}
	return playerHand[0];
}

void Deck::getTrumpCard(){
	trump.setSuit(pile[0].getSuit());
	trump.setValue(pile[0].getValue());
	cout << trump.getValue() << trump.getSuit();
}
