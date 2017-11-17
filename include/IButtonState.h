//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: IButtonState.h
*/

#ifndef IButtonStateH
#define IButtonStateH

#include <iostream>
using namespace std;

class IButtonState {
	public:
		IButtonState();
		virtual ~IButtonState() = 0;
		virtual int getId() = 0;
		virtual string getName() = 0;
		virtual bool isActived() = 0;

	private:

};
//---------------------------------------------------------------------------
#endif
