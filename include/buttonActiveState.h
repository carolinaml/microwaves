//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: ButtonActiveState.h
*/

#ifndef ButtonActiveStateH
#define ButtonActiveStateH

#include "IButtonState.h"
using namespace std;

class ButtonActiveState : public IButtonState {
	public:
		ButtonActiveState();
		virtual ~ButtonActiveState();
		int getId();
		string getName();
		bool isActived();

	private:
		int id;
		bool actived;
		string name;

};

//---------------------------------------------------------------------------
#endif
