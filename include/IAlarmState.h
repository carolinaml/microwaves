//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: IAlarmState.h
*/

#ifndef IAlarmStateH
#define IAlarmStateH

#include <iostream>
using namespace std;

class IAlarmState {
	public:
		IAlarmState();
		virtual ~IAlarmState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual bool isBeeping() = 0;
		virtual bool beep() = 0;
		virtual int rcount() = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
