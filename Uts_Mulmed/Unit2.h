//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TFMateri : public TForm
{
__published:	// IDE-managed Components
        TImage *Background;
        TPanel *DisplayPnl;
        TImage *MateriImg;
        TMediaPlayer *MediaVideo;
        TMediaPlayer *MediaAnimasi;
        TMediaPlayer *MediaVoice;
        TMediaPlayer *MediaMusik;
        TMemo *Teks;
        TLabel *LblJdl;
        TTimer *Timer1;
        TTimer *Timer2;
        TTimer *Timer3;
        TTimer *Timer4;
        TTimer *Timer5;
        TTimer *Timer6;
private:	// User declarations
public:		// User declarations
        __fastcall TFMateri(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMateri *FMateri;
//---------------------------------------------------------------------------
#endif
