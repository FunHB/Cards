#include "Exp.h"
#include "Cards.h"
#include <iostream>
#include <utility>
#include <map>
#include <string>

using namespace std;

Exp::Exp(string cardUpRank) {
	setExp();
	setCardUpRank(cardUpRank);
}

void Exp::setExp() {
	expMap.insert(pair<string, int>("SSS", 1));
	expMap.insert(pair<string, int>("SS", 2));
	expMap.insert(pair<string, int>("S", 4));
	expMap.insert(pair<string, int>("A", 8));
	expMap.insert(pair<string, int>("B", 16));
	expMap.insert(pair<string, int>("C", 32));
	expMap.insert(pair<string, int>("D", 64));
	expMap.insert(pair<string, int>("E", 128));
}

void Exp::setCardUpRank(string cardUpRank) {
	m_cardUpRank = cardUpRank;
}

