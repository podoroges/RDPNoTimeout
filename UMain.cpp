//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TFMain *FMain;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
int one = 1;
void __fastcall TFMain::Timer1Timer(TObject *Sender)
{
  POINT pt;
  GetCursorPos(&pt);
  one = - one;
  SetCursorPos(pt.x+one,pt.y);
}
//---------------------------------------------------------------------------
void __fastcall TFMain::TrayIcon1Click(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------

