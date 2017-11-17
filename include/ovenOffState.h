//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ovenOffState.h
*/

#ifndef ovenOffH
#define ovenOffH

#include "IOvenState.h"
#include <iostream>
using namespace std;

class OvenOffState : public IOvenState {
	public:
		OvenOffState();
		virtual ~OvenOffState();
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
