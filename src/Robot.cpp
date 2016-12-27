#include "Robot.h"
#include <stdio.h>

Robot::Robot(){}

Robot::Robot(Axis axis_x , Axis axis_y , double r, double w)
{
	Axis_X = axis_x;
	Axis_Y = axis_y;
	Radius = r;
	Weight = w;
}

void Robot::Display()   //´íÎó
{
	printf("The location of the Robot Hand is ( %d  , %d )", Axis_X.Parameter.Position, Axis_X.Parameter.Position);

}