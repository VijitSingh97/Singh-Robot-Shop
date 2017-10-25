//robot model test program

#include <iostream>
#include <string.h>
#include "vxs8476_robot_part.h"
#include "vxs8476_robot_model.h" 

using namespace std;

int main()
{
	Robot_part steeltorso = Robot_part("Steel Torso", 0, 899.99, "Standard 20\" Diameter Body", "steeltorso.png");
	Robot_part titanhel = Robot_part("Titanium Helmet", 1, 750.09, "Excellent Titanium Helmet", "titaniumhelmet.png");
	Robot_part diselengine = Robot_part("Disel Engine", 2, 299.89, "Fair Disel Engine", "diselengine.png");
	Robot_part serasword = Robot_part("Serated Sword", 3, 189.56, "Great Sword", "seratedsword.png");
	Robot_part medlition = Robot_part("Medium Lithium-Ion", 4, 379.78, "Great Battery", "mediumlithiumion.png");
	Robot_model Slicer = Robot_model("Slicer", 0, steeltorso, titanhel, diselengine, serasword, medlition);
	return 0;
}
