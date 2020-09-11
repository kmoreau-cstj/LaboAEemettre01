/*
But : �crire un programme qui prend comme entr�e un nombre de cinq chiffres et qui v�rifi bien qu'il y a 5 chiffre dans le nombre et enfin, il affiche le nombre verticalement.
Auteur : S�bastien Bigras-Henri
Date : 2020-10-09
*/

#include <iostream>
#include <string>

int main()
{

	setlocale(LC_ALL, "");

	int nombre1;

	std::cout << "veuillez entrer un nombre entier � cinq chiffres :";
	std::cin >> nombre1; // Saisir l'entr� des donn�es. 
	// V�rifier le nombre entr� : il faut que le nombre1 soit de cinq chiffres.
	if (nombre1 < 10000 || nombre1 > 99999)
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres. ";
		return -1; // Fermeture du programme avec code d'erreur. 
	}
	std::string charact�res = std::to_string(nombre1); // Convertir le nombre en string.
	for (char const& c : charact�res)// Parcourir la liste des charact�res et imprimer un charact�res � la fois.
	{
		std::cout << c << std::endl; // Imprimer un charact�re avec un retour de ligne.
	}

	return 0; // Fermeture du programme avec succ�s.
}
// Plan de tests.
/*
Nombre1           R�sultat attendu
12345             Imprimer 12345 en vertical
23475             Imprimer 23475 en vertical
0                 Ce nombre ne contient pas 5 chiffres
abo               Ce nombre ne contient pas 5 chiffres
7853349           Ce nombre ne contient pas 5 chiffres
*/