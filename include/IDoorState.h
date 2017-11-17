//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: IDoorState.h
*/

#ifndef IDoorStateH
#define IDoorStateH

#include <iostream>
using namespace std;

class IDoorState {
	public:
		IDoorState();
		virtual ~IDoorState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual bool isOpen() = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
