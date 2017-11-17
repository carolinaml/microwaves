//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwIdle.h
*/

#ifndef mwIdleH
#define mwIdleH

#include <iostream>
#include "IState.h"
#include "IOActions.h"
#include "mwStates.h"

using namespace std;

class IdleState : public IState {
	public:
		IdleState();
		virtual ~IdleState();
		int getId();
		string getName();
		MWStates getNextState(IOACTION action);

	private:
		int id;
		string name;

};
//---------------------------------------------------------------------------
#endif
