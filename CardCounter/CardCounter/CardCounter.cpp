// CardCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Exp.h"
#include "Cards.h"
#include "File.h"
#include <iostream>
#include <string>

int main()
{


	/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	File file("C:/Users/MSI/Desktop/asd/Karty na spalenie.txt");
	Cards cards(file);
	string rank;

	cout << "W pliku znajdujê siê " << cards.cardsCounter() << " kart\n";
	cout << "Podaj Rangê dla jakiej chcesz liczyæ expa\n";

	cin >> rank;

	Exp exp(rank);
	cout << "Dla podanej rangi iloœæ expa z kart w pliku wynosi: " << exp.sumExp(cards, cards.cardsCounter()) << "\n";


	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
