#pragma once
#ifndef SUB_ROBIT_SYSTEM_H
#define SUB_ROBOT_SYSTEM_H
namespace SubRobotSystem
{
	class RobotSystem
	{
	
	private:
		double position_x; //��е��x����
		double position_y; //��е��y����
		double velocity_x; //��е��x�����ٶ�
		double velocity_y; //��е��y�����ٶ�
	public:
		RobotSystem();
		~RobotSystem();
		double GetPosition(void);
		double GetVelocity(void);
	};
}
#endif 