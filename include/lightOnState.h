//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: lightOnState.h
*/

#ifndef lightOnStateH
#define lightOnStateH

#include "ILightState.h"
using namespace std;

class LightOnState : public ILightState {
	public:
		LightOnState();
		virtual ~LightOnState();
		int getId();
		string getName();
		bool getPower();
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
