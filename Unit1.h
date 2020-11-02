//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TFUtama : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TBitBtn *BitDefinisi;
        TBitBtn *BitBeda;
        TBitBtn *BitCaraKerja;
        TBitBtn *BitImplementasi;
        TBitBtn *BitBtn5;
        TBitBtn *BitBtn6;
        TLabel *LblJdl;
        void __fastcall BitDefinisiClick(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall BitBedaClick(TObject *Sender);
        void __fastcall BitCaraKerjaClick(TObject *Sender);
        void __fastcall BitImplementasiClick(TObject *Sender);
        void __fastcall BitBtn6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFUtama(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFUtama *FUtama;
//---------------------------------------------------------------------------
#endif
