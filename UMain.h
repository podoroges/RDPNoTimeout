//---------------------------------------------------------------------------

#ifndef UMainH
#define UMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "trayicon.h"
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TFMain : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TTrayIcon *TrayIcon1;
        TImageList *ImageList1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall TrayIcon1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMain *FMain;
//---------------------------------------------------------------------------
#endif
