//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ITimerState.h
*/

#ifndef ITimerStateH
#define ITimerStateH

#include <iostream>
using namespace std;

class ITimerState {
	public:
		ITimerState();
		virtual ~ITimerState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual string getTime() = 0;
		virtual bool isExtended() = 0;
		virtual unsigned getSeconds() = 0;
		virtual bool substractSec() = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
