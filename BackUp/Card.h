#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card
{
	public:
		void setValue(int v){  value=v;
		};
		int getValue(){return value;
		};
		void setSuit(char s){ suit = s;
		}
		char getSuit(){return suit;
		}
		Card(int v, char s){
			value=v;
			suit=s;
		}
		Card(){
			value=0;
			suit= 'X';
		}
	private:
		int value;
		char suit;
};

#endif
