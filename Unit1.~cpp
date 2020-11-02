//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFUtama *FUtama;
fungsiku *Func;
//---------------------------------------------------------------------------
__fastcall TFUtama::TFUtama(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

//-------------------ehem, jadi gini boi ----------------------------
//ini moon maap karena spaghetti code kek gini karena aing cara gatau bikin class di borland kumaha
//atau keknya aing yang males nyari ehe!,kira kira untuk workflow nya kek gini
//Semua data yang akan ditampilin di form Materi(FMateri) di inisialisasiin disini
//soalnya biar dinamis dan gaperlu buat banyak banyak form.

//-------------Untuk nama file :-----------
//1. untuk txt
//"Nomor""Materi""bagian",Nomor biar ngurut ajasih dan gampang dicari karena udah ada nama materinya
//jadi gampang buat diinget, harusnya.dan bagian untuk tau ini bagian yang mana
//2. untuk gambar
//"Materi""section",Materi biar gampang diinget,section itu ya section aja bisa angka
//atau kata kunci. bisa diliat lah yah contohnya di code di bawah ini

//------fileName dan imName -------
//fileName adalah array di Form Materi yang difungsikan untuk ngisi nama file txt.
//kenapa harus buat ini
//button onClick Definisi
// urg mau nampilin text"1Definisi2.txt" di memo di timer1.
//tapi kan memo masih diisi sama "1Definisi.txt". gimana caranya timer1 tau file "1Definisi2.txt"
// nah disitulah filename berguna.
//filename ini kek penampung sementara nama file yang akan ditampilkan.
//indeksnya berfungsi untuk nunjukin dia ditaro di timer berapa
//contoh, Filename[1] = "1Definisi2.txt"; berarti si "1Definisi2.txt" akan ditampilin di timer1 , dst.
// makanya pastiin indeksnya bener.
//untuk imName juga sama sih konsepnya cuman kalo imName ya image.

//--------progreess---------
//paling baru musik gambar sama teks dulu sih.
// sama kek baru diatur timing nya gitu.

//------Video------
//untuk video keknya di Materi Implementasi aja keknya


void __fastcall TFUtama::BitDefinisiClick(TObject *Sender)
{
FMateri->Show();
FUtama->Hide();

FMateri->LblJdl->Caption = "Kenalan yuk sama Smart Waste Management!"  ;
FMateri->Teks->Lines->LoadFromFile("1Definisi.txt");
FMateri->MateriImg->Picture->LoadFromFile("Definisi.bmp");

FMateri->Imname[1] = "Definisi-2.bmp";
FMateri->Filename[1] = "1Definisi2.txt";
FMateri->Timer1->Enabled = true;
FMateri->Timer1->Interval = 5000;



}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitBtn5Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitBedaClick(TObject *Sender)
{
FMateri->Show();
FUtama->Hide();

FMateri->LblJdl->Caption = "Kenapa sih Smart Waste Management ini keren??";
FMateri->MateriImg->Picture->LoadFromFile("Perbedaan.bmp");

FMateri->Teks->Lines->LoadFromFile("3Perbedaan.txt");
}
//---------------------------------------------------------------------------

void __fastcall TFUtama::BitCaraKerjaClick(TObject *Sender)
{
FMateri->Show();
FUtama->Hide();

FMateri->LblJdl->Caption = "Gimana sih Smart Waste Management??"  ;

FMateri->Show();
FMateri->Teks->Lines->LoadFromFile("2Cara Kerja.txt");
FMateri->MateriImg->Picture->LoadFromFile("Cara-Kerja.bmp");

FMateri->Imname[1] = "Cara-Kerja-Micro.bmp";
FMateri->Filename[1] = "2Cara Kerja2.txt";
Func->SetTimer(1, 5000, true);
//FMateri->Timer1->Enabled = true;
//FMateri->Timer1->Interval = 5000;

FMateri->Imname[2] = "Cara-Kerja-Sensor.bmp";
FMateri->Filename[2] = "2Cara Kerja2.txt";
Func->SetTimer(2, 7500, true);
//FMateri->Timer2->Enabled = true;
//FMateri->Timer2->Interval = 7500;

FMateri->Imname[3] = "Cara-Kerja-Modem.bmp";
FMateri->Filename[3] = "2Cara Kerja3.txt";
FMateri->Timer3->Enabled = true;
FMateri->Timer3->Interval = 10000;

FMateri->Imname[4] = "Cara-Kerja-Truk.bmp";
FMateri->Filename[4] = "2Cara Kerja4.txt";
FMateri->Timer4->Enabled = true;
FMateri->Timer4->Interval = 15000;
}
//---------------------------------------------------------------------------

void __fastcall TFUtama::BitImplementasiClick(TObject *Sender)
{
Form3->Show();
FMateri->MediaMusik->Stop();
FUtama->Hide();
}
//---------------------------------------------------------------------------

