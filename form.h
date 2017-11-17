//---------------------------------------------------------------------------
/*
//      PROJECT: MICROWAVES
//      ISFT 151
//      ANALISIS EN SISTEMAS
//      EDI III - 2017
//
//      Carolina Linero
//
//      File: form.h
*/

#ifndef formH
#define formH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include "sm.h"
#include <Vcl.Imaging.GIFImg.hpp>
#include <windows.h>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *MICROWAVES;
	TEdit *door;
	TEdit *button;
	TEdit *light;
	TEdit *oven;
	TEdit *timer;
	TEdit *alarm;
	TButton *BOpenDoor;
	TButton *BCloseDoor;
	TButton *PushButton;
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *mw;
	TImage *Image1;
	TImage *Image2;
	TEdit *time;
	TTimer *Timer1;
	TImage *Image3;
	void __fastcall BOpenDoorClick(TObject *Sender);
	void __fastcall BCloseDoorClick(TObject *Sender);
	void __fastcall PushButtonClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);

private:	// User declarations
	stateMachine * microwaves;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void __fastcall updateForm();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
