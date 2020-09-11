/*  
	But : �crire un programme qui lit un entier et qui d�termine et affiche s'il sagit d'un entier
	ou d'un entier impair
	Auteur : S�batien Bigras-Henri
	Date :2020-10-08
*/
#include <iostream>

int main()
{
	setlocale(LC_ALL, ""); // Va servir � convertir les accents de Windows � la console de la bonne fa�on

	int nombre1; // la variable est d�clar� ici, au d�but si programme. 


	// Le programme invite l'utilisateur � taper un nombre entier, par la suite le programme l'affiche
	std::cout << "veuillez entrer un nombre entier : ";
	// Le programme 
	std::cin >> nombre1;

	if (nombre1 % 2 == 0 ) // Le programme regarde les nombres entr�s par l'utilisateur et lui dit s'il est pair ou impair.
		// cr�ation d'un autre block d'instruction qui sera activ� seulement si la condition est vraie
	{
		std::cout << nombre1 << " est un nombre pair"; // Si le programme d�tecte que le nombre se termine par 2, 4, 6, 8 ou 0
		                                               // il doit �crire cette la phrase nombre1 "est un nombre pair"
	}
	else
	{
		std::cout << nombre1 << " est un nombre impair";  // � l'inverse s'il ne d�tecte pas que le nombre est divisible par un de ces nombre, 
		                                                   // il marquera que le nombre1 "est un nombre impair" 
	}

	return 0; // Fermeture du programme avec succ�s.

}

// Plan de tests
/*
nombre1              r�sultat attendu
12                   12 est un nombre pair
-7                   -7 est un nombre impair
45                   45 est un nombre impair
-34                   34 est un nombre pair
15674674             15674674 est un nombre pair
*/