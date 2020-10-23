#include "Cards.h"
#include "File.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Cards::Cards(string card, string cardRank) {
	setCard(card);
	setCardRank(cardRank);
}

Cards::Cards(File file) {
	setCardTab(file);
}

void Cards::setCardTab(File cards) {
	m_cards = cards.getFile();
	for (int i = 0; i < cards.elementCounter(); i++) {
		temp.push_back(m_cards.substr(0, m_cards.find('(')));
		temp.push_back(m_cards.substr(m_cards.find('(') + 1, m_cards.find(')')));
		cardTab.push_back(temp);
		m_cards.erase(0, m_cards.find(' ') + 1);
	}
}

void Cards::setCardRank(string cardRank) {
	m_cardRank = cardRank;
}

void Cards::setCard(string card) {
	m_card = card;
}

void Cards::setCard() {
	vector<string> temp;
	temp.push_back(m_card);
	temp.push_back(m_cardRank);
	cardTab.push_back(temp);
	temp.pop_back();
	temp.pop_back();
}

