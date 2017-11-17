//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ILightState.h
*/

#ifndef ILightStateH
#define ILightStateH

#include <iostream>
using namespace std;

class ILightState {
	public:
		ILightState();
		virtual ~ILightState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual bool getPower() = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
