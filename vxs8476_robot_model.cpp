#include "vxs8476_robot_model.h" 

//Constructor of robot model
Robot_model::Robot_model(string na, int mnum, Robot_part t, Robot_part h, Robot_part lm, Robot_part a, Robot_part bat)
{
	name = na;
	model_number = mnum;
	torso = t;
	head = h;
	locomotor = lm;
	arm = a;
	battery = bat;
}
