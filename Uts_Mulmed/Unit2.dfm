object FMateri: TFMateri
  Left = 246
  Top = 149
  Width = 970
  Height = 504
  Caption = 'Materi'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Background: TImage
    Left = 0
    Top = 0
    Width = 953
    Height = 457
    Center = True
  end
  object MateriImg: TImage
    Left = 240
    Top = 160
    Width = 240
    Height = 241
  end
  object LblJdl: TLabel
    Left = 432
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
    Left = 64
    Top = 160
    Width = 320
    Height = 240
    TabOrder = 0
  end
  object MediaVideo: TMediaPlayer
    Left = 96
    Top = 232
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 1
  end
  object MediaAnimasi: TMediaPlayer
    Left = 96
    Top = 272
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 2
  end
  object MediaVoice: TMediaPlayer
    Left = 96
    Top = 336
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 3
  end
  object MediaMusik: TMediaPlayer
    Left = 96
    Top = 304
    Width = 253
    Height = 33
    Visible = False
    TabOrder = 4
  end
  object Teks: TMemo
    Left = 496
    Top = 160
    Width = 217
    Height = 241
    Lines.Strings = (
      'Teks')
    TabOrder = 5
  end
  object Timer1: TTimer
    Enabled = False
    Left = 208
    Top = 112
  end
  object Timer2: TTimer
    Enabled = False
    Left = 208
    Top = 112
  end
  object Timer3: TTimer
    Enabled = False
    Left = 208
    Top = 112
  end
  object Timer4: TTimer
    Enabled = False
    Left = 208
    Top = 112
  end
  object Timer5: TTimer
    Enabled = False
    Left = 208
    Top = 112
  end
  object Timer6: TTimer
    Enabled = False
    Left = 208
    Top = 112
  end
end
