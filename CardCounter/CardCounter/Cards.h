#pragma once
#include "File.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cards
{
protected:
	string m_cards;
	string m_card;
	string m_cardRank;
	vector<vector<string>> cardTab;
	vector<string> temp;

public:
	Cards();
	Cards(string card, string cardRank);
	Cards(File file);

	void setCards(File cards);
	void setCard(string card);
	void setCardTab(File cards);
	void setCardRank(string cardRank);
	void setCard();
	
	string getCard() {
		return m_card;
	}

	string getCards() {
		return m_cards;
	}

	string getCardRank() {
		return m_cardRank;
	}

	string card(int index) {
		return cardTab[index][0];
	}

	string Rank(int index) {
		return cardTab[index][1];
	}

	int cardsCounter() {
		return cardTab.size();
	}
};


