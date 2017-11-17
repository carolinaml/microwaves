//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: IOvenState.h
*/

#ifndef IOvenStateH
#define IOvenStateH

#include <iostream>
using namespace std;

class IOvenState {
	public:
		IOvenState();
		virtual ~IOvenState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual bool getPower() = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
