#include "vxs8476_robot_part.h" 

//Constructor of robot part
Robot_part::Robot_part(string n, int mn, double c, string d, string i)
{
	name = n;
	model_number = mn;
	cost = c;
	description = d;
	image_filename = i;
}