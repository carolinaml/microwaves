//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: timerExtendedState.h
*/

#ifndef TimerExtendedStateH
#define TimerExtendedStateH

using namespace std;

class TimerExtendedState : public IOvenState {
	public:
		TimerExtendedState(int m);
		virtual ~TimerExtendedState();
		int getId();
		int getId();
		string getTime();
		string getName();
		bool isExtended();
		unsigned getSeconds();
		bool substractSec();

	private:
		TimerExtendedState();
		int id;
		int s, m;
		bool extended;

};
//---------------------------------------------------------------------------
#endif
