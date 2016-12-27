#include"stdafx.h"
#include <iostream>
#include "Axis.h"
#include "Robot.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	Axis_state state_init;
	state_init = { true, false };

	parameter parameter_init_X,parameter_init_Y;
	parameter_init_X = { 0, 0, 0, 0 ,5000 };
    parameter_init_Y = { 0, 0, 0, 0 ,5000 };

	new_cmd new_cmd_init;
	new_cmd_init = { 400, 1000, 0.5 }; 
	//×¢ÒâÖ¸ÁîÒ»°ãÂú×ã New_Cmd.Time * New_Cmd.Velocity > (New_Cmd.Position - Parameter.Position)> New_Cmd.Time * New_Cmd.Velocity / 2


	Axis Axis_X( state_init, parameter_init_X, new_cmd_init );
	Axis Axis_Y( state_init, parameter_init_Y, new_cmd_init );
	//Axis_test.init_Axis( state_init, parameter_init, new_cmd_init );

	//Axis_test.take_order();

	
	Axis_X.take_order();

	Robot robot_test(Axis_X, Axis_Y,10,10);
	robot_test.Display();

	return 0;

}