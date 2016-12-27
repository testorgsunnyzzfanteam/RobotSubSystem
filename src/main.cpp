#include <iostream>
#include "Axis.h"
#include "Robot.h"
using namespace std;
int main()
{
	Axis_state state_init;
	state_init = { true, false };

	parameter parameter_init;
	parameter_init = { 0, 0, 0, 0 ,5000 };

	new_cmd new_cmd_init;
	new_cmd_init = { 400, 1000, 0.5 }; 
	//×¢ÒâÖ¸ÁîÒ»°ãÂú×ã New_Cmd.Time * New_Cmd.Velocity > (New_Cmd.Position - Parameter.Position)> New_Cmd.Time * New_Cmd.Velocity / 2


	Axis Axis_test( state_init, parameter_init, new_cmd_init );
	//Axis_test.init_Axis( state_init, parameter_init, new_cmd_init );

	//Axis_test.take_order();

	Axis Axis_test_copy = Axis_test;
	Axis_test_copy.take_order();

	Robot robot_test(Axis_test, Axis_test_copy,10,10);
	robot_test.Display();

	return 0;

}