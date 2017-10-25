//robot part header file
#ifndef VXS8476_ROBOT_PART_H
#define VXS8476_ROBOT_PART_H 2017
#include <stdlib.h>
#include <string>

using namespace std;

class Robot_part
{
	public:
		Robot_part(string, int, double, string, string);
	protected:
		string name;
		int model_number;
		double cost;
		string description;
		string image_filename;
};
#endif
