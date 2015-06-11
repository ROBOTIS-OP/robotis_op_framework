/*
 *   Head.h
 *
 *   Author: ROBOTIS
 *
 */

#ifndef _BODY_H_
#define _BODY_H_

#include <string.h>
#include <vector>

#include "minIni.h"
#include "MotionModule.h"
#include "Point.h"


namespace Robot
{
	class Body : public MotionModule
	{
	private:
		static Body* m_UniqueInstance;
		//vector<double> m_target_positions;
		std::vector<double> m_positions;
		
		Body();

	public:
		static Body* GetInstance() { return m_UniqueInstance; }
		
		~Body();

		void Initialize();
		void Process();
		void setPosition(int index, double positionRad){ m_positions[index]=positionRad; }


		double getPositionRad(int index){ return  m_positions[index]; }
 
		

	};
}

#endif
