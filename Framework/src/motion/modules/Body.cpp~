/*
 *   Head.cpp
 *
 *   Author: ROBOTIS
 *
 */

#include <stdio.h>
#include "MX28.h"
#include "Kinematics.h"
#include "MotionStatus.h"
#include "Body.h"

using namespace Robot;


Body* Body::m_UniqueInstance = new Body();

Body::Body()
{	
	m_Joint.SetEnableBody(true);
}

Body::~Body()
{
}



void Body::Initialize()
{


	for(int i=0; i<JointData::NUMBER_OF_JOINTS; i++)
	{
		m_positions.push_back(MotionStatus::m_CurrentJoints.GetAngle(i));
		m_Joint.SetAngle(i+1, m_positions[i]);
		m_Joint.SetSlope(i+1, JointData::SLOPE_EXTRASOFT, JointData::SLOPE_EXTRASOFT);
    		m_Joint.SetPGain(i+1, 5);
		m_Joint.SetAngle(i+1, m_positions[i]);
	}



    Process();
}



void Body::Process()
{
	for(int i=0; i<JointData::NUMBER_OF_JOINTS; i++)
	{ 
		if(m_Joint.GetEnable(i) == true)
		{
			m_Joint.SetAngle(i+1, m_positions[i]);
		}
	}

}
