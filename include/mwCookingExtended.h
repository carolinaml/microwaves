//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwCookingExtended.h
*/

#ifndef mwCookingExtendedH
#define mwCookingExtendedH

#include <iostream>
#include "IState.h"
#include "IOActions.h"
#include "mwStates.h"


using namespace std;

class CookingExtendedState : public IState {
	public:
		CookingExtendedState();
		virtual ~CookingExtendedState();
		int getId();
		string getName();
		MWStates getNextState(IOACTION action);

	private:
		int id;
		string name;

};
//---------------------------------------------------------------------------
#endif
