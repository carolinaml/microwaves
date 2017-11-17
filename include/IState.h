//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: IState.h
*/

#ifndef IStateH
#define IStateH

#include <iostream>
#include "IOActions.h"
#include "mwStates.h"

using namespace std;

class IState {
	public:
		IState();
		virtual ~IState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual MWStates getNextState(IOACTION) = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
