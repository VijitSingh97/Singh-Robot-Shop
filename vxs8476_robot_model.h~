//robot model header file
#ifndef VXS8476_ROBOT_MODEL_H
#define VXS8476_ROBOT_MODEL_H 2017
#include <stdlib.h>
#include <string>
#include "vxs8476_robot_part.h"

using namespace std;

class Robot_model
{
	public:
		Robot_model(string,int,Robot_part,Robot_part,Robot_part,Robot_part,Robot_part);
		double cost();
		double max_speed();
		double max_battery_life();
	private:
		string name;
		int model_number;
		Robot_part torso;
		Robot_part head;
		Robot_part locomotor;
		Robot_part arm;
		Robot_part battery;
};
#endif
