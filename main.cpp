#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;


int main() {
	Card magic;
	magic.setSuit('H');
	magic.setValue(11);
	
	cout << magic.getValue();
	return 0;
}
