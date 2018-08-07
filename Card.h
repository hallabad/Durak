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
		void setSuit(string s){ suit = s;
		}
		string getSuit(){return suit;
		}
		Card(int v, string s){
			value=v;
			suit=s;
		}
		Card(){
			value=0;
			suit= "X";
		}
	private:
		int value;
		string suit;
};

#endif
