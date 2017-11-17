//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwOpenDoor.h
*/

#ifndef mwOpenDoorH
#define mwOpenDoorH
#include <iostream>
#include "IState.h"
#include "IOActions.h"
#include "mwStates.h"



using namespace std;

class OpenDoorState : public IState {
	public:
		OpenDoorState();
		virtual ~OpenDoorState();
		int getId();
		string getName();
		MWStates getNextState(IOACTION action);

	private:
		int id;
		string name;

};
//---------------------------------------------------------------------------
#endif
