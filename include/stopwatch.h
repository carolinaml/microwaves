//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: stopwatch.h
*/

#ifndef stopwatchH
#define stopwatchH

#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>
#include <mq.h>
#include <tchar.h>
using namespace std;

class swTime
{
	public:
		swTime(unsigned hh, unsigned mm, unsigned ss);
		swTime(unsigned seconds);
		virtual ~swTime();
		swTime operator-(swTime t2);
		unsigned getSeconds();
		void setTime(unsigned hr, unsigned mi, unsigned se);
		void setTimefromSeconds(unsigned seconds);
		void display();
		swTime getTimefromSeconds(unsigned seconds);
		string getTime();
		void Start();
		void Stop();
		unsigned getMilliSeconds();
		void addTime(unsigned seconds);
		bool substractSec();
		unsigned getHourfromSeconds(unsigned seconds);
		unsigned getMinfromSeconds(unsigned seconds);
		unsigned getSecModfromSeconds(unsigned seconds);
	private:
		HINSTANCE hinst;
		HWND hwndMain;
		unsigned h, m, s;
      	__int64 MilliSeconds() const;
};
//---------------------------------------------------------------------------
#endif
