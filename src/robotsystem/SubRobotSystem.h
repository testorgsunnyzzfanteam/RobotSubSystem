#pragma once
#ifndef SUB_ROBIT_SYSTEM_H
#define SUB_ROBOT_SYSTEM_H
namespace SubRobotSystem
{
	class RobotSystem
	{
	
	private:
		double position_x; //机械手x坐标
		double position_y; //机械手y坐标
		double velocity_x; //机械手x方向速度
		double velocity_y; //机械手y方向速度
	public:
		RobotSystem();
		~RobotSystem();
		double GetPosition(void);
		double GetVelocity(void);
	};
}
#endif 