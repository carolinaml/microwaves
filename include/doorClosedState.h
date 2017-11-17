//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: doorClosedState.h
*/

#ifndef doorClosedH
#define doorClosedH

#include "IDoorState.h"
using namespace std;

class DoorClosedState : public IDoorState {
	public:
		DoorClosedState();
		virtual ~DoorClosedState();
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
