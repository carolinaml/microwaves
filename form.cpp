//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: form.cpp
*/

#include <vcl.h>
#pragma hdrstop

#include "form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	microwaves = new stateMachine();
	updateForm();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BOpenDoorClick(TObject *Sender)
{
	microwaves->openDoor();
	updateForm();
}

void __fastcall TForm1::updateForm()
{
	mw->Text 	 = microwaves->getMwState().c_str();
	door->Text 	 = microwaves->getDoorState().c_str();
	button->Text = microwaves->getButtonState().c_str();
	light->Text  = microwaves->getLightState().c_str();
	oven->Text   = microwaves->getOvenState().c_str();
	timer->Text  = microwaves->getTimerState().c_str();
	alarm->Text  = microwaves->getAlarmState().c_str();
	time->Text   = microwaves->getTime().c_str();
	Image1->Visible = !microwaves->isCooking();
	Image2->Visible = microwaves->isCooking();
	Timer1->Enabled = microwaves->isCooking() ? true : microwaves->isBeeping() ? true : false;
	Image3->Visible = microwaves->isBeeping();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BCloseDoorClick(TObject *Sender)
{
	microwaves->closeDoor();
	updateForm();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PushButtonClick(TObject *Sender)
{
	microwaves->pushButton();
	updateForm();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	microwaves->substractSec();
	microwaves->beep();

	updateForm();
}
//---------------------------------------------------------------------------

