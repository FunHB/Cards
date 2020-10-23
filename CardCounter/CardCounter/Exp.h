#pragma once
#include <iostream>
#include <utility>
#include <map>
#include <string>
#include "Cards.h"

using namespace std;

class Exp
{
protected:
	double m_sumExp = 0;
	string m_cardUpRank;
	map<string, int> expMap;

public:
	Exp();
	Exp(string cardUpRank);

	void setExp();
	void setCardUpRank(string cardUpRank);

	string getCardUpRank() {
		return m_cardUpRank;
	}

	double expCounter(string cardRank) {
		return 3.0 * (expMap[m_cardUpRank] / expMap[cardRank]);
	}

	double sumExp(Cards cards, int index) {
		return index == -1 ? 0 : expCounter(cards.Rank(index)) + sumExp(cards, index - 1);
	}
};




