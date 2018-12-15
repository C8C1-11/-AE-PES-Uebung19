// AE-PES-Uebung19.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// This decides how precise pi will be.
	int depth = 0;
	double iterimResult = 0;

	cout << "depth: ";
	// Ask for depth.
	cin >> depth;
	cout << "\n";

	int mathSign = depth % 2 != 0 ? 1 : -1;

	// First we make depth zero-based:
	// 1 + 0depth * 2 * 1mathSign = 1denominator
	// => the last needed denominator
	for (--depth; depth >= 0; depth--) {
		int denominator = 1 + depth * 2;
		iterimResult += ((double)1 / denominator) * mathSign;
		// Comment this out for visualization.
		//cout << mathSign << " * " << "1/" << denominator << ",";
		// Swap math sign.
		mathSign *= -1;
	}

	// Calculate pi.
	double pi = iterimResult * 4;

	cout << "\npi: " << pi << "\n";
	system("pause");
	return 0;
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
