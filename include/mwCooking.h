//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: mwCooking.h
*/

#ifndef mwCookingH
#define mwCookingH

#include <iostream>
#include "IState.h"
#include "IOActions.h"
#include "mwStates.h"


using namespace std;

class CookingState : public IState {
	public:
		CookingState();
		virtual ~CookingState();
		int getId();
		string getName();
		MWStates getNextState(IOACTION action);

	private:
		int id;
		string name;

};
//---------------------------------------------------------------------------
#endif
