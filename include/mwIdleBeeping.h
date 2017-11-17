//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwIdleBeeping.h
*/

#ifndef mwIdleBeepingH
#define mwIdleBeepingH

#include <iostream>
#include "IState.h"
#include "IOActions.h"
#include "mwStates.h"



using namespace std;

class IdleBeepingState : public IState{
	public:
		IdleBeepingState();
		virtual ~IdleBeepingState();
		int getId();
		string getName();
		MWStates getNextState(IOACTION action);

	private:
		int id;
		string name;

};
//---------------------------------------------------------------------------
#endif
