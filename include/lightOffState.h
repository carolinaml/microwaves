//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: lightOffState.h
*/

#ifndef lightOffStateH
#define lightOffStateH

#include "ILightState.h"
#include <iostream>

using namespace std;

class LightOffState : public ILightState {
	public:
		LightOffState();
		virtual ~LightOffState();
		int getId();
		bool getPower();
		string getName();
		void entryAction();
		void exitAction();
		void openDoor();
		void closeDoor();
		void pushButton();
		void expiresTime();
		void finishBeeping();

	private:
		int id;
		bool power;
		string name;

};
//---------------------------------------------------------------------------
#endif
