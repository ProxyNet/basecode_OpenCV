#include <opencv2/opencv.hpp>
#include <opencv/highgui.h>
#include <iostream>


using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	// EXERCICE1


	// Permet de lire l'image dans le dossier
	Mat image = imread("E:\\Cours\\Imagerie Numérique\\Imagerie_Numerique\\image3.png",IMREAD_GRAYSCALE);

	//Calcul le nombre de pixel de l'image
	cv:Scalar scalaire = mean(image);
	float myMAtMean = scalaire.val[0];

	cout << "La valeur Moyenne des pixels de l'image en question est :" << myMAtMean << endl;


	//Nom de la fentre 
	String windowName = "EXERCICE1"; 
	
	// Creer la fentre en question
	namedWindow(windowName); 

	// Affiche l'image dans la fenetre en question
	imshow(windowName, image); 

	// Attend une touche dans la fenetre 
	waitKey(0); 

	// Supprime la fenetre qui a été creer 
	destroyWindow(windowName);

	// En cas d'erreur 
	if (image.empty())
	{
		cout << "L'image n'a pas été trouvée" << endl;
		// En attente de selection d'une touche de clavier
		cin.get();
		return -1;
	}
	
	return 0;
}
