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
#include <Buttons.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TFMateri : public TForm
{
__published:	// IDE-managed Components
        TPanel *DisplayPnl;
        TImage *MateriImg;
        TMediaPlayer *MediaVideo;
        TMediaPlayer *MediaAnimasi;
        TMediaPlayer *MediaVoice;
        TMediaPlayer *MediaMusik;
        TMemo *Teks;
        TLabel *LblJdl;
        TBitBtn *BitBtn5;
        TTimer *Timer1;
        TTimer *Timer2;
        TTimer *Timer3;
        TTimer *Timer4;
        TTimer *Timer5;
        TTimer *Timer6;
        
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall Timer4Timer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
String Filename[6];
String Imname[6];
        __fastcall TFMateri(TComponent* Owner);
};
/*Jadi gini gai kalo mau bikin fungsi sendiri.
pertama bikin classnya di sini. terus inisiasi nama fungsinya.
terus inisiasi nama voidnya.
biar gampang nama classnya ini aja, terus tinggal tambah" voidnya kalo perlu
lanjut ke file C++nya.*/
class fungsiku{
private: //sabeb kalo perlu

public:
        void implementasi();
        //silahkan tambah void baru dibawah sini
        void SetTimer(int timerNo, int timerIntr, bool isTimerOn);
        void SetVideo(String flName);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMateri *FMateri;
//---------------------------------------------------------------------------
#endif
