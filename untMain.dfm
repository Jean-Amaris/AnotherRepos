object frmMain: TfrmMain
  Left = 0
  Top = 0
  Caption = 'The Main Form'
  ClientHeight = 532
  ClientWidth = 678
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesktopCenter
  TextHeight = 15
  object btnMsgs: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Msgs'
    TabOrder = 0
    OnClick = btnMsgsClick
  end
  object btnProject1: TButton
    Left = 8
    Top = 39
    Width = 75
    Height = 25
    Caption = 'Text && Memo'
    TabOrder = 1
    OnClick = btnProject1Click
  end
  object btnClsManip: TButton
    Left = 8
    Top = 70
    Width = 75
    Height = 25
    Caption = 'Cls Manip'
    TabOrder = 2
    OnClick = btnClsManipClick
  end
  object Button4: TButton
    Left = 8
    Top = 101
    Width = 75
    Height = 25
    Caption = 'Button4'
    TabOrder = 3
  end
  object Button5: TButton
    Left = 8
    Top = 132
    Width = 75
    Height = 25
    Caption = 'Button5'
    TabOrder = 4
  end
  object Button6: TButton
    Left = 8
    Top = 163
    Width = 75
    Height = 25
    Caption = 'Button6'
    TabOrder = 5
  end
  object Button7: TButton
    Left = 8
    Top = 201
    Width = 75
    Height = 25
    Caption = 'Button7'
    TabOrder = 6
  end
  object Button8: TButton
    Left = 8
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Button8'
    TabOrder = 7
  end
  object Button9: TButton
    Left = 8
    Top = 263
    Width = 75
    Height = 25
    Caption = 'Button9'
    TabOrder = 8
  end
  object Button10: TButton
    Left = 8
    Top = 294
    Width = 75
    Height = 25
    Caption = 'Button10'
    TabOrder = 9
  end
  object edtAny: TEdit
    Left = 89
    Top = 8
    Width = 136
    Height = 23
    TabOrder = 10
  end
  object memAny: TMemo
    Left = 89
    Top = 37
    Width = 288
    Height = 149
    ScrollBars = ssVertical
    TabOrder = 11
  end
  object Edit1: TEdit
    Left = 241
    Top = 8
    Width = 136
    Height = 23
    TabOrder = 12
  end
  object btnClear: TButton
    Left = 392
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 13
    OnClick = btnClearClick
  end
  object btnClose: TButton
    Left = 392
    Top = 39
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 14
    OnClick = btnCloseClick
  end
end
