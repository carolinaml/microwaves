//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ovenCookingState.h
*/

#ifndef ovenCookingH
#define ovenCookingH

#include "IOvenState.h"
#include <iostream>
using namespace std;

class OvenCookingState : public IOvenState {
	public:
		OvenCookingState();
		virtual ~OvenCookingState();
		int getId();
		bool getPower();
		string getName();

	private:
		int id;
		bool power;
		string name;

};

//---------------------------------------------------------------------------
#endif
