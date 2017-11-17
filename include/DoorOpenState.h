//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: doorOpenState.h
*/

#ifndef doorOpenH
#define doorOpenH

#include "IDoorState.h"
#include <iostream>

using namespace std;

class DoorOpenState : public IDoorState {
	public:
		DoorOpenState();
		virtual ~DoorOpenState();
		int getId();
		bool isOpen();
		string getName();

	private:
		int id;
		bool opened;
		string name;

};

//---------------------------------------------------------------------------
#endif
