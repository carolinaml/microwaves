//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: buttonDisabledState.h
*/

#ifndef ButtonDisabledStateH
#define ButtonDisabledStateH
#include "IButtonState.h"

using namespace std;

class ButtonDisabledState : public IButtonState {
	public:
		ButtonDisabledState();
		virtual ~ButtonDisabledState();
		int getId();
		bool isActived();
		string getName();

	private:
		int id;
		bool actived;
		string name;

};
//---------------------------------------------------------------------------
#endif
