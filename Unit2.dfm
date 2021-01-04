object FMateri: TFMateri
  Left = 817
  Top = 226
  Width = 970
  Height = 504
  Caption = 'Materi'
  Color = clGradientActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object MateriImg: TImage
    Left = 16
    Top = 152
    Width = 440
    Height = 273
    Stretch = True
  end
  object LblJdl: TLabel
    Left = 280
    Top = 24
    Width = 64
    Height = 32
    Caption = 'Judul'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object DisplayPnl: TPanel
    Left = 40
    Top = 168
    Width = 377
    Height = 240
    TabOrder = 0
    Visible = False
  end
  object MediaVideo: TMediaPlayer
    Left = 112
    Top = 232
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 1
  end
  object MediaAnimasi: TMediaPlayer
    Left = 112
    Top = 264
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 2
  end
  object MediaVoice: TMediaPlayer
    Left = 112
    Top = 328
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 3
  end
  object MediaMusik: TMediaPlayer
    Left = 112
    Top = 296
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 4
  end
  object Teks: TMemo
    Left = 488
    Top = 152
    Width = 401
    Height = 201
    Lines.Strings = (
      'Teks')
    TabOrder = 5
  end
  object BitBtn5: TBitBtn
    Left = 24
    Top = 32
    Width = 121
    Height = 41
    Caption = 'Close'
    TabOrder = 6
    OnClick = BitBtn5Click
  end
  object Button1: TButton
    Left = 648
    Top = 376
    Width = 121
    Height = 49
    Caption = 'REPLAY'
    TabOrder = 7
    OnClick = Button1Click
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 176
    Top = 120
  end
  object Timer2: TTimer
    Enabled = False
    OnTimer = Timer2Timer
    Left = 176
    Top = 120
  end
  object Timer3: TTimer
    Enabled = False
    OnTimer = Timer3Timer
    Left = 176
    Top = 120
  end
  object Timer4: TTimer
    Enabled = False
    OnTimer = Timer4Timer
    Left = 176
    Top = 120
  end
end
