package scintillaedit

/*

#include "gen_ScintillaEdit.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type std__pointer_safety int

const (
	Std__relaxed   std__pointer_safety = 0
	Std__preferred std__pointer_safety = 1
	Std__strict    std__pointer_safety = 2
)

type Scintilla__Internal__Edge int

const (
	Scintilla__Internal__left   Scintilla__Internal__Edge = 0
	Scintilla__Internal__top    Scintilla__Internal__Edge = 1
	Scintilla__Internal__bottom Scintilla__Internal__Edge = 2
	Scintilla__Internal__right  Scintilla__Internal__Edge = 3
)

type Scintilla__WhiteSpace int

const (
	Scintilla__WhiteSpace__Invisible           Scintilla__WhiteSpace = 0
	Scintilla__WhiteSpace__VisibleAlways       Scintilla__WhiteSpace = 1
	Scintilla__WhiteSpace__VisibleAfterIndent  Scintilla__WhiteSpace = 2
	Scintilla__WhiteSpace__VisibleOnlyInIndent Scintilla__WhiteSpace = 3
)

type Scintilla__TabDrawMode int

const (
	Scintilla__LongArrow Scintilla__TabDrawMode = 0
	Scintilla__StrikeOut Scintilla__TabDrawMode = 1
)

type Scintilla__EndOfLine int

const (
	Scintilla__CrLf Scintilla__EndOfLine = 0
	Scintilla__Cr   Scintilla__EndOfLine = 1
	Scintilla__Lf   Scintilla__EndOfLine = 2
)

type Scintilla__IMEInteraction int

const (
	Scintilla__Windowed Scintilla__IMEInteraction = 0
	Scintilla__Inline   Scintilla__IMEInteraction = 1
)

type Scintilla__Alpha int

const (
	Scintilla__Transparent Scintilla__Alpha = 0
	Scintilla__Opaque      Scintilla__Alpha = 255
	Scintilla__NoAlpha     Scintilla__Alpha = 256
)

type Scintilla__CursorShape int

const (
	Scintilla__CursorShape__Normal       Scintilla__CursorShape = -1
	Scintilla__CursorShape__Arrow        Scintilla__CursorShape = 2
	Scintilla__CursorShape__Wait         Scintilla__CursorShape = 4
	Scintilla__CursorShape__ReverseArrow Scintilla__CursorShape = 7
)

type Scintilla__MarkerSymbol int

const (
	Scintilla__MarkerSymbol__Circle               Scintilla__MarkerSymbol = 0
	Scintilla__MarkerSymbol__RoundRect            Scintilla__MarkerSymbol = 1
	Scintilla__MarkerSymbol__Arrow                Scintilla__MarkerSymbol = 2
	Scintilla__MarkerSymbol__SmallRect            Scintilla__MarkerSymbol = 3
	Scintilla__MarkerSymbol__ShortArrow           Scintilla__MarkerSymbol = 4
	Scintilla__MarkerSymbol__Empty                Scintilla__MarkerSymbol = 5
	Scintilla__MarkerSymbol__ArrowDown            Scintilla__MarkerSymbol = 6
	Scintilla__MarkerSymbol__Minus                Scintilla__MarkerSymbol = 7
	Scintilla__MarkerSymbol__Plus                 Scintilla__MarkerSymbol = 8
	Scintilla__MarkerSymbol__VLine                Scintilla__MarkerSymbol = 9
	Scintilla__MarkerSymbol__LCorner              Scintilla__MarkerSymbol = 10
	Scintilla__MarkerSymbol__TCorner              Scintilla__MarkerSymbol = 11
	Scintilla__MarkerSymbol__BoxPlus              Scintilla__MarkerSymbol = 12
	Scintilla__MarkerSymbol__BoxPlusConnected     Scintilla__MarkerSymbol = 13
	Scintilla__MarkerSymbol__BoxMinus             Scintilla__MarkerSymbol = 14
	Scintilla__MarkerSymbol__BoxMinusConnected    Scintilla__MarkerSymbol = 15
	Scintilla__MarkerSymbol__LCornerCurve         Scintilla__MarkerSymbol = 16
	Scintilla__MarkerSymbol__TCornerCurve         Scintilla__MarkerSymbol = 17
	Scintilla__MarkerSymbol__CirclePlus           Scintilla__MarkerSymbol = 18
	Scintilla__MarkerSymbol__CirclePlusConnected  Scintilla__MarkerSymbol = 19
	Scintilla__MarkerSymbol__CircleMinus          Scintilla__MarkerSymbol = 20
	Scintilla__MarkerSymbol__CircleMinusConnected Scintilla__MarkerSymbol = 21
	Scintilla__MarkerSymbol__Background           Scintilla__MarkerSymbol = 22
	Scintilla__MarkerSymbol__DotDotDot            Scintilla__MarkerSymbol = 23
	Scintilla__MarkerSymbol__Arrows               Scintilla__MarkerSymbol = 24
	Scintilla__MarkerSymbol__Pixmap               Scintilla__MarkerSymbol = 25
	Scintilla__MarkerSymbol__FullRect             Scintilla__MarkerSymbol = 26
	Scintilla__MarkerSymbol__LeftRect             Scintilla__MarkerSymbol = 27
	Scintilla__MarkerSymbol__Available            Scintilla__MarkerSymbol = 28
	Scintilla__MarkerSymbol__Underline            Scintilla__MarkerSymbol = 29
	Scintilla__MarkerSymbol__RgbaImage            Scintilla__MarkerSymbol = 30
	Scintilla__MarkerSymbol__Bookmark             Scintilla__MarkerSymbol = 31
	Scintilla__MarkerSymbol__VerticalBookmark     Scintilla__MarkerSymbol = 32
	Scintilla__MarkerSymbol__Bar                  Scintilla__MarkerSymbol = 33
	Scintilla__MarkerSymbol__Character            Scintilla__MarkerSymbol = 10000
)

type Scintilla__MarkerOutline int

const (
	Scintilla__HistoryRevertedToOrigin   Scintilla__MarkerOutline = 21
	Scintilla__HistorySaved              Scintilla__MarkerOutline = 22
	Scintilla__HistoryModified           Scintilla__MarkerOutline = 23
	Scintilla__HistoryRevertedToModified Scintilla__MarkerOutline = 24
	Scintilla__FolderEnd                 Scintilla__MarkerOutline = 25
	Scintilla__FolderOpenMid             Scintilla__MarkerOutline = 26
	Scintilla__FolderMidTail             Scintilla__MarkerOutline = 27
	Scintilla__FolderTail                Scintilla__MarkerOutline = 28
	Scintilla__FolderSub                 Scintilla__MarkerOutline = 29
	Scintilla__Folder                    Scintilla__MarkerOutline = 30
	Scintilla__FolderOpen                Scintilla__MarkerOutline = 31
)

type Scintilla__MarginType int

const (
	Scintilla__MarginType__Symbol Scintilla__MarginType = 0
	Scintilla__MarginType__Number Scintilla__MarginType = 1
	Scintilla__MarginType__Back   Scintilla__MarginType = 2
	Scintilla__MarginType__Fore   Scintilla__MarginType = 3
	Scintilla__MarginType__Text   Scintilla__MarginType = 4
	Scintilla__MarginType__RText  Scintilla__MarginType = 5
	Scintilla__MarginType__Colour Scintilla__MarginType = 6
)

type Scintilla__StylesCommon int

const (
	Scintilla__StylesCommon__Default         Scintilla__StylesCommon = 32
	Scintilla__StylesCommon__LineNumber      Scintilla__StylesCommon = 33
	Scintilla__StylesCommon__BraceLight      Scintilla__StylesCommon = 34
	Scintilla__StylesCommon__BraceBad        Scintilla__StylesCommon = 35
	Scintilla__StylesCommon__ControlChar     Scintilla__StylesCommon = 36
	Scintilla__StylesCommon__IndentGuide     Scintilla__StylesCommon = 37
	Scintilla__StylesCommon__CallTip         Scintilla__StylesCommon = 38
	Scintilla__StylesCommon__FoldDisplayText Scintilla__StylesCommon = 39
	Scintilla__StylesCommon__LastPredefined  Scintilla__StylesCommon = 39
	Scintilla__StylesCommon__Max             Scintilla__StylesCommon = 255
)

type Scintilla__CharacterSet int

const (
	Scintilla__CharacterSet__Ansi        Scintilla__CharacterSet = 0
	Scintilla__CharacterSet__Default     Scintilla__CharacterSet = 1
	Scintilla__CharacterSet__Baltic      Scintilla__CharacterSet = 186
	Scintilla__CharacterSet__ChineseBig5 Scintilla__CharacterSet = 136
	Scintilla__CharacterSet__EastEurope  Scintilla__CharacterSet = 238
	Scintilla__CharacterSet__GB2312      Scintilla__CharacterSet = 134
	Scintilla__CharacterSet__Greek       Scintilla__CharacterSet = 161
	Scintilla__CharacterSet__Hangul      Scintilla__CharacterSet = 129
	Scintilla__CharacterSet__Mac         Scintilla__CharacterSet = 77
	Scintilla__CharacterSet__Oem         Scintilla__CharacterSet = 255
	Scintilla__CharacterSet__Russian     Scintilla__CharacterSet = 204
	Scintilla__CharacterSet__Oem866      Scintilla__CharacterSet = 866
	Scintilla__CharacterSet__Cyrillic    Scintilla__CharacterSet = 1251
	Scintilla__CharacterSet__ShiftJis    Scintilla__CharacterSet = 128
	Scintilla__CharacterSet__Symbol      Scintilla__CharacterSet = 2
	Scintilla__CharacterSet__Turkish     Scintilla__CharacterSet = 162
	Scintilla__CharacterSet__Johab       Scintilla__CharacterSet = 130
	Scintilla__CharacterSet__Hebrew      Scintilla__CharacterSet = 177
	Scintilla__CharacterSet__Arabic      Scintilla__CharacterSet = 178
	Scintilla__CharacterSet__Vietnamese  Scintilla__CharacterSet = 163
	Scintilla__CharacterSet__Thai        Scintilla__CharacterSet = 222
	Scintilla__CharacterSet__Iso8859_15  Scintilla__CharacterSet = 1000
)

type Scintilla__CaseVisible int

const (
	Scintilla__Mixed Scintilla__CaseVisible = 0
	Scintilla__Upper Scintilla__CaseVisible = 1
	Scintilla__Lower Scintilla__CaseVisible = 2
	Scintilla__Camel Scintilla__CaseVisible = 3
)

type Scintilla__FontWeight int

const (
	Scintilla__FontWeight__Normal   Scintilla__FontWeight = 400
	Scintilla__FontWeight__SemiBold Scintilla__FontWeight = 600
	Scintilla__FontWeight__Bold     Scintilla__FontWeight = 700
)

type Scintilla__FontStretch int

const (
	Scintilla__FontStretch__UltraCondensed Scintilla__FontStretch = 1
	Scintilla__FontStretch__ExtraCondensed Scintilla__FontStretch = 2
	Scintilla__FontStretch__Condensed      Scintilla__FontStretch = 3
	Scintilla__FontStretch__SemiCondensed  Scintilla__FontStretch = 4
	Scintilla__FontStretch__Normal         Scintilla__FontStretch = 5
	Scintilla__FontStretch__SemiExpanded   Scintilla__FontStretch = 6
	Scintilla__FontStretch__Expanded       Scintilla__FontStretch = 7
	Scintilla__FontStretch__ExtraExpanded  Scintilla__FontStretch = 8
	Scintilla__FontStretch__UltraExpanded  Scintilla__FontStretch = 9
)

type Scintilla__Element int

const (
	Scintilla__Element__List                            Scintilla__Element = 0
	Scintilla__Element__ListBack                        Scintilla__Element = 1
	Scintilla__Element__ListSelected                    Scintilla__Element = 2
	Scintilla__Element__ListSelectedBack                Scintilla__Element = 3
	Scintilla__Element__SelectionText                   Scintilla__Element = 10
	Scintilla__Element__SelectionBack                   Scintilla__Element = 11
	Scintilla__Element__SelectionAdditionalText         Scintilla__Element = 12
	Scintilla__Element__SelectionAdditionalBack         Scintilla__Element = 13
	Scintilla__Element__SelectionSecondaryText          Scintilla__Element = 14
	Scintilla__Element__SelectionSecondaryBack          Scintilla__Element = 15
	Scintilla__Element__SelectionInactiveText           Scintilla__Element = 16
	Scintilla__Element__SelectionInactiveBack           Scintilla__Element = 17
	Scintilla__Element__SelectionInactiveAdditionalText Scintilla__Element = 18
	Scintilla__Element__SelectionInactiveAdditionalBack Scintilla__Element = 19
	Scintilla__Element__Caret                           Scintilla__Element = 40
	Scintilla__Element__CaretAdditional                 Scintilla__Element = 41
	Scintilla__Element__CaretLineBack                   Scintilla__Element = 50
	Scintilla__Element__WhiteSpace                      Scintilla__Element = 60
	Scintilla__Element__WhiteSpaceBack                  Scintilla__Element = 61
	Scintilla__Element__HotSpotActive                   Scintilla__Element = 70
	Scintilla__Element__HotSpotActiveBack               Scintilla__Element = 71
	Scintilla__Element__FoldLine                        Scintilla__Element = 80
	Scintilla__Element__HiddenLine                      Scintilla__Element = 81
)

type Scintilla__Layer int

const (
	Scintilla__Base      Scintilla__Layer = 0
	Scintilla__UnderText Scintilla__Layer = 1
	Scintilla__OverText  Scintilla__Layer = 2
)

type Scintilla__IndicatorStyle int

const (
	Scintilla__IndicatorStyle__Plain            Scintilla__IndicatorStyle = 0
	Scintilla__IndicatorStyle__Squiggle         Scintilla__IndicatorStyle = 1
	Scintilla__IndicatorStyle__TT               Scintilla__IndicatorStyle = 2
	Scintilla__IndicatorStyle__Diagonal         Scintilla__IndicatorStyle = 3
	Scintilla__IndicatorStyle__Strike           Scintilla__IndicatorStyle = 4
	Scintilla__IndicatorStyle__Hidden           Scintilla__IndicatorStyle = 5
	Scintilla__IndicatorStyle__Box              Scintilla__IndicatorStyle = 6
	Scintilla__IndicatorStyle__RoundBox         Scintilla__IndicatorStyle = 7
	Scintilla__IndicatorStyle__StraightBox      Scintilla__IndicatorStyle = 8
	Scintilla__IndicatorStyle__Dash             Scintilla__IndicatorStyle = 9
	Scintilla__IndicatorStyle__Dots             Scintilla__IndicatorStyle = 10
	Scintilla__IndicatorStyle__SquiggleLow      Scintilla__IndicatorStyle = 11
	Scintilla__IndicatorStyle__DotBox           Scintilla__IndicatorStyle = 12
	Scintilla__IndicatorStyle__SquigglePixmap   Scintilla__IndicatorStyle = 13
	Scintilla__IndicatorStyle__CompositionThick Scintilla__IndicatorStyle = 14
	Scintilla__IndicatorStyle__CompositionThin  Scintilla__IndicatorStyle = 15
	Scintilla__IndicatorStyle__FullBox          Scintilla__IndicatorStyle = 16
	Scintilla__IndicatorStyle__TextFore         Scintilla__IndicatorStyle = 17
	Scintilla__IndicatorStyle__Point            Scintilla__IndicatorStyle = 18
	Scintilla__IndicatorStyle__PointCharacter   Scintilla__IndicatorStyle = 19
	Scintilla__IndicatorStyle__Gradient         Scintilla__IndicatorStyle = 20
	Scintilla__IndicatorStyle__GradientCentre   Scintilla__IndicatorStyle = 21
	Scintilla__IndicatorStyle__PointTop         Scintilla__IndicatorStyle = 22
)

type Scintilla__IndicatorNumbers int

const (
	Scintilla__IndicatorNumbers__Container                          Scintilla__IndicatorNumbers = 8
	Scintilla__IndicatorNumbers__Ime                                Scintilla__IndicatorNumbers = 32
	Scintilla__IndicatorNumbers__ImeMax                             Scintilla__IndicatorNumbers = 35
	Scintilla__IndicatorNumbers__HistoryRevertedToOriginInsertion   Scintilla__IndicatorNumbers = 36
	Scintilla__IndicatorNumbers__HistoryRevertedToOriginDeletion    Scintilla__IndicatorNumbers = 37
	Scintilla__IndicatorNumbers__HistorySavedInsertion              Scintilla__IndicatorNumbers = 38
	Scintilla__IndicatorNumbers__HistorySavedDeletion               Scintilla__IndicatorNumbers = 39
	Scintilla__IndicatorNumbers__HistoryModifiedInsertion           Scintilla__IndicatorNumbers = 40
	Scintilla__IndicatorNumbers__HistoryModifiedDeletion            Scintilla__IndicatorNumbers = 41
	Scintilla__IndicatorNumbers__HistoryRevertedToModifiedInsertion Scintilla__IndicatorNumbers = 42
	Scintilla__IndicatorNumbers__HistoryRevertedToModifiedDeletion  Scintilla__IndicatorNumbers = 43
	Scintilla__IndicatorNumbers__Max                                Scintilla__IndicatorNumbers = 43
)

type Scintilla__IndicValue int

const (
	Scintilla__Bit  Scintilla__IndicValue = 16777216
	Scintilla__Mask Scintilla__IndicValue = 16777215
)

type Scintilla__IndicFlag int

const (
	Scintilla__IndicFlag__None      Scintilla__IndicFlag = 0
	Scintilla__IndicFlag__ValueFore Scintilla__IndicFlag = 1
)

type Scintilla__AutoCompleteOption int

const (
	Scintilla__AutoCompleteOption__Normal          Scintilla__AutoCompleteOption = 0
	Scintilla__AutoCompleteOption__FixedSize       Scintilla__AutoCompleteOption = 1
	Scintilla__AutoCompleteOption__SelectFirstItem Scintilla__AutoCompleteOption = 2
)

type Scintilla__IndentView int

const (
	Scintilla__IndentView__None        Scintilla__IndentView = 0
	Scintilla__IndentView__Real        Scintilla__IndentView = 1
	Scintilla__IndentView__LookForward Scintilla__IndentView = 2
	Scintilla__IndentView__LookBoth    Scintilla__IndentView = 3
)

type Scintilla__PrintOption int

const (
	Scintilla__PrintOption__Normal                 Scintilla__PrintOption = 0
	Scintilla__PrintOption__InvertLight            Scintilla__PrintOption = 1
	Scintilla__PrintOption__BlackOnWhite           Scintilla__PrintOption = 2
	Scintilla__PrintOption__ColourOnWhite          Scintilla__PrintOption = 3
	Scintilla__PrintOption__ColourOnWhiteDefaultBG Scintilla__PrintOption = 4
	Scintilla__PrintOption__ScreenColours          Scintilla__PrintOption = 5
)

type Scintilla__FindOption int

const (
	Scintilla__FindOption__None       Scintilla__FindOption = 0
	Scintilla__FindOption__WholeWord  Scintilla__FindOption = 2
	Scintilla__FindOption__MatchCase  Scintilla__FindOption = 4
	Scintilla__FindOption__WordStart  Scintilla__FindOption = 1048576
	Scintilla__FindOption__RegExp     Scintilla__FindOption = 2097152
	Scintilla__FindOption__Posix      Scintilla__FindOption = 4194304
	Scintilla__FindOption__Cxx11RegEx Scintilla__FindOption = 8388608
)

type Scintilla__ChangeHistoryOption int

const (
	Scintilla__ChangeHistoryOption__Disabled   Scintilla__ChangeHistoryOption = 0
	Scintilla__ChangeHistoryOption__Enabled    Scintilla__ChangeHistoryOption = 1
	Scintilla__ChangeHistoryOption__Markers    Scintilla__ChangeHistoryOption = 2
	Scintilla__ChangeHistoryOption__Indicators Scintilla__ChangeHistoryOption = 4
)

type Scintilla__FoldLevel int

const (
	Scintilla__FoldLevel__None       Scintilla__FoldLevel = 0
	Scintilla__FoldLevel__Base       Scintilla__FoldLevel = 1024
	Scintilla__FoldLevel__WhiteFlag  Scintilla__FoldLevel = 4096
	Scintilla__FoldLevel__HeaderFlag Scintilla__FoldLevel = 8192
	Scintilla__FoldLevel__NumberMask Scintilla__FoldLevel = 4095
)

type Scintilla__FoldDisplayTextStyle int

const (
	Scintilla__FoldDisplayTextStyle__Hidden   Scintilla__FoldDisplayTextStyle = 0
	Scintilla__FoldDisplayTextStyle__Standard Scintilla__FoldDisplayTextStyle = 1
	Scintilla__FoldDisplayTextStyle__Boxed    Scintilla__FoldDisplayTextStyle = 2
)

type Scintilla__FoldAction int

const (
	Scintilla__Contract           Scintilla__FoldAction = 0
	Scintilla__Expand             Scintilla__FoldAction = 1
	Scintilla__Toggle             Scintilla__FoldAction = 2
	Scintilla__ContractEveryLevel Scintilla__FoldAction = 4
)

type Scintilla__AutomaticFold int

const (
	Scintilla__AutomaticFold__None   Scintilla__AutomaticFold = 0
	Scintilla__AutomaticFold__Show   Scintilla__AutomaticFold = 1
	Scintilla__AutomaticFold__Click  Scintilla__AutomaticFold = 2
	Scintilla__AutomaticFold__Change Scintilla__AutomaticFold = 4
)

type Scintilla__FoldFlag int

const (
	Scintilla__FoldFlag__None                 Scintilla__FoldFlag = 0
	Scintilla__FoldFlag__LineBeforeExpanded   Scintilla__FoldFlag = 2
	Scintilla__FoldFlag__LineBeforeContracted Scintilla__FoldFlag = 4
	Scintilla__FoldFlag__LineAfterExpanded    Scintilla__FoldFlag = 8
	Scintilla__FoldFlag__LineAfterContracted  Scintilla__FoldFlag = 16
	Scintilla__FoldFlag__LevelNumbers         Scintilla__FoldFlag = 64
	Scintilla__FoldFlag__LineState            Scintilla__FoldFlag = 128
)

type Scintilla__IdleStyling int

const (
	Scintilla__IdleStyling__None         Scintilla__IdleStyling = 0
	Scintilla__IdleStyling__ToVisible    Scintilla__IdleStyling = 1
	Scintilla__IdleStyling__AfterVisible Scintilla__IdleStyling = 2
	Scintilla__IdleStyling__All          Scintilla__IdleStyling = 3
)

type Scintilla__Wrap int

const (
	Scintilla__Wrap__None       Scintilla__Wrap = 0
	Scintilla__Wrap__Word       Scintilla__Wrap = 1
	Scintilla__Wrap__Char       Scintilla__Wrap = 2
	Scintilla__Wrap__WhiteSpace Scintilla__Wrap = 3
)

type Scintilla__WrapVisualFlag int

const (
	Scintilla__WrapVisualFlag__None   Scintilla__WrapVisualFlag = 0
	Scintilla__WrapVisualFlag__End    Scintilla__WrapVisualFlag = 1
	Scintilla__WrapVisualFlag__Start  Scintilla__WrapVisualFlag = 2
	Scintilla__WrapVisualFlag__Margin Scintilla__WrapVisualFlag = 4
)

type Scintilla__WrapVisualLocation int

const (
	Scintilla__WrapVisualLocation__Default     Scintilla__WrapVisualLocation = 0
	Scintilla__WrapVisualLocation__EndByText   Scintilla__WrapVisualLocation = 1
	Scintilla__WrapVisualLocation__StartByText Scintilla__WrapVisualLocation = 2
)

type Scintilla__WrapIndentMode int

const (
	Scintilla__Fixed      Scintilla__WrapIndentMode = 0
	Scintilla__Same       Scintilla__WrapIndentMode = 1
	Scintilla__Indent     Scintilla__WrapIndentMode = 2
	Scintilla__DeepIndent Scintilla__WrapIndentMode = 3
)

type Scintilla__LineCache int

const (
	Scintilla__LineCache__None     Scintilla__LineCache = 0
	Scintilla__LineCache__Caret    Scintilla__LineCache = 1
	Scintilla__LineCache__Page     Scintilla__LineCache = 2
	Scintilla__LineCache__Document Scintilla__LineCache = 3
)

type Scintilla__PhasesDraw int

const (
	Scintilla__One      Scintilla__PhasesDraw = 0
	Scintilla__Two      Scintilla__PhasesDraw = 1
	Scintilla__Multiple Scintilla__PhasesDraw = 2
)

type Scintilla__FontQuality int

const (
	Scintilla__QualityMask           Scintilla__FontQuality = 15
	Scintilla__QualityDefault        Scintilla__FontQuality = 0
	Scintilla__QualityNonAntialiased Scintilla__FontQuality = 1
	Scintilla__QualityAntialiased    Scintilla__FontQuality = 2
	Scintilla__QualityLcdOptimized   Scintilla__FontQuality = 3
)

type Scintilla__MultiPaste int

const (
	Scintilla__MultiPaste__Once Scintilla__MultiPaste = 0
	Scintilla__MultiPaste__Each Scintilla__MultiPaste = 1
)

type Scintilla__Accessibility int

const (
	Scintilla__Accessibility__Disabled Scintilla__Accessibility = 0
	Scintilla__Accessibility__Enabled  Scintilla__Accessibility = 1
)

type Scintilla__EdgeVisualStyle int

const (
	Scintilla__EdgeVisualStyle__None       Scintilla__EdgeVisualStyle = 0
	Scintilla__EdgeVisualStyle__Line       Scintilla__EdgeVisualStyle = 1
	Scintilla__EdgeVisualStyle__Background Scintilla__EdgeVisualStyle = 2
	Scintilla__EdgeVisualStyle__MultiLine  Scintilla__EdgeVisualStyle = 3
)

type Scintilla__PopUp int

const (
	Scintilla__PopUp__Never Scintilla__PopUp = 0
	Scintilla__PopUp__All   Scintilla__PopUp = 1
	Scintilla__PopUp__Text  Scintilla__PopUp = 2
)

type Scintilla__DocumentOption int

const (
	Scintilla__DocumentOption__Default    Scintilla__DocumentOption = 0
	Scintilla__DocumentOption__StylesNone Scintilla__DocumentOption = 1
	Scintilla__DocumentOption__TextLarge  Scintilla__DocumentOption = 256
)

type Scintilla__Status int

const (
	Scintilla__Ok        Scintilla__Status = 0
	Scintilla__Failure   Scintilla__Status = 1
	Scintilla__BadAlloc  Scintilla__Status = 2
	Scintilla__WarnStart Scintilla__Status = 1000
	Scintilla__RegEx     Scintilla__Status = 1001
)

type Scintilla__VisiblePolicy int

const (
	Scintilla__VisiblePolicy__Slop   Scintilla__VisiblePolicy = 1
	Scintilla__VisiblePolicy__Strict Scintilla__VisiblePolicy = 4
)

type Scintilla__CaretPolicy int

const (
	Scintilla__CaretPolicy__Slop   Scintilla__CaretPolicy = 1
	Scintilla__CaretPolicy__Strict Scintilla__CaretPolicy = 4
	Scintilla__CaretPolicy__Jumps  Scintilla__CaretPolicy = 16
	Scintilla__CaretPolicy__Even   Scintilla__CaretPolicy = 8
)

type Scintilla__SelectionMode int

const (
	Scintilla__SelectionMode__Stream    Scintilla__SelectionMode = 0
	Scintilla__SelectionMode__Rectangle Scintilla__SelectionMode = 1
	Scintilla__SelectionMode__Lines     Scintilla__SelectionMode = 2
	Scintilla__SelectionMode__Thin      Scintilla__SelectionMode = 3
)

type Scintilla__CaseInsensitiveBehaviour int

const (
	Scintilla__RespectCase Scintilla__CaseInsensitiveBehaviour = 0
	Scintilla__IgnoreCase  Scintilla__CaseInsensitiveBehaviour = 1
)

type Scintilla__MultiAutoComplete int

const (
	Scintilla__MultiAutoComplete__Once Scintilla__MultiAutoComplete = 0
	Scintilla__MultiAutoComplete__Each Scintilla__MultiAutoComplete = 1
)

type Scintilla__Ordering int

const (
	Scintilla__PreSorted   Scintilla__Ordering = 0
	Scintilla__PerformSort Scintilla__Ordering = 1
	Scintilla__Custom      Scintilla__Ordering = 2
)

type Scintilla__CaretSticky int

const (
	Scintilla__CaretSticky__Off        Scintilla__CaretSticky = 0
	Scintilla__CaretSticky__On         Scintilla__CaretSticky = 1
	Scintilla__CaretSticky__WhiteSpace Scintilla__CaretSticky = 2
)

type Scintilla__CaretStyle int

const (
	Scintilla__CaretStyle__Invisible       Scintilla__CaretStyle = 0
	Scintilla__CaretStyle__Line            Scintilla__CaretStyle = 1
	Scintilla__CaretStyle__Block           Scintilla__CaretStyle = 2
	Scintilla__CaretStyle__OverstrikeBar   Scintilla__CaretStyle = 0
	Scintilla__CaretStyle__OverstrikeBlock Scintilla__CaretStyle = 16
	Scintilla__CaretStyle__Curses          Scintilla__CaretStyle = 32
	Scintilla__CaretStyle__InsMask         Scintilla__CaretStyle = 15
	Scintilla__CaretStyle__BlockAfter      Scintilla__CaretStyle = 256
)

type Scintilla__MarginOption int

const (
	Scintilla__MarginOption__None          Scintilla__MarginOption = 0
	Scintilla__MarginOption__SubLineSelect Scintilla__MarginOption = 1
)

type Scintilla__AnnotationVisible int

const (
	Scintilla__AnnotationVisible__Hidden   Scintilla__AnnotationVisible = 0
	Scintilla__AnnotationVisible__Standard Scintilla__AnnotationVisible = 1
	Scintilla__AnnotationVisible__Boxed    Scintilla__AnnotationVisible = 2
	Scintilla__AnnotationVisible__Indented Scintilla__AnnotationVisible = 3
)

type Scintilla__UndoFlags int

const (
	Scintilla__UndoFlags__None        Scintilla__UndoFlags = 0
	Scintilla__UndoFlags__MayCoalesce Scintilla__UndoFlags = 1
)

type Scintilla__VirtualSpace int

const (
	Scintilla__VirtualSpace__None                 Scintilla__VirtualSpace = 0
	Scintilla__VirtualSpace__RectangularSelection Scintilla__VirtualSpace = 1
	Scintilla__VirtualSpace__UserAccessible       Scintilla__VirtualSpace = 2
	Scintilla__VirtualSpace__NoWrapLineStart      Scintilla__VirtualSpace = 4
)

type Scintilla__Technology int

const (
	Scintilla__Technology__Default           Scintilla__Technology = 0
	Scintilla__Technology__DirectWrite       Scintilla__Technology = 1
	Scintilla__Technology__DirectWriteRetain Scintilla__Technology = 2
	Scintilla__Technology__DirectWriteDC     Scintilla__Technology = 3
)

type Scintilla__LineEndType int

const (
	Scintilla__LineEndType__Default Scintilla__LineEndType = 0
	Scintilla__LineEndType__Unicode Scintilla__LineEndType = 1
)

type Scintilla__RepresentationAppearance int

const (
	Scintilla__RepresentationAppearance__Plain  Scintilla__RepresentationAppearance = 0
	Scintilla__RepresentationAppearance__Blob   Scintilla__RepresentationAppearance = 1
	Scintilla__RepresentationAppearance__Colour Scintilla__RepresentationAppearance = 16
)

type Scintilla__EOLAnnotationVisible int

const (
	Scintilla__EOLAnnotationVisible__Hidden      Scintilla__EOLAnnotationVisible = 0
	Scintilla__EOLAnnotationVisible__Standard    Scintilla__EOLAnnotationVisible = 1
	Scintilla__EOLAnnotationVisible__Boxed       Scintilla__EOLAnnotationVisible = 2
	Scintilla__EOLAnnotationVisible__Stadium     Scintilla__EOLAnnotationVisible = 256
	Scintilla__EOLAnnotationVisible__FlatCircle  Scintilla__EOLAnnotationVisible = 257
	Scintilla__EOLAnnotationVisible__AngleCircle Scintilla__EOLAnnotationVisible = 258
	Scintilla__EOLAnnotationVisible__CircleFlat  Scintilla__EOLAnnotationVisible = 272
	Scintilla__EOLAnnotationVisible__Flats       Scintilla__EOLAnnotationVisible = 273
	Scintilla__EOLAnnotationVisible__AngleFlat   Scintilla__EOLAnnotationVisible = 274
	Scintilla__EOLAnnotationVisible__CircleAngle Scintilla__EOLAnnotationVisible = 288
	Scintilla__EOLAnnotationVisible__FlatAngle   Scintilla__EOLAnnotationVisible = 289
	Scintilla__EOLAnnotationVisible__Angles      Scintilla__EOLAnnotationVisible = 290
)

type Scintilla__Supports int

const (
	Scintilla__LineDrawsFinal          Scintilla__Supports = 0
	Scintilla__PixelDivisions          Scintilla__Supports = 1
	Scintilla__FractionalStrokeWidth   Scintilla__Supports = 2
	Scintilla__TranslucentStroke       Scintilla__Supports = 3
	Scintilla__PixelModification       Scintilla__Supports = 4
	Scintilla__ThreadSafeMeasureWidths Scintilla__Supports = 5
)

type Scintilla__LineCharacterIndexType int

const (
	Scintilla__LineCharacterIndexType__None  Scintilla__LineCharacterIndexType = 0
	Scintilla__LineCharacterIndexType__Utf32 Scintilla__LineCharacterIndexType = 1
	Scintilla__LineCharacterIndexType__Utf16 Scintilla__LineCharacterIndexType = 2
)

type Scintilla__TypeProperty int

const (
	Scintilla__Boolean Scintilla__TypeProperty = 0
	Scintilla__Integer Scintilla__TypeProperty = 1
	Scintilla__String  Scintilla__TypeProperty = 2
)

type Scintilla__ModificationFlags int

const (
	Scintilla__ModificationFlags__None                Scintilla__ModificationFlags = 0
	Scintilla__ModificationFlags__InsertText          Scintilla__ModificationFlags = 1
	Scintilla__ModificationFlags__DeleteText          Scintilla__ModificationFlags = 2
	Scintilla__ModificationFlags__ChangeStyle         Scintilla__ModificationFlags = 4
	Scintilla__ModificationFlags__ChangeFold          Scintilla__ModificationFlags = 8
	Scintilla__ModificationFlags__User                Scintilla__ModificationFlags = 16
	Scintilla__ModificationFlags__Undo                Scintilla__ModificationFlags = 32
	Scintilla__ModificationFlags__Redo                Scintilla__ModificationFlags = 64
	Scintilla__ModificationFlags__MultiStepUndoRedo   Scintilla__ModificationFlags = 128
	Scintilla__ModificationFlags__LastStepInUndoRedo  Scintilla__ModificationFlags = 256
	Scintilla__ModificationFlags__ChangeMarker        Scintilla__ModificationFlags = 512
	Scintilla__ModificationFlags__BeforeInsert        Scintilla__ModificationFlags = 1024
	Scintilla__ModificationFlags__BeforeDelete        Scintilla__ModificationFlags = 2048
	Scintilla__ModificationFlags__MultilineUndoRedo   Scintilla__ModificationFlags = 4096
	Scintilla__ModificationFlags__StartAction         Scintilla__ModificationFlags = 8192
	Scintilla__ModificationFlags__ChangeIndicator     Scintilla__ModificationFlags = 16384
	Scintilla__ModificationFlags__ChangeLineState     Scintilla__ModificationFlags = 32768
	Scintilla__ModificationFlags__ChangeMargin        Scintilla__ModificationFlags = 65536
	Scintilla__ModificationFlags__ChangeAnnotation    Scintilla__ModificationFlags = 131072
	Scintilla__ModificationFlags__Container           Scintilla__ModificationFlags = 262144
	Scintilla__ModificationFlags__LexerState          Scintilla__ModificationFlags = 524288
	Scintilla__ModificationFlags__InsertCheck         Scintilla__ModificationFlags = 1048576
	Scintilla__ModificationFlags__ChangeTabStops      Scintilla__ModificationFlags = 2097152
	Scintilla__ModificationFlags__ChangeEOLAnnotation Scintilla__ModificationFlags = 4194304
	Scintilla__ModificationFlags__EventMaskAll        Scintilla__ModificationFlags = 8388607
)

type Scintilla__Update int

const (
	Scintilla__Update__None      Scintilla__Update = 0
	Scintilla__Update__Content   Scintilla__Update = 1
	Scintilla__Update__Selection Scintilla__Update = 2
	Scintilla__Update__VScroll   Scintilla__Update = 4
	Scintilla__Update__HScroll   Scintilla__Update = 8
)

type Scintilla__FocusChange int

const (
	Scintilla__Change    Scintilla__FocusChange = 768
	Scintilla__Setfocus  Scintilla__FocusChange = 512
	Scintilla__Killfocus Scintilla__FocusChange = 256
)

type Scintilla__Keys int

const (
	Scintilla__Keys__Down     Scintilla__Keys = 300
	Scintilla__Keys__Up       Scintilla__Keys = 301
	Scintilla__Keys__Left     Scintilla__Keys = 302
	Scintilla__Keys__Right    Scintilla__Keys = 303
	Scintilla__Keys__Home     Scintilla__Keys = 304
	Scintilla__Keys__End      Scintilla__Keys = 305
	Scintilla__Keys__Prior    Scintilla__Keys = 306
	Scintilla__Keys__Next     Scintilla__Keys = 307
	Scintilla__Keys__Delete   Scintilla__Keys = 308
	Scintilla__Keys__Insert   Scintilla__Keys = 309
	Scintilla__Keys__Escape   Scintilla__Keys = 7
	Scintilla__Keys__Back     Scintilla__Keys = 8
	Scintilla__Keys__Tab      Scintilla__Keys = 9
	Scintilla__Keys__Return   Scintilla__Keys = 13
	Scintilla__Keys__Add      Scintilla__Keys = 310
	Scintilla__Keys__Subtract Scintilla__Keys = 311
	Scintilla__Keys__Divide   Scintilla__Keys = 312
	Scintilla__Keys__Win      Scintilla__Keys = 313
	Scintilla__Keys__RWin     Scintilla__Keys = 314
	Scintilla__Keys__Menu     Scintilla__Keys = 315
)

type Scintilla__KeyMod int

const (
	Scintilla__Norm  Scintilla__KeyMod = 0
	Scintilla__Shift Scintilla__KeyMod = 1
	Scintilla__Ctrl  Scintilla__KeyMod = 2
	Scintilla__Alt   Scintilla__KeyMod = 4
	Scintilla__Super Scintilla__KeyMod = 8
	Scintilla__Meta  Scintilla__KeyMod = 16
)

type Scintilla__CompletionMethods int

const (
	Scintilla__CompletionMethods__FillUp       Scintilla__CompletionMethods = 1
	Scintilla__CompletionMethods__DoubleClick  Scintilla__CompletionMethods = 2
	Scintilla__CompletionMethods__Tab          Scintilla__CompletionMethods = 3
	Scintilla__CompletionMethods__Newline      Scintilla__CompletionMethods = 4
	Scintilla__CompletionMethods__Command      Scintilla__CompletionMethods = 5
	Scintilla__CompletionMethods__SingleChoice Scintilla__CompletionMethods = 6
)

type Scintilla__CharacterSource int

const (
	Scintilla__DirectInput    Scintilla__CharacterSource = 0
	Scintilla__TentativeInput Scintilla__CharacterSource = 1
	Scintilla__ImeResult      Scintilla__CharacterSource = 2
)

type Scintilla__Bidirectional int

const (
	Scintilla__Bidirectional__Disabled Scintilla__Bidirectional = 0
	Scintilla__Bidirectional__L2R      Scintilla__Bidirectional = 1
	Scintilla__Bidirectional__R2L      Scintilla__Bidirectional = 2
)

type Scintilla__Notification int

const (
	Scintilla__Notification__StyleNeeded          Scintilla__Notification = 2000
	Scintilla__Notification__CharAdded            Scintilla__Notification = 2001
	Scintilla__Notification__SavePointReached     Scintilla__Notification = 2002
	Scintilla__Notification__SavePointLeft        Scintilla__Notification = 2003
	Scintilla__Notification__ModifyAttemptRO      Scintilla__Notification = 2004
	Scintilla__Notification__Key                  Scintilla__Notification = 2005
	Scintilla__Notification__DoubleClick          Scintilla__Notification = 2006
	Scintilla__Notification__UpdateUI             Scintilla__Notification = 2007
	Scintilla__Notification__Modified             Scintilla__Notification = 2008
	Scintilla__Notification__MacroRecord          Scintilla__Notification = 2009
	Scintilla__Notification__MarginClick          Scintilla__Notification = 2010
	Scintilla__Notification__NeedShown            Scintilla__Notification = 2011
	Scintilla__Notification__Painted              Scintilla__Notification = 2013
	Scintilla__Notification__UserListSelection    Scintilla__Notification = 2014
	Scintilla__Notification__URIDropped           Scintilla__Notification = 2015
	Scintilla__Notification__DwellStart           Scintilla__Notification = 2016
	Scintilla__Notification__DwellEnd             Scintilla__Notification = 2017
	Scintilla__Notification__Zoom                 Scintilla__Notification = 2018
	Scintilla__Notification__HotSpotClick         Scintilla__Notification = 2019
	Scintilla__Notification__HotSpotDoubleClick   Scintilla__Notification = 2020
	Scintilla__Notification__CallTipClick         Scintilla__Notification = 2021
	Scintilla__Notification__AutoCSelection       Scintilla__Notification = 2022
	Scintilla__Notification__IndicatorClick       Scintilla__Notification = 2023
	Scintilla__Notification__IndicatorRelease     Scintilla__Notification = 2024
	Scintilla__Notification__AutoCCancelled       Scintilla__Notification = 2025
	Scintilla__Notification__AutoCCharDeleted     Scintilla__Notification = 2026
	Scintilla__Notification__HotSpotReleaseClick  Scintilla__Notification = 2027
	Scintilla__Notification__FocusIn              Scintilla__Notification = 2028
	Scintilla__Notification__FocusOut             Scintilla__Notification = 2029
	Scintilla__Notification__AutoCCompleted       Scintilla__Notification = 2030
	Scintilla__Notification__MarginRightClick     Scintilla__Notification = 2031
	Scintilla__Notification__AutoCSelectionChange Scintilla__Notification = 2032
)

type Scintilla__Message int

const (
	Scintilla__Message__AddText                                   Scintilla__Message = 2001
	Scintilla__Message__AddStyledText                             Scintilla__Message = 2002
	Scintilla__Message__InsertText                                Scintilla__Message = 2003
	Scintilla__Message__ChangeInsertion                           Scintilla__Message = 2672
	Scintilla__Message__ClearAll                                  Scintilla__Message = 2004
	Scintilla__Message__DeleteRange                               Scintilla__Message = 2645
	Scintilla__Message__ClearDocumentStyle                        Scintilla__Message = 2005
	Scintilla__Message__GetLength                                 Scintilla__Message = 2006
	Scintilla__Message__GetCharAt                                 Scintilla__Message = 2007
	Scintilla__Message__GetCurrentPos                             Scintilla__Message = 2008
	Scintilla__Message__GetAnchor                                 Scintilla__Message = 2009
	Scintilla__Message__GetStyleAt                                Scintilla__Message = 2010
	Scintilla__Message__GetStyleIndexAt                           Scintilla__Message = 2038
	Scintilla__Message__Redo                                      Scintilla__Message = 2011
	Scintilla__Message__SetUndoCollection                         Scintilla__Message = 2012
	Scintilla__Message__SelectAll                                 Scintilla__Message = 2013
	Scintilla__Message__SetSavePoint                              Scintilla__Message = 2014
	Scintilla__Message__GetStyledText                             Scintilla__Message = 2015
	Scintilla__Message__GetStyledTextFull                         Scintilla__Message = 2778
	Scintilla__Message__CanRedo                                   Scintilla__Message = 2016
	Scintilla__Message__MarkerLineFromHandle                      Scintilla__Message = 2017
	Scintilla__Message__MarkerDeleteHandle                        Scintilla__Message = 2018
	Scintilla__Message__MarkerHandleFromLine                      Scintilla__Message = 2732
	Scintilla__Message__MarkerNumberFromLine                      Scintilla__Message = 2733
	Scintilla__Message__GetUndoCollection                         Scintilla__Message = 2019
	Scintilla__Message__GetViewWS                                 Scintilla__Message = 2020
	Scintilla__Message__SetViewWS                                 Scintilla__Message = 2021
	Scintilla__Message__GetTabDrawMode                            Scintilla__Message = 2698
	Scintilla__Message__SetTabDrawMode                            Scintilla__Message = 2699
	Scintilla__Message__PositionFromPoint                         Scintilla__Message = 2022
	Scintilla__Message__PositionFromPointClose                    Scintilla__Message = 2023
	Scintilla__Message__GotoLine                                  Scintilla__Message = 2024
	Scintilla__Message__GotoPos                                   Scintilla__Message = 2025
	Scintilla__Message__SetAnchor                                 Scintilla__Message = 2026
	Scintilla__Message__GetCurLine                                Scintilla__Message = 2027
	Scintilla__Message__GetEndStyled                              Scintilla__Message = 2028
	Scintilla__Message__ConvertEOLs                               Scintilla__Message = 2029
	Scintilla__Message__GetEOLMode                                Scintilla__Message = 2030
	Scintilla__Message__SetEOLMode                                Scintilla__Message = 2031
	Scintilla__Message__StartStyling                              Scintilla__Message = 2032
	Scintilla__Message__SetStyling                                Scintilla__Message = 2033
	Scintilla__Message__GetBufferedDraw                           Scintilla__Message = 2034
	Scintilla__Message__SetBufferedDraw                           Scintilla__Message = 2035
	Scintilla__Message__SetTabWidth                               Scintilla__Message = 2036
	Scintilla__Message__GetTabWidth                               Scintilla__Message = 2121
	Scintilla__Message__SetTabMinimumWidth                        Scintilla__Message = 2724
	Scintilla__Message__GetTabMinimumWidth                        Scintilla__Message = 2725
	Scintilla__Message__ClearTabStops                             Scintilla__Message = 2675
	Scintilla__Message__AddTabStop                                Scintilla__Message = 2676
	Scintilla__Message__GetNextTabStop                            Scintilla__Message = 2677
	Scintilla__Message__SetCodePage                               Scintilla__Message = 2037
	Scintilla__Message__SetFontLocale                             Scintilla__Message = 2760
	Scintilla__Message__GetFontLocale                             Scintilla__Message = 2761
	Scintilla__Message__GetIMEInteraction                         Scintilla__Message = 2678
	Scintilla__Message__SetIMEInteraction                         Scintilla__Message = 2679
	Scintilla__Message__MarkerDefine                              Scintilla__Message = 2040
	Scintilla__Message__MarkerSetFore                             Scintilla__Message = 2041
	Scintilla__Message__MarkerSetBack                             Scintilla__Message = 2042
	Scintilla__Message__MarkerSetBackSelected                     Scintilla__Message = 2292
	Scintilla__Message__MarkerSetForeTranslucent                  Scintilla__Message = 2294
	Scintilla__Message__MarkerSetBackTranslucent                  Scintilla__Message = 2295
	Scintilla__Message__MarkerSetBackSelectedTranslucent          Scintilla__Message = 2296
	Scintilla__Message__MarkerSetStrokeWidth                      Scintilla__Message = 2297
	Scintilla__Message__MarkerEnableHighlight                     Scintilla__Message = 2293
	Scintilla__Message__MarkerAdd                                 Scintilla__Message = 2043
	Scintilla__Message__MarkerDelete                              Scintilla__Message = 2044
	Scintilla__Message__MarkerDeleteAll                           Scintilla__Message = 2045
	Scintilla__Message__MarkerGet                                 Scintilla__Message = 2046
	Scintilla__Message__MarkerNext                                Scintilla__Message = 2047
	Scintilla__Message__MarkerPrevious                            Scintilla__Message = 2048
	Scintilla__Message__MarkerDefinePixmap                        Scintilla__Message = 2049
	Scintilla__Message__MarkerAddSet                              Scintilla__Message = 2466
	Scintilla__Message__MarkerSetAlpha                            Scintilla__Message = 2476
	Scintilla__Message__MarkerGetLayer                            Scintilla__Message = 2734
	Scintilla__Message__MarkerSetLayer                            Scintilla__Message = 2735
	Scintilla__Message__SetMarginTypeN                            Scintilla__Message = 2240
	Scintilla__Message__GetMarginTypeN                            Scintilla__Message = 2241
	Scintilla__Message__SetMarginWidthN                           Scintilla__Message = 2242
	Scintilla__Message__GetMarginWidthN                           Scintilla__Message = 2243
	Scintilla__Message__SetMarginMaskN                            Scintilla__Message = 2244
	Scintilla__Message__GetMarginMaskN                            Scintilla__Message = 2245
	Scintilla__Message__SetMarginSensitiveN                       Scintilla__Message = 2246
	Scintilla__Message__GetMarginSensitiveN                       Scintilla__Message = 2247
	Scintilla__Message__SetMarginCursorN                          Scintilla__Message = 2248
	Scintilla__Message__GetMarginCursorN                          Scintilla__Message = 2249
	Scintilla__Message__SetMarginBackN                            Scintilla__Message = 2250
	Scintilla__Message__GetMarginBackN                            Scintilla__Message = 2251
	Scintilla__Message__SetMargins                                Scintilla__Message = 2252
	Scintilla__Message__GetMargins                                Scintilla__Message = 2253
	Scintilla__Message__StyleClearAll                             Scintilla__Message = 2050
	Scintilla__Message__StyleSetFore                              Scintilla__Message = 2051
	Scintilla__Message__StyleSetBack                              Scintilla__Message = 2052
	Scintilla__Message__StyleSetBold                              Scintilla__Message = 2053
	Scintilla__Message__StyleSetItalic                            Scintilla__Message = 2054
	Scintilla__Message__StyleSetSize                              Scintilla__Message = 2055
	Scintilla__Message__StyleSetFont                              Scintilla__Message = 2056
	Scintilla__Message__StyleSetEOLFilled                         Scintilla__Message = 2057
	Scintilla__Message__StyleResetDefault                         Scintilla__Message = 2058
	Scintilla__Message__StyleSetUnderline                         Scintilla__Message = 2059
	Scintilla__Message__StyleGetFore                              Scintilla__Message = 2481
	Scintilla__Message__StyleGetBack                              Scintilla__Message = 2482
	Scintilla__Message__StyleGetBold                              Scintilla__Message = 2483
	Scintilla__Message__StyleGetItalic                            Scintilla__Message = 2484
	Scintilla__Message__StyleGetSize                              Scintilla__Message = 2485
	Scintilla__Message__StyleGetFont                              Scintilla__Message = 2486
	Scintilla__Message__StyleGetEOLFilled                         Scintilla__Message = 2487
	Scintilla__Message__StyleGetUnderline                         Scintilla__Message = 2488
	Scintilla__Message__StyleGetCase                              Scintilla__Message = 2489
	Scintilla__Message__StyleGetCharacterSet                      Scintilla__Message = 2490
	Scintilla__Message__StyleGetVisible                           Scintilla__Message = 2491
	Scintilla__Message__StyleGetChangeable                        Scintilla__Message = 2492
	Scintilla__Message__StyleGetHotSpot                           Scintilla__Message = 2493
	Scintilla__Message__StyleSetCase                              Scintilla__Message = 2060
	Scintilla__Message__StyleSetSizeFractional                    Scintilla__Message = 2061
	Scintilla__Message__StyleGetSizeFractional                    Scintilla__Message = 2062
	Scintilla__Message__StyleSetWeight                            Scintilla__Message = 2063
	Scintilla__Message__StyleGetWeight                            Scintilla__Message = 2064
	Scintilla__Message__StyleSetCharacterSet                      Scintilla__Message = 2066
	Scintilla__Message__StyleSetHotSpot                           Scintilla__Message = 2409
	Scintilla__Message__StyleSetCheckMonospaced                   Scintilla__Message = 2254
	Scintilla__Message__StyleGetCheckMonospaced                   Scintilla__Message = 2255
	Scintilla__Message__StyleSetStretch                           Scintilla__Message = 2258
	Scintilla__Message__StyleGetStretch                           Scintilla__Message = 2259
	Scintilla__Message__StyleSetInvisibleRepresentation           Scintilla__Message = 2256
	Scintilla__Message__StyleGetInvisibleRepresentation           Scintilla__Message = 2257
	Scintilla__Message__SetElementColour                          Scintilla__Message = 2753
	Scintilla__Message__GetElementColour                          Scintilla__Message = 2754
	Scintilla__Message__ResetElementColour                        Scintilla__Message = 2755
	Scintilla__Message__GetElementIsSet                           Scintilla__Message = 2756
	Scintilla__Message__GetElementAllowsTranslucent               Scintilla__Message = 2757
	Scintilla__Message__GetElementBaseColour                      Scintilla__Message = 2758
	Scintilla__Message__SetSelFore                                Scintilla__Message = 2067
	Scintilla__Message__SetSelBack                                Scintilla__Message = 2068
	Scintilla__Message__GetSelAlpha                               Scintilla__Message = 2477
	Scintilla__Message__SetSelAlpha                               Scintilla__Message = 2478
	Scintilla__Message__GetSelEOLFilled                           Scintilla__Message = 2479
	Scintilla__Message__SetSelEOLFilled                           Scintilla__Message = 2480
	Scintilla__Message__GetSelectionLayer                         Scintilla__Message = 2762
	Scintilla__Message__SetSelectionLayer                         Scintilla__Message = 2763
	Scintilla__Message__GetCaretLineLayer                         Scintilla__Message = 2764
	Scintilla__Message__SetCaretLineLayer                         Scintilla__Message = 2765
	Scintilla__Message__GetCaretLineHighlightSubLine              Scintilla__Message = 2773
	Scintilla__Message__SetCaretLineHighlightSubLine              Scintilla__Message = 2774
	Scintilla__Message__SetCaretFore                              Scintilla__Message = 2069
	Scintilla__Message__AssignCmdKey                              Scintilla__Message = 2070
	Scintilla__Message__ClearCmdKey                               Scintilla__Message = 2071
	Scintilla__Message__ClearAllCmdKeys                           Scintilla__Message = 2072
	Scintilla__Message__SetStylingEx                              Scintilla__Message = 2073
	Scintilla__Message__StyleSetVisible                           Scintilla__Message = 2074
	Scintilla__Message__GetCaretPeriod                            Scintilla__Message = 2075
	Scintilla__Message__SetCaretPeriod                            Scintilla__Message = 2076
	Scintilla__Message__SetWordChars                              Scintilla__Message = 2077
	Scintilla__Message__GetWordChars                              Scintilla__Message = 2646
	Scintilla__Message__SetCharacterCategoryOptimization          Scintilla__Message = 2720
	Scintilla__Message__GetCharacterCategoryOptimization          Scintilla__Message = 2721
	Scintilla__Message__BeginUndoAction                           Scintilla__Message = 2078
	Scintilla__Message__EndUndoAction                             Scintilla__Message = 2079
	Scintilla__Message__GetUndoSequence                           Scintilla__Message = 2799
	Scintilla__Message__GetUndoActions                            Scintilla__Message = 2790
	Scintilla__Message__SetUndoSavePoint                          Scintilla__Message = 2791
	Scintilla__Message__GetUndoSavePoint                          Scintilla__Message = 2792
	Scintilla__Message__SetUndoDetach                             Scintilla__Message = 2793
	Scintilla__Message__GetUndoDetach                             Scintilla__Message = 2794
	Scintilla__Message__SetUndoTentative                          Scintilla__Message = 2795
	Scintilla__Message__GetUndoTentative                          Scintilla__Message = 2796
	Scintilla__Message__SetUndoCurrent                            Scintilla__Message = 2797
	Scintilla__Message__GetUndoCurrent                            Scintilla__Message = 2798
	Scintilla__Message__PushUndoActionType                        Scintilla__Message = 2800
	Scintilla__Message__ChangeLastUndoActionText                  Scintilla__Message = 2801
	Scintilla__Message__GetUndoActionType                         Scintilla__Message = 2802
	Scintilla__Message__GetUndoActionPosition                     Scintilla__Message = 2803
	Scintilla__Message__GetUndoActionText                         Scintilla__Message = 2804
	Scintilla__Message__IndicSetStyle                             Scintilla__Message = 2080
	Scintilla__Message__IndicGetStyle                             Scintilla__Message = 2081
	Scintilla__Message__IndicSetFore                              Scintilla__Message = 2082
	Scintilla__Message__IndicGetFore                              Scintilla__Message = 2083
	Scintilla__Message__IndicSetUnder                             Scintilla__Message = 2510
	Scintilla__Message__IndicGetUnder                             Scintilla__Message = 2511
	Scintilla__Message__IndicSetHoverStyle                        Scintilla__Message = 2680
	Scintilla__Message__IndicGetHoverStyle                        Scintilla__Message = 2681
	Scintilla__Message__IndicSetHoverFore                         Scintilla__Message = 2682
	Scintilla__Message__IndicGetHoverFore                         Scintilla__Message = 2683
	Scintilla__Message__IndicSetFlags                             Scintilla__Message = 2684
	Scintilla__Message__IndicGetFlags                             Scintilla__Message = 2685
	Scintilla__Message__IndicSetStrokeWidth                       Scintilla__Message = 2751
	Scintilla__Message__IndicGetStrokeWidth                       Scintilla__Message = 2752
	Scintilla__Message__SetWhitespaceFore                         Scintilla__Message = 2084
	Scintilla__Message__SetWhitespaceBack                         Scintilla__Message = 2085
	Scintilla__Message__SetWhitespaceSize                         Scintilla__Message = 2086
	Scintilla__Message__GetWhitespaceSize                         Scintilla__Message = 2087
	Scintilla__Message__SetLineState                              Scintilla__Message = 2092
	Scintilla__Message__GetLineState                              Scintilla__Message = 2093
	Scintilla__Message__GetMaxLineState                           Scintilla__Message = 2094
	Scintilla__Message__GetCaretLineVisible                       Scintilla__Message = 2095
	Scintilla__Message__SetCaretLineVisible                       Scintilla__Message = 2096
	Scintilla__Message__GetCaretLineBack                          Scintilla__Message = 2097
	Scintilla__Message__SetCaretLineBack                          Scintilla__Message = 2098
	Scintilla__Message__GetCaretLineFrame                         Scintilla__Message = 2704
	Scintilla__Message__SetCaretLineFrame                         Scintilla__Message = 2705
	Scintilla__Message__StyleSetChangeable                        Scintilla__Message = 2099
	Scintilla__Message__AutoCShow                                 Scintilla__Message = 2100
	Scintilla__Message__AutoCCancel                               Scintilla__Message = 2101
	Scintilla__Message__AutoCActive                               Scintilla__Message = 2102
	Scintilla__Message__AutoCPosStart                             Scintilla__Message = 2103
	Scintilla__Message__AutoCComplete                             Scintilla__Message = 2104
	Scintilla__Message__AutoCStops                                Scintilla__Message = 2105
	Scintilla__Message__AutoCSetSeparator                         Scintilla__Message = 2106
	Scintilla__Message__AutoCGetSeparator                         Scintilla__Message = 2107
	Scintilla__Message__AutoCSelect                               Scintilla__Message = 2108
	Scintilla__Message__AutoCSetCancelAtStart                     Scintilla__Message = 2110
	Scintilla__Message__AutoCGetCancelAtStart                     Scintilla__Message = 2111
	Scintilla__Message__AutoCSetFillUps                           Scintilla__Message = 2112
	Scintilla__Message__AutoCSetChooseSingle                      Scintilla__Message = 2113
	Scintilla__Message__AutoCGetChooseSingle                      Scintilla__Message = 2114
	Scintilla__Message__AutoCSetIgnoreCase                        Scintilla__Message = 2115
	Scintilla__Message__AutoCGetIgnoreCase                        Scintilla__Message = 2116
	Scintilla__Message__UserListShow                              Scintilla__Message = 2117
	Scintilla__Message__AutoCSetAutoHide                          Scintilla__Message = 2118
	Scintilla__Message__AutoCGetAutoHide                          Scintilla__Message = 2119
	Scintilla__Message__AutoCSetOptions                           Scintilla__Message = 2638
	Scintilla__Message__AutoCGetOptions                           Scintilla__Message = 2639
	Scintilla__Message__AutoCSetDropRestOfWord                    Scintilla__Message = 2270
	Scintilla__Message__AutoCGetDropRestOfWord                    Scintilla__Message = 2271
	Scintilla__Message__RegisterImage                             Scintilla__Message = 2405
	Scintilla__Message__ClearRegisteredImages                     Scintilla__Message = 2408
	Scintilla__Message__AutoCGetTypeSeparator                     Scintilla__Message = 2285
	Scintilla__Message__AutoCSetTypeSeparator                     Scintilla__Message = 2286
	Scintilla__Message__AutoCSetMaxWidth                          Scintilla__Message = 2208
	Scintilla__Message__AutoCGetMaxWidth                          Scintilla__Message = 2209
	Scintilla__Message__AutoCSetMaxHeight                         Scintilla__Message = 2210
	Scintilla__Message__AutoCGetMaxHeight                         Scintilla__Message = 2211
	Scintilla__Message__AutoCSetStyle                             Scintilla__Message = 2109
	Scintilla__Message__AutoCGetStyle                             Scintilla__Message = 2120
	Scintilla__Message__SetIndent                                 Scintilla__Message = 2122
	Scintilla__Message__GetIndent                                 Scintilla__Message = 2123
	Scintilla__Message__SetUseTabs                                Scintilla__Message = 2124
	Scintilla__Message__GetUseTabs                                Scintilla__Message = 2125
	Scintilla__Message__SetLineIndentation                        Scintilla__Message = 2126
	Scintilla__Message__GetLineIndentation                        Scintilla__Message = 2127
	Scintilla__Message__GetLineIndentPosition                     Scintilla__Message = 2128
	Scintilla__Message__GetColumn                                 Scintilla__Message = 2129
	Scintilla__Message__CountCharacters                           Scintilla__Message = 2633
	Scintilla__Message__CountCodeUnits                            Scintilla__Message = 2715
	Scintilla__Message__SetHScrollBar                             Scintilla__Message = 2130
	Scintilla__Message__GetHScrollBar                             Scintilla__Message = 2131
	Scintilla__Message__SetIndentationGuides                      Scintilla__Message = 2132
	Scintilla__Message__GetIndentationGuides                      Scintilla__Message = 2133
	Scintilla__Message__SetHighlightGuide                         Scintilla__Message = 2134
	Scintilla__Message__GetHighlightGuide                         Scintilla__Message = 2135
	Scintilla__Message__GetLineEndPosition                        Scintilla__Message = 2136
	Scintilla__Message__GetCodePage                               Scintilla__Message = 2137
	Scintilla__Message__GetCaretFore                              Scintilla__Message = 2138
	Scintilla__Message__GetReadOnly                               Scintilla__Message = 2140
	Scintilla__Message__SetCurrentPos                             Scintilla__Message = 2141
	Scintilla__Message__SetSelectionStart                         Scintilla__Message = 2142
	Scintilla__Message__GetSelectionStart                         Scintilla__Message = 2143
	Scintilla__Message__SetSelectionEnd                           Scintilla__Message = 2144
	Scintilla__Message__GetSelectionEnd                           Scintilla__Message = 2145
	Scintilla__Message__SetEmptySelection                         Scintilla__Message = 2556
	Scintilla__Message__SetPrintMagnification                     Scintilla__Message = 2146
	Scintilla__Message__GetPrintMagnification                     Scintilla__Message = 2147
	Scintilla__Message__SetPrintColourMode                        Scintilla__Message = 2148
	Scintilla__Message__GetPrintColourMode                        Scintilla__Message = 2149
	Scintilla__Message__FindText                                  Scintilla__Message = 2150
	Scintilla__Message__FindTextFull                              Scintilla__Message = 2196
	Scintilla__Message__FormatRange                               Scintilla__Message = 2151
	Scintilla__Message__FormatRangeFull                           Scintilla__Message = 2777
	Scintilla__Message__SetChangeHistory                          Scintilla__Message = 2780
	Scintilla__Message__GetChangeHistory                          Scintilla__Message = 2781
	Scintilla__Message__GetFirstVisibleLine                       Scintilla__Message = 2152
	Scintilla__Message__GetLine                                   Scintilla__Message = 2153
	Scintilla__Message__GetLineCount                              Scintilla__Message = 2154
	Scintilla__Message__AllocateLines                             Scintilla__Message = 2089
	Scintilla__Message__SetMarginLeft                             Scintilla__Message = 2155
	Scintilla__Message__GetMarginLeft                             Scintilla__Message = 2156
	Scintilla__Message__SetMarginRight                            Scintilla__Message = 2157
	Scintilla__Message__GetMarginRight                            Scintilla__Message = 2158
	Scintilla__Message__GetModify                                 Scintilla__Message = 2159
	Scintilla__Message__SetSel                                    Scintilla__Message = 2160
	Scintilla__Message__GetSelText                                Scintilla__Message = 2161
	Scintilla__Message__GetTextRange                              Scintilla__Message = 2162
	Scintilla__Message__GetTextRangeFull                          Scintilla__Message = 2039
	Scintilla__Message__HideSelection                             Scintilla__Message = 2163
	Scintilla__Message__GetSelectionHidden                        Scintilla__Message = 2088
	Scintilla__Message__PointXFromPosition                        Scintilla__Message = 2164
	Scintilla__Message__PointYFromPosition                        Scintilla__Message = 2165
	Scintilla__Message__LineFromPosition                          Scintilla__Message = 2166
	Scintilla__Message__PositionFromLine                          Scintilla__Message = 2167
	Scintilla__Message__LineScroll                                Scintilla__Message = 2168
	Scintilla__Message__ScrollCaret                               Scintilla__Message = 2169
	Scintilla__Message__ScrollRange                               Scintilla__Message = 2569
	Scintilla__Message__ReplaceSel                                Scintilla__Message = 2170
	Scintilla__Message__SetReadOnly                               Scintilla__Message = 2171
	Scintilla__Message__Null                                      Scintilla__Message = 2172
	Scintilla__Message__CanPaste                                  Scintilla__Message = 2173
	Scintilla__Message__CanUndo                                   Scintilla__Message = 2174
	Scintilla__Message__EmptyUndoBuffer                           Scintilla__Message = 2175
	Scintilla__Message__Undo                                      Scintilla__Message = 2176
	Scintilla__Message__Cut                                       Scintilla__Message = 2177
	Scintilla__Message__Copy                                      Scintilla__Message = 2178
	Scintilla__Message__Paste                                     Scintilla__Message = 2179
	Scintilla__Message__Clear                                     Scintilla__Message = 2180
	Scintilla__Message__SetText                                   Scintilla__Message = 2181
	Scintilla__Message__GetText                                   Scintilla__Message = 2182
	Scintilla__Message__GetTextLength                             Scintilla__Message = 2183
	Scintilla__Message__GetDirectFunction                         Scintilla__Message = 2184
	Scintilla__Message__GetDirectStatusFunction                   Scintilla__Message = 2772
	Scintilla__Message__GetDirectPointer                          Scintilla__Message = 2185
	Scintilla__Message__SetOvertype                               Scintilla__Message = 2186
	Scintilla__Message__GetOvertype                               Scintilla__Message = 2187
	Scintilla__Message__SetCaretWidth                             Scintilla__Message = 2188
	Scintilla__Message__GetCaretWidth                             Scintilla__Message = 2189
	Scintilla__Message__SetTargetStart                            Scintilla__Message = 2190
	Scintilla__Message__GetTargetStart                            Scintilla__Message = 2191
	Scintilla__Message__SetTargetStartVirtualSpace                Scintilla__Message = 2728
	Scintilla__Message__GetTargetStartVirtualSpace                Scintilla__Message = 2729
	Scintilla__Message__SetTargetEnd                              Scintilla__Message = 2192
	Scintilla__Message__GetTargetEnd                              Scintilla__Message = 2193
	Scintilla__Message__SetTargetEndVirtualSpace                  Scintilla__Message = 2730
	Scintilla__Message__GetTargetEndVirtualSpace                  Scintilla__Message = 2731
	Scintilla__Message__SetTargetRange                            Scintilla__Message = 2686
	Scintilla__Message__GetTargetText                             Scintilla__Message = 2687
	Scintilla__Message__TargetFromSelection                       Scintilla__Message = 2287
	Scintilla__Message__TargetWholeDocument                       Scintilla__Message = 2690
	Scintilla__Message__ReplaceTarget                             Scintilla__Message = 2194
	Scintilla__Message__ReplaceTargetRE                           Scintilla__Message = 2195
	Scintilla__Message__ReplaceTargetMinimal                      Scintilla__Message = 2779
	Scintilla__Message__SearchInTarget                            Scintilla__Message = 2197
	Scintilla__Message__SetSearchFlags                            Scintilla__Message = 2198
	Scintilla__Message__GetSearchFlags                            Scintilla__Message = 2199
	Scintilla__Message__CallTipShow                               Scintilla__Message = 2200
	Scintilla__Message__CallTipCancel                             Scintilla__Message = 2201
	Scintilla__Message__CallTipActive                             Scintilla__Message = 2202
	Scintilla__Message__CallTipPosStart                           Scintilla__Message = 2203
	Scintilla__Message__CallTipSetPosStart                        Scintilla__Message = 2214
	Scintilla__Message__CallTipSetHlt                             Scintilla__Message = 2204
	Scintilla__Message__CallTipSetBack                            Scintilla__Message = 2205
	Scintilla__Message__CallTipSetFore                            Scintilla__Message = 2206
	Scintilla__Message__CallTipSetForeHlt                         Scintilla__Message = 2207
	Scintilla__Message__CallTipUseStyle                           Scintilla__Message = 2212
	Scintilla__Message__CallTipSetPosition                        Scintilla__Message = 2213
	Scintilla__Message__VisibleFromDocLine                        Scintilla__Message = 2220
	Scintilla__Message__DocLineFromVisible                        Scintilla__Message = 2221
	Scintilla__Message__WrapCount                                 Scintilla__Message = 2235
	Scintilla__Message__SetFoldLevel                              Scintilla__Message = 2222
	Scintilla__Message__GetFoldLevel                              Scintilla__Message = 2223
	Scintilla__Message__GetLastChild                              Scintilla__Message = 2224
	Scintilla__Message__GetFoldParent                             Scintilla__Message = 2225
	Scintilla__Message__ShowLines                                 Scintilla__Message = 2226
	Scintilla__Message__HideLines                                 Scintilla__Message = 2227
	Scintilla__Message__GetLineVisible                            Scintilla__Message = 2228
	Scintilla__Message__GetAllLinesVisible                        Scintilla__Message = 2236
	Scintilla__Message__SetFoldExpanded                           Scintilla__Message = 2229
	Scintilla__Message__GetFoldExpanded                           Scintilla__Message = 2230
	Scintilla__Message__ToggleFold                                Scintilla__Message = 2231
	Scintilla__Message__ToggleFoldShowText                        Scintilla__Message = 2700
	Scintilla__Message__FoldDisplayTextSetStyle                   Scintilla__Message = 2701
	Scintilla__Message__FoldDisplayTextGetStyle                   Scintilla__Message = 2707
	Scintilla__Message__SetDefaultFoldDisplayText                 Scintilla__Message = 2722
	Scintilla__Message__GetDefaultFoldDisplayText                 Scintilla__Message = 2723
	Scintilla__Message__FoldLine                                  Scintilla__Message = 2237
	Scintilla__Message__FoldChildren                              Scintilla__Message = 2238
	Scintilla__Message__ExpandChildren                            Scintilla__Message = 2239
	Scintilla__Message__FoldAll                                   Scintilla__Message = 2662
	Scintilla__Message__EnsureVisible                             Scintilla__Message = 2232
	Scintilla__Message__SetAutomaticFold                          Scintilla__Message = 2663
	Scintilla__Message__GetAutomaticFold                          Scintilla__Message = 2664
	Scintilla__Message__SetFoldFlags                              Scintilla__Message = 2233
	Scintilla__Message__EnsureVisibleEnforcePolicy                Scintilla__Message = 2234
	Scintilla__Message__SetTabIndents                             Scintilla__Message = 2260
	Scintilla__Message__GetTabIndents                             Scintilla__Message = 2261
	Scintilla__Message__SetBackSpaceUnIndents                     Scintilla__Message = 2262
	Scintilla__Message__GetBackSpaceUnIndents                     Scintilla__Message = 2263
	Scintilla__Message__SetMouseDwellTime                         Scintilla__Message = 2264
	Scintilla__Message__GetMouseDwellTime                         Scintilla__Message = 2265
	Scintilla__Message__WordStartPosition                         Scintilla__Message = 2266
	Scintilla__Message__WordEndPosition                           Scintilla__Message = 2267
	Scintilla__Message__IsRangeWord                               Scintilla__Message = 2691
	Scintilla__Message__SetIdleStyling                            Scintilla__Message = 2692
	Scintilla__Message__GetIdleStyling                            Scintilla__Message = 2693
	Scintilla__Message__SetWrapMode                               Scintilla__Message = 2268
	Scintilla__Message__GetWrapMode                               Scintilla__Message = 2269
	Scintilla__Message__SetWrapVisualFlags                        Scintilla__Message = 2460
	Scintilla__Message__GetWrapVisualFlags                        Scintilla__Message = 2461
	Scintilla__Message__SetWrapVisualFlagsLocation                Scintilla__Message = 2462
	Scintilla__Message__GetWrapVisualFlagsLocation                Scintilla__Message = 2463
	Scintilla__Message__SetWrapStartIndent                        Scintilla__Message = 2464
	Scintilla__Message__GetWrapStartIndent                        Scintilla__Message = 2465
	Scintilla__Message__SetWrapIndentMode                         Scintilla__Message = 2472
	Scintilla__Message__GetWrapIndentMode                         Scintilla__Message = 2473
	Scintilla__Message__SetLayoutCache                            Scintilla__Message = 2272
	Scintilla__Message__GetLayoutCache                            Scintilla__Message = 2273
	Scintilla__Message__SetScrollWidth                            Scintilla__Message = 2274
	Scintilla__Message__GetScrollWidth                            Scintilla__Message = 2275
	Scintilla__Message__SetScrollWidthTracking                    Scintilla__Message = 2516
	Scintilla__Message__GetScrollWidthTracking                    Scintilla__Message = 2517
	Scintilla__Message__TextWidth                                 Scintilla__Message = 2276
	Scintilla__Message__SetEndAtLastLine                          Scintilla__Message = 2277
	Scintilla__Message__GetEndAtLastLine                          Scintilla__Message = 2278
	Scintilla__Message__TextHeight                                Scintilla__Message = 2279
	Scintilla__Message__SetVScrollBar                             Scintilla__Message = 2280
	Scintilla__Message__GetVScrollBar                             Scintilla__Message = 2281
	Scintilla__Message__AppendText                                Scintilla__Message = 2282
	Scintilla__Message__GetPhasesDraw                             Scintilla__Message = 2673
	Scintilla__Message__SetPhasesDraw                             Scintilla__Message = 2674
	Scintilla__Message__SetFontQuality                            Scintilla__Message = 2611
	Scintilla__Message__GetFontQuality                            Scintilla__Message = 2612
	Scintilla__Message__SetFirstVisibleLine                       Scintilla__Message = 2613
	Scintilla__Message__SetMultiPaste                             Scintilla__Message = 2614
	Scintilla__Message__GetMultiPaste                             Scintilla__Message = 2615
	Scintilla__Message__GetTag                                    Scintilla__Message = 2616
	Scintilla__Message__LinesJoin                                 Scintilla__Message = 2288
	Scintilla__Message__LinesSplit                                Scintilla__Message = 2289
	Scintilla__Message__SetFoldMarginColour                       Scintilla__Message = 2290
	Scintilla__Message__SetFoldMarginHiColour                     Scintilla__Message = 2291
	Scintilla__Message__SetAccessibility                          Scintilla__Message = 2702
	Scintilla__Message__GetAccessibility                          Scintilla__Message = 2703
	Scintilla__Message__LineDown                                  Scintilla__Message = 2300
	Scintilla__Message__LineDownExtend                            Scintilla__Message = 2301
	Scintilla__Message__LineUp                                    Scintilla__Message = 2302
	Scintilla__Message__LineUpExtend                              Scintilla__Message = 2303
	Scintilla__Message__CharLeft                                  Scintilla__Message = 2304
	Scintilla__Message__CharLeftExtend                            Scintilla__Message = 2305
	Scintilla__Message__CharRight                                 Scintilla__Message = 2306
	Scintilla__Message__CharRightExtend                           Scintilla__Message = 2307
	Scintilla__Message__WordLeft                                  Scintilla__Message = 2308
	Scintilla__Message__WordLeftExtend                            Scintilla__Message = 2309
	Scintilla__Message__WordRight                                 Scintilla__Message = 2310
	Scintilla__Message__WordRightExtend                           Scintilla__Message = 2311
	Scintilla__Message__Home                                      Scintilla__Message = 2312
	Scintilla__Message__HomeExtend                                Scintilla__Message = 2313
	Scintilla__Message__LineEnd                                   Scintilla__Message = 2314
	Scintilla__Message__LineEndExtend                             Scintilla__Message = 2315
	Scintilla__Message__DocumentStart                             Scintilla__Message = 2316
	Scintilla__Message__DocumentStartExtend                       Scintilla__Message = 2317
	Scintilla__Message__DocumentEnd                               Scintilla__Message = 2318
	Scintilla__Message__DocumentEndExtend                         Scintilla__Message = 2319
	Scintilla__Message__PageUp                                    Scintilla__Message = 2320
	Scintilla__Message__PageUpExtend                              Scintilla__Message = 2321
	Scintilla__Message__PageDown                                  Scintilla__Message = 2322
	Scintilla__Message__PageDownExtend                            Scintilla__Message = 2323
	Scintilla__Message__EditToggleOvertype                        Scintilla__Message = 2324
	Scintilla__Message__Cancel                                    Scintilla__Message = 2325
	Scintilla__Message__DeleteBack                                Scintilla__Message = 2326
	Scintilla__Message__Tab                                       Scintilla__Message = 2327
	Scintilla__Message__LineIndent                                Scintilla__Message = 2813
	Scintilla__Message__BackTab                                   Scintilla__Message = 2328
	Scintilla__Message__LineDedent                                Scintilla__Message = 2814
	Scintilla__Message__NewLine                                   Scintilla__Message = 2329
	Scintilla__Message__FormFeed                                  Scintilla__Message = 2330
	Scintilla__Message__VCHome                                    Scintilla__Message = 2331
	Scintilla__Message__VCHomeExtend                              Scintilla__Message = 2332
	Scintilla__Message__ZoomIn                                    Scintilla__Message = 2333
	Scintilla__Message__ZoomOut                                   Scintilla__Message = 2334
	Scintilla__Message__DelWordLeft                               Scintilla__Message = 2335
	Scintilla__Message__DelWordRight                              Scintilla__Message = 2336
	Scintilla__Message__DelWordRightEnd                           Scintilla__Message = 2518
	Scintilla__Message__LineCut                                   Scintilla__Message = 2337
	Scintilla__Message__LineDelete                                Scintilla__Message = 2338
	Scintilla__Message__LineTranspose                             Scintilla__Message = 2339
	Scintilla__Message__LineReverse                               Scintilla__Message = 2354
	Scintilla__Message__LineDuplicate                             Scintilla__Message = 2404
	Scintilla__Message__LowerCase                                 Scintilla__Message = 2340
	Scintilla__Message__UpperCase                                 Scintilla__Message = 2341
	Scintilla__Message__LineScrollDown                            Scintilla__Message = 2342
	Scintilla__Message__LineScrollUp                              Scintilla__Message = 2343
	Scintilla__Message__DeleteBackNotLine                         Scintilla__Message = 2344
	Scintilla__Message__HomeDisplay                               Scintilla__Message = 2345
	Scintilla__Message__HomeDisplayExtend                         Scintilla__Message = 2346
	Scintilla__Message__LineEndDisplay                            Scintilla__Message = 2347
	Scintilla__Message__LineEndDisplayExtend                      Scintilla__Message = 2348
	Scintilla__Message__HomeWrap                                  Scintilla__Message = 2349
	Scintilla__Message__HomeWrapExtend                            Scintilla__Message = 2450
	Scintilla__Message__LineEndWrap                               Scintilla__Message = 2451
	Scintilla__Message__LineEndWrapExtend                         Scintilla__Message = 2452
	Scintilla__Message__VCHomeWrap                                Scintilla__Message = 2453
	Scintilla__Message__VCHomeWrapExtend                          Scintilla__Message = 2454
	Scintilla__Message__LineCopy                                  Scintilla__Message = 2455
	Scintilla__Message__MoveCaretInsideView                       Scintilla__Message = 2401
	Scintilla__Message__LineLength                                Scintilla__Message = 2350
	Scintilla__Message__BraceHighlight                            Scintilla__Message = 2351
	Scintilla__Message__BraceHighlightIndicator                   Scintilla__Message = 2498
	Scintilla__Message__BraceBadLight                             Scintilla__Message = 2352
	Scintilla__Message__BraceBadLightIndicator                    Scintilla__Message = 2499
	Scintilla__Message__BraceMatch                                Scintilla__Message = 2353
	Scintilla__Message__BraceMatchNext                            Scintilla__Message = 2369
	Scintilla__Message__GetViewEOL                                Scintilla__Message = 2355
	Scintilla__Message__SetViewEOL                                Scintilla__Message = 2356
	Scintilla__Message__GetDocPointer                             Scintilla__Message = 2357
	Scintilla__Message__SetDocPointer                             Scintilla__Message = 2358
	Scintilla__Message__SetModEventMask                           Scintilla__Message = 2359
	Scintilla__Message__GetEdgeColumn                             Scintilla__Message = 2360
	Scintilla__Message__SetEdgeColumn                             Scintilla__Message = 2361
	Scintilla__Message__GetEdgeMode                               Scintilla__Message = 2362
	Scintilla__Message__SetEdgeMode                               Scintilla__Message = 2363
	Scintilla__Message__GetEdgeColour                             Scintilla__Message = 2364
	Scintilla__Message__SetEdgeColour                             Scintilla__Message = 2365
	Scintilla__Message__MultiEdgeAddLine                          Scintilla__Message = 2694
	Scintilla__Message__MultiEdgeClearAll                         Scintilla__Message = 2695
	Scintilla__Message__GetMultiEdgeColumn                        Scintilla__Message = 2749
	Scintilla__Message__SearchAnchor                              Scintilla__Message = 2366
	Scintilla__Message__SearchNext                                Scintilla__Message = 2367
	Scintilla__Message__SearchPrev                                Scintilla__Message = 2368
	Scintilla__Message__LinesOnScreen                             Scintilla__Message = 2370
	Scintilla__Message__UsePopUp                                  Scintilla__Message = 2371
	Scintilla__Message__SelectionIsRectangle                      Scintilla__Message = 2372
	Scintilla__Message__SetZoom                                   Scintilla__Message = 2373
	Scintilla__Message__GetZoom                                   Scintilla__Message = 2374
	Scintilla__Message__CreateDocument                            Scintilla__Message = 2375
	Scintilla__Message__AddRefDocument                            Scintilla__Message = 2376
	Scintilla__Message__ReleaseDocument                           Scintilla__Message = 2377
	Scintilla__Message__GetDocumentOptions                        Scintilla__Message = 2379
	Scintilla__Message__GetModEventMask                           Scintilla__Message = 2378
	Scintilla__Message__SetCommandEvents                          Scintilla__Message = 2717
	Scintilla__Message__GetCommandEvents                          Scintilla__Message = 2718
	Scintilla__Message__SetFocus                                  Scintilla__Message = 2380
	Scintilla__Message__GetFocus                                  Scintilla__Message = 2381
	Scintilla__Message__SetStatus                                 Scintilla__Message = 2382
	Scintilla__Message__GetStatus                                 Scintilla__Message = 2383
	Scintilla__Message__SetMouseDownCaptures                      Scintilla__Message = 2384
	Scintilla__Message__GetMouseDownCaptures                      Scintilla__Message = 2385
	Scintilla__Message__SetMouseWheelCaptures                     Scintilla__Message = 2696
	Scintilla__Message__GetMouseWheelCaptures                     Scintilla__Message = 2697
	Scintilla__Message__SetCursor                                 Scintilla__Message = 2386
	Scintilla__Message__GetCursor                                 Scintilla__Message = 2387
	Scintilla__Message__SetControlCharSymbol                      Scintilla__Message = 2388
	Scintilla__Message__GetControlCharSymbol                      Scintilla__Message = 2389
	Scintilla__Message__WordPartLeft                              Scintilla__Message = 2390
	Scintilla__Message__WordPartLeftExtend                        Scintilla__Message = 2391
	Scintilla__Message__WordPartRight                             Scintilla__Message = 2392
	Scintilla__Message__WordPartRightExtend                       Scintilla__Message = 2393
	Scintilla__Message__SetVisiblePolicy                          Scintilla__Message = 2394
	Scintilla__Message__DelLineLeft                               Scintilla__Message = 2395
	Scintilla__Message__DelLineRight                              Scintilla__Message = 2396
	Scintilla__Message__SetXOffset                                Scintilla__Message = 2397
	Scintilla__Message__GetXOffset                                Scintilla__Message = 2398
	Scintilla__Message__ChooseCaretX                              Scintilla__Message = 2399
	Scintilla__Message__GrabFocus                                 Scintilla__Message = 2400
	Scintilla__Message__SetXCaretPolicy                           Scintilla__Message = 2402
	Scintilla__Message__SetYCaretPolicy                           Scintilla__Message = 2403
	Scintilla__Message__SetPrintWrapMode                          Scintilla__Message = 2406
	Scintilla__Message__GetPrintWrapMode                          Scintilla__Message = 2407
	Scintilla__Message__SetHotspotActiveFore                      Scintilla__Message = 2410
	Scintilla__Message__GetHotspotActiveFore                      Scintilla__Message = 2494
	Scintilla__Message__SetHotspotActiveBack                      Scintilla__Message = 2411
	Scintilla__Message__GetHotspotActiveBack                      Scintilla__Message = 2495
	Scintilla__Message__SetHotspotActiveUnderline                 Scintilla__Message = 2412
	Scintilla__Message__GetHotspotActiveUnderline                 Scintilla__Message = 2496
	Scintilla__Message__SetHotspotSingleLine                      Scintilla__Message = 2421
	Scintilla__Message__GetHotspotSingleLine                      Scintilla__Message = 2497
	Scintilla__Message__ParaDown                                  Scintilla__Message = 2413
	Scintilla__Message__ParaDownExtend                            Scintilla__Message = 2414
	Scintilla__Message__ParaUp                                    Scintilla__Message = 2415
	Scintilla__Message__ParaUpExtend                              Scintilla__Message = 2416
	Scintilla__Message__PositionBefore                            Scintilla__Message = 2417
	Scintilla__Message__PositionAfter                             Scintilla__Message = 2418
	Scintilla__Message__PositionRelative                          Scintilla__Message = 2670
	Scintilla__Message__PositionRelativeCodeUnits                 Scintilla__Message = 2716
	Scintilla__Message__CopyRange                                 Scintilla__Message = 2419
	Scintilla__Message__CopyText                                  Scintilla__Message = 2420
	Scintilla__Message__SetSelectionMode                          Scintilla__Message = 2422
	Scintilla__Message__ChangeSelectionMode                       Scintilla__Message = 2659
	Scintilla__Message__GetSelectionMode                          Scintilla__Message = 2423
	Scintilla__Message__SetMoveExtendsSelection                   Scintilla__Message = 2719
	Scintilla__Message__GetMoveExtendsSelection                   Scintilla__Message = 2706
	Scintilla__Message__GetLineSelStartPosition                   Scintilla__Message = 2424
	Scintilla__Message__GetLineSelEndPosition                     Scintilla__Message = 2425
	Scintilla__Message__LineDownRectExtend                        Scintilla__Message = 2426
	Scintilla__Message__LineUpRectExtend                          Scintilla__Message = 2427
	Scintilla__Message__CharLeftRectExtend                        Scintilla__Message = 2428
	Scintilla__Message__CharRightRectExtend                       Scintilla__Message = 2429
	Scintilla__Message__HomeRectExtend                            Scintilla__Message = 2430
	Scintilla__Message__VCHomeRectExtend                          Scintilla__Message = 2431
	Scintilla__Message__LineEndRectExtend                         Scintilla__Message = 2432
	Scintilla__Message__PageUpRectExtend                          Scintilla__Message = 2433
	Scintilla__Message__PageDownRectExtend                        Scintilla__Message = 2434
	Scintilla__Message__StutteredPageUp                           Scintilla__Message = 2435
	Scintilla__Message__StutteredPageUpExtend                     Scintilla__Message = 2436
	Scintilla__Message__StutteredPageDown                         Scintilla__Message = 2437
	Scintilla__Message__StutteredPageDownExtend                   Scintilla__Message = 2438
	Scintilla__Message__WordLeftEnd                               Scintilla__Message = 2439
	Scintilla__Message__WordLeftEndExtend                         Scintilla__Message = 2440
	Scintilla__Message__WordRightEnd                              Scintilla__Message = 2441
	Scintilla__Message__WordRightEndExtend                        Scintilla__Message = 2442
	Scintilla__Message__SetWhitespaceChars                        Scintilla__Message = 2443
	Scintilla__Message__GetWhitespaceChars                        Scintilla__Message = 2647
	Scintilla__Message__SetPunctuationChars                       Scintilla__Message = 2648
	Scintilla__Message__GetPunctuationChars                       Scintilla__Message = 2649
	Scintilla__Message__SetCharsDefault                           Scintilla__Message = 2444
	Scintilla__Message__AutoCGetCurrent                           Scintilla__Message = 2445
	Scintilla__Message__AutoCGetCurrentText                       Scintilla__Message = 2610
	Scintilla__Message__AutoCSetCaseInsensitiveBehaviour          Scintilla__Message = 2634
	Scintilla__Message__AutoCGetCaseInsensitiveBehaviour          Scintilla__Message = 2635
	Scintilla__Message__AutoCSetMulti                             Scintilla__Message = 2636
	Scintilla__Message__AutoCGetMulti                             Scintilla__Message = 2637
	Scintilla__Message__AutoCSetOrder                             Scintilla__Message = 2660
	Scintilla__Message__AutoCGetOrder                             Scintilla__Message = 2661
	Scintilla__Message__Allocate                                  Scintilla__Message = 2446
	Scintilla__Message__TargetAsUTF8                              Scintilla__Message = 2447
	Scintilla__Message__SetLengthForEncode                        Scintilla__Message = 2448
	Scintilla__Message__EncodedFromUTF8                           Scintilla__Message = 2449
	Scintilla__Message__FindColumn                                Scintilla__Message = 2456
	Scintilla__Message__GetCaretSticky                            Scintilla__Message = 2457
	Scintilla__Message__SetCaretSticky                            Scintilla__Message = 2458
	Scintilla__Message__ToggleCaretSticky                         Scintilla__Message = 2459
	Scintilla__Message__SetPasteConvertEndings                    Scintilla__Message = 2467
	Scintilla__Message__GetPasteConvertEndings                    Scintilla__Message = 2468
	Scintilla__Message__ReplaceRectangular                        Scintilla__Message = 2771
	Scintilla__Message__SelectionDuplicate                        Scintilla__Message = 2469
	Scintilla__Message__SetCaretLineBackAlpha                     Scintilla__Message = 2470
	Scintilla__Message__GetCaretLineBackAlpha                     Scintilla__Message = 2471
	Scintilla__Message__SetCaretStyle                             Scintilla__Message = 2512
	Scintilla__Message__GetCaretStyle                             Scintilla__Message = 2513
	Scintilla__Message__SetIndicatorCurrent                       Scintilla__Message = 2500
	Scintilla__Message__GetIndicatorCurrent                       Scintilla__Message = 2501
	Scintilla__Message__SetIndicatorValue                         Scintilla__Message = 2502
	Scintilla__Message__GetIndicatorValue                         Scintilla__Message = 2503
	Scintilla__Message__IndicatorFillRange                        Scintilla__Message = 2504
	Scintilla__Message__IndicatorClearRange                       Scintilla__Message = 2505
	Scintilla__Message__IndicatorAllOnFor                         Scintilla__Message = 2506
	Scintilla__Message__IndicatorValueAt                          Scintilla__Message = 2507
	Scintilla__Message__IndicatorStart                            Scintilla__Message = 2508
	Scintilla__Message__IndicatorEnd                              Scintilla__Message = 2509
	Scintilla__Message__SetPositionCache                          Scintilla__Message = 2514
	Scintilla__Message__GetPositionCache                          Scintilla__Message = 2515
	Scintilla__Message__SetLayoutThreads                          Scintilla__Message = 2775
	Scintilla__Message__GetLayoutThreads                          Scintilla__Message = 2776
	Scintilla__Message__CopyAllowLine                             Scintilla__Message = 2519
	Scintilla__Message__CutAllowLine                              Scintilla__Message = 2810
	Scintilla__Message__SetCopySeparator                          Scintilla__Message = 2811
	Scintilla__Message__GetCopySeparator                          Scintilla__Message = 2812
	Scintilla__Message__GetCharacterPointer                       Scintilla__Message = 2520
	Scintilla__Message__GetRangePointer                           Scintilla__Message = 2643
	Scintilla__Message__GetGapPosition                            Scintilla__Message = 2644
	Scintilla__Message__IndicSetAlpha                             Scintilla__Message = 2523
	Scintilla__Message__IndicGetAlpha                             Scintilla__Message = 2524
	Scintilla__Message__IndicSetOutlineAlpha                      Scintilla__Message = 2558
	Scintilla__Message__IndicGetOutlineAlpha                      Scintilla__Message = 2559
	Scintilla__Message__SetExtraAscent                            Scintilla__Message = 2525
	Scintilla__Message__GetExtraAscent                            Scintilla__Message = 2526
	Scintilla__Message__SetExtraDescent                           Scintilla__Message = 2527
	Scintilla__Message__GetExtraDescent                           Scintilla__Message = 2528
	Scintilla__Message__MarkerSymbolDefined                       Scintilla__Message = 2529
	Scintilla__Message__MarginSetText                             Scintilla__Message = 2530
	Scintilla__Message__MarginGetText                             Scintilla__Message = 2531
	Scintilla__Message__MarginSetStyle                            Scintilla__Message = 2532
	Scintilla__Message__MarginGetStyle                            Scintilla__Message = 2533
	Scintilla__Message__MarginSetStyles                           Scintilla__Message = 2534
	Scintilla__Message__MarginGetStyles                           Scintilla__Message = 2535
	Scintilla__Message__MarginTextClearAll                        Scintilla__Message = 2536
	Scintilla__Message__MarginSetStyleOffset                      Scintilla__Message = 2537
	Scintilla__Message__MarginGetStyleOffset                      Scintilla__Message = 2538
	Scintilla__Message__SetMarginOptions                          Scintilla__Message = 2539
	Scintilla__Message__GetMarginOptions                          Scintilla__Message = 2557
	Scintilla__Message__AnnotationSetText                         Scintilla__Message = 2540
	Scintilla__Message__AnnotationGetText                         Scintilla__Message = 2541
	Scintilla__Message__AnnotationSetStyle                        Scintilla__Message = 2542
	Scintilla__Message__AnnotationGetStyle                        Scintilla__Message = 2543
	Scintilla__Message__AnnotationSetStyles                       Scintilla__Message = 2544
	Scintilla__Message__AnnotationGetStyles                       Scintilla__Message = 2545
	Scintilla__Message__AnnotationGetLines                        Scintilla__Message = 2546
	Scintilla__Message__AnnotationClearAll                        Scintilla__Message = 2547
	Scintilla__Message__AnnotationSetVisible                      Scintilla__Message = 2548
	Scintilla__Message__AnnotationGetVisible                      Scintilla__Message = 2549
	Scintilla__Message__AnnotationSetStyleOffset                  Scintilla__Message = 2550
	Scintilla__Message__AnnotationGetStyleOffset                  Scintilla__Message = 2551
	Scintilla__Message__ReleaseAllExtendedStyles                  Scintilla__Message = 2552
	Scintilla__Message__AllocateExtendedStyles                    Scintilla__Message = 2553
	Scintilla__Message__AddUndoAction                             Scintilla__Message = 2560
	Scintilla__Message__CharPositionFromPoint                     Scintilla__Message = 2561
	Scintilla__Message__CharPositionFromPointClose                Scintilla__Message = 2562
	Scintilla__Message__SetMouseSelectionRectangularSwitch        Scintilla__Message = 2668
	Scintilla__Message__GetMouseSelectionRectangularSwitch        Scintilla__Message = 2669
	Scintilla__Message__SetMultipleSelection                      Scintilla__Message = 2563
	Scintilla__Message__GetMultipleSelection                      Scintilla__Message = 2564
	Scintilla__Message__SetAdditionalSelectionTyping              Scintilla__Message = 2565
	Scintilla__Message__GetAdditionalSelectionTyping              Scintilla__Message = 2566
	Scintilla__Message__SetAdditionalCaretsBlink                  Scintilla__Message = 2567
	Scintilla__Message__GetAdditionalCaretsBlink                  Scintilla__Message = 2568
	Scintilla__Message__SetAdditionalCaretsVisible                Scintilla__Message = 2608
	Scintilla__Message__GetAdditionalCaretsVisible                Scintilla__Message = 2609
	Scintilla__Message__GetSelections                             Scintilla__Message = 2570
	Scintilla__Message__GetSelectionEmpty                         Scintilla__Message = 2650
	Scintilla__Message__ClearSelections                           Scintilla__Message = 2571
	Scintilla__Message__SetSelection                              Scintilla__Message = 2572
	Scintilla__Message__AddSelection                              Scintilla__Message = 2573
	Scintilla__Message__SelectionFromPoint                        Scintilla__Message = 2474
	Scintilla__Message__DropSelectionN                            Scintilla__Message = 2671
	Scintilla__Message__SetMainSelection                          Scintilla__Message = 2574
	Scintilla__Message__GetMainSelection                          Scintilla__Message = 2575
	Scintilla__Message__SetSelectionNCaret                        Scintilla__Message = 2576
	Scintilla__Message__GetSelectionNCaret                        Scintilla__Message = 2577
	Scintilla__Message__SetSelectionNAnchor                       Scintilla__Message = 2578
	Scintilla__Message__GetSelectionNAnchor                       Scintilla__Message = 2579
	Scintilla__Message__SetSelectionNCaretVirtualSpace            Scintilla__Message = 2580
	Scintilla__Message__GetSelectionNCaretVirtualSpace            Scintilla__Message = 2581
	Scintilla__Message__SetSelectionNAnchorVirtualSpace           Scintilla__Message = 2582
	Scintilla__Message__GetSelectionNAnchorVirtualSpace           Scintilla__Message = 2583
	Scintilla__Message__SetSelectionNStart                        Scintilla__Message = 2584
	Scintilla__Message__GetSelectionNStart                        Scintilla__Message = 2585
	Scintilla__Message__GetSelectionNStartVirtualSpace            Scintilla__Message = 2726
	Scintilla__Message__SetSelectionNEnd                          Scintilla__Message = 2586
	Scintilla__Message__GetSelectionNEndVirtualSpace              Scintilla__Message = 2727
	Scintilla__Message__GetSelectionNEnd                          Scintilla__Message = 2587
	Scintilla__Message__SetRectangularSelectionCaret              Scintilla__Message = 2588
	Scintilla__Message__GetRectangularSelectionCaret              Scintilla__Message = 2589
	Scintilla__Message__SetRectangularSelectionAnchor             Scintilla__Message = 2590
	Scintilla__Message__GetRectangularSelectionAnchor             Scintilla__Message = 2591
	Scintilla__Message__SetRectangularSelectionCaretVirtualSpace  Scintilla__Message = 2592
	Scintilla__Message__GetRectangularSelectionCaretVirtualSpace  Scintilla__Message = 2593
	Scintilla__Message__SetRectangularSelectionAnchorVirtualSpace Scintilla__Message = 2594
	Scintilla__Message__GetRectangularSelectionAnchorVirtualSpace Scintilla__Message = 2595
	Scintilla__Message__SetVirtualSpaceOptions                    Scintilla__Message = 2596
	Scintilla__Message__GetVirtualSpaceOptions                    Scintilla__Message = 2597
	Scintilla__Message__SetRectangularSelectionModifier           Scintilla__Message = 2598
	Scintilla__Message__GetRectangularSelectionModifier           Scintilla__Message = 2599
	Scintilla__Message__SetAdditionalSelFore                      Scintilla__Message = 2600
	Scintilla__Message__SetAdditionalSelBack                      Scintilla__Message = 2601
	Scintilla__Message__SetAdditionalSelAlpha                     Scintilla__Message = 2602
	Scintilla__Message__GetAdditionalSelAlpha                     Scintilla__Message = 2603
	Scintilla__Message__SetAdditionalCaretFore                    Scintilla__Message = 2604
	Scintilla__Message__GetAdditionalCaretFore                    Scintilla__Message = 2605
	Scintilla__Message__RotateSelection                           Scintilla__Message = 2606
	Scintilla__Message__SwapMainAnchorCaret                       Scintilla__Message = 2607
	Scintilla__Message__MultipleSelectAddNext                     Scintilla__Message = 2688
	Scintilla__Message__MultipleSelectAddEach                     Scintilla__Message = 2689
	Scintilla__Message__ChangeLexerState                          Scintilla__Message = 2617
	Scintilla__Message__ContractedFoldNext                        Scintilla__Message = 2618
	Scintilla__Message__VerticalCentreCaret                       Scintilla__Message = 2619
	Scintilla__Message__MoveSelectedLinesUp                       Scintilla__Message = 2620
	Scintilla__Message__MoveSelectedLinesDown                     Scintilla__Message = 2621
	Scintilla__Message__SetIdentifier                             Scintilla__Message = 2622
	Scintilla__Message__GetIdentifier                             Scintilla__Message = 2623
	Scintilla__Message__RGBAImageSetWidth                         Scintilla__Message = 2624
	Scintilla__Message__RGBAImageSetHeight                        Scintilla__Message = 2625
	Scintilla__Message__RGBAImageSetScale                         Scintilla__Message = 2651
	Scintilla__Message__MarkerDefineRGBAImage                     Scintilla__Message = 2626
	Scintilla__Message__RegisterRGBAImage                         Scintilla__Message = 2627
	Scintilla__Message__ScrollToStart                             Scintilla__Message = 2628
	Scintilla__Message__ScrollToEnd                               Scintilla__Message = 2629
	Scintilla__Message__SetTechnology                             Scintilla__Message = 2630
	Scintilla__Message__GetTechnology                             Scintilla__Message = 2631
	Scintilla__Message__CreateLoader                              Scintilla__Message = 2632
	Scintilla__Message__FindIndicatorShow                         Scintilla__Message = 2640
	Scintilla__Message__FindIndicatorFlash                        Scintilla__Message = 2641
	Scintilla__Message__FindIndicatorHide                         Scintilla__Message = 2642
	Scintilla__Message__VCHomeDisplay                             Scintilla__Message = 2652
	Scintilla__Message__VCHomeDisplayExtend                       Scintilla__Message = 2653
	Scintilla__Message__GetCaretLineVisibleAlways                 Scintilla__Message = 2654
	Scintilla__Message__SetCaretLineVisibleAlways                 Scintilla__Message = 2655
	Scintilla__Message__SetLineEndTypesAllowed                    Scintilla__Message = 2656
	Scintilla__Message__GetLineEndTypesAllowed                    Scintilla__Message = 2657
	Scintilla__Message__GetLineEndTypesActive                     Scintilla__Message = 2658
	Scintilla__Message__SetRepresentation                         Scintilla__Message = 2665
	Scintilla__Message__GetRepresentation                         Scintilla__Message = 2666
	Scintilla__Message__ClearRepresentation                       Scintilla__Message = 2667
	Scintilla__Message__ClearAllRepresentations                   Scintilla__Message = 2770
	Scintilla__Message__SetRepresentationAppearance               Scintilla__Message = 2766
	Scintilla__Message__GetRepresentationAppearance               Scintilla__Message = 2767
	Scintilla__Message__SetRepresentationColour                   Scintilla__Message = 2768
	Scintilla__Message__GetRepresentationColour                   Scintilla__Message = 2769
	Scintilla__Message__EOLAnnotationSetText                      Scintilla__Message = 2740
	Scintilla__Message__EOLAnnotationGetText                      Scintilla__Message = 2741
	Scintilla__Message__EOLAnnotationSetStyle                     Scintilla__Message = 2742
	Scintilla__Message__EOLAnnotationGetStyle                     Scintilla__Message = 2743
	Scintilla__Message__EOLAnnotationClearAll                     Scintilla__Message = 2744
	Scintilla__Message__EOLAnnotationSetVisible                   Scintilla__Message = 2745
	Scintilla__Message__EOLAnnotationGetVisible                   Scintilla__Message = 2746
	Scintilla__Message__EOLAnnotationSetStyleOffset               Scintilla__Message = 2747
	Scintilla__Message__EOLAnnotationGetStyleOffset               Scintilla__Message = 2748
	Scintilla__Message__SupportsFeature                           Scintilla__Message = 2750
	Scintilla__Message__GetLineCharacterIndex                     Scintilla__Message = 2710
	Scintilla__Message__AllocateLineCharacterIndex                Scintilla__Message = 2711
	Scintilla__Message__ReleaseLineCharacterIndex                 Scintilla__Message = 2712
	Scintilla__Message__LineFromIndexPosition                     Scintilla__Message = 2713
	Scintilla__Message__IndexPositionFromLine                     Scintilla__Message = 2714
	Scintilla__Message__StartRecord                               Scintilla__Message = 3001
	Scintilla__Message__StopRecord                                Scintilla__Message = 3002
	Scintilla__Message__GetLexer                                  Scintilla__Message = 4002
	Scintilla__Message__Colourise                                 Scintilla__Message = 4003
	Scintilla__Message__SetProperty                               Scintilla__Message = 4004
	Scintilla__Message__SetKeyWords                               Scintilla__Message = 4005
	Scintilla__Message__GetProperty                               Scintilla__Message = 4008
	Scintilla__Message__GetPropertyExpanded                       Scintilla__Message = 4009
	Scintilla__Message__GetPropertyInt                            Scintilla__Message = 4010
	Scintilla__Message__GetLexerLanguage                          Scintilla__Message = 4012
	Scintilla__Message__PrivateLexerCall                          Scintilla__Message = 4013
	Scintilla__Message__PropertyNames                             Scintilla__Message = 4014
	Scintilla__Message__PropertyType                              Scintilla__Message = 4015
	Scintilla__Message__DescribeProperty                          Scintilla__Message = 4016
	Scintilla__Message__DescribeKeyWordSets                       Scintilla__Message = 4017
	Scintilla__Message__GetLineEndTypesSupported                  Scintilla__Message = 4018
	Scintilla__Message__AllocateSubStyles                         Scintilla__Message = 4020
	Scintilla__Message__GetSubStylesStart                         Scintilla__Message = 4021
	Scintilla__Message__GetSubStylesLength                        Scintilla__Message = 4022
	Scintilla__Message__GetStyleFromSubStyle                      Scintilla__Message = 4027
	Scintilla__Message__GetPrimaryStyleFromStyle                  Scintilla__Message = 4028
	Scintilla__Message__FreeSubStyles                             Scintilla__Message = 4023
	Scintilla__Message__SetIdentifiers                            Scintilla__Message = 4024
	Scintilla__Message__DistanceToSecondaryStyles                 Scintilla__Message = 4025
	Scintilla__Message__GetSubStyleBases                          Scintilla__Message = 4026
	Scintilla__Message__GetNamedStyles                            Scintilla__Message = 4029
	Scintilla__Message__NameOfStyle                               Scintilla__Message = 4030
	Scintilla__Message__TagsOfStyle                               Scintilla__Message = 4031
	Scintilla__Message__DescriptionOfStyle                        Scintilla__Message = 4032
	Scintilla__Message__SetILexer                                 Scintilla__Message = 4033
	Scintilla__Message__GetBidirectional                          Scintilla__Message = 2708
	Scintilla__Message__SetBidirectional                          Scintilla__Message = 2709
)

type std__nullopt_t___Construct int

const (
	Std__nullopt_t___Token std__nullopt_t___Construct = 0
)

type Scintilla__Internal__Surface__Ends int

const (
	Scintilla__Internal__Surface__semiCircles Scintilla__Internal__Surface__Ends = 0
	Scintilla__Internal__Surface__leftFlat    Scintilla__Internal__Surface__Ends = 1
	Scintilla__Internal__Surface__leftAngle   Scintilla__Internal__Surface__Ends = 2
	Scintilla__Internal__Surface__rightFlat   Scintilla__Internal__Surface__Ends = 16
	Scintilla__Internal__Surface__rightAngle  Scintilla__Internal__Surface__Ends = 32
)

type Scintilla__Internal__Surface__GradientOptions int

const (
	Scintilla__Internal__Surface__leftToRight Scintilla__Internal__Surface__GradientOptions = 0
	Scintilla__Internal__Surface__topToBottom Scintilla__Internal__Surface__GradientOptions = 1
)

type Scintilla__Internal__Window__Cursor int

const (
	Scintilla__Internal__Window__invalid      Scintilla__Internal__Window__Cursor = 0
	Scintilla__Internal__Window__text         Scintilla__Internal__Window__Cursor = 1
	Scintilla__Internal__Window__arrow        Scintilla__Internal__Window__Cursor = 2
	Scintilla__Internal__Window__up           Scintilla__Internal__Window__Cursor = 3
	Scintilla__Internal__Window__wait         Scintilla__Internal__Window__Cursor = 4
	Scintilla__Internal__Window__horizontal   Scintilla__Internal__Window__Cursor = 5
	Scintilla__Internal__Window__vertical     Scintilla__Internal__Window__Cursor = 6
	Scintilla__Internal__Window__reverseArrow Scintilla__Internal__Window__Cursor = 7
	Scintilla__Internal__Window__hand         Scintilla__Internal__Window__Cursor = 8
)

type Scintilla__Internal__ListBoxEvent__EventType int

const (
	Scintilla__Internal__ListBoxEvent__selectionChange Scintilla__Internal__ListBoxEvent__EventType = 0
	Scintilla__Internal__ListBoxEvent__doubleClick     Scintilla__Internal__ListBoxEvent__EventType = 1
)

type Scintilla__Internal__Point struct {
	h          *C.Scintilla__Internal__Point
	isSubclass bool
}

func (this *Scintilla__Internal__Point) cPointer() *C.Scintilla__Internal__Point {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Point) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Point constructs the type using only CGO pointers.
func newScintilla__Internal__Point(h *C.Scintilla__Internal__Point) *Scintilla__Internal__Point {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Point{h: h}
}

// UnsafeNewScintilla__Internal__Point constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Point(h unsafe.Pointer) *Scintilla__Internal__Point {
	return newScintilla__Internal__Point((*C.Scintilla__Internal__Point)(h))
}

// NewScintilla__Internal__Point constructs a new Scintilla::Internal::Point object.
func NewScintilla__Internal__Point() *Scintilla__Internal__Point {

	ret := newScintilla__Internal__Point(C.Scintilla__Internal__Point_new())
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__Point2 constructs a new Scintilla::Internal::Point object.
func NewScintilla__Internal__Point2(param1 *Scintilla__Internal__Point) *Scintilla__Internal__Point {

	ret := newScintilla__Internal__Point(C.Scintilla__Internal__Point_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__Point3 constructs a new Scintilla::Internal::Point object.
func NewScintilla__Internal__Point3(x_ float64) *Scintilla__Internal__Point {

	ret := newScintilla__Internal__Point(C.Scintilla__Internal__Point_new3((C.double)(x_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__Point4 constructs a new Scintilla::Internal::Point object.
func NewScintilla__Internal__Point4(x_ float64, y_ float64) *Scintilla__Internal__Point {

	ret := newScintilla__Internal__Point(C.Scintilla__Internal__Point_new4((C.double)(x_), (C.double)(y_)))
	ret.isSubclass = true
	return ret
}

func Scintilla__Internal__Point_FromInts(x_ int, y_ int) *Scintilla__Internal__Point {
	_goptr := newScintilla__Internal__Point(C.Scintilla__Internal__Point_FromInts((C.int)(x_), (C.int)(y_)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__Point) OperatorEqual(other Scintilla__Internal__Point) bool {
	return (bool)(C.Scintilla__Internal__Point_OperatorEqual(this.h, other.cPointer()))
}

func (this *Scintilla__Internal__Point) OperatorNotEqual(other Scintilla__Internal__Point) bool {
	return (bool)(C.Scintilla__Internal__Point_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *Scintilla__Internal__Point) OperatorPlus(other Scintilla__Internal__Point) *Scintilla__Internal__Point {
	_goptr := newScintilla__Internal__Point(C.Scintilla__Internal__Point_OperatorPlus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__Point) OperatorMinus(other Scintilla__Internal__Point) *Scintilla__Internal__Point {
	_goptr := newScintilla__Internal__Point(C.Scintilla__Internal__Point_OperatorMinus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Point) Delete() {
	C.Scintilla__Internal__Point_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Point) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Point) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Interval struct {
	h          *C.Scintilla__Internal__Interval
	isSubclass bool
}

func (this *Scintilla__Internal__Interval) cPointer() *C.Scintilla__Internal__Interval {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Interval) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Interval constructs the type using only CGO pointers.
func newScintilla__Internal__Interval(h *C.Scintilla__Internal__Interval) *Scintilla__Internal__Interval {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Interval{h: h}
}

// UnsafeNewScintilla__Internal__Interval constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Interval(h unsafe.Pointer) *Scintilla__Internal__Interval {
	return newScintilla__Internal__Interval((*C.Scintilla__Internal__Interval)(h))
}

func (this *Scintilla__Internal__Interval) OperatorEqual(other *Scintilla__Internal__Interval) bool {
	return (bool)(C.Scintilla__Internal__Interval_OperatorEqual(this.h, other.cPointer()))
}

func (this *Scintilla__Internal__Interval) Width() float64 {
	return (float64)(C.Scintilla__Internal__Interval_Width(this.h))
}

func (this *Scintilla__Internal__Interval) Empty() bool {
	return (bool)(C.Scintilla__Internal__Interval_Empty(this.h))
}

func (this *Scintilla__Internal__Interval) Intersects(other Scintilla__Internal__Interval) bool {
	return (bool)(C.Scintilla__Internal__Interval_Intersects(this.h, other.cPointer()))
}

func (this *Scintilla__Internal__Interval) Offset(offset float64) *Scintilla__Internal__Interval {
	_goptr := newScintilla__Internal__Interval(C.Scintilla__Internal__Interval_Offset(this.h, (C.double)(offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Interval) Delete() {
	C.Scintilla__Internal__Interval_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Interval) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Interval) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__PRectangle struct {
	h          *C.Scintilla__Internal__PRectangle
	isSubclass bool
}

func (this *Scintilla__Internal__PRectangle) cPointer() *C.Scintilla__Internal__PRectangle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__PRectangle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__PRectangle constructs the type using only CGO pointers.
func newScintilla__Internal__PRectangle(h *C.Scintilla__Internal__PRectangle) *Scintilla__Internal__PRectangle {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__PRectangle{h: h}
}

// UnsafeNewScintilla__Internal__PRectangle constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__PRectangle(h unsafe.Pointer) *Scintilla__Internal__PRectangle {
	return newScintilla__Internal__PRectangle((*C.Scintilla__Internal__PRectangle)(h))
}

// NewScintilla__Internal__PRectangle constructs a new Scintilla::Internal::PRectangle object.
func NewScintilla__Internal__PRectangle() *Scintilla__Internal__PRectangle {

	ret := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_new())
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__PRectangle2 constructs a new Scintilla::Internal::PRectangle object.
func NewScintilla__Internal__PRectangle2(param1 *Scintilla__Internal__PRectangle) *Scintilla__Internal__PRectangle {

	ret := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__PRectangle3 constructs a new Scintilla::Internal::PRectangle object.
func NewScintilla__Internal__PRectangle3(left_ float64) *Scintilla__Internal__PRectangle {

	ret := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_new3((C.double)(left_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__PRectangle4 constructs a new Scintilla::Internal::PRectangle object.
func NewScintilla__Internal__PRectangle4(left_ float64, top_ float64) *Scintilla__Internal__PRectangle {

	ret := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_new4((C.double)(left_), (C.double)(top_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__PRectangle5 constructs a new Scintilla::Internal::PRectangle object.
func NewScintilla__Internal__PRectangle5(left_ float64, top_ float64, right_ float64) *Scintilla__Internal__PRectangle {

	ret := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_new5((C.double)(left_), (C.double)(top_), (C.double)(right_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__PRectangle6 constructs a new Scintilla::Internal::PRectangle object.
func NewScintilla__Internal__PRectangle6(left_ float64, top_ float64, right_ float64, bottom_ float64) *Scintilla__Internal__PRectangle {

	ret := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_new6((C.double)(left_), (C.double)(top_), (C.double)(right_), (C.double)(bottom_)))
	ret.isSubclass = true
	return ret
}

func Scintilla__Internal__PRectangle_FromInts(left_ int, top_ int, right_ int, bottom_ int) *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_FromInts((C.int)(left_), (C.int)(top_), (C.int)(right_), (C.int)(bottom_)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__PRectangle) OperatorEqual(rc *Scintilla__Internal__PRectangle) bool {
	return (bool)(C.Scintilla__Internal__PRectangle_OperatorEqual(this.h, rc.cPointer()))
}

func (this *Scintilla__Internal__PRectangle) Contains(pt Scintilla__Internal__Point) bool {
	return (bool)(C.Scintilla__Internal__PRectangle_Contains(this.h, pt.cPointer()))
}

func (this *Scintilla__Internal__PRectangle) ContainsWholePixel(pt Scintilla__Internal__Point) bool {
	return (bool)(C.Scintilla__Internal__PRectangle_ContainsWholePixel(this.h, pt.cPointer()))
}

func (this *Scintilla__Internal__PRectangle) ContainsWithRc(rc Scintilla__Internal__PRectangle) bool {
	return (bool)(C.Scintilla__Internal__PRectangle_ContainsWithRc(this.h, rc.cPointer()))
}

func (this *Scintilla__Internal__PRectangle) Intersects(other Scintilla__Internal__PRectangle) bool {
	return (bool)(C.Scintilla__Internal__PRectangle_Intersects(this.h, other.cPointer()))
}

func (this *Scintilla__Internal__PRectangle) IntersectsWithHorizontalBounds(horizontalBounds Scintilla__Internal__Interval) bool {
	return (bool)(C.Scintilla__Internal__PRectangle_IntersectsWithHorizontalBounds(this.h, horizontalBounds.cPointer()))
}

func (this *Scintilla__Internal__PRectangle) Move(xDelta float64, yDelta float64) {
	C.Scintilla__Internal__PRectangle_Move(this.h, (C.double)(xDelta), (C.double)(yDelta))
}

func (this *Scintilla__Internal__PRectangle) WithHorizontalBounds(horizontal Scintilla__Internal__Interval) *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_WithHorizontalBounds(this.h, horizontal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__PRectangle) Inset(delta float64) *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_Inset(this.h, (C.double)(delta)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__PRectangle) InsetWithDelta(delta Scintilla__Internal__Point) *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__PRectangle_InsetWithDelta(this.h, delta.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__PRectangle) Centre() *Scintilla__Internal__Point {
	_goptr := newScintilla__Internal__Point(C.Scintilla__Internal__PRectangle_Centre(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__PRectangle) Width() float64 {
	return (float64)(C.Scintilla__Internal__PRectangle_Width(this.h))
}

func (this *Scintilla__Internal__PRectangle) Height() float64 {
	return (float64)(C.Scintilla__Internal__PRectangle_Height(this.h))
}

func (this *Scintilla__Internal__PRectangle) Empty() bool {
	return (bool)(C.Scintilla__Internal__PRectangle_Empty(this.h))
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__PRectangle) Delete() {
	C.Scintilla__Internal__PRectangle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__PRectangle) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__PRectangle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__ColourRGBA struct {
	h          *C.Scintilla__Internal__ColourRGBA
	isSubclass bool
}

func (this *Scintilla__Internal__ColourRGBA) cPointer() *C.Scintilla__Internal__ColourRGBA {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__ColourRGBA) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__ColourRGBA constructs the type using only CGO pointers.
func newScintilla__Internal__ColourRGBA(h *C.Scintilla__Internal__ColourRGBA) *Scintilla__Internal__ColourRGBA {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__ColourRGBA{h: h}
}

// UnsafeNewScintilla__Internal__ColourRGBA constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__ColourRGBA(h unsafe.Pointer) *Scintilla__Internal__ColourRGBA {
	return newScintilla__Internal__ColourRGBA((*C.Scintilla__Internal__ColourRGBA)(h))
}

// NewScintilla__Internal__ColourRGBA constructs a new Scintilla::Internal::ColourRGBA object.
func NewScintilla__Internal__ColourRGBA() *Scintilla__Internal__ColourRGBA {

	ret := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_new())
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__ColourRGBA2 constructs a new Scintilla::Internal::ColourRGBA object.
func NewScintilla__Internal__ColourRGBA2(red uint, green uint, blue uint) *Scintilla__Internal__ColourRGBA {

	ret := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_new2((C.uint)(red), (C.uint)(green), (C.uint)(blue)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__ColourRGBA3 constructs a new Scintilla::Internal::ColourRGBA object.
func NewScintilla__Internal__ColourRGBA3(cd Scintilla__Internal__ColourRGBA, alpha uint) *Scintilla__Internal__ColourRGBA {

	ret := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_new3(cd.cPointer(), (C.uint)(alpha)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__ColourRGBA4 constructs a new Scintilla::Internal::ColourRGBA object.
func NewScintilla__Internal__ColourRGBA4(param1 *Scintilla__Internal__ColourRGBA) *Scintilla__Internal__ColourRGBA {

	ret := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_new4(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__ColourRGBA5 constructs a new Scintilla::Internal::ColourRGBA object.
func NewScintilla__Internal__ColourRGBA5(co_ int) *Scintilla__Internal__ColourRGBA {

	ret := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_new5((C.int)(co_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__ColourRGBA6 constructs a new Scintilla::Internal::ColourRGBA object.
func NewScintilla__Internal__ColourRGBA6(red uint, green uint, blue uint, alpha uint) *Scintilla__Internal__ColourRGBA {

	ret := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_new6((C.uint)(red), (C.uint)(green), (C.uint)(blue), (C.uint)(alpha)))
	ret.isSubclass = true
	return ret
}

func Scintilla__Internal__ColourRGBA_FromRGB(co_ int) *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_FromRGB((C.int)(co_)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func Scintilla__Internal__ColourRGBA_Grey(grey uint) *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_Grey((C.uint)(grey)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func Scintilla__Internal__ColourRGBA_FromIpRGB(co_ uintptr) *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_FromIpRGB((C.intptr_t)(co_)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__ColourRGBA) WithoutAlpha() *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_WithoutAlpha(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__ColourRGBA) Opaque() *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_Opaque(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__ColourRGBA) AsInteger() int {
	return (int)(C.Scintilla__Internal__ColourRGBA_AsInteger(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) OpaqueRGB() int {
	return (int)(C.Scintilla__Internal__ColourRGBA_OpaqueRGB(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetRed() byte {
	return (byte)(C.Scintilla__Internal__ColourRGBA_GetRed(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetGreen() byte {
	return (byte)(C.Scintilla__Internal__ColourRGBA_GetGreen(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetBlue() byte {
	return (byte)(C.Scintilla__Internal__ColourRGBA_GetBlue(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetAlpha() byte {
	return (byte)(C.Scintilla__Internal__ColourRGBA_GetAlpha(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetRedComponent() float32 {
	return (float32)(C.Scintilla__Internal__ColourRGBA_GetRedComponent(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetGreenComponent() float32 {
	return (float32)(C.Scintilla__Internal__ColourRGBA_GetGreenComponent(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetBlueComponent() float32 {
	return (float32)(C.Scintilla__Internal__ColourRGBA_GetBlueComponent(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) GetAlphaComponent() float32 {
	return (float32)(C.Scintilla__Internal__ColourRGBA_GetAlphaComponent(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) OperatorEqual(other *Scintilla__Internal__ColourRGBA) bool {
	return (bool)(C.Scintilla__Internal__ColourRGBA_OperatorEqual(this.h, other.cPointer()))
}

func (this *Scintilla__Internal__ColourRGBA) IsOpaque() bool {
	return (bool)(C.Scintilla__Internal__ColourRGBA_IsOpaque(this.h))
}

func (this *Scintilla__Internal__ColourRGBA) MixedWith(other Scintilla__Internal__ColourRGBA) *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_MixedWith(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__ColourRGBA) MixedWith2(other Scintilla__Internal__ColourRGBA, proportion float64) *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_MixedWith2(this.h, other.cPointer(), (C.double)(proportion)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__ColourRGBA) OperatorAssign(param1 *Scintilla__Internal__ColourRGBA) {
	C.Scintilla__Internal__ColourRGBA_OperatorAssign(this.h, param1.cPointer())
}

func Scintilla__Internal__ColourRGBA_Grey2(grey uint, alpha uint) *Scintilla__Internal__ColourRGBA {
	_goptr := newScintilla__Internal__ColourRGBA(C.Scintilla__Internal__ColourRGBA_Grey2((C.uint)(grey), (C.uint)(alpha)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__ColourRGBA) Delete() {
	C.Scintilla__Internal__ColourRGBA_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__ColourRGBA) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__ColourRGBA) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Stroke struct {
	h          *C.Scintilla__Internal__Stroke
	isSubclass bool
}

func (this *Scintilla__Internal__Stroke) cPointer() *C.Scintilla__Internal__Stroke {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Stroke) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Stroke constructs the type using only CGO pointers.
func newScintilla__Internal__Stroke(h *C.Scintilla__Internal__Stroke) *Scintilla__Internal__Stroke {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Stroke{h: h}
}

// UnsafeNewScintilla__Internal__Stroke constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Stroke(h unsafe.Pointer) *Scintilla__Internal__Stroke {
	return newScintilla__Internal__Stroke((*C.Scintilla__Internal__Stroke)(h))
}

// NewScintilla__Internal__Stroke constructs a new Scintilla::Internal::Stroke object.
func NewScintilla__Internal__Stroke(colour_ Scintilla__Internal__ColourRGBA) *Scintilla__Internal__Stroke {

	ret := newScintilla__Internal__Stroke(C.Scintilla__Internal__Stroke_new(colour_.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__Stroke2 constructs a new Scintilla::Internal::Stroke object.
func NewScintilla__Internal__Stroke2(param1 *Scintilla__Internal__Stroke) *Scintilla__Internal__Stroke {

	ret := newScintilla__Internal__Stroke(C.Scintilla__Internal__Stroke_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__Stroke3 constructs a new Scintilla::Internal::Stroke object.
func NewScintilla__Internal__Stroke3(colour_ Scintilla__Internal__ColourRGBA, width_ float64) *Scintilla__Internal__Stroke {

	ret := newScintilla__Internal__Stroke(C.Scintilla__Internal__Stroke_new3(colour_.cPointer(), (C.double)(width_)))
	ret.isSubclass = true
	return ret
}

func (this *Scintilla__Internal__Stroke) WidthF() float32 {
	return (float32)(C.Scintilla__Internal__Stroke_WidthF(this.h))
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Stroke) Delete() {
	C.Scintilla__Internal__Stroke_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Stroke) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Stroke) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Fill struct {
	h          *C.Scintilla__Internal__Fill
	isSubclass bool
}

func (this *Scintilla__Internal__Fill) cPointer() *C.Scintilla__Internal__Fill {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Fill) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Fill constructs the type using only CGO pointers.
func newScintilla__Internal__Fill(h *C.Scintilla__Internal__Fill) *Scintilla__Internal__Fill {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Fill{h: h}
}

// UnsafeNewScintilla__Internal__Fill constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Fill(h unsafe.Pointer) *Scintilla__Internal__Fill {
	return newScintilla__Internal__Fill((*C.Scintilla__Internal__Fill)(h))
}

// NewScintilla__Internal__Fill constructs a new Scintilla::Internal::Fill object.
func NewScintilla__Internal__Fill(colour_ Scintilla__Internal__ColourRGBA) *Scintilla__Internal__Fill {

	ret := newScintilla__Internal__Fill(C.Scintilla__Internal__Fill_new(colour_.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__Fill2 constructs a new Scintilla::Internal::Fill object.
func NewScintilla__Internal__Fill2(param1 *Scintilla__Internal__Fill) *Scintilla__Internal__Fill {

	ret := newScintilla__Internal__Fill(C.Scintilla__Internal__Fill_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Fill) Delete() {
	C.Scintilla__Internal__Fill_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Fill) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Fill) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__FillStroke struct {
	h          *C.Scintilla__Internal__FillStroke
	isSubclass bool
}

func (this *Scintilla__Internal__FillStroke) cPointer() *C.Scintilla__Internal__FillStroke {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__FillStroke) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__FillStroke constructs the type using only CGO pointers.
func newScintilla__Internal__FillStroke(h *C.Scintilla__Internal__FillStroke) *Scintilla__Internal__FillStroke {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__FillStroke{h: h}
}

// UnsafeNewScintilla__Internal__FillStroke constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__FillStroke(h unsafe.Pointer) *Scintilla__Internal__FillStroke {
	return newScintilla__Internal__FillStroke((*C.Scintilla__Internal__FillStroke)(h))
}

// NewScintilla__Internal__FillStroke constructs a new Scintilla::Internal::FillStroke object.
func NewScintilla__Internal__FillStroke(colourFill_ Scintilla__Internal__ColourRGBA, colourStroke_ Scintilla__Internal__ColourRGBA) *Scintilla__Internal__FillStroke {

	ret := newScintilla__Internal__FillStroke(C.Scintilla__Internal__FillStroke_new(colourFill_.cPointer(), colourStroke_.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FillStroke2 constructs a new Scintilla::Internal::FillStroke object.
func NewScintilla__Internal__FillStroke2(colourBoth Scintilla__Internal__ColourRGBA) *Scintilla__Internal__FillStroke {

	ret := newScintilla__Internal__FillStroke(C.Scintilla__Internal__FillStroke_new2(colourBoth.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FillStroke3 constructs a new Scintilla::Internal::FillStroke object.
func NewScintilla__Internal__FillStroke3(colourFill_ Scintilla__Internal__ColourRGBA, colourStroke_ Scintilla__Internal__ColourRGBA, widthStroke_ float64) *Scintilla__Internal__FillStroke {

	ret := newScintilla__Internal__FillStroke(C.Scintilla__Internal__FillStroke_new3(colourFill_.cPointer(), colourStroke_.cPointer(), (C.double)(widthStroke_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FillStroke4 constructs a new Scintilla::Internal::FillStroke object.
func NewScintilla__Internal__FillStroke4(colourBoth Scintilla__Internal__ColourRGBA, widthStroke_ float64) *Scintilla__Internal__FillStroke {

	ret := newScintilla__Internal__FillStroke(C.Scintilla__Internal__FillStroke_new4(colourBoth.cPointer(), (C.double)(widthStroke_)))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__FillStroke) Delete() {
	C.Scintilla__Internal__FillStroke_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__FillStroke) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__FillStroke) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__ColourStop struct {
	h          *C.Scintilla__Internal__ColourStop
	isSubclass bool
}

func (this *Scintilla__Internal__ColourStop) cPointer() *C.Scintilla__Internal__ColourStop {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__ColourStop) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__ColourStop constructs the type using only CGO pointers.
func newScintilla__Internal__ColourStop(h *C.Scintilla__Internal__ColourStop) *Scintilla__Internal__ColourStop {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__ColourStop{h: h}
}

// UnsafeNewScintilla__Internal__ColourStop constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__ColourStop(h unsafe.Pointer) *Scintilla__Internal__ColourStop {
	return newScintilla__Internal__ColourStop((*C.Scintilla__Internal__ColourStop)(h))
}

// NewScintilla__Internal__ColourStop constructs a new Scintilla::Internal::ColourStop object.
func NewScintilla__Internal__ColourStop(position_ float64, colour_ Scintilla__Internal__ColourRGBA) *Scintilla__Internal__ColourStop {

	ret := newScintilla__Internal__ColourStop(C.Scintilla__Internal__ColourStop_new((C.double)(position_), colour_.cPointer()))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__ColourStop) Delete() {
	C.Scintilla__Internal__ColourStop_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__ColourStop) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__ColourStop) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__CharacterRange struct {
	h          *C.Scintilla__CharacterRange
	isSubclass bool
}

func (this *Scintilla__CharacterRange) cPointer() *C.Scintilla__CharacterRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__CharacterRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__CharacterRange constructs the type using only CGO pointers.
func newScintilla__CharacterRange(h *C.Scintilla__CharacterRange) *Scintilla__CharacterRange {
	if h == nil {
		return nil
	}

	return &Scintilla__CharacterRange{h: h}
}

// UnsafeNewScintilla__CharacterRange constructs the type using only unsafe pointers.
func UnsafeNewScintilla__CharacterRange(h unsafe.Pointer) *Scintilla__CharacterRange {
	return newScintilla__CharacterRange((*C.Scintilla__CharacterRange)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__CharacterRange) Delete() {
	C.Scintilla__CharacterRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__CharacterRange) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__CharacterRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__CharacterRangeFull struct {
	h          *C.Scintilla__CharacterRangeFull
	isSubclass bool
}

func (this *Scintilla__CharacterRangeFull) cPointer() *C.Scintilla__CharacterRangeFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__CharacterRangeFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__CharacterRangeFull constructs the type using only CGO pointers.
func newScintilla__CharacterRangeFull(h *C.Scintilla__CharacterRangeFull) *Scintilla__CharacterRangeFull {
	if h == nil {
		return nil
	}

	return &Scintilla__CharacterRangeFull{h: h}
}

// UnsafeNewScintilla__CharacterRangeFull constructs the type using only unsafe pointers.
func UnsafeNewScintilla__CharacterRangeFull(h unsafe.Pointer) *Scintilla__CharacterRangeFull {
	return newScintilla__CharacterRangeFull((*C.Scintilla__CharacterRangeFull)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__CharacterRangeFull) Delete() {
	C.Scintilla__CharacterRangeFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__CharacterRangeFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__CharacterRangeFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__TextRange struct {
	h          *C.Scintilla__TextRange
	isSubclass bool
}

func (this *Scintilla__TextRange) cPointer() *C.Scintilla__TextRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__TextRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__TextRange constructs the type using only CGO pointers.
func newScintilla__TextRange(h *C.Scintilla__TextRange) *Scintilla__TextRange {
	if h == nil {
		return nil
	}

	return &Scintilla__TextRange{h: h}
}

// UnsafeNewScintilla__TextRange constructs the type using only unsafe pointers.
func UnsafeNewScintilla__TextRange(h unsafe.Pointer) *Scintilla__TextRange {
	return newScintilla__TextRange((*C.Scintilla__TextRange)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__TextRange) Delete() {
	C.Scintilla__TextRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__TextRange) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__TextRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__TextRangeFull struct {
	h          *C.Scintilla__TextRangeFull
	isSubclass bool
}

func (this *Scintilla__TextRangeFull) cPointer() *C.Scintilla__TextRangeFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__TextRangeFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__TextRangeFull constructs the type using only CGO pointers.
func newScintilla__TextRangeFull(h *C.Scintilla__TextRangeFull) *Scintilla__TextRangeFull {
	if h == nil {
		return nil
	}

	return &Scintilla__TextRangeFull{h: h}
}

// UnsafeNewScintilla__TextRangeFull constructs the type using only unsafe pointers.
func UnsafeNewScintilla__TextRangeFull(h unsafe.Pointer) *Scintilla__TextRangeFull {
	return newScintilla__TextRangeFull((*C.Scintilla__TextRangeFull)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__TextRangeFull) Delete() {
	C.Scintilla__TextRangeFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__TextRangeFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__TextRangeFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__TextToFind struct {
	h          *C.Scintilla__TextToFind
	isSubclass bool
}

func (this *Scintilla__TextToFind) cPointer() *C.Scintilla__TextToFind {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__TextToFind) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__TextToFind constructs the type using only CGO pointers.
func newScintilla__TextToFind(h *C.Scintilla__TextToFind) *Scintilla__TextToFind {
	if h == nil {
		return nil
	}

	return &Scintilla__TextToFind{h: h}
}

// UnsafeNewScintilla__TextToFind constructs the type using only unsafe pointers.
func UnsafeNewScintilla__TextToFind(h unsafe.Pointer) *Scintilla__TextToFind {
	return newScintilla__TextToFind((*C.Scintilla__TextToFind)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__TextToFind) Delete() {
	C.Scintilla__TextToFind_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__TextToFind) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__TextToFind) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__TextToFindFull struct {
	h          *C.Scintilla__TextToFindFull
	isSubclass bool
}

func (this *Scintilla__TextToFindFull) cPointer() *C.Scintilla__TextToFindFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__TextToFindFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__TextToFindFull constructs the type using only CGO pointers.
func newScintilla__TextToFindFull(h *C.Scintilla__TextToFindFull) *Scintilla__TextToFindFull {
	if h == nil {
		return nil
	}

	return &Scintilla__TextToFindFull{h: h}
}

// UnsafeNewScintilla__TextToFindFull constructs the type using only unsafe pointers.
func UnsafeNewScintilla__TextToFindFull(h unsafe.Pointer) *Scintilla__TextToFindFull {
	return newScintilla__TextToFindFull((*C.Scintilla__TextToFindFull)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__TextToFindFull) Delete() {
	C.Scintilla__TextToFindFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__TextToFindFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__TextToFindFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Rectangle struct {
	h          *C.Scintilla__Rectangle
	isSubclass bool
}

func (this *Scintilla__Rectangle) cPointer() *C.Scintilla__Rectangle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Rectangle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Rectangle constructs the type using only CGO pointers.
func newScintilla__Rectangle(h *C.Scintilla__Rectangle) *Scintilla__Rectangle {
	if h == nil {
		return nil
	}

	return &Scintilla__Rectangle{h: h}
}

// UnsafeNewScintilla__Rectangle constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Rectangle(h unsafe.Pointer) *Scintilla__Rectangle {
	return newScintilla__Rectangle((*C.Scintilla__Rectangle)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__Rectangle) Delete() {
	C.Scintilla__Rectangle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Rectangle) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Rectangle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__RangeToFormat struct {
	h          *C.Scintilla__RangeToFormat
	isSubclass bool
}

func (this *Scintilla__RangeToFormat) cPointer() *C.Scintilla__RangeToFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__RangeToFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__RangeToFormat constructs the type using only CGO pointers.
func newScintilla__RangeToFormat(h *C.Scintilla__RangeToFormat) *Scintilla__RangeToFormat {
	if h == nil {
		return nil
	}

	return &Scintilla__RangeToFormat{h: h}
}

// UnsafeNewScintilla__RangeToFormat constructs the type using only unsafe pointers.
func UnsafeNewScintilla__RangeToFormat(h unsafe.Pointer) *Scintilla__RangeToFormat {
	return newScintilla__RangeToFormat((*C.Scintilla__RangeToFormat)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__RangeToFormat) Delete() {
	C.Scintilla__RangeToFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__RangeToFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__RangeToFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__RangeToFormatFull struct {
	h          *C.Scintilla__RangeToFormatFull
	isSubclass bool
}

func (this *Scintilla__RangeToFormatFull) cPointer() *C.Scintilla__RangeToFormatFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__RangeToFormatFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__RangeToFormatFull constructs the type using only CGO pointers.
func newScintilla__RangeToFormatFull(h *C.Scintilla__RangeToFormatFull) *Scintilla__RangeToFormatFull {
	if h == nil {
		return nil
	}

	return &Scintilla__RangeToFormatFull{h: h}
}

// UnsafeNewScintilla__RangeToFormatFull constructs the type using only unsafe pointers.
func UnsafeNewScintilla__RangeToFormatFull(h unsafe.Pointer) *Scintilla__RangeToFormatFull {
	return newScintilla__RangeToFormatFull((*C.Scintilla__RangeToFormatFull)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__RangeToFormatFull) Delete() {
	C.Scintilla__RangeToFormatFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__RangeToFormatFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__RangeToFormatFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__NotifyHeader struct {
	h          *C.Scintilla__NotifyHeader
	isSubclass bool
}

func (this *Scintilla__NotifyHeader) cPointer() *C.Scintilla__NotifyHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__NotifyHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__NotifyHeader constructs the type using only CGO pointers.
func newScintilla__NotifyHeader(h *C.Scintilla__NotifyHeader) *Scintilla__NotifyHeader {
	if h == nil {
		return nil
	}

	return &Scintilla__NotifyHeader{h: h}
}

// UnsafeNewScintilla__NotifyHeader constructs the type using only unsafe pointers.
func UnsafeNewScintilla__NotifyHeader(h unsafe.Pointer) *Scintilla__NotifyHeader {
	return newScintilla__NotifyHeader((*C.Scintilla__NotifyHeader)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__NotifyHeader) Delete() {
	C.Scintilla__NotifyHeader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__NotifyHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__NotifyHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__NotificationData struct {
	h          *C.Scintilla__NotificationData
	isSubclass bool
}

func (this *Scintilla__NotificationData) cPointer() *C.Scintilla__NotificationData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__NotificationData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__NotificationData constructs the type using only CGO pointers.
func newScintilla__NotificationData(h *C.Scintilla__NotificationData) *Scintilla__NotificationData {
	if h == nil {
		return nil
	}

	return &Scintilla__NotificationData{h: h}
}

// UnsafeNewScintilla__NotificationData constructs the type using only unsafe pointers.
func UnsafeNewScintilla__NotificationData(h unsafe.Pointer) *Scintilla__NotificationData {
	return newScintilla__NotificationData((*C.Scintilla__NotificationData)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__NotificationData) Delete() {
	C.Scintilla__NotificationData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__NotificationData) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__NotificationData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__FontParameters struct {
	h          *C.Scintilla__Internal__FontParameters
	isSubclass bool
}

func (this *Scintilla__Internal__FontParameters) cPointer() *C.Scintilla__Internal__FontParameters {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__FontParameters) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__FontParameters constructs the type using only CGO pointers.
func newScintilla__Internal__FontParameters(h *C.Scintilla__Internal__FontParameters) *Scintilla__Internal__FontParameters {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__FontParameters{h: h}
}

// UnsafeNewScintilla__Internal__FontParameters constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__FontParameters(h unsafe.Pointer) *Scintilla__Internal__FontParameters {
	return newScintilla__Internal__FontParameters((*C.Scintilla__Internal__FontParameters)(h))
}

// NewScintilla__Internal__FontParameters constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters(faceName_ string) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new(faceName__Cstring))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters2 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters2(faceName_ string, size_ float64) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new2(faceName__Cstring, (C.double)(size_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters3 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters3(faceName_ string, size_ float64, weight_ Scintilla__FontWeight) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new3(faceName__Cstring, (C.double)(size_), (C.int)(weight_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters4 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters4(faceName_ string, size_ float64, weight_ Scintilla__FontWeight, italic_ bool) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new4(faceName__Cstring, (C.double)(size_), (C.int)(weight_), (C.bool)(italic_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters5 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters5(faceName_ string, size_ float64, weight_ Scintilla__FontWeight, italic_ bool, extraFontFlag_ Scintilla__FontQuality) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new5(faceName__Cstring, (C.double)(size_), (C.int)(weight_), (C.bool)(italic_), (C.int)(extraFontFlag_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters6 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters6(faceName_ string, size_ float64, weight_ Scintilla__FontWeight, italic_ bool, extraFontFlag_ Scintilla__FontQuality, technology_ Scintilla__Technology) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new6(faceName__Cstring, (C.double)(size_), (C.int)(weight_), (C.bool)(italic_), (C.int)(extraFontFlag_), (C.int)(technology_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters7 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters7(faceName_ string, size_ float64, weight_ Scintilla__FontWeight, italic_ bool, extraFontFlag_ Scintilla__FontQuality, technology_ Scintilla__Technology, characterSet_ Scintilla__CharacterSet) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new7(faceName__Cstring, (C.double)(size_), (C.int)(weight_), (C.bool)(italic_), (C.int)(extraFontFlag_), (C.int)(technology_), (C.int)(characterSet_)))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters8 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters8(faceName_ string, size_ float64, weight_ Scintilla__FontWeight, italic_ bool, extraFontFlag_ Scintilla__FontQuality, technology_ Scintilla__Technology, characterSet_ Scintilla__CharacterSet, localeName_ string) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))
	localeName__Cstring := C.CString(localeName_)
	defer C.free(unsafe.Pointer(localeName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new8(faceName__Cstring, (C.double)(size_), (C.int)(weight_), (C.bool)(italic_), (C.int)(extraFontFlag_), (C.int)(technology_), (C.int)(characterSet_), localeName__Cstring))
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__FontParameters9 constructs a new Scintilla::Internal::FontParameters object.
func NewScintilla__Internal__FontParameters9(faceName_ string, size_ float64, weight_ Scintilla__FontWeight, italic_ bool, extraFontFlag_ Scintilla__FontQuality, technology_ Scintilla__Technology, characterSet_ Scintilla__CharacterSet, localeName_ string, stretch_ Scintilla__FontStretch) *Scintilla__Internal__FontParameters {
	faceName__Cstring := C.CString(faceName_)
	defer C.free(unsafe.Pointer(faceName__Cstring))
	localeName__Cstring := C.CString(localeName_)
	defer C.free(unsafe.Pointer(localeName__Cstring))

	ret := newScintilla__Internal__FontParameters(C.Scintilla__Internal__FontParameters_new9(faceName__Cstring, (C.double)(size_), (C.int)(weight_), (C.bool)(italic_), (C.int)(extraFontFlag_), (C.int)(technology_), (C.int)(characterSet_), localeName__Cstring, (C.int)(stretch_)))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__FontParameters) Delete() {
	C.Scintilla__Internal__FontParameters_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__FontParameters) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__FontParameters) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Font struct {
	h          *C.Scintilla__Internal__Font
	isSubclass bool
}

func (this *Scintilla__Internal__Font) cPointer() *C.Scintilla__Internal__Font {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Font) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Font constructs the type using only CGO pointers.
func newScintilla__Internal__Font(h *C.Scintilla__Internal__Font) *Scintilla__Internal__Font {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Font{h: h}
}

// UnsafeNewScintilla__Internal__Font constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Font(h unsafe.Pointer) *Scintilla__Internal__Font {
	return newScintilla__Internal__Font((*C.Scintilla__Internal__Font)(h))
}

// NewScintilla__Internal__Font constructs a new Scintilla::Internal::Font object.
func NewScintilla__Internal__Font() *Scintilla__Internal__Font {

	ret := newScintilla__Internal__Font(C.Scintilla__Internal__Font_new())
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Font) Delete() {
	C.Scintilla__Internal__Font_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Font) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Font) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__IScreenLine struct {
	h          *C.Scintilla__Internal__IScreenLine
	isSubclass bool
}

func (this *Scintilla__Internal__IScreenLine) cPointer() *C.Scintilla__Internal__IScreenLine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__IScreenLine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__IScreenLine constructs the type using only CGO pointers.
func newScintilla__Internal__IScreenLine(h *C.Scintilla__Internal__IScreenLine) *Scintilla__Internal__IScreenLine {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__IScreenLine{h: h}
}

// UnsafeNewScintilla__Internal__IScreenLine constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__IScreenLine(h unsafe.Pointer) *Scintilla__Internal__IScreenLine {
	return newScintilla__Internal__IScreenLine((*C.Scintilla__Internal__IScreenLine)(h))
}

func (this *Scintilla__Internal__IScreenLine) Length() uint64 {
	return (uint64)(C.Scintilla__Internal__IScreenLine_Length(this.h))
}

func (this *Scintilla__Internal__IScreenLine) RepresentationCount() uint64 {
	return (uint64)(C.Scintilla__Internal__IScreenLine_RepresentationCount(this.h))
}

func (this *Scintilla__Internal__IScreenLine) Width() float64 {
	return (float64)(C.Scintilla__Internal__IScreenLine_Width(this.h))
}

func (this *Scintilla__Internal__IScreenLine) Height() float64 {
	return (float64)(C.Scintilla__Internal__IScreenLine_Height(this.h))
}

func (this *Scintilla__Internal__IScreenLine) TabWidth() float64 {
	return (float64)(C.Scintilla__Internal__IScreenLine_TabWidth(this.h))
}

func (this *Scintilla__Internal__IScreenLine) TabWidthMinimumPixels() float64 {
	return (float64)(C.Scintilla__Internal__IScreenLine_TabWidthMinimumPixels(this.h))
}

func (this *Scintilla__Internal__IScreenLine) FontOfPosition(position uint64) *Scintilla__Internal__Font {
	return newScintilla__Internal__Font(C.Scintilla__Internal__IScreenLine_FontOfPosition(this.h, (C.size_t)(position)))
}

func (this *Scintilla__Internal__IScreenLine) RepresentationWidth(position uint64) float64 {
	return (float64)(C.Scintilla__Internal__IScreenLine_RepresentationWidth(this.h, (C.size_t)(position)))
}

func (this *Scintilla__Internal__IScreenLine) TabPositionAfter(xPosition float64) float64 {
	return (float64)(C.Scintilla__Internal__IScreenLine_TabPositionAfter(this.h, (C.double)(xPosition)))
}

func (this *Scintilla__Internal__IScreenLine) OperatorAssign(param1 *Scintilla__Internal__IScreenLine) {
	C.Scintilla__Internal__IScreenLine_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__IScreenLine) Delete() {
	C.Scintilla__Internal__IScreenLine_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__IScreenLine) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__IScreenLine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__IScreenLineLayout struct {
	h          *C.Scintilla__Internal__IScreenLineLayout
	isSubclass bool
}

func (this *Scintilla__Internal__IScreenLineLayout) cPointer() *C.Scintilla__Internal__IScreenLineLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__IScreenLineLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__IScreenLineLayout constructs the type using only CGO pointers.
func newScintilla__Internal__IScreenLineLayout(h *C.Scintilla__Internal__IScreenLineLayout) *Scintilla__Internal__IScreenLineLayout {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__IScreenLineLayout{h: h}
}

// UnsafeNewScintilla__Internal__IScreenLineLayout constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__IScreenLineLayout(h unsafe.Pointer) *Scintilla__Internal__IScreenLineLayout {
	return newScintilla__Internal__IScreenLineLayout((*C.Scintilla__Internal__IScreenLineLayout)(h))
}

func (this *Scintilla__Internal__IScreenLineLayout) PositionFromX(xDistance float64, charPosition bool) uint64 {
	return (uint64)(C.Scintilla__Internal__IScreenLineLayout_PositionFromX(this.h, (C.double)(xDistance), (C.bool)(charPosition)))
}

func (this *Scintilla__Internal__IScreenLineLayout) XFromPosition(caretPosition uint64) float64 {
	return (float64)(C.Scintilla__Internal__IScreenLineLayout_XFromPosition(this.h, (C.size_t)(caretPosition)))
}

func (this *Scintilla__Internal__IScreenLineLayout) OperatorAssign(param1 *Scintilla__Internal__IScreenLineLayout) {
	C.Scintilla__Internal__IScreenLineLayout_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__IScreenLineLayout) Delete() {
	C.Scintilla__Internal__IScreenLineLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__IScreenLineLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__IScreenLineLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__SurfaceMode struct {
	h          *C.Scintilla__Internal__SurfaceMode
	isSubclass bool
}

func (this *Scintilla__Internal__SurfaceMode) cPointer() *C.Scintilla__Internal__SurfaceMode {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__SurfaceMode) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__SurfaceMode constructs the type using only CGO pointers.
func newScintilla__Internal__SurfaceMode(h *C.Scintilla__Internal__SurfaceMode) *Scintilla__Internal__SurfaceMode {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__SurfaceMode{h: h}
}

// UnsafeNewScintilla__Internal__SurfaceMode constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__SurfaceMode(h unsafe.Pointer) *Scintilla__Internal__SurfaceMode {
	return newScintilla__Internal__SurfaceMode((*C.Scintilla__Internal__SurfaceMode)(h))
}

// NewScintilla__Internal__SurfaceMode constructs a new Scintilla::Internal::SurfaceMode object.
func NewScintilla__Internal__SurfaceMode() *Scintilla__Internal__SurfaceMode {

	ret := newScintilla__Internal__SurfaceMode(C.Scintilla__Internal__SurfaceMode_new())
	ret.isSubclass = true
	return ret
}

// NewScintilla__Internal__SurfaceMode2 constructs a new Scintilla::Internal::SurfaceMode object.
func NewScintilla__Internal__SurfaceMode2(codePage_ int, bidiR2L_ bool) *Scintilla__Internal__SurfaceMode {

	ret := newScintilla__Internal__SurfaceMode(C.Scintilla__Internal__SurfaceMode_new2((C.int)(codePage_), (C.bool)(bidiR2L_)))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__SurfaceMode) Delete() {
	C.Scintilla__Internal__SurfaceMode_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__SurfaceMode) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__SurfaceMode) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Surface struct {
	h          *C.Scintilla__Internal__Surface
	isSubclass bool
}

func (this *Scintilla__Internal__Surface) cPointer() *C.Scintilla__Internal__Surface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Surface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Surface constructs the type using only CGO pointers.
func newScintilla__Internal__Surface(h *C.Scintilla__Internal__Surface) *Scintilla__Internal__Surface {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Surface{h: h}
}

// UnsafeNewScintilla__Internal__Surface constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Surface(h unsafe.Pointer) *Scintilla__Internal__Surface {
	return newScintilla__Internal__Surface((*C.Scintilla__Internal__Surface)(h))
}

// NewScintilla__Internal__Surface constructs a new Scintilla::Internal::Surface object.
func NewScintilla__Internal__Surface() *Scintilla__Internal__Surface {

	ret := newScintilla__Internal__Surface(C.Scintilla__Internal__Surface_new())
	ret.isSubclass = true
	return ret
}

func (this *Scintilla__Internal__Surface) Init(wid unsafe.Pointer) {
	C.Scintilla__Internal__Surface_Init(this.h, wid)
}

func (this *Scintilla__Internal__Surface) Init2(sid unsafe.Pointer, wid unsafe.Pointer) {
	C.Scintilla__Internal__Surface_Init2(this.h, sid, wid)
}

func (this *Scintilla__Internal__Surface) SetMode(mode Scintilla__Internal__SurfaceMode) {
	C.Scintilla__Internal__Surface_SetMode(this.h, mode.cPointer())
}

func (this *Scintilla__Internal__Surface) Release() {
	C.Scintilla__Internal__Surface_Release(this.h)
}

func (this *Scintilla__Internal__Surface) SupportsFeature(feature Scintilla__Supports) int {
	return (int)(C.Scintilla__Internal__Surface_SupportsFeature(this.h, (C.int)(feature)))
}

func (this *Scintilla__Internal__Surface) Initialised() bool {
	return (bool)(C.Scintilla__Internal__Surface_Initialised(this.h))
}

func (this *Scintilla__Internal__Surface) LogPixelsY() int {
	return (int)(C.Scintilla__Internal__Surface_LogPixelsY(this.h))
}

func (this *Scintilla__Internal__Surface) PixelDivisions() int {
	return (int)(C.Scintilla__Internal__Surface_PixelDivisions(this.h))
}

func (this *Scintilla__Internal__Surface) DeviceHeightFont(points int) int {
	return (int)(C.Scintilla__Internal__Surface_DeviceHeightFont(this.h, (C.int)(points)))
}

func (this *Scintilla__Internal__Surface) LineDraw(start Scintilla__Internal__Point, end Scintilla__Internal__Point, stroke Scintilla__Internal__Stroke) {
	C.Scintilla__Internal__Surface_LineDraw(this.h, start.cPointer(), end.cPointer(), stroke.cPointer())
}

func (this *Scintilla__Internal__Surface) PolyLine(pts *Scintilla__Internal__Point, npts uint64, stroke Scintilla__Internal__Stroke) {
	C.Scintilla__Internal__Surface_PolyLine(this.h, pts.cPointer(), (C.size_t)(npts), stroke.cPointer())
}

func (this *Scintilla__Internal__Surface) Polygon(pts *Scintilla__Internal__Point, npts uint64, fillStroke Scintilla__Internal__FillStroke) {
	C.Scintilla__Internal__Surface_Polygon(this.h, pts.cPointer(), (C.size_t)(npts), fillStroke.cPointer())
}

func (this *Scintilla__Internal__Surface) RectangleDraw(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke) {
	C.Scintilla__Internal__Surface_RectangleDraw(this.h, rc.cPointer(), fillStroke.cPointer())
}

func (this *Scintilla__Internal__Surface) RectangleFrame(rc Scintilla__Internal__PRectangle, stroke Scintilla__Internal__Stroke) {
	C.Scintilla__Internal__Surface_RectangleFrame(this.h, rc.cPointer(), stroke.cPointer())
}

func (this *Scintilla__Internal__Surface) FillRectangle(rc Scintilla__Internal__PRectangle, fill Scintilla__Internal__Fill) {
	C.Scintilla__Internal__Surface_FillRectangle(this.h, rc.cPointer(), fill.cPointer())
}

func (this *Scintilla__Internal__Surface) FillRectangleAligned(rc Scintilla__Internal__PRectangle, fill Scintilla__Internal__Fill) {
	C.Scintilla__Internal__Surface_FillRectangleAligned(this.h, rc.cPointer(), fill.cPointer())
}

func (this *Scintilla__Internal__Surface) FillRectangle2(rc Scintilla__Internal__PRectangle, surfacePattern *Scintilla__Internal__Surface) {
	C.Scintilla__Internal__Surface_FillRectangle2(this.h, rc.cPointer(), surfacePattern.cPointer())
}

func (this *Scintilla__Internal__Surface) RoundedRectangle(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke) {
	C.Scintilla__Internal__Surface_RoundedRectangle(this.h, rc.cPointer(), fillStroke.cPointer())
}

func (this *Scintilla__Internal__Surface) AlphaRectangle(rc Scintilla__Internal__PRectangle, cornerSize float64, fillStroke Scintilla__Internal__FillStroke) {
	C.Scintilla__Internal__Surface_AlphaRectangle(this.h, rc.cPointer(), (C.double)(cornerSize), fillStroke.cPointer())
}

func (this *Scintilla__Internal__Surface) DrawRGBAImage(rc Scintilla__Internal__PRectangle, width int, height int, pixelsImage *byte) {
	C.Scintilla__Internal__Surface_DrawRGBAImage(this.h, rc.cPointer(), (C.int)(width), (C.int)(height), (*C.uchar)(unsafe.Pointer(pixelsImage)))
}

func (this *Scintilla__Internal__Surface) Ellipse(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke) {
	C.Scintilla__Internal__Surface_Ellipse(this.h, rc.cPointer(), fillStroke.cPointer())
}

func (this *Scintilla__Internal__Surface) Stadium(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke, ends Scintilla__Internal__Surface__Ends) {
	C.Scintilla__Internal__Surface_Stadium(this.h, rc.cPointer(), fillStroke.cPointer(), (C.int)(ends))
}

func (this *Scintilla__Internal__Surface) Copy(rc Scintilla__Internal__PRectangle, from Scintilla__Internal__Point, surfaceSource *Scintilla__Internal__Surface) {
	C.Scintilla__Internal__Surface_Copy(this.h, rc.cPointer(), from.cPointer(), surfaceSource.cPointer())
}

func (this *Scintilla__Internal__Surface) Ascent(font_ *Scintilla__Internal__Font) float64 {
	return (float64)(C.Scintilla__Internal__Surface_Ascent(this.h, font_.cPointer()))
}

func (this *Scintilla__Internal__Surface) Descent(font_ *Scintilla__Internal__Font) float64 {
	return (float64)(C.Scintilla__Internal__Surface_Descent(this.h, font_.cPointer()))
}

func (this *Scintilla__Internal__Surface) InternalLeading(font_ *Scintilla__Internal__Font) float64 {
	return (float64)(C.Scintilla__Internal__Surface_InternalLeading(this.h, font_.cPointer()))
}

func (this *Scintilla__Internal__Surface) Height(font_ *Scintilla__Internal__Font) float64 {
	return (float64)(C.Scintilla__Internal__Surface_Height(this.h, font_.cPointer()))
}

func (this *Scintilla__Internal__Surface) AverageCharWidth(font_ *Scintilla__Internal__Font) float64 {
	return (float64)(C.Scintilla__Internal__Surface_AverageCharWidth(this.h, font_.cPointer()))
}

func (this *Scintilla__Internal__Surface) SetClip(rc Scintilla__Internal__PRectangle) {
	C.Scintilla__Internal__Surface_SetClip(this.h, rc.cPointer())
}

func (this *Scintilla__Internal__Surface) PopClip() {
	C.Scintilla__Internal__Surface_PopClip(this.h)
}

func (this *Scintilla__Internal__Surface) FlushCachedState() {
	C.Scintilla__Internal__Surface_FlushCachedState(this.h)
}

func (this *Scintilla__Internal__Surface) FlushDrawing() {
	C.Scintilla__Internal__Surface_FlushDrawing(this.h)
}
func (this *Scintilla__Internal__Surface) OnInit(slot func(wid unsafe.Pointer)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Init(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Init
func miqt_exec_callback_Scintilla__Internal__Surface_Init(self *C.Scintilla__Internal__Surface, cb C.intptr_t, wid unsafe.Pointer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(wid unsafe.Pointer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (unsafe.Pointer)(wid)

	gofunc(slotval1)

}
func (this *Scintilla__Internal__Surface) OnInit2(slot func(sid unsafe.Pointer, wid unsafe.Pointer)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Init2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Init2
func miqt_exec_callback_Scintilla__Internal__Surface_Init2(self *C.Scintilla__Internal__Surface, cb C.intptr_t, sid unsafe.Pointer, wid unsafe.Pointer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sid unsafe.Pointer, wid unsafe.Pointer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (unsafe.Pointer)(sid)

	slotval2 := (unsafe.Pointer)(wid)

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnSetMode(slot func(mode Scintilla__Internal__SurfaceMode)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_SetMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_SetMode
func miqt_exec_callback_Scintilla__Internal__Surface_SetMode(self *C.Scintilla__Internal__Surface, cb C.intptr_t, mode *C.Scintilla__Internal__SurfaceMode) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode Scintilla__Internal__SurfaceMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	mode_goptr := newScintilla__Internal__SurfaceMode(mode)
	mode_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *mode_goptr

	gofunc(slotval1)

}
func (this *Scintilla__Internal__Surface) OnRelease(slot func()) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Release(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Release
func miqt_exec_callback_Scintilla__Internal__Surface_Release(self *C.Scintilla__Internal__Surface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *Scintilla__Internal__Surface) OnSupportsFeature(slot func(feature Scintilla__Supports) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_SupportsFeature(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_SupportsFeature
func miqt_exec_callback_Scintilla__Internal__Surface_SupportsFeature(self *C.Scintilla__Internal__Surface, cb C.intptr_t, feature C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(feature Scintilla__Supports) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Scintilla__Supports)(feature)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnInitialised(slot func() bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Initialised(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Initialised
func miqt_exec_callback_Scintilla__Internal__Surface_Initialised(self *C.Scintilla__Internal__Surface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnLogPixelsY(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_LogPixelsY(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_LogPixelsY
func miqt_exec_callback_Scintilla__Internal__Surface_LogPixelsY(self *C.Scintilla__Internal__Surface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnPixelDivisions(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_PixelDivisions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_PixelDivisions
func miqt_exec_callback_Scintilla__Internal__Surface_PixelDivisions(self *C.Scintilla__Internal__Surface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnDeviceHeightFont(slot func(points int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_DeviceHeightFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_DeviceHeightFont
func miqt_exec_callback_Scintilla__Internal__Surface_DeviceHeightFont(self *C.Scintilla__Internal__Surface, cb C.intptr_t, points C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(points int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(points)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnLineDraw(slot func(start Scintilla__Internal__Point, end Scintilla__Internal__Point, stroke Scintilla__Internal__Stroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_LineDraw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_LineDraw
func miqt_exec_callback_Scintilla__Internal__Surface_LineDraw(self *C.Scintilla__Internal__Surface, cb C.intptr_t, start *C.Scintilla__Internal__Point, end *C.Scintilla__Internal__Point, stroke *C.Scintilla__Internal__Stroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(start Scintilla__Internal__Point, end Scintilla__Internal__Point, stroke Scintilla__Internal__Stroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	start_goptr := newScintilla__Internal__Point(start)
	start_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *start_goptr

	end_goptr := newScintilla__Internal__Point(end)
	end_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *end_goptr

	stroke_goptr := newScintilla__Internal__Stroke(stroke)
	stroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *stroke_goptr

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__Surface) OnPolyLine(slot func(pts *Scintilla__Internal__Point, npts uint64, stroke Scintilla__Internal__Stroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_PolyLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_PolyLine
func miqt_exec_callback_Scintilla__Internal__Surface_PolyLine(self *C.Scintilla__Internal__Surface, cb C.intptr_t, pts *C.Scintilla__Internal__Point, npts C.size_t, stroke *C.Scintilla__Internal__Stroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pts *Scintilla__Internal__Point, npts uint64, stroke Scintilla__Internal__Stroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Point(pts)

	slotval2 := (uint64)(npts)

	stroke_goptr := newScintilla__Internal__Stroke(stroke)
	stroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *stroke_goptr

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__Surface) OnPolygon(slot func(pts *Scintilla__Internal__Point, npts uint64, fillStroke Scintilla__Internal__FillStroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Polygon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Polygon
func miqt_exec_callback_Scintilla__Internal__Surface_Polygon(self *C.Scintilla__Internal__Surface, cb C.intptr_t, pts *C.Scintilla__Internal__Point, npts C.size_t, fillStroke *C.Scintilla__Internal__FillStroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pts *Scintilla__Internal__Point, npts uint64, fillStroke Scintilla__Internal__FillStroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Point(pts)

	slotval2 := (uint64)(npts)

	fillStroke_goptr := newScintilla__Internal__FillStroke(fillStroke)
	fillStroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *fillStroke_goptr

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__Surface) OnRectangleDraw(slot func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_RectangleDraw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_RectangleDraw
func miqt_exec_callback_Scintilla__Internal__Surface_RectangleDraw(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, fillStroke *C.Scintilla__Internal__FillStroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	fillStroke_goptr := newScintilla__Internal__FillStroke(fillStroke)
	fillStroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fillStroke_goptr

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnRectangleFrame(slot func(rc Scintilla__Internal__PRectangle, stroke Scintilla__Internal__Stroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_RectangleFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_RectangleFrame
func miqt_exec_callback_Scintilla__Internal__Surface_RectangleFrame(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, stroke *C.Scintilla__Internal__Stroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, stroke Scintilla__Internal__Stroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	stroke_goptr := newScintilla__Internal__Stroke(stroke)
	stroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *stroke_goptr

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnFillRectangle(slot func(rc Scintilla__Internal__PRectangle, fill Scintilla__Internal__Fill)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_FillRectangle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle
func miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, fill *C.Scintilla__Internal__Fill) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, fill Scintilla__Internal__Fill))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	fill_goptr := newScintilla__Internal__Fill(fill)
	fill_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fill_goptr

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnFillRectangleAligned(slot func(rc Scintilla__Internal__PRectangle, fill Scintilla__Internal__Fill)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_FillRectangleAligned(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_FillRectangleAligned
func miqt_exec_callback_Scintilla__Internal__Surface_FillRectangleAligned(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, fill *C.Scintilla__Internal__Fill) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, fill Scintilla__Internal__Fill))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	fill_goptr := newScintilla__Internal__Fill(fill)
	fill_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fill_goptr

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnFillRectangle2(slot func(rc Scintilla__Internal__PRectangle, surfacePattern *Scintilla__Internal__Surface)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_FillRectangle2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle2
func miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle2(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, surfacePattern *C.Scintilla__Internal__Surface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, surfacePattern *Scintilla__Internal__Surface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	slotval2 := newScintilla__Internal__Surface(surfacePattern)

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnRoundedRectangle(slot func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_RoundedRectangle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_RoundedRectangle
func miqt_exec_callback_Scintilla__Internal__Surface_RoundedRectangle(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, fillStroke *C.Scintilla__Internal__FillStroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	fillStroke_goptr := newScintilla__Internal__FillStroke(fillStroke)
	fillStroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fillStroke_goptr

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnAlphaRectangle(slot func(rc Scintilla__Internal__PRectangle, cornerSize float64, fillStroke Scintilla__Internal__FillStroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_AlphaRectangle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_AlphaRectangle
func miqt_exec_callback_Scintilla__Internal__Surface_AlphaRectangle(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, cornerSize C.double, fillStroke *C.Scintilla__Internal__FillStroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, cornerSize float64, fillStroke Scintilla__Internal__FillStroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	slotval2 := (float64)(cornerSize)

	fillStroke_goptr := newScintilla__Internal__FillStroke(fillStroke)
	fillStroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *fillStroke_goptr

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__Surface) OnDrawRGBAImage(slot func(rc Scintilla__Internal__PRectangle, width int, height int, pixelsImage *byte)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_DrawRGBAImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_DrawRGBAImage
func miqt_exec_callback_Scintilla__Internal__Surface_DrawRGBAImage(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, width C.int, height C.int, pixelsImage *C.uchar) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, width int, height int, pixelsImage *byte))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	slotval2 := (int)(width)

	slotval3 := (int)(height)

	slotval4 := (*byte)(unsafe.Pointer(pixelsImage))

	gofunc(slotval1, slotval2, slotval3, slotval4)

}
func (this *Scintilla__Internal__Surface) OnEllipse(slot func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Ellipse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Ellipse
func miqt_exec_callback_Scintilla__Internal__Surface_Ellipse(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, fillStroke *C.Scintilla__Internal__FillStroke) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	fillStroke_goptr := newScintilla__Internal__FillStroke(fillStroke)
	fillStroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fillStroke_goptr

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__Surface) OnStadium(slot func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke, ends Scintilla__Internal__Surface__Ends)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Stadium(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Stadium
func miqt_exec_callback_Scintilla__Internal__Surface_Stadium(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, fillStroke *C.Scintilla__Internal__FillStroke, ends C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, fillStroke Scintilla__Internal__FillStroke, ends Scintilla__Internal__Surface__Ends))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	fillStroke_goptr := newScintilla__Internal__FillStroke(fillStroke)
	fillStroke_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fillStroke_goptr

	slotval3 := (Scintilla__Internal__Surface__Ends)(ends)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__Surface) OnCopy(slot func(rc Scintilla__Internal__PRectangle, from Scintilla__Internal__Point, surfaceSource *Scintilla__Internal__Surface)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Copy
func miqt_exec_callback_Scintilla__Internal__Surface_Copy(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle, from *C.Scintilla__Internal__Point, surfaceSource *C.Scintilla__Internal__Surface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle, from Scintilla__Internal__Point, surfaceSource *Scintilla__Internal__Surface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	from_goptr := newScintilla__Internal__Point(from)
	from_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *from_goptr

	slotval3 := newScintilla__Internal__Surface(surfaceSource)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__Surface) OnAscent(slot func(font_ *Scintilla__Internal__Font) float64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Ascent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Ascent
func miqt_exec_callback_Scintilla__Internal__Surface_Ascent(self *C.Scintilla__Internal__Surface, cb C.intptr_t, font_ *C.Scintilla__Internal__Font) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font_ *Scintilla__Internal__Font) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Font(font_)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnDescent(slot func(font_ *Scintilla__Internal__Font) float64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Descent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Descent
func miqt_exec_callback_Scintilla__Internal__Surface_Descent(self *C.Scintilla__Internal__Surface, cb C.intptr_t, font_ *C.Scintilla__Internal__Font) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font_ *Scintilla__Internal__Font) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Font(font_)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnInternalLeading(slot func(font_ *Scintilla__Internal__Font) float64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_InternalLeading(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_InternalLeading
func miqt_exec_callback_Scintilla__Internal__Surface_InternalLeading(self *C.Scintilla__Internal__Surface, cb C.intptr_t, font_ *C.Scintilla__Internal__Font) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font_ *Scintilla__Internal__Font) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Font(font_)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnHeight(slot func(font_ *Scintilla__Internal__Font) float64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_Height(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_Height
func miqt_exec_callback_Scintilla__Internal__Surface_Height(self *C.Scintilla__Internal__Surface, cb C.intptr_t, font_ *C.Scintilla__Internal__Font) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font_ *Scintilla__Internal__Font) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Font(font_)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnAverageCharWidth(slot func(font_ *Scintilla__Internal__Font) float64) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_AverageCharWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_AverageCharWidth
func miqt_exec_callback_Scintilla__Internal__Surface_AverageCharWidth(self *C.Scintilla__Internal__Surface, cb C.intptr_t, font_ *C.Scintilla__Internal__Font) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(font_ *Scintilla__Internal__Font) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Font(font_)

	virtualReturn := gofunc(slotval1)

	return (C.double)(virtualReturn)

}
func (this *Scintilla__Internal__Surface) OnSetClip(slot func(rc Scintilla__Internal__PRectangle)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_SetClip(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_SetClip
func miqt_exec_callback_Scintilla__Internal__Surface_SetClip(self *C.Scintilla__Internal__Surface, cb C.intptr_t, rc *C.Scintilla__Internal__PRectangle) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rc Scintilla__Internal__PRectangle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rc_goptr := newScintilla__Internal__PRectangle(rc)
	rc_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *rc_goptr

	gofunc(slotval1)

}
func (this *Scintilla__Internal__Surface) OnPopClip(slot func()) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_PopClip(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_PopClip
func miqt_exec_callback_Scintilla__Internal__Surface_PopClip(self *C.Scintilla__Internal__Surface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *Scintilla__Internal__Surface) OnFlushCachedState(slot func()) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_FlushCachedState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_FlushCachedState
func miqt_exec_callback_Scintilla__Internal__Surface_FlushCachedState(self *C.Scintilla__Internal__Surface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *Scintilla__Internal__Surface) OnFlushDrawing(slot func()) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__Surface_override_virtual_FlushDrawing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__Surface_FlushDrawing
func miqt_exec_callback_Scintilla__Internal__Surface_FlushDrawing(self *C.Scintilla__Internal__Surface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Surface) Delete() {
	C.Scintilla__Internal__Surface_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Surface) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Surface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Window struct {
	h          *C.Scintilla__Internal__Window
	isSubclass bool
}

func (this *Scintilla__Internal__Window) cPointer() *C.Scintilla__Internal__Window {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Window) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Window constructs the type using only CGO pointers.
func newScintilla__Internal__Window(h *C.Scintilla__Internal__Window) *Scintilla__Internal__Window {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Window{h: h}
}

// UnsafeNewScintilla__Internal__Window constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Window(h unsafe.Pointer) *Scintilla__Internal__Window {
	return newScintilla__Internal__Window((*C.Scintilla__Internal__Window)(h))
}

// NewScintilla__Internal__Window constructs a new Scintilla::Internal::Window object.
func NewScintilla__Internal__Window() *Scintilla__Internal__Window {

	ret := newScintilla__Internal__Window(C.Scintilla__Internal__Window_new())
	ret.isSubclass = true
	return ret
}

func (this *Scintilla__Internal__Window) OperatorAssign(wid_ unsafe.Pointer) {
	C.Scintilla__Internal__Window_OperatorAssign(this.h, wid_)
}

func (this *Scintilla__Internal__Window) GetID() unsafe.Pointer {
	return (unsafe.Pointer)(C.Scintilla__Internal__Window_GetID(this.h))
}

func (this *Scintilla__Internal__Window) Created() bool {
	return (bool)(C.Scintilla__Internal__Window_Created(this.h))
}

func (this *Scintilla__Internal__Window) Destroy() {
	C.Scintilla__Internal__Window_Destroy(this.h)
}

func (this *Scintilla__Internal__Window) GetPosition() *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__Window_GetPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__Window) SetPosition(rc Scintilla__Internal__PRectangle) {
	C.Scintilla__Internal__Window_SetPosition(this.h, rc.cPointer())
}

func (this *Scintilla__Internal__Window) SetPositionRelative(rc Scintilla__Internal__PRectangle, relativeTo *Scintilla__Internal__Window) {
	C.Scintilla__Internal__Window_SetPositionRelative(this.h, rc.cPointer(), relativeTo.cPointer())
}

func (this *Scintilla__Internal__Window) GetClientPosition() *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__Window_GetClientPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__Window) Show() {
	C.Scintilla__Internal__Window_Show(this.h)
}

func (this *Scintilla__Internal__Window) InvalidateAll() {
	C.Scintilla__Internal__Window_InvalidateAll(this.h)
}

func (this *Scintilla__Internal__Window) InvalidateRectangle(rc Scintilla__Internal__PRectangle) {
	C.Scintilla__Internal__Window_InvalidateRectangle(this.h, rc.cPointer())
}

func (this *Scintilla__Internal__Window) SetCursor(curs Scintilla__Internal__Window__Cursor) {
	C.Scintilla__Internal__Window_SetCursor(this.h, (C.int)(curs))
}

func (this *Scintilla__Internal__Window) GetMonitorRect(pt Scintilla__Internal__Point) *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__Window_GetMonitorRect(this.h, pt.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__Window) Show1(show bool) {
	C.Scintilla__Internal__Window_Show1(this.h, (C.bool)(show))
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Window) Delete() {
	C.Scintilla__Internal__Window_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Window) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Window) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__ListBoxEvent struct {
	h          *C.Scintilla__Internal__ListBoxEvent
	isSubclass bool
}

func (this *Scintilla__Internal__ListBoxEvent) cPointer() *C.Scintilla__Internal__ListBoxEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__ListBoxEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__ListBoxEvent constructs the type using only CGO pointers.
func newScintilla__Internal__ListBoxEvent(h *C.Scintilla__Internal__ListBoxEvent) *Scintilla__Internal__ListBoxEvent {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__ListBoxEvent{h: h}
}

// UnsafeNewScintilla__Internal__ListBoxEvent constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__ListBoxEvent(h unsafe.Pointer) *Scintilla__Internal__ListBoxEvent {
	return newScintilla__Internal__ListBoxEvent((*C.Scintilla__Internal__ListBoxEvent)(h))
}

// NewScintilla__Internal__ListBoxEvent constructs a new Scintilla::Internal::ListBoxEvent object.
func NewScintilla__Internal__ListBoxEvent(event_ Scintilla__Internal__ListBoxEvent__EventType) *Scintilla__Internal__ListBoxEvent {

	ret := newScintilla__Internal__ListBoxEvent(C.Scintilla__Internal__ListBoxEvent_new((C.int)(event_)))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__ListBoxEvent) Delete() {
	C.Scintilla__Internal__ListBoxEvent_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__ListBoxEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__ListBoxEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__IListBoxDelegate struct {
	h          *C.Scintilla__Internal__IListBoxDelegate
	isSubclass bool
}

func (this *Scintilla__Internal__IListBoxDelegate) cPointer() *C.Scintilla__Internal__IListBoxDelegate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__IListBoxDelegate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__IListBoxDelegate constructs the type using only CGO pointers.
func newScintilla__Internal__IListBoxDelegate(h *C.Scintilla__Internal__IListBoxDelegate) *Scintilla__Internal__IListBoxDelegate {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__IListBoxDelegate{h: h}
}

// UnsafeNewScintilla__Internal__IListBoxDelegate constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__IListBoxDelegate(h unsafe.Pointer) *Scintilla__Internal__IListBoxDelegate {
	return newScintilla__Internal__IListBoxDelegate((*C.Scintilla__Internal__IListBoxDelegate)(h))
}

func (this *Scintilla__Internal__IListBoxDelegate) ListNotify(plbe *Scintilla__Internal__ListBoxEvent) {
	C.Scintilla__Internal__IListBoxDelegate_ListNotify(this.h, plbe.cPointer())
}

func (this *Scintilla__Internal__IListBoxDelegate) OperatorAssign(param1 *Scintilla__Internal__IListBoxDelegate) {
	C.Scintilla__Internal__IListBoxDelegate_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__IListBoxDelegate) Delete() {
	C.Scintilla__Internal__IListBoxDelegate_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__IListBoxDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__IListBoxDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__ListOptions struct {
	h          *C.Scintilla__Internal__ListOptions
	isSubclass bool
}

func (this *Scintilla__Internal__ListOptions) cPointer() *C.Scintilla__Internal__ListOptions {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__ListOptions) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__ListOptions constructs the type using only CGO pointers.
func newScintilla__Internal__ListOptions(h *C.Scintilla__Internal__ListOptions) *Scintilla__Internal__ListOptions {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__ListOptions{h: h}
}

// UnsafeNewScintilla__Internal__ListOptions constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__ListOptions(h unsafe.Pointer) *Scintilla__Internal__ListOptions {
	return newScintilla__Internal__ListOptions((*C.Scintilla__Internal__ListOptions)(h))
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__ListOptions) Delete() {
	C.Scintilla__Internal__ListOptions_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__ListOptions) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__ListOptions) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__ListBox struct {
	h          *C.Scintilla__Internal__ListBox
	isSubclass bool
	*Scintilla__Internal__Window
}

func (this *Scintilla__Internal__ListBox) cPointer() *C.Scintilla__Internal__ListBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__ListBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__ListBox constructs the type using only CGO pointers.
func newScintilla__Internal__ListBox(h *C.Scintilla__Internal__ListBox) *Scintilla__Internal__ListBox {
	if h == nil {
		return nil
	}
	var outptr_Scintilla__Internal__Window *C.Scintilla__Internal__Window = nil
	C.Scintilla__Internal__ListBox_virtbase(h, &outptr_Scintilla__Internal__Window)

	return &Scintilla__Internal__ListBox{h: h,
		Scintilla__Internal__Window: newScintilla__Internal__Window(outptr_Scintilla__Internal__Window)}
}

// UnsafeNewScintilla__Internal__ListBox constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__ListBox(h unsafe.Pointer) *Scintilla__Internal__ListBox {
	return newScintilla__Internal__ListBox((*C.Scintilla__Internal__ListBox)(h))
}

// NewScintilla__Internal__ListBox constructs a new Scintilla::Internal::ListBox object.
func NewScintilla__Internal__ListBox() *Scintilla__Internal__ListBox {

	ret := newScintilla__Internal__ListBox(C.Scintilla__Internal__ListBox_new())
	ret.isSubclass = true
	return ret
}

func (this *Scintilla__Internal__ListBox) SetFont(font *Scintilla__Internal__Font) {
	C.Scintilla__Internal__ListBox_SetFont(this.h, font.cPointer())
}

func (this *Scintilla__Internal__ListBox) Create(parent *Scintilla__Internal__Window, ctrlID int, location Scintilla__Internal__Point, lineHeight_ int, unicodeMode_ bool, technology_ Scintilla__Technology) {
	C.Scintilla__Internal__ListBox_Create(this.h, parent.cPointer(), (C.int)(ctrlID), location.cPointer(), (C.int)(lineHeight_), (C.bool)(unicodeMode_), (C.int)(technology_))
}

func (this *Scintilla__Internal__ListBox) SetAverageCharWidth(width int) {
	C.Scintilla__Internal__ListBox_SetAverageCharWidth(this.h, (C.int)(width))
}

func (this *Scintilla__Internal__ListBox) SetVisibleRows(rows int) {
	C.Scintilla__Internal__ListBox_SetVisibleRows(this.h, (C.int)(rows))
}

func (this *Scintilla__Internal__ListBox) GetVisibleRows() int {
	return (int)(C.Scintilla__Internal__ListBox_GetVisibleRows(this.h))
}

func (this *Scintilla__Internal__ListBox) GetDesiredRect() *Scintilla__Internal__PRectangle {
	_goptr := newScintilla__Internal__PRectangle(C.Scintilla__Internal__ListBox_GetDesiredRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Scintilla__Internal__ListBox) CaretFromEdge() int {
	return (int)(C.Scintilla__Internal__ListBox_CaretFromEdge(this.h))
}

func (this *Scintilla__Internal__ListBox) Clear() {
	C.Scintilla__Internal__ListBox_Clear(this.h)
}

func (this *Scintilla__Internal__ListBox) Append(s string, typeVal int) {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	C.Scintilla__Internal__ListBox_Append(this.h, s_Cstring, (C.int)(typeVal))
}

func (this *Scintilla__Internal__ListBox) Length() int {
	return (int)(C.Scintilla__Internal__ListBox_Length(this.h))
}

func (this *Scintilla__Internal__ListBox) Select(n int) {
	C.Scintilla__Internal__ListBox_Select(this.h, (C.int)(n))
}

func (this *Scintilla__Internal__ListBox) GetSelection() int {
	return (int)(C.Scintilla__Internal__ListBox_GetSelection(this.h))
}

func (this *Scintilla__Internal__ListBox) Find(prefix string) int {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	return (int)(C.Scintilla__Internal__ListBox_Find(this.h, prefix_Cstring))
}

func (this *Scintilla__Internal__ListBox) RegisterImage(typeVal int, xpm_data string) {
	xpm_data_Cstring := C.CString(xpm_data)
	defer C.free(unsafe.Pointer(xpm_data_Cstring))
	C.Scintilla__Internal__ListBox_RegisterImage(this.h, (C.int)(typeVal), xpm_data_Cstring)
}

func (this *Scintilla__Internal__ListBox) RegisterRGBAImage(typeVal int, width int, height int, pixelsImage *byte) {
	C.Scintilla__Internal__ListBox_RegisterRGBAImage(this.h, (C.int)(typeVal), (C.int)(width), (C.int)(height), (*C.uchar)(unsafe.Pointer(pixelsImage)))
}

func (this *Scintilla__Internal__ListBox) ClearRegisteredImages() {
	C.Scintilla__Internal__ListBox_ClearRegisteredImages(this.h)
}

func (this *Scintilla__Internal__ListBox) SetDelegate(lbDelegate *Scintilla__Internal__IListBoxDelegate) {
	C.Scintilla__Internal__ListBox_SetDelegate(this.h, lbDelegate.cPointer())
}

func (this *Scintilla__Internal__ListBox) SetList(list string, separator int8, typesep int8) {
	list_Cstring := C.CString(list)
	defer C.free(unsafe.Pointer(list_Cstring))
	C.Scintilla__Internal__ListBox_SetList(this.h, list_Cstring, (C.char)(separator), (C.char)(typesep))
}

func (this *Scintilla__Internal__ListBox) SetOptions(options_ Scintilla__Internal__ListOptions) {
	C.Scintilla__Internal__ListBox_SetOptions(this.h, options_.cPointer())
}
func (this *Scintilla__Internal__ListBox) OnSetFont(slot func(font *Scintilla__Internal__Font)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_SetFont
func miqt_exec_callback_Scintilla__Internal__ListBox_SetFont(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, font *C.Scintilla__Internal__Font) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *Scintilla__Internal__Font))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Font(font)

	gofunc(slotval1)

}
func (this *Scintilla__Internal__ListBox) OnCreate(slot func(parent *Scintilla__Internal__Window, ctrlID int, location Scintilla__Internal__Point, lineHeight_ int, unicodeMode_ bool, technology_ Scintilla__Technology)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_Create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_Create
func miqt_exec_callback_Scintilla__Internal__ListBox_Create(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, parent *C.Scintilla__Internal__Window, ctrlID C.int, location *C.Scintilla__Internal__Point, lineHeight_ C.int, unicodeMode_ C.bool, technology_ C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *Scintilla__Internal__Window, ctrlID int, location Scintilla__Internal__Point, lineHeight_ int, unicodeMode_ bool, technology_ Scintilla__Technology))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__Window(parent)

	slotval2 := (int)(ctrlID)

	location_goptr := newScintilla__Internal__Point(location)
	location_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *location_goptr

	slotval4 := (int)(lineHeight_)

	slotval5 := (bool)(unicodeMode_)

	slotval6 := (Scintilla__Technology)(technology_)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5, slotval6)

}
func (this *Scintilla__Internal__ListBox) OnSetAverageCharWidth(slot func(width int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_SetAverageCharWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_SetAverageCharWidth
func miqt_exec_callback_Scintilla__Internal__ListBox_SetAverageCharWidth(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc(slotval1)

}
func (this *Scintilla__Internal__ListBox) OnSetVisibleRows(slot func(rows int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_SetVisibleRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_SetVisibleRows
func miqt_exec_callback_Scintilla__Internal__ListBox_SetVisibleRows(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, rows C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rows int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(rows)

	gofunc(slotval1)

}
func (this *Scintilla__Internal__ListBox) OnGetVisibleRows(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_GetVisibleRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_GetVisibleRows
func miqt_exec_callback_Scintilla__Internal__ListBox_GetVisibleRows(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__ListBox) OnGetDesiredRect(slot func() *Scintilla__Internal__PRectangle) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_GetDesiredRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_GetDesiredRect
func miqt_exec_callback_Scintilla__Internal__ListBox_GetDesiredRect(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) *C.Scintilla__Internal__PRectangle {
	gofunc, ok := cgo.Handle(cb).Value().(func() *Scintilla__Internal__PRectangle)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *Scintilla__Internal__ListBox) OnCaretFromEdge(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_CaretFromEdge(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_CaretFromEdge
func miqt_exec_callback_Scintilla__Internal__ListBox_CaretFromEdge(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__ListBox) OnClear(slot func()) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_Clear
func miqt_exec_callback_Scintilla__Internal__ListBox_Clear(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *Scintilla__Internal__ListBox) OnAppend(slot func(s string, typeVal int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_Append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_Append
func miqt_exec_callback_Scintilla__Internal__ListBox_Append(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, s *C.char, typeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(s string, typeVal int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	s_ret := s
	slotval1 := C.GoString(s_ret)

	slotval2 := (int)(typeVal)

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__ListBox) OnLength(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_Length(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_Length
func miqt_exec_callback_Scintilla__Internal__ListBox_Length(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__ListBox) OnSelect(slot func(n int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_Select(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_Select
func miqt_exec_callback_Scintilla__Internal__ListBox_Select(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, n C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(n int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(n)

	gofunc(slotval1)

}
func (this *Scintilla__Internal__ListBox) OnGetSelection(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_GetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_GetSelection
func miqt_exec_callback_Scintilla__Internal__ListBox_GetSelection(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__ListBox) OnFind(slot func(prefix string) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_Find(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_Find
func miqt_exec_callback_Scintilla__Internal__ListBox_Find(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, prefix *C.const_char) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(prefix string) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	prefix_ret := prefix
	slotval1 := C.GoString(prefix_ret)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *Scintilla__Internal__ListBox) OnRegisterImage(slot func(typeVal int, xpm_data string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_RegisterImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_RegisterImage
func miqt_exec_callback_Scintilla__Internal__ListBox_RegisterImage(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, typeVal C.int, xpm_data *C.const_char) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal int, xpm_data string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	xpm_data_ret := xpm_data
	slotval2 := C.GoString(xpm_data_ret)

	gofunc(slotval1, slotval2)

}
func (this *Scintilla__Internal__ListBox) OnRegisterRGBAImage(slot func(typeVal int, width int, height int, pixelsImage *byte)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_RegisterRGBAImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_RegisterRGBAImage
func miqt_exec_callback_Scintilla__Internal__ListBox_RegisterRGBAImage(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, typeVal C.int, width C.int, height C.int, pixelsImage *C.uchar) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal int, width int, height int, pixelsImage *byte))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	slotval2 := (int)(width)

	slotval3 := (int)(height)

	slotval4 := (*byte)(unsafe.Pointer(pixelsImage))

	gofunc(slotval1, slotval2, slotval3, slotval4)

}
func (this *Scintilla__Internal__ListBox) OnClearRegisteredImages(slot func()) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_ClearRegisteredImages(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_ClearRegisteredImages
func miqt_exec_callback_Scintilla__Internal__ListBox_ClearRegisteredImages(self *C.Scintilla__Internal__ListBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *Scintilla__Internal__ListBox) OnSetDelegate(slot func(lbDelegate *Scintilla__Internal__IListBoxDelegate)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_SetDelegate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_SetDelegate
func miqt_exec_callback_Scintilla__Internal__ListBox_SetDelegate(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, lbDelegate *C.Scintilla__Internal__IListBoxDelegate) {
	gofunc, ok := cgo.Handle(cb).Value().(func(lbDelegate *Scintilla__Internal__IListBoxDelegate))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__Internal__IListBoxDelegate(lbDelegate)

	gofunc(slotval1)

}
func (this *Scintilla__Internal__ListBox) OnSetList(slot func(list string, separator int8, typesep int8)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_SetList(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_SetList
func miqt_exec_callback_Scintilla__Internal__ListBox_SetList(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, list *C.const_char, separator C.char, typesep C.char) {
	gofunc, ok := cgo.Handle(cb).Value().(func(list string, separator int8, typesep int8))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	list_ret := list
	slotval1 := C.GoString(list_ret)

	slotval2 := (int8)(separator)

	slotval3 := (int8)(typesep)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *Scintilla__Internal__ListBox) OnSetOptions(slot func(options_ Scintilla__Internal__ListOptions)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.Scintilla__Internal__ListBox_override_virtual_SetOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Scintilla__Internal__ListBox_SetOptions
func miqt_exec_callback_Scintilla__Internal__ListBox_SetOptions(self *C.Scintilla__Internal__ListBox, cb C.intptr_t, options_ *C.Scintilla__Internal__ListOptions) {
	gofunc, ok := cgo.Handle(cb).Value().(func(options_ Scintilla__Internal__ListOptions))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	options__goptr := newScintilla__Internal__ListOptions(options_)
	options__goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *options__goptr

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__ListBox) Delete() {
	C.Scintilla__Internal__ListBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__ListBox) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__ListBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Scintilla__Internal__Menu struct {
	h          *C.Scintilla__Internal__Menu
	isSubclass bool
}

func (this *Scintilla__Internal__Menu) cPointer() *C.Scintilla__Internal__Menu {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Scintilla__Internal__Menu) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintilla__Internal__Menu constructs the type using only CGO pointers.
func newScintilla__Internal__Menu(h *C.Scintilla__Internal__Menu) *Scintilla__Internal__Menu {
	if h == nil {
		return nil
	}

	return &Scintilla__Internal__Menu{h: h}
}

// UnsafeNewScintilla__Internal__Menu constructs the type using only unsafe pointers.
func UnsafeNewScintilla__Internal__Menu(h unsafe.Pointer) *Scintilla__Internal__Menu {
	return newScintilla__Internal__Menu((*C.Scintilla__Internal__Menu)(h))
}

// NewScintilla__Internal__Menu constructs a new Scintilla::Internal::Menu object.
func NewScintilla__Internal__Menu() *Scintilla__Internal__Menu {

	ret := newScintilla__Internal__Menu(C.Scintilla__Internal__Menu_new())
	ret.isSubclass = true
	return ret
}

func (this *Scintilla__Internal__Menu) GetID() unsafe.Pointer {
	return (unsafe.Pointer)(C.Scintilla__Internal__Menu_GetID(this.h))
}

func (this *Scintilla__Internal__Menu) CreatePopUp() {
	C.Scintilla__Internal__Menu_CreatePopUp(this.h)
}

func (this *Scintilla__Internal__Menu) Destroy() {
	C.Scintilla__Internal__Menu_Destroy(this.h)
}

func (this *Scintilla__Internal__Menu) Show(pt Scintilla__Internal__Point, w *Scintilla__Internal__Window) {
	C.Scintilla__Internal__Menu_Show(this.h, pt.cPointer(), w.cPointer())
}

// Delete this object from C++ memory.
func (this *Scintilla__Internal__Menu) Delete() {
	C.Scintilla__Internal__Menu_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Scintilla__Internal__Menu) GoGC() {
	runtime.SetFinalizer(this, func(this *Scintilla__Internal__Menu) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_CharacterRange struct {
	h          *C.Sci_CharacterRange
	isSubclass bool
}

func (this *Sci_CharacterRange) cPointer() *C.Sci_CharacterRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_CharacterRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_CharacterRange constructs the type using only CGO pointers.
func newSci_CharacterRange(h *C.Sci_CharacterRange) *Sci_CharacterRange {
	if h == nil {
		return nil
	}

	return &Sci_CharacterRange{h: h}
}

// UnsafeNewSci_CharacterRange constructs the type using only unsafe pointers.
func UnsafeNewSci_CharacterRange(h unsafe.Pointer) *Sci_CharacterRange {
	return newSci_CharacterRange((*C.Sci_CharacterRange)(h))
}

// Delete this object from C++ memory.
func (this *Sci_CharacterRange) Delete() {
	C.Sci_CharacterRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_CharacterRange) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_CharacterRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_CharacterRangeFull struct {
	h          *C.Sci_CharacterRangeFull
	isSubclass bool
}

func (this *Sci_CharacterRangeFull) cPointer() *C.Sci_CharacterRangeFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_CharacterRangeFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_CharacterRangeFull constructs the type using only CGO pointers.
func newSci_CharacterRangeFull(h *C.Sci_CharacterRangeFull) *Sci_CharacterRangeFull {
	if h == nil {
		return nil
	}

	return &Sci_CharacterRangeFull{h: h}
}

// UnsafeNewSci_CharacterRangeFull constructs the type using only unsafe pointers.
func UnsafeNewSci_CharacterRangeFull(h unsafe.Pointer) *Sci_CharacterRangeFull {
	return newSci_CharacterRangeFull((*C.Sci_CharacterRangeFull)(h))
}

// Delete this object from C++ memory.
func (this *Sci_CharacterRangeFull) Delete() {
	C.Sci_CharacterRangeFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_CharacterRangeFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_CharacterRangeFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_TextRange struct {
	h          *C.Sci_TextRange
	isSubclass bool
}

func (this *Sci_TextRange) cPointer() *C.Sci_TextRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_TextRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_TextRange constructs the type using only CGO pointers.
func newSci_TextRange(h *C.Sci_TextRange) *Sci_TextRange {
	if h == nil {
		return nil
	}

	return &Sci_TextRange{h: h}
}

// UnsafeNewSci_TextRange constructs the type using only unsafe pointers.
func UnsafeNewSci_TextRange(h unsafe.Pointer) *Sci_TextRange {
	return newSci_TextRange((*C.Sci_TextRange)(h))
}

// Delete this object from C++ memory.
func (this *Sci_TextRange) Delete() {
	C.Sci_TextRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_TextRange) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_TextRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_TextRangeFull struct {
	h          *C.Sci_TextRangeFull
	isSubclass bool
}

func (this *Sci_TextRangeFull) cPointer() *C.Sci_TextRangeFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_TextRangeFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_TextRangeFull constructs the type using only CGO pointers.
func newSci_TextRangeFull(h *C.Sci_TextRangeFull) *Sci_TextRangeFull {
	if h == nil {
		return nil
	}

	return &Sci_TextRangeFull{h: h}
}

// UnsafeNewSci_TextRangeFull constructs the type using only unsafe pointers.
func UnsafeNewSci_TextRangeFull(h unsafe.Pointer) *Sci_TextRangeFull {
	return newSci_TextRangeFull((*C.Sci_TextRangeFull)(h))
}

// Delete this object from C++ memory.
func (this *Sci_TextRangeFull) Delete() {
	C.Sci_TextRangeFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_TextRangeFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_TextRangeFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_TextToFind struct {
	h          *C.Sci_TextToFind
	isSubclass bool
}

func (this *Sci_TextToFind) cPointer() *C.Sci_TextToFind {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_TextToFind) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_TextToFind constructs the type using only CGO pointers.
func newSci_TextToFind(h *C.Sci_TextToFind) *Sci_TextToFind {
	if h == nil {
		return nil
	}

	return &Sci_TextToFind{h: h}
}

// UnsafeNewSci_TextToFind constructs the type using only unsafe pointers.
func UnsafeNewSci_TextToFind(h unsafe.Pointer) *Sci_TextToFind {
	return newSci_TextToFind((*C.Sci_TextToFind)(h))
}

// Delete this object from C++ memory.
func (this *Sci_TextToFind) Delete() {
	C.Sci_TextToFind_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_TextToFind) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_TextToFind) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_TextToFindFull struct {
	h          *C.Sci_TextToFindFull
	isSubclass bool
}

func (this *Sci_TextToFindFull) cPointer() *C.Sci_TextToFindFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_TextToFindFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_TextToFindFull constructs the type using only CGO pointers.
func newSci_TextToFindFull(h *C.Sci_TextToFindFull) *Sci_TextToFindFull {
	if h == nil {
		return nil
	}

	return &Sci_TextToFindFull{h: h}
}

// UnsafeNewSci_TextToFindFull constructs the type using only unsafe pointers.
func UnsafeNewSci_TextToFindFull(h unsafe.Pointer) *Sci_TextToFindFull {
	return newSci_TextToFindFull((*C.Sci_TextToFindFull)(h))
}

// Delete this object from C++ memory.
func (this *Sci_TextToFindFull) Delete() {
	C.Sci_TextToFindFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_TextToFindFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_TextToFindFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_Rectangle struct {
	h          *C.Sci_Rectangle
	isSubclass bool
}

func (this *Sci_Rectangle) cPointer() *C.Sci_Rectangle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_Rectangle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_Rectangle constructs the type using only CGO pointers.
func newSci_Rectangle(h *C.Sci_Rectangle) *Sci_Rectangle {
	if h == nil {
		return nil
	}

	return &Sci_Rectangle{h: h}
}

// UnsafeNewSci_Rectangle constructs the type using only unsafe pointers.
func UnsafeNewSci_Rectangle(h unsafe.Pointer) *Sci_Rectangle {
	return newSci_Rectangle((*C.Sci_Rectangle)(h))
}

// Delete this object from C++ memory.
func (this *Sci_Rectangle) Delete() {
	C.Sci_Rectangle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_Rectangle) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_Rectangle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_RangeToFormat struct {
	h          *C.Sci_RangeToFormat
	isSubclass bool
}

func (this *Sci_RangeToFormat) cPointer() *C.Sci_RangeToFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_RangeToFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_RangeToFormat constructs the type using only CGO pointers.
func newSci_RangeToFormat(h *C.Sci_RangeToFormat) *Sci_RangeToFormat {
	if h == nil {
		return nil
	}

	return &Sci_RangeToFormat{h: h}
}

// UnsafeNewSci_RangeToFormat constructs the type using only unsafe pointers.
func UnsafeNewSci_RangeToFormat(h unsafe.Pointer) *Sci_RangeToFormat {
	return newSci_RangeToFormat((*C.Sci_RangeToFormat)(h))
}

// Delete this object from C++ memory.
func (this *Sci_RangeToFormat) Delete() {
	C.Sci_RangeToFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_RangeToFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_RangeToFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_RangeToFormatFull struct {
	h          *C.Sci_RangeToFormatFull
	isSubclass bool
}

func (this *Sci_RangeToFormatFull) cPointer() *C.Sci_RangeToFormatFull {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_RangeToFormatFull) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_RangeToFormatFull constructs the type using only CGO pointers.
func newSci_RangeToFormatFull(h *C.Sci_RangeToFormatFull) *Sci_RangeToFormatFull {
	if h == nil {
		return nil
	}

	return &Sci_RangeToFormatFull{h: h}
}

// UnsafeNewSci_RangeToFormatFull constructs the type using only unsafe pointers.
func UnsafeNewSci_RangeToFormatFull(h unsafe.Pointer) *Sci_RangeToFormatFull {
	return newSci_RangeToFormatFull((*C.Sci_RangeToFormatFull)(h))
}

// Delete this object from C++ memory.
func (this *Sci_RangeToFormatFull) Delete() {
	C.Sci_RangeToFormatFull_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_RangeToFormatFull) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_RangeToFormatFull) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Sci_NotifyHeader struct {
	h          *C.Sci_NotifyHeader
	isSubclass bool
}

func (this *Sci_NotifyHeader) cPointer() *C.Sci_NotifyHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Sci_NotifyHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSci_NotifyHeader constructs the type using only CGO pointers.
func newSci_NotifyHeader(h *C.Sci_NotifyHeader) *Sci_NotifyHeader {
	if h == nil {
		return nil
	}

	return &Sci_NotifyHeader{h: h}
}

// UnsafeNewSci_NotifyHeader constructs the type using only unsafe pointers.
func UnsafeNewSci_NotifyHeader(h unsafe.Pointer) *Sci_NotifyHeader {
	return newSci_NotifyHeader((*C.Sci_NotifyHeader)(h))
}

// Delete this object from C++ memory.
func (this *Sci_NotifyHeader) Delete() {
	C.Sci_NotifyHeader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Sci_NotifyHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *Sci_NotifyHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type SCNotification struct {
	h          *C.SCNotification
	isSubclass bool
}

func (this *SCNotification) cPointer() *C.SCNotification {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *SCNotification) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newSCNotification constructs the type using only CGO pointers.
func newSCNotification(h *C.SCNotification) *SCNotification {
	if h == nil {
		return nil
	}

	return &SCNotification{h: h}
}

// UnsafeNewSCNotification constructs the type using only unsafe pointers.
func UnsafeNewSCNotification(h unsafe.Pointer) *SCNotification {
	return newSCNotification((*C.SCNotification)(h))
}

// Delete this object from C++ memory.
func (this *SCNotification) Delete() {
	C.SCNotification_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *SCNotification) GoGC() {
	runtime.SetFinalizer(this, func(this *SCNotification) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type ScintillaEditBase struct {
	h          *C.ScintillaEditBase
	isSubclass bool
	*qt.QAbstractScrollArea
}

func (this *ScintillaEditBase) cPointer() *C.ScintillaEditBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *ScintillaEditBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintillaEditBase constructs the type using only CGO pointers.
func newScintillaEditBase(h *C.ScintillaEditBase) *ScintillaEditBase {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.ScintillaEditBase_virtbase(h, &outptr_QAbstractScrollArea)

	return &ScintillaEditBase{h: h,
		QAbstractScrollArea: qt.UnsafeNewQAbstractScrollArea(unsafe.Pointer(outptr_QAbstractScrollArea))}
}

// UnsafeNewScintillaEditBase constructs the type using only unsafe pointers.
func UnsafeNewScintillaEditBase(h unsafe.Pointer) *ScintillaEditBase {
	return newScintillaEditBase((*C.ScintillaEditBase)(h))
}

// NewScintillaEditBase constructs a new ScintillaEditBase object.
func NewScintillaEditBase(parent *qt.QWidget) *ScintillaEditBase {

	ret := newScintillaEditBase(C.ScintillaEditBase_new((*C.QWidget)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewScintillaEditBase2 constructs a new ScintillaEditBase object.
func NewScintillaEditBase2() *ScintillaEditBase {

	ret := newScintillaEditBase(C.ScintillaEditBase_new2())
	ret.isSubclass = true
	return ret
}

func (this *ScintillaEditBase) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.ScintillaEditBase_MetaObject(this.h)))
}

func (this *ScintillaEditBase) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.ScintillaEditBase_Metacast(this.h, param1_Cstring))
}

func ScintillaEditBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEditBase_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEditBase_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEditBase_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *ScintillaEditBase) Send(iMessage uint, wParam uintptr, lParam uintptr) uintptr {
	return (uintptr)(C.ScintillaEditBase_Send(this.h, (C.uint)(iMessage), (C.uintptr_t)(wParam), (C.intptr_t)(lParam)))
}

func (this *ScintillaEditBase) Sends(iMessage uint, wParam uintptr, s string) uintptr {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	return (uintptr)(C.ScintillaEditBase_Sends(this.h, (C.uint)(iMessage), (C.uintptr_t)(wParam), s_Cstring))
}

func (this *ScintillaEditBase) ScrollHorizontal(value int) {
	C.ScintillaEditBase_ScrollHorizontal(this.h, (C.int)(value))
}

func (this *ScintillaEditBase) ScrollVertical(value int) {
	C.ScintillaEditBase_ScrollVertical(this.h, (C.int)(value))
}

func (this *ScintillaEditBase) NotifyParent(scn Scintilla__NotificationData) {
	C.ScintillaEditBase_NotifyParent(this.h, scn.cPointer())
}

func (this *ScintillaEditBase) EventCommand(wParam uintptr, lParam uintptr) {
	C.ScintillaEditBase_EventCommand(this.h, (C.uintptr_t)(wParam), (C.intptr_t)(lParam))
}

func (this *ScintillaEditBase) HorizontalScrolled(value int) {
	C.ScintillaEditBase_HorizontalScrolled(this.h, (C.int)(value))
}
func (this *ScintillaEditBase) OnHorizontalScrolled(slot func(value int)) {
	C.ScintillaEditBase_connect_HorizontalScrolled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_HorizontalScrolled
func miqt_exec_callback_ScintillaEditBase_HorizontalScrolled(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) VerticalScrolled(value int) {
	C.ScintillaEditBase_VerticalScrolled(this.h, (C.int)(value))
}
func (this *ScintillaEditBase) OnVerticalScrolled(slot func(value int)) {
	C.ScintillaEditBase_connect_VerticalScrolled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_VerticalScrolled
func miqt_exec_callback_ScintillaEditBase_VerticalScrolled(cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) HorizontalRangeChanged(max int, page int) {
	C.ScintillaEditBase_HorizontalRangeChanged(this.h, (C.int)(max), (C.int)(page))
}
func (this *ScintillaEditBase) OnHorizontalRangeChanged(slot func(max int, page int)) {
	C.ScintillaEditBase_connect_HorizontalRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_HorizontalRangeChanged
func miqt_exec_callback_ScintillaEditBase_HorizontalRangeChanged(cb C.intptr_t, max C.int, page C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max int, page int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(max)

	slotval2 := (int)(page)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) VerticalRangeChanged(max int, page int) {
	C.ScintillaEditBase_VerticalRangeChanged(this.h, (C.int)(max), (C.int)(page))
}
func (this *ScintillaEditBase) OnVerticalRangeChanged(slot func(max int, page int)) {
	C.ScintillaEditBase_connect_VerticalRangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_VerticalRangeChanged
func miqt_exec_callback_ScintillaEditBase_VerticalRangeChanged(cb C.intptr_t, max C.int, page C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max int, page int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(max)

	slotval2 := (int)(page)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) NotifyChange() {
	C.ScintillaEditBase_NotifyChange(this.h)
}
func (this *ScintillaEditBase) OnNotifyChange(slot func()) {
	C.ScintillaEditBase_connect_NotifyChange(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_NotifyChange
func miqt_exec_callback_ScintillaEditBase_NotifyChange(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaEditBase) LinesAdded(linesAdded uintptr) {
	C.ScintillaEditBase_LinesAdded(this.h, (C.intptr_t)(linesAdded))
}
func (this *ScintillaEditBase) OnLinesAdded(slot func(linesAdded uintptr)) {
	C.ScintillaEditBase_connect_LinesAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_LinesAdded
func miqt_exec_callback_ScintillaEditBase_LinesAdded(cb C.intptr_t, linesAdded C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(linesAdded uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(linesAdded)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) AboutToCopy(data *qt.QMimeData) {
	C.ScintillaEditBase_AboutToCopy(this.h, (*C.QMimeData)(data.UnsafePointer()))
}
func (this *ScintillaEditBase) OnAboutToCopy(slot func(data *qt.QMimeData)) {
	C.ScintillaEditBase_connect_AboutToCopy(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_AboutToCopy
func miqt_exec_callback_ScintillaEditBase_AboutToCopy(cb C.intptr_t, data *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(data *qt.QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMimeData(unsafe.Pointer(data))

	gofunc(slotval1)
}

func (this *ScintillaEditBase) StyleNeeded(position uintptr) {
	C.ScintillaEditBase_StyleNeeded(this.h, (C.intptr_t)(position))
}
func (this *ScintillaEditBase) OnStyleNeeded(slot func(position uintptr)) {
	C.ScintillaEditBase_connect_StyleNeeded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_StyleNeeded
func miqt_exec_callback_ScintillaEditBase_StyleNeeded(cb C.intptr_t, position C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) CharAdded(ch int) {
	C.ScintillaEditBase_CharAdded(this.h, (C.int)(ch))
}
func (this *ScintillaEditBase) OnCharAdded(slot func(ch int)) {
	C.ScintillaEditBase_connect_CharAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_CharAdded
func miqt_exec_callback_ScintillaEditBase_CharAdded(cb C.intptr_t, ch C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ch int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(ch)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) SavePointChanged(dirty bool) {
	C.ScintillaEditBase_SavePointChanged(this.h, (C.bool)(dirty))
}
func (this *ScintillaEditBase) OnSavePointChanged(slot func(dirty bool)) {
	C.ScintillaEditBase_connect_SavePointChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_SavePointChanged
func miqt_exec_callback_ScintillaEditBase_SavePointChanged(cb C.intptr_t, dirty C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dirty bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(dirty)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) ModifyAttemptReadOnly() {
	C.ScintillaEditBase_ModifyAttemptReadOnly(this.h)
}
func (this *ScintillaEditBase) OnModifyAttemptReadOnly(slot func()) {
	C.ScintillaEditBase_connect_ModifyAttemptReadOnly(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ModifyAttemptReadOnly
func miqt_exec_callback_ScintillaEditBase_ModifyAttemptReadOnly(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaEditBase) Key(key int) {
	C.ScintillaEditBase_Key(this.h, (C.int)(key))
}
func (this *ScintillaEditBase) OnKey(slot func(key int)) {
	C.ScintillaEditBase_connect_Key(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Key
func miqt_exec_callback_ScintillaEditBase_Key(cb C.intptr_t, key C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(key)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) DoubleClick(position uintptr, line uintptr) {
	C.ScintillaEditBase_DoubleClick(this.h, (C.intptr_t)(position), (C.intptr_t)(line))
}
func (this *ScintillaEditBase) OnDoubleClick(slot func(position uintptr, line uintptr)) {
	C.ScintillaEditBase_connect_DoubleClick(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DoubleClick
func miqt_exec_callback_ScintillaEditBase_DoubleClick(cb C.intptr_t, position C.intptr_t, line C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr, line uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	slotval2 := (uintptr)(line)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) UpdateUi(updated Scintilla__Update) {
	C.ScintillaEditBase_UpdateUi(this.h, (C.int)(updated))
}
func (this *ScintillaEditBase) OnUpdateUi(slot func(updated Scintilla__Update)) {
	C.ScintillaEditBase_connect_UpdateUi(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_UpdateUi
func miqt_exec_callback_ScintillaEditBase_UpdateUi(cb C.intptr_t, updated C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(updated Scintilla__Update))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Scintilla__Update)(updated)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) Modified(typeVal Scintilla__ModificationFlags, position uintptr, length uintptr, linesAdded uintptr, text []byte, line uintptr, foldNow Scintilla__FoldLevel, foldPrev Scintilla__FoldLevel) {
	text_alias := C.struct_miqt_string{}
	text_alias.data = (*C.char)(unsafe.Pointer(&text[0]))
	text_alias.len = C.size_t(len(text))
	C.ScintillaEditBase_Modified(this.h, (C.int)(typeVal), (C.intptr_t)(position), (C.intptr_t)(length), (C.intptr_t)(linesAdded), text_alias, (C.intptr_t)(line), (C.int)(foldNow), (C.int)(foldPrev))
}
func (this *ScintillaEditBase) OnModified(slot func(typeVal Scintilla__ModificationFlags, position uintptr, length uintptr, linesAdded uintptr, text []byte, line uintptr, foldNow Scintilla__FoldLevel, foldPrev Scintilla__FoldLevel)) {
	C.ScintillaEditBase_connect_Modified(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Modified
func miqt_exec_callback_ScintillaEditBase_Modified(cb C.intptr_t, typeVal C.int, position C.intptr_t, length C.intptr_t, linesAdded C.intptr_t, text C.struct_miqt_string, line C.intptr_t, foldNow C.int, foldPrev C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal Scintilla__ModificationFlags, position uintptr, length uintptr, linesAdded uintptr, text []byte, line uintptr, foldNow Scintilla__FoldLevel, foldPrev Scintilla__FoldLevel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Scintilla__ModificationFlags)(typeVal)

	slotval2 := (uintptr)(position)

	slotval3 := (uintptr)(length)

	slotval4 := (uintptr)(linesAdded)

	var text_bytearray C.struct_miqt_string = text
	text_ret := C.GoBytes(unsafe.Pointer(text_bytearray.data), C.int(int64(text_bytearray.len)))
	C.free(unsafe.Pointer(text_bytearray.data))
	slotval5 := text_ret
	slotval6 := (uintptr)(line)

	slotval7 := (Scintilla__FoldLevel)(foldNow)

	slotval8 := (Scintilla__FoldLevel)(foldPrev)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7, slotval8)
}

func (this *ScintillaEditBase) MacroRecord(message Scintilla__Message, wParam uintptr, lParam uintptr) {
	C.ScintillaEditBase_MacroRecord(this.h, (C.int)(message), (C.uintptr_t)(wParam), (C.intptr_t)(lParam))
}
func (this *ScintillaEditBase) OnMacroRecord(slot func(message Scintilla__Message, wParam uintptr, lParam uintptr)) {
	C.ScintillaEditBase_connect_MacroRecord(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MacroRecord
func miqt_exec_callback_ScintillaEditBase_MacroRecord(cb C.intptr_t, message C.int, wParam C.uintptr_t, lParam C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message Scintilla__Message, wParam uintptr, lParam uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Scintilla__Message)(message)

	slotval2 := (uintptr)(wParam)

	slotval3 := (uintptr)(lParam)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *ScintillaEditBase) MarginClicked(position uintptr, modifiers Scintilla__KeyMod, margin int) {
	C.ScintillaEditBase_MarginClicked(this.h, (C.intptr_t)(position), (C.int)(modifiers), (C.int)(margin))
}
func (this *ScintillaEditBase) OnMarginClicked(slot func(position uintptr, modifiers Scintilla__KeyMod, margin int)) {
	C.ScintillaEditBase_connect_MarginClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MarginClicked
func miqt_exec_callback_ScintillaEditBase_MarginClicked(cb C.intptr_t, position C.intptr_t, modifiers C.int, margin C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr, modifiers Scintilla__KeyMod, margin int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	slotval2 := (Scintilla__KeyMod)(modifiers)

	slotval3 := (int)(margin)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *ScintillaEditBase) TextAreaClicked(line uintptr, modifiers int) {
	C.ScintillaEditBase_TextAreaClicked(this.h, (C.intptr_t)(line), (C.int)(modifiers))
}
func (this *ScintillaEditBase) OnTextAreaClicked(slot func(line uintptr, modifiers int)) {
	C.ScintillaEditBase_connect_TextAreaClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_TextAreaClicked
func miqt_exec_callback_ScintillaEditBase_TextAreaClicked(cb C.intptr_t, line C.intptr_t, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(line uintptr, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(line)

	slotval2 := (int)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) NeedShown(position uintptr, length uintptr) {
	C.ScintillaEditBase_NeedShown(this.h, (C.intptr_t)(position), (C.intptr_t)(length))
}
func (this *ScintillaEditBase) OnNeedShown(slot func(position uintptr, length uintptr)) {
	C.ScintillaEditBase_connect_NeedShown(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_NeedShown
func miqt_exec_callback_ScintillaEditBase_NeedShown(cb C.intptr_t, position C.intptr_t, length C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr, length uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	slotval2 := (uintptr)(length)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) Painted() {
	C.ScintillaEditBase_Painted(this.h)
}
func (this *ScintillaEditBase) OnPainted(slot func()) {
	C.ScintillaEditBase_connect_Painted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Painted
func miqt_exec_callback_ScintillaEditBase_Painted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaEditBase) UserListSelection() {
	C.ScintillaEditBase_UserListSelection(this.h)
}
func (this *ScintillaEditBase) OnUserListSelection(slot func()) {
	C.ScintillaEditBase_connect_UserListSelection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_UserListSelection
func miqt_exec_callback_ScintillaEditBase_UserListSelection(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaEditBase) UriDropped(uri string) {
	uri_ms := C.struct_miqt_string{}
	uri_ms.data = C.CString(uri)
	uri_ms.len = C.size_t(len(uri))
	defer C.free(unsafe.Pointer(uri_ms.data))
	C.ScintillaEditBase_UriDropped(this.h, uri_ms)
}
func (this *ScintillaEditBase) OnUriDropped(slot func(uri string)) {
	C.ScintillaEditBase_connect_UriDropped(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_UriDropped
func miqt_exec_callback_ScintillaEditBase_UriDropped(cb C.intptr_t, uri C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(uri string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var uri_ms C.struct_miqt_string = uri
	uri_ret := C.GoStringN(uri_ms.data, C.int(int64(uri_ms.len)))
	C.free(unsafe.Pointer(uri_ms.data))
	slotval1 := uri_ret

	gofunc(slotval1)
}

func (this *ScintillaEditBase) DwellStart(x int, y int) {
	C.ScintillaEditBase_DwellStart(this.h, (C.int)(x), (C.int)(y))
}
func (this *ScintillaEditBase) OnDwellStart(slot func(x int, y int)) {
	C.ScintillaEditBase_connect_DwellStart(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DwellStart
func miqt_exec_callback_ScintillaEditBase_DwellStart(cb C.intptr_t, x C.int, y C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(x int, y int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(x)

	slotval2 := (int)(y)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) DwellEnd(x int, y int) {
	C.ScintillaEditBase_DwellEnd(this.h, (C.int)(x), (C.int)(y))
}
func (this *ScintillaEditBase) OnDwellEnd(slot func(x int, y int)) {
	C.ScintillaEditBase_connect_DwellEnd(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DwellEnd
func miqt_exec_callback_ScintillaEditBase_DwellEnd(cb C.intptr_t, x C.int, y C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(x int, y int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(x)

	slotval2 := (int)(y)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) Zoom(zoom int) {
	C.ScintillaEditBase_Zoom(this.h, (C.int)(zoom))
}
func (this *ScintillaEditBase) OnZoom(slot func(zoom int)) {
	C.ScintillaEditBase_connect_Zoom(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Zoom
func miqt_exec_callback_ScintillaEditBase_Zoom(cb C.intptr_t, zoom C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(zoom int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(zoom)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) HotSpotClick(position uintptr, modifiers Scintilla__KeyMod) {
	C.ScintillaEditBase_HotSpotClick(this.h, (C.intptr_t)(position), (C.int)(modifiers))
}
func (this *ScintillaEditBase) OnHotSpotClick(slot func(position uintptr, modifiers Scintilla__KeyMod)) {
	C.ScintillaEditBase_connect_HotSpotClick(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_HotSpotClick
func miqt_exec_callback_ScintillaEditBase_HotSpotClick(cb C.intptr_t, position C.intptr_t, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr, modifiers Scintilla__KeyMod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	slotval2 := (Scintilla__KeyMod)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) HotSpotDoubleClick(position uintptr, modifiers Scintilla__KeyMod) {
	C.ScintillaEditBase_HotSpotDoubleClick(this.h, (C.intptr_t)(position), (C.int)(modifiers))
}
func (this *ScintillaEditBase) OnHotSpotDoubleClick(slot func(position uintptr, modifiers Scintilla__KeyMod)) {
	C.ScintillaEditBase_connect_HotSpotDoubleClick(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_HotSpotDoubleClick
func miqt_exec_callback_ScintillaEditBase_HotSpotDoubleClick(cb C.intptr_t, position C.intptr_t, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr, modifiers Scintilla__KeyMod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	slotval2 := (Scintilla__KeyMod)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) CallTipClick() {
	C.ScintillaEditBase_CallTipClick(this.h)
}
func (this *ScintillaEditBase) OnCallTipClick(slot func()) {
	C.ScintillaEditBase_connect_CallTipClick(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_CallTipClick
func miqt_exec_callback_ScintillaEditBase_CallTipClick(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaEditBase) AutoCompleteSelection(position uintptr, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.ScintillaEditBase_AutoCompleteSelection(this.h, (C.intptr_t)(position), text_ms)
}
func (this *ScintillaEditBase) OnAutoCompleteSelection(slot func(position uintptr, text string)) {
	C.ScintillaEditBase_connect_AutoCompleteSelection(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_AutoCompleteSelection
func miqt_exec_callback_ScintillaEditBase_AutoCompleteSelection(cb C.intptr_t, position C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position uintptr, text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(position)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval2 := text_ret

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) AutoCompleteCancelled() {
	C.ScintillaEditBase_AutoCompleteCancelled(this.h)
}
func (this *ScintillaEditBase) OnAutoCompleteCancelled(slot func()) {
	C.ScintillaEditBase_connect_AutoCompleteCancelled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_AutoCompleteCancelled
func miqt_exec_callback_ScintillaEditBase_AutoCompleteCancelled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaEditBase) FocusChanged(focused bool) {
	C.ScintillaEditBase_FocusChanged(this.h, (C.bool)(focused))
}
func (this *ScintillaEditBase) OnFocusChanged(slot func(focused bool)) {
	C.ScintillaEditBase_connect_FocusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_FocusChanged
func miqt_exec_callback_ScintillaEditBase_FocusChanged(cb C.intptr_t, focused C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(focused bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(focused)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) Notify(pscn *Scintilla__NotificationData) {
	C.ScintillaEditBase_Notify(this.h, pscn.cPointer())
}
func (this *ScintillaEditBase) OnNotify(slot func(pscn *Scintilla__NotificationData)) {
	C.ScintillaEditBase_connect_Notify(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Notify
func miqt_exec_callback_ScintillaEditBase_Notify(cb C.intptr_t, pscn *C.Scintilla__NotificationData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pscn *Scintilla__NotificationData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newScintilla__NotificationData(pscn)

	gofunc(slotval1)
}

func (this *ScintillaEditBase) Command(wParam uintptr, lParam uintptr) {
	C.ScintillaEditBase_Command(this.h, (C.uintptr_t)(wParam), (C.intptr_t)(lParam))
}
func (this *ScintillaEditBase) OnCommand(slot func(wParam uintptr, lParam uintptr)) {
	C.ScintillaEditBase_connect_Command(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Command
func miqt_exec_callback_ScintillaEditBase_Command(cb C.intptr_t, wParam C.uintptr_t, lParam C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(wParam uintptr, lParam uintptr))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uintptr)(wParam)

	slotval2 := (uintptr)(lParam)

	gofunc(slotval1, slotval2)
}

func (this *ScintillaEditBase) ButtonPressed(event *qt.QMouseEvent) {
	C.ScintillaEditBase_ButtonPressed(this.h, (*C.QMouseEvent)(event.UnsafePointer()))
}
func (this *ScintillaEditBase) OnButtonPressed(slot func(event *qt.QMouseEvent)) {
	C.ScintillaEditBase_connect_ButtonPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ButtonPressed
func miqt_exec_callback_ScintillaEditBase_ButtonPressed(cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc(slotval1)
}

func (this *ScintillaEditBase) ButtonReleased(event *qt.QMouseEvent) {
	C.ScintillaEditBase_ButtonReleased(this.h, (*C.QMouseEvent)(event.UnsafePointer()))
}
func (this *ScintillaEditBase) OnButtonReleased(slot func(event *qt.QMouseEvent)) {
	C.ScintillaEditBase_connect_ButtonReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ButtonReleased
func miqt_exec_callback_ScintillaEditBase_ButtonReleased(cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc(slotval1)
}

func (this *ScintillaEditBase) KeyPressed(event *qt.QKeyEvent) {
	C.ScintillaEditBase_KeyPressed(this.h, (*C.QKeyEvent)(event.UnsafePointer()))
}
func (this *ScintillaEditBase) OnKeyPressed(slot func(event *qt.QKeyEvent)) {
	C.ScintillaEditBase_connect_KeyPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_KeyPressed
func miqt_exec_callback_ScintillaEditBase_KeyPressed(cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc(slotval1)
}

func (this *ScintillaEditBase) Resized() {
	C.ScintillaEditBase_Resized(this.h)
}
func (this *ScintillaEditBase) OnResized(slot func()) {
	C.ScintillaEditBase_connect_Resized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Resized
func miqt_exec_callback_ScintillaEditBase_Resized(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func ScintillaEditBase_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEditBase_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEditBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEditBase_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEditBase_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEditBase_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEditBase_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEditBase_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *ScintillaEditBase) callVirtualBase_Send(iMessage uint, wParam uintptr, lParam uintptr) uintptr {

	return (uintptr)(C.ScintillaEditBase_virtualbase_Send(unsafe.Pointer(this.h), (C.uint)(iMessage), (C.uintptr_t)(wParam), (C.intptr_t)(lParam)))

}
func (this *ScintillaEditBase) OnSend(slot func(super func(iMessage uint, wParam uintptr, lParam uintptr) uintptr, iMessage uint, wParam uintptr, lParam uintptr) uintptr) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_Send(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Send
func miqt_exec_callback_ScintillaEditBase_Send(self *C.ScintillaEditBase, cb C.intptr_t, iMessage C.uint, wParam C.uintptr_t, lParam C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(iMessage uint, wParam uintptr, lParam uintptr) uintptr, iMessage uint, wParam uintptr, lParam uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint)(iMessage)

	slotval2 := (uintptr)(wParam)

	slotval3 := (uintptr)(lParam)

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_Send, slotval1, slotval2, slotval3)

	return (C.intptr_t)(virtualReturn)

}

func (this *ScintillaEditBase) callVirtualBase_Sends(iMessage uint, wParam uintptr, s string) uintptr {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))

	return (uintptr)(C.ScintillaEditBase_virtualbase_Sends(unsafe.Pointer(this.h), (C.uint)(iMessage), (C.uintptr_t)(wParam), s_Cstring))

}
func (this *ScintillaEditBase) OnSends(slot func(super func(iMessage uint, wParam uintptr, s string) uintptr, iMessage uint, wParam uintptr, s string) uintptr) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_Sends(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Sends
func miqt_exec_callback_ScintillaEditBase_Sends(self *C.ScintillaEditBase, cb C.intptr_t, iMessage C.uint, wParam C.uintptr_t, s *C.const_char) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(iMessage uint, wParam uintptr, s string) uintptr, iMessage uint, wParam uintptr, s string) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint)(iMessage)

	slotval2 := (uintptr)(wParam)

	s_ret := s
	slotval3 := C.GoString(s_ret)

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_Sends, slotval1, slotval2, slotval3)

	return (C.intptr_t)(virtualReturn)

}

func (this *ScintillaEditBase) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.ScintillaEditBase_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *ScintillaEditBase) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_Event
func miqt_exec_callback_ScintillaEditBase_Event(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *ScintillaEditBase) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.ScintillaEditBase_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_PaintEvent
func miqt_exec_callback_ScintillaEditBase_PaintEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.ScintillaEditBase_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_WheelEvent
func miqt_exec_callback_ScintillaEditBase_WheelEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.ScintillaEditBase_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_FocusInEvent
func miqt_exec_callback_ScintillaEditBase_FocusInEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.ScintillaEditBase_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_FocusOutEvent
func miqt_exec_callback_ScintillaEditBase_FocusOutEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.ScintillaEditBase_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ResizeEvent
func miqt_exec_callback_ScintillaEditBase_ResizeEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.ScintillaEditBase_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_KeyPressEvent
func miqt_exec_callback_ScintillaEditBase_KeyPressEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.ScintillaEditBase_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MousePressEvent
func miqt_exec_callback_ScintillaEditBase_MousePressEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.ScintillaEditBase_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MouseReleaseEvent
func miqt_exec_callback_ScintillaEditBase_MouseReleaseEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.ScintillaEditBase_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MouseDoubleClickEvent
func miqt_exec_callback_ScintillaEditBase_MouseDoubleClickEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.ScintillaEditBase_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MouseMoveEvent
func miqt_exec_callback_ScintillaEditBase_MouseMoveEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.ScintillaEditBase_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ContextMenuEvent
func miqt_exec_callback_ScintillaEditBase_ContextMenuEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.ScintillaEditBase_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DragEnterEvent
func miqt_exec_callback_ScintillaEditBase_DragEnterEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.ScintillaEditBase_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DragLeaveEvent
func miqt_exec_callback_ScintillaEditBase_DragLeaveEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.ScintillaEditBase_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DragMoveEvent
func miqt_exec_callback_ScintillaEditBase_DragMoveEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.ScintillaEditBase_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_DropEvent
func miqt_exec_callback_ScintillaEditBase_DropEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_InputMethodEvent(event *qt.QInputMethodEvent) {

	C.ScintillaEditBase_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *ScintillaEditBase) OnInputMethodEvent(slot func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_InputMethodEvent
func miqt_exec_callback_ScintillaEditBase_InputMethodEvent(self *C.ScintillaEditBase, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.ScintillaEditBase_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *ScintillaEditBase) OnInputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_InputMethodQuery
func miqt_exec_callback_ScintillaEditBase_InputMethodQuery(self *C.ScintillaEditBase, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(query)

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *ScintillaEditBase) callVirtualBase_ScrollContentsBy(param1 int, param2 int) {

	C.ScintillaEditBase_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(param1), (C.int)(param2))

}
func (this *ScintillaEditBase) OnScrollContentsBy(slot func(super func(param1 int, param2 int), param1 int, param2 int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ScrollContentsBy
func miqt_exec_callback_ScintillaEditBase_ScrollContentsBy(self *C.ScintillaEditBase, cb C.intptr_t, param1 C.int, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int, param2 int), param1 int, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (int)(param2)

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *ScintillaEditBase) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.ScintillaEditBase_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *ScintillaEditBase) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_MinimumSizeHint
func miqt_exec_callback_ScintillaEditBase_MinimumSizeHint(self *C.ScintillaEditBase, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *ScintillaEditBase) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.ScintillaEditBase_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *ScintillaEditBase) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_SizeHint
func miqt_exec_callback_ScintillaEditBase_SizeHint(self *C.ScintillaEditBase, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *ScintillaEditBase) callVirtualBase_SetupViewport(viewport *qt.QWidget) {

	C.ScintillaEditBase_virtualbase_SetupViewport(unsafe.Pointer(this.h), (*C.QWidget)(viewport.UnsafePointer()))

}
func (this *ScintillaEditBase) OnSetupViewport(slot func(super func(viewport *qt.QWidget), viewport *qt.QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_SetupViewport
func miqt_exec_callback_ScintillaEditBase_SetupViewport(self *C.ScintillaEditBase, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *qt.QWidget), viewport *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(viewport))

	gofunc((&ScintillaEditBase{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *ScintillaEditBase) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.ScintillaEditBase_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *ScintillaEditBase) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_EventFilter
func miqt_exec_callback_ScintillaEditBase_EventFilter(self *C.ScintillaEditBase, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *ScintillaEditBase) callVirtualBase_ViewportEvent(param1 *qt.QEvent) bool {

	return (bool)(C.ScintillaEditBase_virtualbase_ViewportEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *ScintillaEditBase) OnViewportEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ViewportEvent
func miqt_exec_callback_ScintillaEditBase_ViewportEvent(self *C.ScintillaEditBase, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *ScintillaEditBase) callVirtualBase_ViewportSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.ScintillaEditBase_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *ScintillaEditBase) OnViewportSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEditBase_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEditBase_ViewportSizeHint
func miqt_exec_callback_ScintillaEditBase_ViewportSizeHint(self *C.ScintillaEditBase, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&ScintillaEditBase{h: self}).callVirtualBase_ViewportSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *ScintillaEditBase) Delete() {
	C.ScintillaEditBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *ScintillaEditBase) GoGC() {
	runtime.SetFinalizer(this, func(this *ScintillaEditBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type ScintillaDocument struct {
	h          *C.ScintillaDocument
	isSubclass bool
	*qt.QObject
}

func (this *ScintillaDocument) cPointer() *C.ScintillaDocument {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *ScintillaDocument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintillaDocument constructs the type using only CGO pointers.
func newScintillaDocument(h *C.ScintillaDocument) *ScintillaDocument {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.ScintillaDocument_virtbase(h, &outptr_QObject)

	return &ScintillaDocument{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewScintillaDocument constructs the type using only unsafe pointers.
func UnsafeNewScintillaDocument(h unsafe.Pointer) *ScintillaDocument {
	return newScintillaDocument((*C.ScintillaDocument)(h))
}

// NewScintillaDocument constructs a new ScintillaDocument object.
func NewScintillaDocument() *ScintillaDocument {

	ret := newScintillaDocument(C.ScintillaDocument_new())
	ret.isSubclass = true
	return ret
}

// NewScintillaDocument2 constructs a new ScintillaDocument object.
func NewScintillaDocument2(parent *qt.QObject) *ScintillaDocument {

	ret := newScintillaDocument(C.ScintillaDocument_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewScintillaDocument3 constructs a new ScintillaDocument object.
func NewScintillaDocument3(parent *qt.QObject, pdoc_ unsafe.Pointer) *ScintillaDocument {

	ret := newScintillaDocument(C.ScintillaDocument_new3((*C.QObject)(parent.UnsafePointer()), pdoc_))
	ret.isSubclass = true
	return ret
}

func (this *ScintillaDocument) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.ScintillaDocument_MetaObject(this.h)))
}

func (this *ScintillaDocument) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.ScintillaDocument_Metacast(this.h, param1_Cstring))
}

func ScintillaDocument_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaDocument_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaDocument_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaDocument_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *ScintillaDocument) Pointer() unsafe.Pointer {
	return (unsafe.Pointer)(C.ScintillaDocument_Pointer(this.h))
}

func (this *ScintillaDocument) LineFromPosition(pos int) int {
	return (int)(C.ScintillaDocument_LineFromPosition(this.h, (C.int)(pos)))
}

func (this *ScintillaDocument) IsCrLf(pos int) bool {
	return (bool)(C.ScintillaDocument_IsCrLf(this.h, (C.int)(pos)))
}

func (this *ScintillaDocument) DeleteChars(pos int, lenVal int) bool {
	return (bool)(C.ScintillaDocument_DeleteChars(this.h, (C.int)(pos), (C.int)(lenVal)))
}

func (this *ScintillaDocument) Undo() int {
	return (int)(C.ScintillaDocument_Undo(this.h))
}

func (this *ScintillaDocument) Redo() int {
	return (int)(C.ScintillaDocument_Redo(this.h))
}

func (this *ScintillaDocument) CanUndo() bool {
	return (bool)(C.ScintillaDocument_CanUndo(this.h))
}

func (this *ScintillaDocument) CanRedo() bool {
	return (bool)(C.ScintillaDocument_CanRedo(this.h))
}

func (this *ScintillaDocument) DeleteUndoHistory() {
	C.ScintillaDocument_DeleteUndoHistory(this.h)
}

func (this *ScintillaDocument) SetUndoCollection(collect_undo bool) bool {
	return (bool)(C.ScintillaDocument_SetUndoCollection(this.h, (C.bool)(collect_undo)))
}

func (this *ScintillaDocument) IsCollectingUndo() bool {
	return (bool)(C.ScintillaDocument_IsCollectingUndo(this.h))
}

func (this *ScintillaDocument) BeginUndoAction() {
	C.ScintillaDocument_BeginUndoAction(this.h)
}

func (this *ScintillaDocument) EndUndoAction() {
	C.ScintillaDocument_EndUndoAction(this.h)
}

func (this *ScintillaDocument) SetSavePoint() {
	C.ScintillaDocument_SetSavePoint(this.h)
}

func (this *ScintillaDocument) IsSavePoint() bool {
	return (bool)(C.ScintillaDocument_IsSavePoint(this.h))
}

func (this *ScintillaDocument) SetReadOnly(read_only bool) {
	C.ScintillaDocument_SetReadOnly(this.h, (C.bool)(read_only))
}

func (this *ScintillaDocument) IsReadOnly() bool {
	return (bool)(C.ScintillaDocument_IsReadOnly(this.h))
}

func (this *ScintillaDocument) InsertString(position int, str []byte) {
	str_alias := C.struct_miqt_string{}
	str_alias.data = (*C.char)(unsafe.Pointer(&str[0]))
	str_alias.len = C.size_t(len(str))
	C.ScintillaDocument_InsertString(this.h, (C.int)(position), str_alias)
}

func (this *ScintillaDocument) GetCharRange(position int, length int) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaDocument_GetCharRange(this.h, (C.int)(position), (C.int)(length))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaDocument) StyleAt(position int) int8 {
	return (int8)(C.ScintillaDocument_StyleAt(this.h, (C.int)(position)))
}

func (this *ScintillaDocument) LineStart(lineno int) int {
	return (int)(C.ScintillaDocument_LineStart(this.h, (C.int)(lineno)))
}

func (this *ScintillaDocument) LineEnd(lineno int) int {
	return (int)(C.ScintillaDocument_LineEnd(this.h, (C.int)(lineno)))
}

func (this *ScintillaDocument) LineEndPosition(pos int) int {
	return (int)(C.ScintillaDocument_LineEndPosition(this.h, (C.int)(pos)))
}

func (this *ScintillaDocument) Length() int {
	return (int)(C.ScintillaDocument_Length(this.h))
}

func (this *ScintillaDocument) LinesTotal() int {
	return (int)(C.ScintillaDocument_LinesTotal(this.h))
}

func (this *ScintillaDocument) StartStyling(position int) {
	C.ScintillaDocument_StartStyling(this.h, (C.int)(position))
}

func (this *ScintillaDocument) SetStyleFor(length int, style int8) bool {
	return (bool)(C.ScintillaDocument_SetStyleFor(this.h, (C.int)(length), (C.char)(style)))
}

func (this *ScintillaDocument) GetEndStyled() int {
	return (int)(C.ScintillaDocument_GetEndStyled(this.h))
}

func (this *ScintillaDocument) EnsureStyledTo(position int) {
	C.ScintillaDocument_EnsureStyledTo(this.h, (C.int)(position))
}

func (this *ScintillaDocument) SetCurrentIndicator(indic int) {
	C.ScintillaDocument_SetCurrentIndicator(this.h, (C.int)(indic))
}

func (this *ScintillaDocument) DecorationFillRange(position int, value int, fillLength int) {
	C.ScintillaDocument_DecorationFillRange(this.h, (C.int)(position), (C.int)(value), (C.int)(fillLength))
}

func (this *ScintillaDocument) DecorationsValueAt(indic int, position int) int {
	return (int)(C.ScintillaDocument_DecorationsValueAt(this.h, (C.int)(indic), (C.int)(position)))
}

func (this *ScintillaDocument) DecorationsStart(indic int, position int) int {
	return (int)(C.ScintillaDocument_DecorationsStart(this.h, (C.int)(indic), (C.int)(position)))
}

func (this *ScintillaDocument) DecorationsEnd(indic int, position int) int {
	return (int)(C.ScintillaDocument_DecorationsEnd(this.h, (C.int)(indic), (C.int)(position)))
}

func (this *ScintillaDocument) GetCodePage() int {
	return (int)(C.ScintillaDocument_GetCodePage(this.h))
}

func (this *ScintillaDocument) SetCodePage(code_page int) {
	C.ScintillaDocument_SetCodePage(this.h, (C.int)(code_page))
}

func (this *ScintillaDocument) GetEolMode() int {
	return (int)(C.ScintillaDocument_GetEolMode(this.h))
}

func (this *ScintillaDocument) SetEolMode(eol_mode int) {
	C.ScintillaDocument_SetEolMode(this.h, (C.int)(eol_mode))
}

func (this *ScintillaDocument) MovePositionOutsideChar(pos int, move_dir int, check_line_end bool) int {
	return (int)(C.ScintillaDocument_MovePositionOutsideChar(this.h, (C.int)(pos), (C.int)(move_dir), (C.bool)(check_line_end)))
}

func (this *ScintillaDocument) GetCharacter(pos int) int {
	return (int)(C.ScintillaDocument_GetCharacter(this.h, (C.int)(pos)))
}

func (this *ScintillaDocument) ModifyAttempt() {
	C.ScintillaDocument_ModifyAttempt(this.h)
}
func (this *ScintillaDocument) OnModifyAttempt(slot func()) {
	C.ScintillaDocument_connect_ModifyAttempt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_ModifyAttempt
func miqt_exec_callback_ScintillaDocument_ModifyAttempt(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *ScintillaDocument) SavePoint(atSavePoint bool) {
	C.ScintillaDocument_SavePoint(this.h, (C.bool)(atSavePoint))
}
func (this *ScintillaDocument) OnSavePoint(slot func(atSavePoint bool)) {
	C.ScintillaDocument_connect_SavePoint(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_SavePoint
func miqt_exec_callback_ScintillaDocument_SavePoint(cb C.intptr_t, atSavePoint C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(atSavePoint bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(atSavePoint)

	gofunc(slotval1)
}

func (this *ScintillaDocument) Modified(position int, modification_type int, text []byte, length int, linesAdded int, line int, foldLevelNow int, foldLevelPrev int) {
	text_alias := C.struct_miqt_string{}
	text_alias.data = (*C.char)(unsafe.Pointer(&text[0]))
	text_alias.len = C.size_t(len(text))
	C.ScintillaDocument_Modified(this.h, (C.int)(position), (C.int)(modification_type), text_alias, (C.int)(length), (C.int)(linesAdded), (C.int)(line), (C.int)(foldLevelNow), (C.int)(foldLevelPrev))
}
func (this *ScintillaDocument) OnModified(slot func(position int, modification_type int, text []byte, length int, linesAdded int, line int, foldLevelNow int, foldLevelPrev int)) {
	C.ScintillaDocument_connect_Modified(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_Modified
func miqt_exec_callback_ScintillaDocument_Modified(cb C.intptr_t, position C.int, modification_type C.int, text C.struct_miqt_string, length C.int, linesAdded C.int, line C.int, foldLevelNow C.int, foldLevelPrev C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modification_type int, text []byte, length int, linesAdded int, line int, foldLevelNow int, foldLevelPrev int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modification_type)

	var text_bytearray C.struct_miqt_string = text
	text_ret := C.GoBytes(unsafe.Pointer(text_bytearray.data), C.int(int64(text_bytearray.len)))
	C.free(unsafe.Pointer(text_bytearray.data))
	slotval3 := text_ret
	slotval4 := (int)(length)

	slotval5 := (int)(linesAdded)

	slotval6 := (int)(line)

	slotval7 := (int)(foldLevelNow)

	slotval8 := (int)(foldLevelPrev)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7, slotval8)
}

func (this *ScintillaDocument) StyleNeeded(pos int) {
	C.ScintillaDocument_StyleNeeded(this.h, (C.int)(pos))
}
func (this *ScintillaDocument) OnStyleNeeded(slot func(pos int)) {
	C.ScintillaDocument_connect_StyleNeeded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_StyleNeeded
func miqt_exec_callback_ScintillaDocument_StyleNeeded(cb C.intptr_t, pos C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pos)

	gofunc(slotval1)
}

func (this *ScintillaDocument) ErrorOccurred(status int) {
	C.ScintillaDocument_ErrorOccurred(this.h, (C.int)(status))
}
func (this *ScintillaDocument) OnErrorOccurred(slot func(status int)) {
	C.ScintillaDocument_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_ErrorOccurred
func miqt_exec_callback_ScintillaDocument_ErrorOccurred(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(status)

	gofunc(slotval1)
}

func ScintillaDocument_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaDocument_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaDocument_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaDocument_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaDocument_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaDocument_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaDocument_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaDocument_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *ScintillaDocument) BeginUndoAction1(coalesceWithPrior bool) {
	C.ScintillaDocument_BeginUndoAction1(this.h, (C.bool)(coalesceWithPrior))
}

func (this *ScintillaDocument) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.ScintillaDocument_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *ScintillaDocument) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_Event
func miqt_exec_callback_ScintillaDocument_Event(self *C.ScintillaDocument, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&ScintillaDocument{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *ScintillaDocument) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.ScintillaDocument_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *ScintillaDocument) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_EventFilter
func miqt_exec_callback_ScintillaDocument_EventFilter(self *C.ScintillaDocument, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&ScintillaDocument{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *ScintillaDocument) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.ScintillaDocument_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *ScintillaDocument) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_TimerEvent
func miqt_exec_callback_ScintillaDocument_TimerEvent(self *C.ScintillaDocument, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&ScintillaDocument{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *ScintillaDocument) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.ScintillaDocument_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *ScintillaDocument) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_ChildEvent
func miqt_exec_callback_ScintillaDocument_ChildEvent(self *C.ScintillaDocument, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&ScintillaDocument{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *ScintillaDocument) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.ScintillaDocument_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *ScintillaDocument) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_CustomEvent
func miqt_exec_callback_ScintillaDocument_CustomEvent(self *C.ScintillaDocument, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&ScintillaDocument{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *ScintillaDocument) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.ScintillaDocument_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *ScintillaDocument) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_ConnectNotify
func miqt_exec_callback_ScintillaDocument_ConnectNotify(self *C.ScintillaDocument, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&ScintillaDocument{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *ScintillaDocument) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.ScintillaDocument_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *ScintillaDocument) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaDocument_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaDocument_DisconnectNotify
func miqt_exec_callback_ScintillaDocument_DisconnectNotify(self *C.ScintillaDocument, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&ScintillaDocument{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *ScintillaDocument) Delete() {
	C.ScintillaDocument_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *ScintillaDocument) GoGC() {
	runtime.SetFinalizer(this, func(this *ScintillaDocument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type ScintillaEdit struct {
	h          *C.ScintillaEdit
	isSubclass bool
	*ScintillaEditBase
}

func (this *ScintillaEdit) cPointer() *C.ScintillaEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *ScintillaEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newScintillaEdit constructs the type using only CGO pointers.
func newScintillaEdit(h *C.ScintillaEdit) *ScintillaEdit {
	if h == nil {
		return nil
	}
	var outptr_ScintillaEditBase *C.ScintillaEditBase = nil
	C.ScintillaEdit_virtbase(h, &outptr_ScintillaEditBase)

	return &ScintillaEdit{h: h,
		ScintillaEditBase: newScintillaEditBase(outptr_ScintillaEditBase)}
}

// UnsafeNewScintillaEdit constructs the type using only unsafe pointers.
func UnsafeNewScintillaEdit(h unsafe.Pointer) *ScintillaEdit {
	return newScintillaEdit((*C.ScintillaEdit)(h))
}

// NewScintillaEdit constructs a new ScintillaEdit object.
func NewScintillaEdit(parent *qt.QWidget) *ScintillaEdit {

	ret := newScintillaEdit(C.ScintillaEdit_new((*C.QWidget)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewScintillaEdit2 constructs a new ScintillaEdit object.
func NewScintillaEdit2() *ScintillaEdit {

	ret := newScintillaEdit(C.ScintillaEdit_new2())
	ret.isSubclass = true
	return ret
}

func (this *ScintillaEdit) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.ScintillaEdit_MetaObject(this.h)))
}

func (this *ScintillaEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.ScintillaEdit_Metacast(this.h, param1_Cstring))
}

func ScintillaEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEdit_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *ScintillaEdit) TextReturner(message int, wParam uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_TextReturner(this.h, (C.int)(message), (C.uintptr_t)(wParam))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) FindText(flags int, text string, cpMin int, cpMax int) struct {
	First  int
	Second int
} {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _mm C.struct_miqt_map = C.ScintillaEdit_FindText(this.h, (C.int)(flags), text_Cstring, (C.int)(cpMin), (C.int)(cpMax))
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *ScintillaEdit) GetTextRange(start int, end int) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_GetTextRange(this.h, (C.int)(start), (C.int)(end))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) GetDoc() *ScintillaDocument {
	return newScintillaDocument(C.ScintillaEdit_GetDoc(this.h))
}

func (this *ScintillaEdit) SetDoc(pdoc_ *ScintillaDocument) {
	C.ScintillaEdit_SetDoc(this.h, pdoc_.cPointer())
}

func (this *ScintillaEdit) FindText2(flags int, text string, cpMin int, cpMax int) struct {
	First  int
	Second int
} {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _mm C.struct_miqt_map = C.ScintillaEdit_FindText2(this.h, (C.int)(flags), text_Cstring, (C.int)(cpMin), (C.int)(cpMax))
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *ScintillaEdit) TextRange(start int, end int) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_TextRange(this.h, (C.int)(start), (C.int)(end))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) FormatRange(draw bool, target *qt.QPaintDevice, measure *qt.QPaintDevice, print_rect *qt.QRect, page_rect *qt.QRect, range_start int64, range_end int64) int64 {
	return (int64)(C.ScintillaEdit_FormatRange(this.h, (C.bool)(draw), (*C.QPaintDevice)(target.UnsafePointer()), (*C.QPaintDevice)(measure.UnsafePointer()), (*C.QRect)(print_rect.UnsafePointer()), (*C.QRect)(page_rect.UnsafePointer()), (C.long)(range_start), (C.long)(range_end)))
}

func (this *ScintillaEdit) FormatRange2(draw bool, target *qt.QPaintDevice, measure *qt.QPaintDevice, print_rect *qt.QRect, page_rect *qt.QRect, range_start int64, range_end int64) int64 {
	return (int64)(C.ScintillaEdit_FormatRange2(this.h, (C.bool)(draw), (*C.QPaintDevice)(target.UnsafePointer()), (*C.QPaintDevice)(measure.UnsafePointer()), (*C.QRect)(print_rect.UnsafePointer()), (*C.QRect)(page_rect.UnsafePointer()), (C.long)(range_start), (C.long)(range_end)))
}

func (this *ScintillaEdit) AddText(length uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_AddText(this.h, (C.intptr_t)(length), text_Cstring)
}

func (this *ScintillaEdit) AddStyledText(length uintptr, c string) {
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	C.ScintillaEdit_AddStyledText(this.h, (C.intptr_t)(length), c_Cstring)
}

func (this *ScintillaEdit) InsertText(pos uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_InsertText(this.h, (C.intptr_t)(pos), text_Cstring)
}

func (this *ScintillaEdit) ChangeInsertion(length uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_ChangeInsertion(this.h, (C.intptr_t)(length), text_Cstring)
}

func (this *ScintillaEdit) ClearAll() {
	C.ScintillaEdit_ClearAll(this.h)
}

func (this *ScintillaEdit) DeleteRange(start uintptr, lengthDelete uintptr) {
	C.ScintillaEdit_DeleteRange(this.h, (C.intptr_t)(start), (C.intptr_t)(lengthDelete))
}

func (this *ScintillaEdit) ClearDocumentStyle() {
	C.ScintillaEdit_ClearDocumentStyle(this.h)
}

func (this *ScintillaEdit) Length() uintptr {
	return (uintptr)(C.ScintillaEdit_Length(this.h))
}

func (this *ScintillaEdit) CharAt(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CharAt(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) CurrentPos() uintptr {
	return (uintptr)(C.ScintillaEdit_CurrentPos(this.h))
}

func (this *ScintillaEdit) Anchor() uintptr {
	return (uintptr)(C.ScintillaEdit_Anchor(this.h))
}

func (this *ScintillaEdit) StyleAt(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleAt(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) StyleIndexAt(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleIndexAt(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) Redo() {
	C.ScintillaEdit_Redo(this.h)
}

func (this *ScintillaEdit) SetUndoCollection(collectUndo bool) {
	C.ScintillaEdit_SetUndoCollection(this.h, (C.bool)(collectUndo))
}

func (this *ScintillaEdit) SelectAll() {
	C.ScintillaEdit_SelectAll(this.h)
}

func (this *ScintillaEdit) SetSavePoint() {
	C.ScintillaEdit_SetSavePoint(this.h)
}

func (this *ScintillaEdit) CanRedo() bool {
	return (bool)(C.ScintillaEdit_CanRedo(this.h))
}

func (this *ScintillaEdit) MarkerLineFromHandle(markerHandle uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerLineFromHandle(this.h, (C.intptr_t)(markerHandle)))
}

func (this *ScintillaEdit) MarkerDeleteHandle(markerHandle uintptr) {
	C.ScintillaEdit_MarkerDeleteHandle(this.h, (C.intptr_t)(markerHandle))
}

func (this *ScintillaEdit) MarkerHandleFromLine(line uintptr, which uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerHandleFromLine(this.h, (C.intptr_t)(line), (C.intptr_t)(which)))
}

func (this *ScintillaEdit) MarkerNumberFromLine(line uintptr, which uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerNumberFromLine(this.h, (C.intptr_t)(line), (C.intptr_t)(which)))
}

func (this *ScintillaEdit) UndoCollection() bool {
	return (bool)(C.ScintillaEdit_UndoCollection(this.h))
}

func (this *ScintillaEdit) ViewWS() uintptr {
	return (uintptr)(C.ScintillaEdit_ViewWS(this.h))
}

func (this *ScintillaEdit) SetViewWS(viewWS uintptr) {
	C.ScintillaEdit_SetViewWS(this.h, (C.intptr_t)(viewWS))
}

func (this *ScintillaEdit) TabDrawMode() uintptr {
	return (uintptr)(C.ScintillaEdit_TabDrawMode(this.h))
}

func (this *ScintillaEdit) SetTabDrawMode(tabDrawMode uintptr) {
	C.ScintillaEdit_SetTabDrawMode(this.h, (C.intptr_t)(tabDrawMode))
}

func (this *ScintillaEdit) PositionFromPoint(x uintptr, y uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionFromPoint(this.h, (C.intptr_t)(x), (C.intptr_t)(y)))
}

func (this *ScintillaEdit) PositionFromPointClose(x uintptr, y uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionFromPointClose(this.h, (C.intptr_t)(x), (C.intptr_t)(y)))
}

func (this *ScintillaEdit) GotoLine(line uintptr) {
	C.ScintillaEdit_GotoLine(this.h, (C.intptr_t)(line))
}

func (this *ScintillaEdit) GotoPos(caret uintptr) {
	C.ScintillaEdit_GotoPos(this.h, (C.intptr_t)(caret))
}

func (this *ScintillaEdit) SetAnchor(anchor uintptr) {
	C.ScintillaEdit_SetAnchor(this.h, (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) GetCurLine(length uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_GetCurLine(this.h, (C.intptr_t)(length))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) EndStyled() uintptr {
	return (uintptr)(C.ScintillaEdit_EndStyled(this.h))
}

func (this *ScintillaEdit) ConvertEOLs(eolMode uintptr) {
	C.ScintillaEdit_ConvertEOLs(this.h, (C.intptr_t)(eolMode))
}

func (this *ScintillaEdit) EOLMode() uintptr {
	return (uintptr)(C.ScintillaEdit_EOLMode(this.h))
}

func (this *ScintillaEdit) SetEOLMode(eolMode uintptr) {
	C.ScintillaEdit_SetEOLMode(this.h, (C.intptr_t)(eolMode))
}

func (this *ScintillaEdit) StartStyling(start uintptr, unused uintptr) {
	C.ScintillaEdit_StartStyling(this.h, (C.intptr_t)(start), (C.intptr_t)(unused))
}

func (this *ScintillaEdit) SetStyling(length uintptr, style uintptr) {
	C.ScintillaEdit_SetStyling(this.h, (C.intptr_t)(length), (C.intptr_t)(style))
}

func (this *ScintillaEdit) BufferedDraw() bool {
	return (bool)(C.ScintillaEdit_BufferedDraw(this.h))
}

func (this *ScintillaEdit) SetBufferedDraw(buffered bool) {
	C.ScintillaEdit_SetBufferedDraw(this.h, (C.bool)(buffered))
}

func (this *ScintillaEdit) SetTabWidth(tabWidth uintptr) {
	C.ScintillaEdit_SetTabWidth(this.h, (C.intptr_t)(tabWidth))
}

func (this *ScintillaEdit) TabWidth() uintptr {
	return (uintptr)(C.ScintillaEdit_TabWidth(this.h))
}

func (this *ScintillaEdit) SetTabMinimumWidth(pixels uintptr) {
	C.ScintillaEdit_SetTabMinimumWidth(this.h, (C.intptr_t)(pixels))
}

func (this *ScintillaEdit) TabMinimumWidth() uintptr {
	return (uintptr)(C.ScintillaEdit_TabMinimumWidth(this.h))
}

func (this *ScintillaEdit) ClearTabStops(line uintptr) {
	C.ScintillaEdit_ClearTabStops(this.h, (C.intptr_t)(line))
}

func (this *ScintillaEdit) AddTabStop(line uintptr, x uintptr) {
	C.ScintillaEdit_AddTabStop(this.h, (C.intptr_t)(line), (C.intptr_t)(x))
}

func (this *ScintillaEdit) GetNextTabStop(line uintptr, x uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_GetNextTabStop(this.h, (C.intptr_t)(line), (C.intptr_t)(x)))
}

func (this *ScintillaEdit) SetCodePage(codePage uintptr) {
	C.ScintillaEdit_SetCodePage(this.h, (C.intptr_t)(codePage))
}

func (this *ScintillaEdit) SetFontLocale(localeName string) {
	localeName_Cstring := C.CString(localeName)
	defer C.free(unsafe.Pointer(localeName_Cstring))
	C.ScintillaEdit_SetFontLocale(this.h, localeName_Cstring)
}

func (this *ScintillaEdit) FontLocale() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_FontLocale(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) IMEInteraction() uintptr {
	return (uintptr)(C.ScintillaEdit_IMEInteraction(this.h))
}

func (this *ScintillaEdit) SetIMEInteraction(imeInteraction uintptr) {
	C.ScintillaEdit_SetIMEInteraction(this.h, (C.intptr_t)(imeInteraction))
}

func (this *ScintillaEdit) MarkerDefine(markerNumber uintptr, markerSymbol uintptr) {
	C.ScintillaEdit_MarkerDefine(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(markerSymbol))
}

func (this *ScintillaEdit) MarkerSetFore(markerNumber uintptr, fore uintptr) {
	C.ScintillaEdit_MarkerSetFore(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) MarkerSetBack(markerNumber uintptr, back uintptr) {
	C.ScintillaEdit_MarkerSetBack(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(back))
}

func (this *ScintillaEdit) MarkerSetBackSelected(markerNumber uintptr, back uintptr) {
	C.ScintillaEdit_MarkerSetBackSelected(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(back))
}

func (this *ScintillaEdit) MarkerSetForeTranslucent(markerNumber uintptr, fore uintptr) {
	C.ScintillaEdit_MarkerSetForeTranslucent(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) MarkerSetBackTranslucent(markerNumber uintptr, back uintptr) {
	C.ScintillaEdit_MarkerSetBackTranslucent(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(back))
}

func (this *ScintillaEdit) MarkerSetBackSelectedTranslucent(markerNumber uintptr, back uintptr) {
	C.ScintillaEdit_MarkerSetBackSelectedTranslucent(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(back))
}

func (this *ScintillaEdit) MarkerSetStrokeWidth(markerNumber uintptr, hundredths uintptr) {
	C.ScintillaEdit_MarkerSetStrokeWidth(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(hundredths))
}

func (this *ScintillaEdit) MarkerEnableHighlight(enabled bool) {
	C.ScintillaEdit_MarkerEnableHighlight(this.h, (C.bool)(enabled))
}

func (this *ScintillaEdit) MarkerAdd(line uintptr, markerNumber uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerAdd(this.h, (C.intptr_t)(line), (C.intptr_t)(markerNumber)))
}

func (this *ScintillaEdit) MarkerDelete(line uintptr, markerNumber uintptr) {
	C.ScintillaEdit_MarkerDelete(this.h, (C.intptr_t)(line), (C.intptr_t)(markerNumber))
}

func (this *ScintillaEdit) MarkerDeleteAll(markerNumber uintptr) {
	C.ScintillaEdit_MarkerDeleteAll(this.h, (C.intptr_t)(markerNumber))
}

func (this *ScintillaEdit) MarkerGet(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerGet(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) MarkerNext(lineStart uintptr, markerMask uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerNext(this.h, (C.intptr_t)(lineStart), (C.intptr_t)(markerMask)))
}

func (this *ScintillaEdit) MarkerPrevious(lineStart uintptr, markerMask uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerPrevious(this.h, (C.intptr_t)(lineStart), (C.intptr_t)(markerMask)))
}

func (this *ScintillaEdit) MarkerDefinePixmap(markerNumber uintptr, pixmap string) {
	pixmap_Cstring := C.CString(pixmap)
	defer C.free(unsafe.Pointer(pixmap_Cstring))
	C.ScintillaEdit_MarkerDefinePixmap(this.h, (C.intptr_t)(markerNumber), pixmap_Cstring)
}

func (this *ScintillaEdit) MarkerAddSet(line uintptr, markerSet uintptr) {
	C.ScintillaEdit_MarkerAddSet(this.h, (C.intptr_t)(line), (C.intptr_t)(markerSet))
}

func (this *ScintillaEdit) MarkerSetAlpha(markerNumber uintptr, alpha uintptr) {
	C.ScintillaEdit_MarkerSetAlpha(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(alpha))
}

func (this *ScintillaEdit) MarkerLayer(markerNumber uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerLayer(this.h, (C.intptr_t)(markerNumber)))
}

func (this *ScintillaEdit) MarkerSetLayer(markerNumber uintptr, layer uintptr) {
	C.ScintillaEdit_MarkerSetLayer(this.h, (C.intptr_t)(markerNumber), (C.intptr_t)(layer))
}

func (this *ScintillaEdit) SetMarginTypeN(margin uintptr, marginType uintptr) {
	C.ScintillaEdit_SetMarginTypeN(this.h, (C.intptr_t)(margin), (C.intptr_t)(marginType))
}

func (this *ScintillaEdit) MarginTypeN(margin uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarginTypeN(this.h, (C.intptr_t)(margin)))
}

func (this *ScintillaEdit) SetMarginWidthN(margin uintptr, pixelWidth uintptr) {
	C.ScintillaEdit_SetMarginWidthN(this.h, (C.intptr_t)(margin), (C.intptr_t)(pixelWidth))
}

func (this *ScintillaEdit) MarginWidthN(margin uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarginWidthN(this.h, (C.intptr_t)(margin)))
}

func (this *ScintillaEdit) SetMarginMaskN(margin uintptr, mask uintptr) {
	C.ScintillaEdit_SetMarginMaskN(this.h, (C.intptr_t)(margin), (C.intptr_t)(mask))
}

func (this *ScintillaEdit) MarginMaskN(margin uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarginMaskN(this.h, (C.intptr_t)(margin)))
}

func (this *ScintillaEdit) SetMarginSensitiveN(margin uintptr, sensitive bool) {
	C.ScintillaEdit_SetMarginSensitiveN(this.h, (C.intptr_t)(margin), (C.bool)(sensitive))
}

func (this *ScintillaEdit) MarginSensitiveN(margin uintptr) bool {
	return (bool)(C.ScintillaEdit_MarginSensitiveN(this.h, (C.intptr_t)(margin)))
}

func (this *ScintillaEdit) SetMarginCursorN(margin uintptr, cursor uintptr) {
	C.ScintillaEdit_SetMarginCursorN(this.h, (C.intptr_t)(margin), (C.intptr_t)(cursor))
}

func (this *ScintillaEdit) MarginCursorN(margin uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarginCursorN(this.h, (C.intptr_t)(margin)))
}

func (this *ScintillaEdit) SetMarginBackN(margin uintptr, back uintptr) {
	C.ScintillaEdit_SetMarginBackN(this.h, (C.intptr_t)(margin), (C.intptr_t)(back))
}

func (this *ScintillaEdit) MarginBackN(margin uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarginBackN(this.h, (C.intptr_t)(margin)))
}

func (this *ScintillaEdit) SetMargins(margins uintptr) {
	C.ScintillaEdit_SetMargins(this.h, (C.intptr_t)(margins))
}

func (this *ScintillaEdit) Margins() uintptr {
	return (uintptr)(C.ScintillaEdit_Margins(this.h))
}

func (this *ScintillaEdit) StyleClearAll() {
	C.ScintillaEdit_StyleClearAll(this.h)
}

func (this *ScintillaEdit) StyleSetFore(style uintptr, fore uintptr) {
	C.ScintillaEdit_StyleSetFore(this.h, (C.intptr_t)(style), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) StyleSetBack(style uintptr, back uintptr) {
	C.ScintillaEdit_StyleSetBack(this.h, (C.intptr_t)(style), (C.intptr_t)(back))
}

func (this *ScintillaEdit) StyleSetBold(style uintptr, bold bool) {
	C.ScintillaEdit_StyleSetBold(this.h, (C.intptr_t)(style), (C.bool)(bold))
}

func (this *ScintillaEdit) StyleSetItalic(style uintptr, italic bool) {
	C.ScintillaEdit_StyleSetItalic(this.h, (C.intptr_t)(style), (C.bool)(italic))
}

func (this *ScintillaEdit) StyleSetSize(style uintptr, sizePoints uintptr) {
	C.ScintillaEdit_StyleSetSize(this.h, (C.intptr_t)(style), (C.intptr_t)(sizePoints))
}

func (this *ScintillaEdit) StyleSetFont(style uintptr, fontName string) {
	fontName_Cstring := C.CString(fontName)
	defer C.free(unsafe.Pointer(fontName_Cstring))
	C.ScintillaEdit_StyleSetFont(this.h, (C.intptr_t)(style), fontName_Cstring)
}

func (this *ScintillaEdit) StyleSetEOLFilled(style uintptr, eolFilled bool) {
	C.ScintillaEdit_StyleSetEOLFilled(this.h, (C.intptr_t)(style), (C.bool)(eolFilled))
}

func (this *ScintillaEdit) StyleResetDefault() {
	C.ScintillaEdit_StyleResetDefault(this.h)
}

func (this *ScintillaEdit) StyleSetUnderline(style uintptr, underline bool) {
	C.ScintillaEdit_StyleSetUnderline(this.h, (C.intptr_t)(style), (C.bool)(underline))
}

func (this *ScintillaEdit) StyleFore(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleFore(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleBack(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleBack(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleBold(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleBold(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleItalic(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleItalic(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleSize(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleSize(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleFont(style uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_StyleFont(this.h, (C.intptr_t)(style))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) StyleEOLFilled(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleEOLFilled(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleUnderline(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleUnderline(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleCase(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleCase(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleCharacterSet(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleCharacterSet(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleVisible(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleVisible(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleChangeable(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleChangeable(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleHotSpot(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleHotSpot(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleSetCase(style uintptr, caseVisible uintptr) {
	C.ScintillaEdit_StyleSetCase(this.h, (C.intptr_t)(style), (C.intptr_t)(caseVisible))
}

func (this *ScintillaEdit) StyleSetSizeFractional(style uintptr, sizeHundredthPoints uintptr) {
	C.ScintillaEdit_StyleSetSizeFractional(this.h, (C.intptr_t)(style), (C.intptr_t)(sizeHundredthPoints))
}

func (this *ScintillaEdit) StyleSizeFractional(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleSizeFractional(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleSetWeight(style uintptr, weight uintptr) {
	C.ScintillaEdit_StyleSetWeight(this.h, (C.intptr_t)(style), (C.intptr_t)(weight))
}

func (this *ScintillaEdit) StyleWeight(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleWeight(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleSetCharacterSet(style uintptr, characterSet uintptr) {
	C.ScintillaEdit_StyleSetCharacterSet(this.h, (C.intptr_t)(style), (C.intptr_t)(characterSet))
}

func (this *ScintillaEdit) StyleSetHotSpot(style uintptr, hotspot bool) {
	C.ScintillaEdit_StyleSetHotSpot(this.h, (C.intptr_t)(style), (C.bool)(hotspot))
}

func (this *ScintillaEdit) StyleSetCheckMonospaced(style uintptr, checkMonospaced bool) {
	C.ScintillaEdit_StyleSetCheckMonospaced(this.h, (C.intptr_t)(style), (C.bool)(checkMonospaced))
}

func (this *ScintillaEdit) StyleCheckMonospaced(style uintptr) bool {
	return (bool)(C.ScintillaEdit_StyleCheckMonospaced(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleSetStretch(style uintptr, stretch uintptr) {
	C.ScintillaEdit_StyleSetStretch(this.h, (C.intptr_t)(style), (C.intptr_t)(stretch))
}

func (this *ScintillaEdit) StyleStretch(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleStretch(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) StyleSetInvisibleRepresentation(style uintptr, representation string) {
	representation_Cstring := C.CString(representation)
	defer C.free(unsafe.Pointer(representation_Cstring))
	C.ScintillaEdit_StyleSetInvisibleRepresentation(this.h, (C.intptr_t)(style), representation_Cstring)
}

func (this *ScintillaEdit) StyleInvisibleRepresentation(style uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_StyleInvisibleRepresentation(this.h, (C.intptr_t)(style))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) SetElementColour(element uintptr, colourElement uintptr) {
	C.ScintillaEdit_SetElementColour(this.h, (C.intptr_t)(element), (C.intptr_t)(colourElement))
}

func (this *ScintillaEdit) ElementColour(element uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_ElementColour(this.h, (C.intptr_t)(element)))
}

func (this *ScintillaEdit) ResetElementColour(element uintptr) {
	C.ScintillaEdit_ResetElementColour(this.h, (C.intptr_t)(element))
}

func (this *ScintillaEdit) ElementIsSet(element uintptr) bool {
	return (bool)(C.ScintillaEdit_ElementIsSet(this.h, (C.intptr_t)(element)))
}

func (this *ScintillaEdit) ElementAllowsTranslucent(element uintptr) bool {
	return (bool)(C.ScintillaEdit_ElementAllowsTranslucent(this.h, (C.intptr_t)(element)))
}

func (this *ScintillaEdit) ElementBaseColour(element uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_ElementBaseColour(this.h, (C.intptr_t)(element)))
}

func (this *ScintillaEdit) SetSelFore(useSetting bool, fore uintptr) {
	C.ScintillaEdit_SetSelFore(this.h, (C.bool)(useSetting), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) SetSelBack(useSetting bool, back uintptr) {
	C.ScintillaEdit_SetSelBack(this.h, (C.bool)(useSetting), (C.intptr_t)(back))
}

func (this *ScintillaEdit) SelAlpha() uintptr {
	return (uintptr)(C.ScintillaEdit_SelAlpha(this.h))
}

func (this *ScintillaEdit) SetSelAlpha(alpha uintptr) {
	C.ScintillaEdit_SetSelAlpha(this.h, (C.intptr_t)(alpha))
}

func (this *ScintillaEdit) SelEOLFilled() bool {
	return (bool)(C.ScintillaEdit_SelEOLFilled(this.h))
}

func (this *ScintillaEdit) SetSelEOLFilled(filled bool) {
	C.ScintillaEdit_SetSelEOLFilled(this.h, (C.bool)(filled))
}

func (this *ScintillaEdit) SelectionLayer() uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionLayer(this.h))
}

func (this *ScintillaEdit) SetSelectionLayer(layer uintptr) {
	C.ScintillaEdit_SetSelectionLayer(this.h, (C.intptr_t)(layer))
}

func (this *ScintillaEdit) CaretLineLayer() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretLineLayer(this.h))
}

func (this *ScintillaEdit) SetCaretLineLayer(layer uintptr) {
	C.ScintillaEdit_SetCaretLineLayer(this.h, (C.intptr_t)(layer))
}

func (this *ScintillaEdit) CaretLineHighlightSubLine() bool {
	return (bool)(C.ScintillaEdit_CaretLineHighlightSubLine(this.h))
}

func (this *ScintillaEdit) SetCaretLineHighlightSubLine(subLine bool) {
	C.ScintillaEdit_SetCaretLineHighlightSubLine(this.h, (C.bool)(subLine))
}

func (this *ScintillaEdit) SetCaretFore(fore uintptr) {
	C.ScintillaEdit_SetCaretFore(this.h, (C.intptr_t)(fore))
}

func (this *ScintillaEdit) AssignCmdKey(keyDefinition uintptr, sciCommand uintptr) {
	C.ScintillaEdit_AssignCmdKey(this.h, (C.intptr_t)(keyDefinition), (C.intptr_t)(sciCommand))
}

func (this *ScintillaEdit) ClearCmdKey(keyDefinition uintptr) {
	C.ScintillaEdit_ClearCmdKey(this.h, (C.intptr_t)(keyDefinition))
}

func (this *ScintillaEdit) ClearAllCmdKeys() {
	C.ScintillaEdit_ClearAllCmdKeys(this.h)
}

func (this *ScintillaEdit) SetStylingEx(length uintptr, styles string) {
	styles_Cstring := C.CString(styles)
	defer C.free(unsafe.Pointer(styles_Cstring))
	C.ScintillaEdit_SetStylingEx(this.h, (C.intptr_t)(length), styles_Cstring)
}

func (this *ScintillaEdit) StyleSetVisible(style uintptr, visible bool) {
	C.ScintillaEdit_StyleSetVisible(this.h, (C.intptr_t)(style), (C.bool)(visible))
}

func (this *ScintillaEdit) CaretPeriod() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretPeriod(this.h))
}

func (this *ScintillaEdit) SetCaretPeriod(periodMilliseconds uintptr) {
	C.ScintillaEdit_SetCaretPeriod(this.h, (C.intptr_t)(periodMilliseconds))
}

func (this *ScintillaEdit) SetWordChars(characters string) {
	characters_Cstring := C.CString(characters)
	defer C.free(unsafe.Pointer(characters_Cstring))
	C.ScintillaEdit_SetWordChars(this.h, characters_Cstring)
}

func (this *ScintillaEdit) WordChars() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_WordChars(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) SetCharacterCategoryOptimization(countCharacters uintptr) {
	C.ScintillaEdit_SetCharacterCategoryOptimization(this.h, (C.intptr_t)(countCharacters))
}

func (this *ScintillaEdit) CharacterCategoryOptimization() uintptr {
	return (uintptr)(C.ScintillaEdit_CharacterCategoryOptimization(this.h))
}

func (this *ScintillaEdit) BeginUndoAction() {
	C.ScintillaEdit_BeginUndoAction(this.h)
}

func (this *ScintillaEdit) EndUndoAction() {
	C.ScintillaEdit_EndUndoAction(this.h)
}

func (this *ScintillaEdit) UndoSequence() uintptr {
	return (uintptr)(C.ScintillaEdit_UndoSequence(this.h))
}

func (this *ScintillaEdit) UndoActions() uintptr {
	return (uintptr)(C.ScintillaEdit_UndoActions(this.h))
}

func (this *ScintillaEdit) SetUndoSavePoint(action uintptr) {
	C.ScintillaEdit_SetUndoSavePoint(this.h, (C.intptr_t)(action))
}

func (this *ScintillaEdit) UndoSavePoint() uintptr {
	return (uintptr)(C.ScintillaEdit_UndoSavePoint(this.h))
}

func (this *ScintillaEdit) SetUndoDetach(action uintptr) {
	C.ScintillaEdit_SetUndoDetach(this.h, (C.intptr_t)(action))
}

func (this *ScintillaEdit) UndoDetach() uintptr {
	return (uintptr)(C.ScintillaEdit_UndoDetach(this.h))
}

func (this *ScintillaEdit) SetUndoTentative(action uintptr) {
	C.ScintillaEdit_SetUndoTentative(this.h, (C.intptr_t)(action))
}

func (this *ScintillaEdit) UndoTentative() uintptr {
	return (uintptr)(C.ScintillaEdit_UndoTentative(this.h))
}

func (this *ScintillaEdit) SetUndoCurrent(action uintptr) {
	C.ScintillaEdit_SetUndoCurrent(this.h, (C.intptr_t)(action))
}

func (this *ScintillaEdit) UndoCurrent() uintptr {
	return (uintptr)(C.ScintillaEdit_UndoCurrent(this.h))
}

func (this *ScintillaEdit) PushUndoActionType(typeVal uintptr, pos uintptr) {
	C.ScintillaEdit_PushUndoActionType(this.h, (C.intptr_t)(typeVal), (C.intptr_t)(pos))
}

func (this *ScintillaEdit) ChangeLastUndoActionText(length uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_ChangeLastUndoActionText(this.h, (C.intptr_t)(length), text_Cstring)
}

func (this *ScintillaEdit) UndoActionType(action uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_UndoActionType(this.h, (C.intptr_t)(action)))
}

func (this *ScintillaEdit) UndoActionPosition(action uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_UndoActionPosition(this.h, (C.intptr_t)(action)))
}

func (this *ScintillaEdit) UndoActionText(action uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_UndoActionText(this.h, (C.intptr_t)(action))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) IndicSetStyle(indicator uintptr, indicatorStyle uintptr) {
	C.ScintillaEdit_IndicSetStyle(this.h, (C.intptr_t)(indicator), (C.intptr_t)(indicatorStyle))
}

func (this *ScintillaEdit) IndicStyle(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicStyle(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetFore(indicator uintptr, fore uintptr) {
	C.ScintillaEdit_IndicSetFore(this.h, (C.intptr_t)(indicator), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) IndicFore(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicFore(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetUnder(indicator uintptr, under bool) {
	C.ScintillaEdit_IndicSetUnder(this.h, (C.intptr_t)(indicator), (C.bool)(under))
}

func (this *ScintillaEdit) IndicUnder(indicator uintptr) bool {
	return (bool)(C.ScintillaEdit_IndicUnder(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetHoverStyle(indicator uintptr, indicatorStyle uintptr) {
	C.ScintillaEdit_IndicSetHoverStyle(this.h, (C.intptr_t)(indicator), (C.intptr_t)(indicatorStyle))
}

func (this *ScintillaEdit) IndicHoverStyle(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicHoverStyle(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetHoverFore(indicator uintptr, fore uintptr) {
	C.ScintillaEdit_IndicSetHoverFore(this.h, (C.intptr_t)(indicator), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) IndicHoverFore(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicHoverFore(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetFlags(indicator uintptr, flags uintptr) {
	C.ScintillaEdit_IndicSetFlags(this.h, (C.intptr_t)(indicator), (C.intptr_t)(flags))
}

func (this *ScintillaEdit) IndicFlags(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicFlags(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetStrokeWidth(indicator uintptr, hundredths uintptr) {
	C.ScintillaEdit_IndicSetStrokeWidth(this.h, (C.intptr_t)(indicator), (C.intptr_t)(hundredths))
}

func (this *ScintillaEdit) IndicStrokeWidth(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicStrokeWidth(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) SetWhitespaceFore(useSetting bool, fore uintptr) {
	C.ScintillaEdit_SetWhitespaceFore(this.h, (C.bool)(useSetting), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) SetWhitespaceBack(useSetting bool, back uintptr) {
	C.ScintillaEdit_SetWhitespaceBack(this.h, (C.bool)(useSetting), (C.intptr_t)(back))
}

func (this *ScintillaEdit) SetWhitespaceSize(size uintptr) {
	C.ScintillaEdit_SetWhitespaceSize(this.h, (C.intptr_t)(size))
}

func (this *ScintillaEdit) WhitespaceSize() uintptr {
	return (uintptr)(C.ScintillaEdit_WhitespaceSize(this.h))
}

func (this *ScintillaEdit) SetLineState(line uintptr, state uintptr) {
	C.ScintillaEdit_SetLineState(this.h, (C.intptr_t)(line), (C.intptr_t)(state))
}

func (this *ScintillaEdit) LineState(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineState(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) MaxLineState() uintptr {
	return (uintptr)(C.ScintillaEdit_MaxLineState(this.h))
}

func (this *ScintillaEdit) CaretLineVisible() bool {
	return (bool)(C.ScintillaEdit_CaretLineVisible(this.h))
}

func (this *ScintillaEdit) SetCaretLineVisible(show bool) {
	C.ScintillaEdit_SetCaretLineVisible(this.h, (C.bool)(show))
}

func (this *ScintillaEdit) CaretLineBack() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretLineBack(this.h))
}

func (this *ScintillaEdit) SetCaretLineBack(back uintptr) {
	C.ScintillaEdit_SetCaretLineBack(this.h, (C.intptr_t)(back))
}

func (this *ScintillaEdit) CaretLineFrame() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretLineFrame(this.h))
}

func (this *ScintillaEdit) SetCaretLineFrame(width uintptr) {
	C.ScintillaEdit_SetCaretLineFrame(this.h, (C.intptr_t)(width))
}

func (this *ScintillaEdit) StyleSetChangeable(style uintptr, changeable bool) {
	C.ScintillaEdit_StyleSetChangeable(this.h, (C.intptr_t)(style), (C.bool)(changeable))
}

func (this *ScintillaEdit) AutoCShow(lengthEntered uintptr, itemList string) {
	itemList_Cstring := C.CString(itemList)
	defer C.free(unsafe.Pointer(itemList_Cstring))
	C.ScintillaEdit_AutoCShow(this.h, (C.intptr_t)(lengthEntered), itemList_Cstring)
}

func (this *ScintillaEdit) AutoCCancel() {
	C.ScintillaEdit_AutoCCancel(this.h)
}

func (this *ScintillaEdit) AutoCActive() bool {
	return (bool)(C.ScintillaEdit_AutoCActive(this.h))
}

func (this *ScintillaEdit) AutoCPosStart() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCPosStart(this.h))
}

func (this *ScintillaEdit) AutoCComplete() {
	C.ScintillaEdit_AutoCComplete(this.h)
}

func (this *ScintillaEdit) AutoCStops(characterSet string) {
	characterSet_Cstring := C.CString(characterSet)
	defer C.free(unsafe.Pointer(characterSet_Cstring))
	C.ScintillaEdit_AutoCStops(this.h, characterSet_Cstring)
}

func (this *ScintillaEdit) AutoCSetSeparator(separatorCharacter uintptr) {
	C.ScintillaEdit_AutoCSetSeparator(this.h, (C.intptr_t)(separatorCharacter))
}

func (this *ScintillaEdit) AutoCSeparator() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCSeparator(this.h))
}

func (this *ScintillaEdit) AutoCSelect(selectVal string) {
	selectVal_Cstring := C.CString(selectVal)
	defer C.free(unsafe.Pointer(selectVal_Cstring))
	C.ScintillaEdit_AutoCSelect(this.h, selectVal_Cstring)
}

func (this *ScintillaEdit) AutoCSetCancelAtStart(cancel bool) {
	C.ScintillaEdit_AutoCSetCancelAtStart(this.h, (C.bool)(cancel))
}

func (this *ScintillaEdit) AutoCCancelAtStart() bool {
	return (bool)(C.ScintillaEdit_AutoCCancelAtStart(this.h))
}

func (this *ScintillaEdit) AutoCSetFillUps(characterSet string) {
	characterSet_Cstring := C.CString(characterSet)
	defer C.free(unsafe.Pointer(characterSet_Cstring))
	C.ScintillaEdit_AutoCSetFillUps(this.h, characterSet_Cstring)
}

func (this *ScintillaEdit) AutoCSetChooseSingle(chooseSingle bool) {
	C.ScintillaEdit_AutoCSetChooseSingle(this.h, (C.bool)(chooseSingle))
}

func (this *ScintillaEdit) AutoCChooseSingle() bool {
	return (bool)(C.ScintillaEdit_AutoCChooseSingle(this.h))
}

func (this *ScintillaEdit) AutoCSetIgnoreCase(ignoreCase bool) {
	C.ScintillaEdit_AutoCSetIgnoreCase(this.h, (C.bool)(ignoreCase))
}

func (this *ScintillaEdit) AutoCIgnoreCase() bool {
	return (bool)(C.ScintillaEdit_AutoCIgnoreCase(this.h))
}

func (this *ScintillaEdit) UserListShow(listType uintptr, itemList string) {
	itemList_Cstring := C.CString(itemList)
	defer C.free(unsafe.Pointer(itemList_Cstring))
	C.ScintillaEdit_UserListShow(this.h, (C.intptr_t)(listType), itemList_Cstring)
}

func (this *ScintillaEdit) AutoCSetAutoHide(autoHide bool) {
	C.ScintillaEdit_AutoCSetAutoHide(this.h, (C.bool)(autoHide))
}

func (this *ScintillaEdit) AutoCAutoHide() bool {
	return (bool)(C.ScintillaEdit_AutoCAutoHide(this.h))
}

func (this *ScintillaEdit) AutoCSetOptions(options uintptr) {
	C.ScintillaEdit_AutoCSetOptions(this.h, (C.intptr_t)(options))
}

func (this *ScintillaEdit) AutoCOptions() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCOptions(this.h))
}

func (this *ScintillaEdit) AutoCSetDropRestOfWord(dropRestOfWord bool) {
	C.ScintillaEdit_AutoCSetDropRestOfWord(this.h, (C.bool)(dropRestOfWord))
}

func (this *ScintillaEdit) AutoCDropRestOfWord() bool {
	return (bool)(C.ScintillaEdit_AutoCDropRestOfWord(this.h))
}

func (this *ScintillaEdit) RegisterImage(typeVal uintptr, xpmData string) {
	xpmData_Cstring := C.CString(xpmData)
	defer C.free(unsafe.Pointer(xpmData_Cstring))
	C.ScintillaEdit_RegisterImage(this.h, (C.intptr_t)(typeVal), xpmData_Cstring)
}

func (this *ScintillaEdit) ClearRegisteredImages() {
	C.ScintillaEdit_ClearRegisteredImages(this.h)
}

func (this *ScintillaEdit) AutoCTypeSeparator() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCTypeSeparator(this.h))
}

func (this *ScintillaEdit) AutoCSetTypeSeparator(separatorCharacter uintptr) {
	C.ScintillaEdit_AutoCSetTypeSeparator(this.h, (C.intptr_t)(separatorCharacter))
}

func (this *ScintillaEdit) AutoCSetMaxWidth(characterCount uintptr) {
	C.ScintillaEdit_AutoCSetMaxWidth(this.h, (C.intptr_t)(characterCount))
}

func (this *ScintillaEdit) AutoCMaxWidth() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCMaxWidth(this.h))
}

func (this *ScintillaEdit) AutoCSetMaxHeight(rowCount uintptr) {
	C.ScintillaEdit_AutoCSetMaxHeight(this.h, (C.intptr_t)(rowCount))
}

func (this *ScintillaEdit) AutoCMaxHeight() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCMaxHeight(this.h))
}

func (this *ScintillaEdit) AutoCSetStyle(style uintptr) {
	C.ScintillaEdit_AutoCSetStyle(this.h, (C.intptr_t)(style))
}

func (this *ScintillaEdit) AutoCStyle() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCStyle(this.h))
}

func (this *ScintillaEdit) SetIndent(indentSize uintptr) {
	C.ScintillaEdit_SetIndent(this.h, (C.intptr_t)(indentSize))
}

func (this *ScintillaEdit) Indent() uintptr {
	return (uintptr)(C.ScintillaEdit_Indent(this.h))
}

func (this *ScintillaEdit) SetUseTabs(useTabs bool) {
	C.ScintillaEdit_SetUseTabs(this.h, (C.bool)(useTabs))
}

func (this *ScintillaEdit) UseTabs() bool {
	return (bool)(C.ScintillaEdit_UseTabs(this.h))
}

func (this *ScintillaEdit) SetLineIndentation(line uintptr, indentation uintptr) {
	C.ScintillaEdit_SetLineIndentation(this.h, (C.intptr_t)(line), (C.intptr_t)(indentation))
}

func (this *ScintillaEdit) LineIndentation(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineIndentation(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) LineIndentPosition(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineIndentPosition(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) Column(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_Column(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) CountCharacters(start uintptr, end uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CountCharacters(this.h, (C.intptr_t)(start), (C.intptr_t)(end)))
}

func (this *ScintillaEdit) CountCodeUnits(start uintptr, end uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CountCodeUnits(this.h, (C.intptr_t)(start), (C.intptr_t)(end)))
}

func (this *ScintillaEdit) SetHScrollBar(visible bool) {
	C.ScintillaEdit_SetHScrollBar(this.h, (C.bool)(visible))
}

func (this *ScintillaEdit) HScrollBar() bool {
	return (bool)(C.ScintillaEdit_HScrollBar(this.h))
}

func (this *ScintillaEdit) SetIndentationGuides(indentView uintptr) {
	C.ScintillaEdit_SetIndentationGuides(this.h, (C.intptr_t)(indentView))
}

func (this *ScintillaEdit) IndentationGuides() uintptr {
	return (uintptr)(C.ScintillaEdit_IndentationGuides(this.h))
}

func (this *ScintillaEdit) SetHighlightGuide(column uintptr) {
	C.ScintillaEdit_SetHighlightGuide(this.h, (C.intptr_t)(column))
}

func (this *ScintillaEdit) HighlightGuide() uintptr {
	return (uintptr)(C.ScintillaEdit_HighlightGuide(this.h))
}

func (this *ScintillaEdit) LineEndPosition(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineEndPosition(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) CodePage() uintptr {
	return (uintptr)(C.ScintillaEdit_CodePage(this.h))
}

func (this *ScintillaEdit) CaretFore() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretFore(this.h))
}

func (this *ScintillaEdit) ReadOnly() bool {
	return (bool)(C.ScintillaEdit_ReadOnly(this.h))
}

func (this *ScintillaEdit) SetCurrentPos(caret uintptr) {
	C.ScintillaEdit_SetCurrentPos(this.h, (C.intptr_t)(caret))
}

func (this *ScintillaEdit) SetSelectionStart(anchor uintptr) {
	C.ScintillaEdit_SetSelectionStart(this.h, (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) SelectionStart() uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionStart(this.h))
}

func (this *ScintillaEdit) SetSelectionEnd(caret uintptr) {
	C.ScintillaEdit_SetSelectionEnd(this.h, (C.intptr_t)(caret))
}

func (this *ScintillaEdit) SelectionEnd() uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionEnd(this.h))
}

func (this *ScintillaEdit) SetEmptySelection(caret uintptr) {
	C.ScintillaEdit_SetEmptySelection(this.h, (C.intptr_t)(caret))
}

func (this *ScintillaEdit) SetPrintMagnification(magnification uintptr) {
	C.ScintillaEdit_SetPrintMagnification(this.h, (C.intptr_t)(magnification))
}

func (this *ScintillaEdit) PrintMagnification() uintptr {
	return (uintptr)(C.ScintillaEdit_PrintMagnification(this.h))
}

func (this *ScintillaEdit) SetPrintColourMode(mode uintptr) {
	C.ScintillaEdit_SetPrintColourMode(this.h, (C.intptr_t)(mode))
}

func (this *ScintillaEdit) PrintColourMode() uintptr {
	return (uintptr)(C.ScintillaEdit_PrintColourMode(this.h))
}

func (this *ScintillaEdit) SetChangeHistory(changeHistory uintptr) {
	C.ScintillaEdit_SetChangeHistory(this.h, (C.intptr_t)(changeHistory))
}

func (this *ScintillaEdit) ChangeHistory() uintptr {
	return (uintptr)(C.ScintillaEdit_ChangeHistory(this.h))
}

func (this *ScintillaEdit) FirstVisibleLine() uintptr {
	return (uintptr)(C.ScintillaEdit_FirstVisibleLine(this.h))
}

func (this *ScintillaEdit) GetLine(line uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_GetLine(this.h, (C.intptr_t)(line))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) LineCount() uintptr {
	return (uintptr)(C.ScintillaEdit_LineCount(this.h))
}

func (this *ScintillaEdit) AllocateLines(lines uintptr) {
	C.ScintillaEdit_AllocateLines(this.h, (C.intptr_t)(lines))
}

func (this *ScintillaEdit) SetMarginLeft(pixelWidth uintptr) {
	C.ScintillaEdit_SetMarginLeft(this.h, (C.intptr_t)(pixelWidth))
}

func (this *ScintillaEdit) MarginLeft() uintptr {
	return (uintptr)(C.ScintillaEdit_MarginLeft(this.h))
}

func (this *ScintillaEdit) SetMarginRight(pixelWidth uintptr) {
	C.ScintillaEdit_SetMarginRight(this.h, (C.intptr_t)(pixelWidth))
}

func (this *ScintillaEdit) MarginRight() uintptr {
	return (uintptr)(C.ScintillaEdit_MarginRight(this.h))
}

func (this *ScintillaEdit) Modify() bool {
	return (bool)(C.ScintillaEdit_Modify(this.h))
}

func (this *ScintillaEdit) SetSel(anchor uintptr, caret uintptr) {
	C.ScintillaEdit_SetSel(this.h, (C.intptr_t)(anchor), (C.intptr_t)(caret))
}

func (this *ScintillaEdit) GetSelText() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_GetSelText(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) HideSelection(hide bool) {
	C.ScintillaEdit_HideSelection(this.h, (C.bool)(hide))
}

func (this *ScintillaEdit) SelectionHidden() bool {
	return (bool)(C.ScintillaEdit_SelectionHidden(this.h))
}

func (this *ScintillaEdit) PointXFromPosition(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PointXFromPosition(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) PointYFromPosition(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PointYFromPosition(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) LineFromPosition(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineFromPosition(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) PositionFromLine(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionFromLine(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) LineScroll(columns uintptr, lines uintptr) {
	C.ScintillaEdit_LineScroll(this.h, (C.intptr_t)(columns), (C.intptr_t)(lines))
}

func (this *ScintillaEdit) ScrollCaret() {
	C.ScintillaEdit_ScrollCaret(this.h)
}

func (this *ScintillaEdit) ScrollRange(secondary uintptr, primary uintptr) {
	C.ScintillaEdit_ScrollRange(this.h, (C.intptr_t)(secondary), (C.intptr_t)(primary))
}

func (this *ScintillaEdit) ReplaceSel(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_ReplaceSel(this.h, text_Cstring)
}

func (this *ScintillaEdit) SetReadOnly(readOnly bool) {
	C.ScintillaEdit_SetReadOnly(this.h, (C.bool)(readOnly))
}

func (this *ScintillaEdit) Null() {
	C.ScintillaEdit_Null(this.h)
}

func (this *ScintillaEdit) CanPaste() bool {
	return (bool)(C.ScintillaEdit_CanPaste(this.h))
}

func (this *ScintillaEdit) CanUndo() bool {
	return (bool)(C.ScintillaEdit_CanUndo(this.h))
}

func (this *ScintillaEdit) EmptyUndoBuffer() {
	C.ScintillaEdit_EmptyUndoBuffer(this.h)
}

func (this *ScintillaEdit) Undo() {
	C.ScintillaEdit_Undo(this.h)
}

func (this *ScintillaEdit) Cut() {
	C.ScintillaEdit_Cut(this.h)
}

func (this *ScintillaEdit) Copy() {
	C.ScintillaEdit_Copy(this.h)
}

func (this *ScintillaEdit) Paste() {
	C.ScintillaEdit_Paste(this.h)
}

func (this *ScintillaEdit) Clear() {
	C.ScintillaEdit_Clear(this.h)
}

func (this *ScintillaEdit) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_SetText(this.h, text_Cstring)
}

func (this *ScintillaEdit) GetText(length uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_GetText(this.h, (C.intptr_t)(length))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) TextLength() uintptr {
	return (uintptr)(C.ScintillaEdit_TextLength(this.h))
}

func (this *ScintillaEdit) DirectFunction() uintptr {
	return (uintptr)(C.ScintillaEdit_DirectFunction(this.h))
}

func (this *ScintillaEdit) DirectStatusFunction() uintptr {
	return (uintptr)(C.ScintillaEdit_DirectStatusFunction(this.h))
}

func (this *ScintillaEdit) DirectPointer() uintptr {
	return (uintptr)(C.ScintillaEdit_DirectPointer(this.h))
}

func (this *ScintillaEdit) SetOvertype(overType bool) {
	C.ScintillaEdit_SetOvertype(this.h, (C.bool)(overType))
}

func (this *ScintillaEdit) Overtype() bool {
	return (bool)(C.ScintillaEdit_Overtype(this.h))
}

func (this *ScintillaEdit) SetCaretWidth(pixelWidth uintptr) {
	C.ScintillaEdit_SetCaretWidth(this.h, (C.intptr_t)(pixelWidth))
}

func (this *ScintillaEdit) CaretWidth() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretWidth(this.h))
}

func (this *ScintillaEdit) SetTargetStart(start uintptr) {
	C.ScintillaEdit_SetTargetStart(this.h, (C.intptr_t)(start))
}

func (this *ScintillaEdit) TargetStart() uintptr {
	return (uintptr)(C.ScintillaEdit_TargetStart(this.h))
}

func (this *ScintillaEdit) SetTargetStartVirtualSpace(space uintptr) {
	C.ScintillaEdit_SetTargetStartVirtualSpace(this.h, (C.intptr_t)(space))
}

func (this *ScintillaEdit) TargetStartVirtualSpace() uintptr {
	return (uintptr)(C.ScintillaEdit_TargetStartVirtualSpace(this.h))
}

func (this *ScintillaEdit) SetTargetEnd(end uintptr) {
	C.ScintillaEdit_SetTargetEnd(this.h, (C.intptr_t)(end))
}

func (this *ScintillaEdit) TargetEnd() uintptr {
	return (uintptr)(C.ScintillaEdit_TargetEnd(this.h))
}

func (this *ScintillaEdit) SetTargetEndVirtualSpace(space uintptr) {
	C.ScintillaEdit_SetTargetEndVirtualSpace(this.h, (C.intptr_t)(space))
}

func (this *ScintillaEdit) TargetEndVirtualSpace() uintptr {
	return (uintptr)(C.ScintillaEdit_TargetEndVirtualSpace(this.h))
}

func (this *ScintillaEdit) SetTargetRange(start uintptr, end uintptr) {
	C.ScintillaEdit_SetTargetRange(this.h, (C.intptr_t)(start), (C.intptr_t)(end))
}

func (this *ScintillaEdit) TargetText() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_TargetText(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) TargetFromSelection() {
	C.ScintillaEdit_TargetFromSelection(this.h)
}

func (this *ScintillaEdit) TargetWholeDocument() {
	C.ScintillaEdit_TargetWholeDocument(this.h)
}

func (this *ScintillaEdit) ReplaceTarget(length uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_ReplaceTarget(this.h, (C.intptr_t)(length), text_Cstring))
}

func (this *ScintillaEdit) ReplaceTargetRE(length uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_ReplaceTargetRE(this.h, (C.intptr_t)(length), text_Cstring))
}

func (this *ScintillaEdit) ReplaceTargetMinimal(length uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_ReplaceTargetMinimal(this.h, (C.intptr_t)(length), text_Cstring))
}

func (this *ScintillaEdit) SearchInTarget(length uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_SearchInTarget(this.h, (C.intptr_t)(length), text_Cstring))
}

func (this *ScintillaEdit) SetSearchFlags(searchFlags uintptr) {
	C.ScintillaEdit_SetSearchFlags(this.h, (C.intptr_t)(searchFlags))
}

func (this *ScintillaEdit) SearchFlags() uintptr {
	return (uintptr)(C.ScintillaEdit_SearchFlags(this.h))
}

func (this *ScintillaEdit) CallTipShow(pos uintptr, definition string) {
	definition_Cstring := C.CString(definition)
	defer C.free(unsafe.Pointer(definition_Cstring))
	C.ScintillaEdit_CallTipShow(this.h, (C.intptr_t)(pos), definition_Cstring)
}

func (this *ScintillaEdit) CallTipCancel() {
	C.ScintillaEdit_CallTipCancel(this.h)
}

func (this *ScintillaEdit) CallTipActive() bool {
	return (bool)(C.ScintillaEdit_CallTipActive(this.h))
}

func (this *ScintillaEdit) CallTipPosStart() uintptr {
	return (uintptr)(C.ScintillaEdit_CallTipPosStart(this.h))
}

func (this *ScintillaEdit) CallTipSetPosStart(posStart uintptr) {
	C.ScintillaEdit_CallTipSetPosStart(this.h, (C.intptr_t)(posStart))
}

func (this *ScintillaEdit) CallTipSetHlt(highlightStart uintptr, highlightEnd uintptr) {
	C.ScintillaEdit_CallTipSetHlt(this.h, (C.intptr_t)(highlightStart), (C.intptr_t)(highlightEnd))
}

func (this *ScintillaEdit) CallTipSetBack(back uintptr) {
	C.ScintillaEdit_CallTipSetBack(this.h, (C.intptr_t)(back))
}

func (this *ScintillaEdit) CallTipSetFore(fore uintptr) {
	C.ScintillaEdit_CallTipSetFore(this.h, (C.intptr_t)(fore))
}

func (this *ScintillaEdit) CallTipSetForeHlt(fore uintptr) {
	C.ScintillaEdit_CallTipSetForeHlt(this.h, (C.intptr_t)(fore))
}

func (this *ScintillaEdit) CallTipUseStyle(tabSize uintptr) {
	C.ScintillaEdit_CallTipUseStyle(this.h, (C.intptr_t)(tabSize))
}

func (this *ScintillaEdit) CallTipSetPosition(above bool) {
	C.ScintillaEdit_CallTipSetPosition(this.h, (C.bool)(above))
}

func (this *ScintillaEdit) VisibleFromDocLine(docLine uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_VisibleFromDocLine(this.h, (C.intptr_t)(docLine)))
}

func (this *ScintillaEdit) DocLineFromVisible(displayLine uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_DocLineFromVisible(this.h, (C.intptr_t)(displayLine)))
}

func (this *ScintillaEdit) WrapCount(docLine uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_WrapCount(this.h, (C.intptr_t)(docLine)))
}

func (this *ScintillaEdit) SetFoldLevel(line uintptr, level uintptr) {
	C.ScintillaEdit_SetFoldLevel(this.h, (C.intptr_t)(line), (C.intptr_t)(level))
}

func (this *ScintillaEdit) FoldLevel(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_FoldLevel(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) LastChild(line uintptr, level uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LastChild(this.h, (C.intptr_t)(line), (C.intptr_t)(level)))
}

func (this *ScintillaEdit) FoldParent(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_FoldParent(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) ShowLines(lineStart uintptr, lineEnd uintptr) {
	C.ScintillaEdit_ShowLines(this.h, (C.intptr_t)(lineStart), (C.intptr_t)(lineEnd))
}

func (this *ScintillaEdit) HideLines(lineStart uintptr, lineEnd uintptr) {
	C.ScintillaEdit_HideLines(this.h, (C.intptr_t)(lineStart), (C.intptr_t)(lineEnd))
}

func (this *ScintillaEdit) LineVisible(line uintptr) bool {
	return (bool)(C.ScintillaEdit_LineVisible(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) AllLinesVisible() bool {
	return (bool)(C.ScintillaEdit_AllLinesVisible(this.h))
}

func (this *ScintillaEdit) SetFoldExpanded(line uintptr, expanded bool) {
	C.ScintillaEdit_SetFoldExpanded(this.h, (C.intptr_t)(line), (C.bool)(expanded))
}

func (this *ScintillaEdit) FoldExpanded(line uintptr) bool {
	return (bool)(C.ScintillaEdit_FoldExpanded(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) ToggleFold(line uintptr) {
	C.ScintillaEdit_ToggleFold(this.h, (C.intptr_t)(line))
}

func (this *ScintillaEdit) ToggleFoldShowText(line uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_ToggleFoldShowText(this.h, (C.intptr_t)(line), text_Cstring)
}

func (this *ScintillaEdit) FoldDisplayTextSetStyle(style uintptr) {
	C.ScintillaEdit_FoldDisplayTextSetStyle(this.h, (C.intptr_t)(style))
}

func (this *ScintillaEdit) FoldDisplayTextStyle() uintptr {
	return (uintptr)(C.ScintillaEdit_FoldDisplayTextStyle(this.h))
}

func (this *ScintillaEdit) SetDefaultFoldDisplayText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_SetDefaultFoldDisplayText(this.h, text_Cstring)
}

func (this *ScintillaEdit) GetDefaultFoldDisplayText() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_GetDefaultFoldDisplayText(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) FoldLine(line uintptr, action uintptr) {
	C.ScintillaEdit_FoldLine(this.h, (C.intptr_t)(line), (C.intptr_t)(action))
}

func (this *ScintillaEdit) FoldChildren(line uintptr, action uintptr) {
	C.ScintillaEdit_FoldChildren(this.h, (C.intptr_t)(line), (C.intptr_t)(action))
}

func (this *ScintillaEdit) ExpandChildren(line uintptr, level uintptr) {
	C.ScintillaEdit_ExpandChildren(this.h, (C.intptr_t)(line), (C.intptr_t)(level))
}

func (this *ScintillaEdit) FoldAll(action uintptr) {
	C.ScintillaEdit_FoldAll(this.h, (C.intptr_t)(action))
}

func (this *ScintillaEdit) EnsureVisible(line uintptr) {
	C.ScintillaEdit_EnsureVisible(this.h, (C.intptr_t)(line))
}

func (this *ScintillaEdit) SetAutomaticFold(automaticFold uintptr) {
	C.ScintillaEdit_SetAutomaticFold(this.h, (C.intptr_t)(automaticFold))
}

func (this *ScintillaEdit) AutomaticFold() uintptr {
	return (uintptr)(C.ScintillaEdit_AutomaticFold(this.h))
}

func (this *ScintillaEdit) SetFoldFlags(flags uintptr) {
	C.ScintillaEdit_SetFoldFlags(this.h, (C.intptr_t)(flags))
}

func (this *ScintillaEdit) EnsureVisibleEnforcePolicy(line uintptr) {
	C.ScintillaEdit_EnsureVisibleEnforcePolicy(this.h, (C.intptr_t)(line))
}

func (this *ScintillaEdit) SetTabIndents(tabIndents bool) {
	C.ScintillaEdit_SetTabIndents(this.h, (C.bool)(tabIndents))
}

func (this *ScintillaEdit) TabIndents() bool {
	return (bool)(C.ScintillaEdit_TabIndents(this.h))
}

func (this *ScintillaEdit) SetBackSpaceUnIndents(bsUnIndents bool) {
	C.ScintillaEdit_SetBackSpaceUnIndents(this.h, (C.bool)(bsUnIndents))
}

func (this *ScintillaEdit) BackSpaceUnIndents() bool {
	return (bool)(C.ScintillaEdit_BackSpaceUnIndents(this.h))
}

func (this *ScintillaEdit) SetMouseDwellTime(periodMilliseconds uintptr) {
	C.ScintillaEdit_SetMouseDwellTime(this.h, (C.intptr_t)(periodMilliseconds))
}

func (this *ScintillaEdit) MouseDwellTime() uintptr {
	return (uintptr)(C.ScintillaEdit_MouseDwellTime(this.h))
}

func (this *ScintillaEdit) WordStartPosition(pos uintptr, onlyWordCharacters bool) uintptr {
	return (uintptr)(C.ScintillaEdit_WordStartPosition(this.h, (C.intptr_t)(pos), (C.bool)(onlyWordCharacters)))
}

func (this *ScintillaEdit) WordEndPosition(pos uintptr, onlyWordCharacters bool) uintptr {
	return (uintptr)(C.ScintillaEdit_WordEndPosition(this.h, (C.intptr_t)(pos), (C.bool)(onlyWordCharacters)))
}

func (this *ScintillaEdit) IsRangeWord(start uintptr, end uintptr) bool {
	return (bool)(C.ScintillaEdit_IsRangeWord(this.h, (C.intptr_t)(start), (C.intptr_t)(end)))
}

func (this *ScintillaEdit) SetIdleStyling(idleStyling uintptr) {
	C.ScintillaEdit_SetIdleStyling(this.h, (C.intptr_t)(idleStyling))
}

func (this *ScintillaEdit) IdleStyling() uintptr {
	return (uintptr)(C.ScintillaEdit_IdleStyling(this.h))
}

func (this *ScintillaEdit) SetWrapMode(wrapMode uintptr) {
	C.ScintillaEdit_SetWrapMode(this.h, (C.intptr_t)(wrapMode))
}

func (this *ScintillaEdit) WrapMode() uintptr {
	return (uintptr)(C.ScintillaEdit_WrapMode(this.h))
}

func (this *ScintillaEdit) SetWrapVisualFlags(wrapVisualFlags uintptr) {
	C.ScintillaEdit_SetWrapVisualFlags(this.h, (C.intptr_t)(wrapVisualFlags))
}

func (this *ScintillaEdit) WrapVisualFlags() uintptr {
	return (uintptr)(C.ScintillaEdit_WrapVisualFlags(this.h))
}

func (this *ScintillaEdit) SetWrapVisualFlagsLocation(wrapVisualFlagsLocation uintptr) {
	C.ScintillaEdit_SetWrapVisualFlagsLocation(this.h, (C.intptr_t)(wrapVisualFlagsLocation))
}

func (this *ScintillaEdit) WrapVisualFlagsLocation() uintptr {
	return (uintptr)(C.ScintillaEdit_WrapVisualFlagsLocation(this.h))
}

func (this *ScintillaEdit) SetWrapStartIndent(indent uintptr) {
	C.ScintillaEdit_SetWrapStartIndent(this.h, (C.intptr_t)(indent))
}

func (this *ScintillaEdit) WrapStartIndent() uintptr {
	return (uintptr)(C.ScintillaEdit_WrapStartIndent(this.h))
}

func (this *ScintillaEdit) SetWrapIndentMode(wrapIndentMode uintptr) {
	C.ScintillaEdit_SetWrapIndentMode(this.h, (C.intptr_t)(wrapIndentMode))
}

func (this *ScintillaEdit) WrapIndentMode() uintptr {
	return (uintptr)(C.ScintillaEdit_WrapIndentMode(this.h))
}

func (this *ScintillaEdit) SetLayoutCache(cacheMode uintptr) {
	C.ScintillaEdit_SetLayoutCache(this.h, (C.intptr_t)(cacheMode))
}

func (this *ScintillaEdit) LayoutCache() uintptr {
	return (uintptr)(C.ScintillaEdit_LayoutCache(this.h))
}

func (this *ScintillaEdit) SetScrollWidth(pixelWidth uintptr) {
	C.ScintillaEdit_SetScrollWidth(this.h, (C.intptr_t)(pixelWidth))
}

func (this *ScintillaEdit) ScrollWidth() uintptr {
	return (uintptr)(C.ScintillaEdit_ScrollWidth(this.h))
}

func (this *ScintillaEdit) SetScrollWidthTracking(tracking bool) {
	C.ScintillaEdit_SetScrollWidthTracking(this.h, (C.bool)(tracking))
}

func (this *ScintillaEdit) ScrollWidthTracking() bool {
	return (bool)(C.ScintillaEdit_ScrollWidthTracking(this.h))
}

func (this *ScintillaEdit) TextWidth(style uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_TextWidth(this.h, (C.intptr_t)(style), text_Cstring))
}

func (this *ScintillaEdit) SetEndAtLastLine(endAtLastLine bool) {
	C.ScintillaEdit_SetEndAtLastLine(this.h, (C.bool)(endAtLastLine))
}

func (this *ScintillaEdit) EndAtLastLine() bool {
	return (bool)(C.ScintillaEdit_EndAtLastLine(this.h))
}

func (this *ScintillaEdit) TextHeight(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_TextHeight(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) SetVScrollBar(visible bool) {
	C.ScintillaEdit_SetVScrollBar(this.h, (C.bool)(visible))
}

func (this *ScintillaEdit) VScrollBar() bool {
	return (bool)(C.ScintillaEdit_VScrollBar(this.h))
}

func (this *ScintillaEdit) AppendText(length uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_AppendText(this.h, (C.intptr_t)(length), text_Cstring)
}

func (this *ScintillaEdit) PhasesDraw() uintptr {
	return (uintptr)(C.ScintillaEdit_PhasesDraw(this.h))
}

func (this *ScintillaEdit) SetPhasesDraw(phases uintptr) {
	C.ScintillaEdit_SetPhasesDraw(this.h, (C.intptr_t)(phases))
}

func (this *ScintillaEdit) SetFontQuality(fontQuality uintptr) {
	C.ScintillaEdit_SetFontQuality(this.h, (C.intptr_t)(fontQuality))
}

func (this *ScintillaEdit) FontQuality() uintptr {
	return (uintptr)(C.ScintillaEdit_FontQuality(this.h))
}

func (this *ScintillaEdit) SetFirstVisibleLine(displayLine uintptr) {
	C.ScintillaEdit_SetFirstVisibleLine(this.h, (C.intptr_t)(displayLine))
}

func (this *ScintillaEdit) SetMultiPaste(multiPaste uintptr) {
	C.ScintillaEdit_SetMultiPaste(this.h, (C.intptr_t)(multiPaste))
}

func (this *ScintillaEdit) MultiPaste() uintptr {
	return (uintptr)(C.ScintillaEdit_MultiPaste(this.h))
}

func (this *ScintillaEdit) Tag(tagNumber uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_Tag(this.h, (C.intptr_t)(tagNumber))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) LinesJoin() {
	C.ScintillaEdit_LinesJoin(this.h)
}

func (this *ScintillaEdit) LinesSplit(pixelWidth uintptr) {
	C.ScintillaEdit_LinesSplit(this.h, (C.intptr_t)(pixelWidth))
}

func (this *ScintillaEdit) SetFoldMarginColour(useSetting bool, back uintptr) {
	C.ScintillaEdit_SetFoldMarginColour(this.h, (C.bool)(useSetting), (C.intptr_t)(back))
}

func (this *ScintillaEdit) SetFoldMarginHiColour(useSetting bool, fore uintptr) {
	C.ScintillaEdit_SetFoldMarginHiColour(this.h, (C.bool)(useSetting), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) SetAccessibility(accessibility uintptr) {
	C.ScintillaEdit_SetAccessibility(this.h, (C.intptr_t)(accessibility))
}

func (this *ScintillaEdit) Accessibility() uintptr {
	return (uintptr)(C.ScintillaEdit_Accessibility(this.h))
}

func (this *ScintillaEdit) LineDown() {
	C.ScintillaEdit_LineDown(this.h)
}

func (this *ScintillaEdit) LineDownExtend() {
	C.ScintillaEdit_LineDownExtend(this.h)
}

func (this *ScintillaEdit) LineUp() {
	C.ScintillaEdit_LineUp(this.h)
}

func (this *ScintillaEdit) LineUpExtend() {
	C.ScintillaEdit_LineUpExtend(this.h)
}

func (this *ScintillaEdit) CharLeft() {
	C.ScintillaEdit_CharLeft(this.h)
}

func (this *ScintillaEdit) CharLeftExtend() {
	C.ScintillaEdit_CharLeftExtend(this.h)
}

func (this *ScintillaEdit) CharRight() {
	C.ScintillaEdit_CharRight(this.h)
}

func (this *ScintillaEdit) CharRightExtend() {
	C.ScintillaEdit_CharRightExtend(this.h)
}

func (this *ScintillaEdit) WordLeft() {
	C.ScintillaEdit_WordLeft(this.h)
}

func (this *ScintillaEdit) WordLeftExtend() {
	C.ScintillaEdit_WordLeftExtend(this.h)
}

func (this *ScintillaEdit) WordRight() {
	C.ScintillaEdit_WordRight(this.h)
}

func (this *ScintillaEdit) WordRightExtend() {
	C.ScintillaEdit_WordRightExtend(this.h)
}

func (this *ScintillaEdit) Home() {
	C.ScintillaEdit_Home(this.h)
}

func (this *ScintillaEdit) HomeExtend() {
	C.ScintillaEdit_HomeExtend(this.h)
}

func (this *ScintillaEdit) LineEnd() {
	C.ScintillaEdit_LineEnd(this.h)
}

func (this *ScintillaEdit) LineEndExtend() {
	C.ScintillaEdit_LineEndExtend(this.h)
}

func (this *ScintillaEdit) DocumentStart() {
	C.ScintillaEdit_DocumentStart(this.h)
}

func (this *ScintillaEdit) DocumentStartExtend() {
	C.ScintillaEdit_DocumentStartExtend(this.h)
}

func (this *ScintillaEdit) DocumentEnd() {
	C.ScintillaEdit_DocumentEnd(this.h)
}

func (this *ScintillaEdit) DocumentEndExtend() {
	C.ScintillaEdit_DocumentEndExtend(this.h)
}

func (this *ScintillaEdit) PageUp() {
	C.ScintillaEdit_PageUp(this.h)
}

func (this *ScintillaEdit) PageUpExtend() {
	C.ScintillaEdit_PageUpExtend(this.h)
}

func (this *ScintillaEdit) PageDown() {
	C.ScintillaEdit_PageDown(this.h)
}

func (this *ScintillaEdit) PageDownExtend() {
	C.ScintillaEdit_PageDownExtend(this.h)
}

func (this *ScintillaEdit) EditToggleOvertype() {
	C.ScintillaEdit_EditToggleOvertype(this.h)
}

func (this *ScintillaEdit) Cancel() {
	C.ScintillaEdit_Cancel(this.h)
}

func (this *ScintillaEdit) DeleteBack() {
	C.ScintillaEdit_DeleteBack(this.h)
}

func (this *ScintillaEdit) Tab() {
	C.ScintillaEdit_Tab(this.h)
}

func (this *ScintillaEdit) LineIndent() {
	C.ScintillaEdit_LineIndent(this.h)
}

func (this *ScintillaEdit) BackTab() {
	C.ScintillaEdit_BackTab(this.h)
}

func (this *ScintillaEdit) LineDedent() {
	C.ScintillaEdit_LineDedent(this.h)
}

func (this *ScintillaEdit) NewLine() {
	C.ScintillaEdit_NewLine(this.h)
}

func (this *ScintillaEdit) FormFeed() {
	C.ScintillaEdit_FormFeed(this.h)
}

func (this *ScintillaEdit) VCHome() {
	C.ScintillaEdit_VCHome(this.h)
}

func (this *ScintillaEdit) VCHomeExtend() {
	C.ScintillaEdit_VCHomeExtend(this.h)
}

func (this *ScintillaEdit) ZoomIn() {
	C.ScintillaEdit_ZoomIn(this.h)
}

func (this *ScintillaEdit) ZoomOut() {
	C.ScintillaEdit_ZoomOut(this.h)
}

func (this *ScintillaEdit) DelWordLeft() {
	C.ScintillaEdit_DelWordLeft(this.h)
}

func (this *ScintillaEdit) DelWordRight() {
	C.ScintillaEdit_DelWordRight(this.h)
}

func (this *ScintillaEdit) DelWordRightEnd() {
	C.ScintillaEdit_DelWordRightEnd(this.h)
}

func (this *ScintillaEdit) LineCut() {
	C.ScintillaEdit_LineCut(this.h)
}

func (this *ScintillaEdit) LineDelete() {
	C.ScintillaEdit_LineDelete(this.h)
}

func (this *ScintillaEdit) LineTranspose() {
	C.ScintillaEdit_LineTranspose(this.h)
}

func (this *ScintillaEdit) LineReverse() {
	C.ScintillaEdit_LineReverse(this.h)
}

func (this *ScintillaEdit) LineDuplicate() {
	C.ScintillaEdit_LineDuplicate(this.h)
}

func (this *ScintillaEdit) LowerCase() {
	C.ScintillaEdit_LowerCase(this.h)
}

func (this *ScintillaEdit) UpperCase() {
	C.ScintillaEdit_UpperCase(this.h)
}

func (this *ScintillaEdit) LineScrollDown() {
	C.ScintillaEdit_LineScrollDown(this.h)
}

func (this *ScintillaEdit) LineScrollUp() {
	C.ScintillaEdit_LineScrollUp(this.h)
}

func (this *ScintillaEdit) DeleteBackNotLine() {
	C.ScintillaEdit_DeleteBackNotLine(this.h)
}

func (this *ScintillaEdit) HomeDisplay() {
	C.ScintillaEdit_HomeDisplay(this.h)
}

func (this *ScintillaEdit) HomeDisplayExtend() {
	C.ScintillaEdit_HomeDisplayExtend(this.h)
}

func (this *ScintillaEdit) LineEndDisplay() {
	C.ScintillaEdit_LineEndDisplay(this.h)
}

func (this *ScintillaEdit) LineEndDisplayExtend() {
	C.ScintillaEdit_LineEndDisplayExtend(this.h)
}

func (this *ScintillaEdit) HomeWrap() {
	C.ScintillaEdit_HomeWrap(this.h)
}

func (this *ScintillaEdit) HomeWrapExtend() {
	C.ScintillaEdit_HomeWrapExtend(this.h)
}

func (this *ScintillaEdit) LineEndWrap() {
	C.ScintillaEdit_LineEndWrap(this.h)
}

func (this *ScintillaEdit) LineEndWrapExtend() {
	C.ScintillaEdit_LineEndWrapExtend(this.h)
}

func (this *ScintillaEdit) VCHomeWrap() {
	C.ScintillaEdit_VCHomeWrap(this.h)
}

func (this *ScintillaEdit) VCHomeWrapExtend() {
	C.ScintillaEdit_VCHomeWrapExtend(this.h)
}

func (this *ScintillaEdit) LineCopy() {
	C.ScintillaEdit_LineCopy(this.h)
}

func (this *ScintillaEdit) MoveCaretInsideView() {
	C.ScintillaEdit_MoveCaretInsideView(this.h)
}

func (this *ScintillaEdit) LineLength(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineLength(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) BraceHighlight(posA uintptr, posB uintptr) {
	C.ScintillaEdit_BraceHighlight(this.h, (C.intptr_t)(posA), (C.intptr_t)(posB))
}

func (this *ScintillaEdit) BraceHighlightIndicator(useSetting bool, indicator uintptr) {
	C.ScintillaEdit_BraceHighlightIndicator(this.h, (C.bool)(useSetting), (C.intptr_t)(indicator))
}

func (this *ScintillaEdit) BraceBadLight(pos uintptr) {
	C.ScintillaEdit_BraceBadLight(this.h, (C.intptr_t)(pos))
}

func (this *ScintillaEdit) BraceBadLightIndicator(useSetting bool, indicator uintptr) {
	C.ScintillaEdit_BraceBadLightIndicator(this.h, (C.bool)(useSetting), (C.intptr_t)(indicator))
}

func (this *ScintillaEdit) BraceMatch(pos uintptr, maxReStyle uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_BraceMatch(this.h, (C.intptr_t)(pos), (C.intptr_t)(maxReStyle)))
}

func (this *ScintillaEdit) BraceMatchNext(pos uintptr, startPos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_BraceMatchNext(this.h, (C.intptr_t)(pos), (C.intptr_t)(startPos)))
}

func (this *ScintillaEdit) ViewEOL() bool {
	return (bool)(C.ScintillaEdit_ViewEOL(this.h))
}

func (this *ScintillaEdit) SetViewEOL(visible bool) {
	C.ScintillaEdit_SetViewEOL(this.h, (C.bool)(visible))
}

func (this *ScintillaEdit) DocPointer() uintptr {
	return (uintptr)(C.ScintillaEdit_DocPointer(this.h))
}

func (this *ScintillaEdit) SetDocPointer(doc uintptr) {
	C.ScintillaEdit_SetDocPointer(this.h, (C.intptr_t)(doc))
}

func (this *ScintillaEdit) SetModEventMask(eventMask uintptr) {
	C.ScintillaEdit_SetModEventMask(this.h, (C.intptr_t)(eventMask))
}

func (this *ScintillaEdit) EdgeColumn() uintptr {
	return (uintptr)(C.ScintillaEdit_EdgeColumn(this.h))
}

func (this *ScintillaEdit) SetEdgeColumn(column uintptr) {
	C.ScintillaEdit_SetEdgeColumn(this.h, (C.intptr_t)(column))
}

func (this *ScintillaEdit) EdgeMode() uintptr {
	return (uintptr)(C.ScintillaEdit_EdgeMode(this.h))
}

func (this *ScintillaEdit) SetEdgeMode(edgeMode uintptr) {
	C.ScintillaEdit_SetEdgeMode(this.h, (C.intptr_t)(edgeMode))
}

func (this *ScintillaEdit) EdgeColour() uintptr {
	return (uintptr)(C.ScintillaEdit_EdgeColour(this.h))
}

func (this *ScintillaEdit) SetEdgeColour(edgeColour uintptr) {
	C.ScintillaEdit_SetEdgeColour(this.h, (C.intptr_t)(edgeColour))
}

func (this *ScintillaEdit) MultiEdgeAddLine(column uintptr, edgeColour uintptr) {
	C.ScintillaEdit_MultiEdgeAddLine(this.h, (C.intptr_t)(column), (C.intptr_t)(edgeColour))
}

func (this *ScintillaEdit) MultiEdgeClearAll() {
	C.ScintillaEdit_MultiEdgeClearAll(this.h)
}

func (this *ScintillaEdit) MultiEdgeColumn(which uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MultiEdgeColumn(this.h, (C.intptr_t)(which)))
}

func (this *ScintillaEdit) SearchAnchor() {
	C.ScintillaEdit_SearchAnchor(this.h)
}

func (this *ScintillaEdit) SearchNext(searchFlags uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_SearchNext(this.h, (C.intptr_t)(searchFlags), text_Cstring))
}

func (this *ScintillaEdit) SearchPrev(searchFlags uintptr, text string) uintptr {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	return (uintptr)(C.ScintillaEdit_SearchPrev(this.h, (C.intptr_t)(searchFlags), text_Cstring))
}

func (this *ScintillaEdit) LinesOnScreen() uintptr {
	return (uintptr)(C.ScintillaEdit_LinesOnScreen(this.h))
}

func (this *ScintillaEdit) UsePopUp(popUpMode uintptr) {
	C.ScintillaEdit_UsePopUp(this.h, (C.intptr_t)(popUpMode))
}

func (this *ScintillaEdit) SelectionIsRectangle() bool {
	return (bool)(C.ScintillaEdit_SelectionIsRectangle(this.h))
}

func (this *ScintillaEdit) SetZoom(zoomInPoints uintptr) {
	C.ScintillaEdit_SetZoom(this.h, (C.intptr_t)(zoomInPoints))
}

func (this *ScintillaEdit) Zoom() uintptr {
	return (uintptr)(C.ScintillaEdit_Zoom(this.h))
}

func (this *ScintillaEdit) CreateDocument(bytes uintptr, documentOptions uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CreateDocument(this.h, (C.intptr_t)(bytes), (C.intptr_t)(documentOptions)))
}

func (this *ScintillaEdit) AddRefDocument(doc uintptr) {
	C.ScintillaEdit_AddRefDocument(this.h, (C.intptr_t)(doc))
}

func (this *ScintillaEdit) ReleaseDocument(doc uintptr) {
	C.ScintillaEdit_ReleaseDocument(this.h, (C.intptr_t)(doc))
}

func (this *ScintillaEdit) DocumentOptions() uintptr {
	return (uintptr)(C.ScintillaEdit_DocumentOptions(this.h))
}

func (this *ScintillaEdit) ModEventMask() uintptr {
	return (uintptr)(C.ScintillaEdit_ModEventMask(this.h))
}

func (this *ScintillaEdit) SetCommandEvents(commandEvents bool) {
	C.ScintillaEdit_SetCommandEvents(this.h, (C.bool)(commandEvents))
}

func (this *ScintillaEdit) CommandEvents() bool {
	return (bool)(C.ScintillaEdit_CommandEvents(this.h))
}

func (this *ScintillaEdit) SetFocus(focus bool) {
	C.ScintillaEdit_SetFocus(this.h, (C.bool)(focus))
}

func (this *ScintillaEdit) Focus() bool {
	return (bool)(C.ScintillaEdit_Focus(this.h))
}

func (this *ScintillaEdit) SetStatus(status uintptr) {
	C.ScintillaEdit_SetStatus(this.h, (C.intptr_t)(status))
}

func (this *ScintillaEdit) Status() uintptr {
	return (uintptr)(C.ScintillaEdit_Status(this.h))
}

func (this *ScintillaEdit) SetMouseDownCaptures(captures bool) {
	C.ScintillaEdit_SetMouseDownCaptures(this.h, (C.bool)(captures))
}

func (this *ScintillaEdit) MouseDownCaptures() bool {
	return (bool)(C.ScintillaEdit_MouseDownCaptures(this.h))
}

func (this *ScintillaEdit) SetMouseWheelCaptures(captures bool) {
	C.ScintillaEdit_SetMouseWheelCaptures(this.h, (C.bool)(captures))
}

func (this *ScintillaEdit) MouseWheelCaptures() bool {
	return (bool)(C.ScintillaEdit_MouseWheelCaptures(this.h))
}

func (this *ScintillaEdit) SetCursor(cursorType uintptr) {
	C.ScintillaEdit_SetCursor(this.h, (C.intptr_t)(cursorType))
}

func (this *ScintillaEdit) Cursor() uintptr {
	return (uintptr)(C.ScintillaEdit_Cursor(this.h))
}

func (this *ScintillaEdit) SetControlCharSymbol(symbol uintptr) {
	C.ScintillaEdit_SetControlCharSymbol(this.h, (C.intptr_t)(symbol))
}

func (this *ScintillaEdit) ControlCharSymbol() uintptr {
	return (uintptr)(C.ScintillaEdit_ControlCharSymbol(this.h))
}

func (this *ScintillaEdit) WordPartLeft() {
	C.ScintillaEdit_WordPartLeft(this.h)
}

func (this *ScintillaEdit) WordPartLeftExtend() {
	C.ScintillaEdit_WordPartLeftExtend(this.h)
}

func (this *ScintillaEdit) WordPartRight() {
	C.ScintillaEdit_WordPartRight(this.h)
}

func (this *ScintillaEdit) WordPartRightExtend() {
	C.ScintillaEdit_WordPartRightExtend(this.h)
}

func (this *ScintillaEdit) SetVisiblePolicy(visiblePolicy uintptr, visibleSlop uintptr) {
	C.ScintillaEdit_SetVisiblePolicy(this.h, (C.intptr_t)(visiblePolicy), (C.intptr_t)(visibleSlop))
}

func (this *ScintillaEdit) DelLineLeft() {
	C.ScintillaEdit_DelLineLeft(this.h)
}

func (this *ScintillaEdit) DelLineRight() {
	C.ScintillaEdit_DelLineRight(this.h)
}

func (this *ScintillaEdit) SetXOffset(xOffset uintptr) {
	C.ScintillaEdit_SetXOffset(this.h, (C.intptr_t)(xOffset))
}

func (this *ScintillaEdit) XOffset() uintptr {
	return (uintptr)(C.ScintillaEdit_XOffset(this.h))
}

func (this *ScintillaEdit) ChooseCaretX() {
	C.ScintillaEdit_ChooseCaretX(this.h)
}

func (this *ScintillaEdit) GrabFocus() {
	C.ScintillaEdit_GrabFocus(this.h)
}

func (this *ScintillaEdit) SetXCaretPolicy(caretPolicy uintptr, caretSlop uintptr) {
	C.ScintillaEdit_SetXCaretPolicy(this.h, (C.intptr_t)(caretPolicy), (C.intptr_t)(caretSlop))
}

func (this *ScintillaEdit) SetYCaretPolicy(caretPolicy uintptr, caretSlop uintptr) {
	C.ScintillaEdit_SetYCaretPolicy(this.h, (C.intptr_t)(caretPolicy), (C.intptr_t)(caretSlop))
}

func (this *ScintillaEdit) SetPrintWrapMode(wrapMode uintptr) {
	C.ScintillaEdit_SetPrintWrapMode(this.h, (C.intptr_t)(wrapMode))
}

func (this *ScintillaEdit) PrintWrapMode() uintptr {
	return (uintptr)(C.ScintillaEdit_PrintWrapMode(this.h))
}

func (this *ScintillaEdit) SetHotspotActiveFore(useSetting bool, fore uintptr) {
	C.ScintillaEdit_SetHotspotActiveFore(this.h, (C.bool)(useSetting), (C.intptr_t)(fore))
}

func (this *ScintillaEdit) HotspotActiveFore() uintptr {
	return (uintptr)(C.ScintillaEdit_HotspotActiveFore(this.h))
}

func (this *ScintillaEdit) SetHotspotActiveBack(useSetting bool, back uintptr) {
	C.ScintillaEdit_SetHotspotActiveBack(this.h, (C.bool)(useSetting), (C.intptr_t)(back))
}

func (this *ScintillaEdit) HotspotActiveBack() uintptr {
	return (uintptr)(C.ScintillaEdit_HotspotActiveBack(this.h))
}

func (this *ScintillaEdit) SetHotspotActiveUnderline(underline bool) {
	C.ScintillaEdit_SetHotspotActiveUnderline(this.h, (C.bool)(underline))
}

func (this *ScintillaEdit) HotspotActiveUnderline() bool {
	return (bool)(C.ScintillaEdit_HotspotActiveUnderline(this.h))
}

func (this *ScintillaEdit) SetHotspotSingleLine(singleLine bool) {
	C.ScintillaEdit_SetHotspotSingleLine(this.h, (C.bool)(singleLine))
}

func (this *ScintillaEdit) HotspotSingleLine() bool {
	return (bool)(C.ScintillaEdit_HotspotSingleLine(this.h))
}

func (this *ScintillaEdit) ParaDown() {
	C.ScintillaEdit_ParaDown(this.h)
}

func (this *ScintillaEdit) ParaDownExtend() {
	C.ScintillaEdit_ParaDownExtend(this.h)
}

func (this *ScintillaEdit) ParaUp() {
	C.ScintillaEdit_ParaUp(this.h)
}

func (this *ScintillaEdit) ParaUpExtend() {
	C.ScintillaEdit_ParaUpExtend(this.h)
}

func (this *ScintillaEdit) PositionBefore(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionBefore(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) PositionAfter(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionAfter(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) PositionRelative(pos uintptr, relative uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionRelative(this.h, (C.intptr_t)(pos), (C.intptr_t)(relative)))
}

func (this *ScintillaEdit) PositionRelativeCodeUnits(pos uintptr, relative uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PositionRelativeCodeUnits(this.h, (C.intptr_t)(pos), (C.intptr_t)(relative)))
}

func (this *ScintillaEdit) CopyRange(start uintptr, end uintptr) {
	C.ScintillaEdit_CopyRange(this.h, (C.intptr_t)(start), (C.intptr_t)(end))
}

func (this *ScintillaEdit) CopyText(length uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_CopyText(this.h, (C.intptr_t)(length), text_Cstring)
}

func (this *ScintillaEdit) SetSelectionMode(selectionMode uintptr) {
	C.ScintillaEdit_SetSelectionMode(this.h, (C.intptr_t)(selectionMode))
}

func (this *ScintillaEdit) ChangeSelectionMode(selectionMode uintptr) {
	C.ScintillaEdit_ChangeSelectionMode(this.h, (C.intptr_t)(selectionMode))
}

func (this *ScintillaEdit) SelectionMode() uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionMode(this.h))
}

func (this *ScintillaEdit) SetMoveExtendsSelection(moveExtendsSelection bool) {
	C.ScintillaEdit_SetMoveExtendsSelection(this.h, (C.bool)(moveExtendsSelection))
}

func (this *ScintillaEdit) MoveExtendsSelection() bool {
	return (bool)(C.ScintillaEdit_MoveExtendsSelection(this.h))
}

func (this *ScintillaEdit) GetLineSelStartPosition(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_GetLineSelStartPosition(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) GetLineSelEndPosition(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_GetLineSelEndPosition(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) LineDownRectExtend() {
	C.ScintillaEdit_LineDownRectExtend(this.h)
}

func (this *ScintillaEdit) LineUpRectExtend() {
	C.ScintillaEdit_LineUpRectExtend(this.h)
}

func (this *ScintillaEdit) CharLeftRectExtend() {
	C.ScintillaEdit_CharLeftRectExtend(this.h)
}

func (this *ScintillaEdit) CharRightRectExtend() {
	C.ScintillaEdit_CharRightRectExtend(this.h)
}

func (this *ScintillaEdit) HomeRectExtend() {
	C.ScintillaEdit_HomeRectExtend(this.h)
}

func (this *ScintillaEdit) VCHomeRectExtend() {
	C.ScintillaEdit_VCHomeRectExtend(this.h)
}

func (this *ScintillaEdit) LineEndRectExtend() {
	C.ScintillaEdit_LineEndRectExtend(this.h)
}

func (this *ScintillaEdit) PageUpRectExtend() {
	C.ScintillaEdit_PageUpRectExtend(this.h)
}

func (this *ScintillaEdit) PageDownRectExtend() {
	C.ScintillaEdit_PageDownRectExtend(this.h)
}

func (this *ScintillaEdit) StutteredPageUp() {
	C.ScintillaEdit_StutteredPageUp(this.h)
}

func (this *ScintillaEdit) StutteredPageUpExtend() {
	C.ScintillaEdit_StutteredPageUpExtend(this.h)
}

func (this *ScintillaEdit) StutteredPageDown() {
	C.ScintillaEdit_StutteredPageDown(this.h)
}

func (this *ScintillaEdit) StutteredPageDownExtend() {
	C.ScintillaEdit_StutteredPageDownExtend(this.h)
}

func (this *ScintillaEdit) WordLeftEnd() {
	C.ScintillaEdit_WordLeftEnd(this.h)
}

func (this *ScintillaEdit) WordLeftEndExtend() {
	C.ScintillaEdit_WordLeftEndExtend(this.h)
}

func (this *ScintillaEdit) WordRightEnd() {
	C.ScintillaEdit_WordRightEnd(this.h)
}

func (this *ScintillaEdit) WordRightEndExtend() {
	C.ScintillaEdit_WordRightEndExtend(this.h)
}

func (this *ScintillaEdit) SetWhitespaceChars(characters string) {
	characters_Cstring := C.CString(characters)
	defer C.free(unsafe.Pointer(characters_Cstring))
	C.ScintillaEdit_SetWhitespaceChars(this.h, characters_Cstring)
}

func (this *ScintillaEdit) WhitespaceChars() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_WhitespaceChars(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) SetPunctuationChars(characters string) {
	characters_Cstring := C.CString(characters)
	defer C.free(unsafe.Pointer(characters_Cstring))
	C.ScintillaEdit_SetPunctuationChars(this.h, characters_Cstring)
}

func (this *ScintillaEdit) PunctuationChars() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_PunctuationChars(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) SetCharsDefault() {
	C.ScintillaEdit_SetCharsDefault(this.h)
}

func (this *ScintillaEdit) AutoCCurrent() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCCurrent(this.h))
}

func (this *ScintillaEdit) AutoCCurrentText() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_AutoCCurrentText(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) AutoCSetCaseInsensitiveBehaviour(behaviour uintptr) {
	C.ScintillaEdit_AutoCSetCaseInsensitiveBehaviour(this.h, (C.intptr_t)(behaviour))
}

func (this *ScintillaEdit) AutoCCaseInsensitiveBehaviour() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCCaseInsensitiveBehaviour(this.h))
}

func (this *ScintillaEdit) AutoCSetMulti(multi uintptr) {
	C.ScintillaEdit_AutoCSetMulti(this.h, (C.intptr_t)(multi))
}

func (this *ScintillaEdit) AutoCMulti() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCMulti(this.h))
}

func (this *ScintillaEdit) AutoCSetOrder(order uintptr) {
	C.ScintillaEdit_AutoCSetOrder(this.h, (C.intptr_t)(order))
}

func (this *ScintillaEdit) AutoCOrder() uintptr {
	return (uintptr)(C.ScintillaEdit_AutoCOrder(this.h))
}

func (this *ScintillaEdit) Allocate(bytes uintptr) {
	C.ScintillaEdit_Allocate(this.h, (C.intptr_t)(bytes))
}

func (this *ScintillaEdit) TargetAsUTF8() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_TargetAsUTF8(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) SetLengthForEncode(bytes uintptr) {
	C.ScintillaEdit_SetLengthForEncode(this.h, (C.intptr_t)(bytes))
}

func (this *ScintillaEdit) EncodedFromUTF8(utf8 string) []byte {
	utf8_Cstring := C.CString(utf8)
	defer C.free(unsafe.Pointer(utf8_Cstring))
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_EncodedFromUTF8(this.h, utf8_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) FindColumn(line uintptr, column uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_FindColumn(this.h, (C.intptr_t)(line), (C.intptr_t)(column)))
}

func (this *ScintillaEdit) CaretSticky() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretSticky(this.h))
}

func (this *ScintillaEdit) SetCaretSticky(useCaretStickyBehaviour uintptr) {
	C.ScintillaEdit_SetCaretSticky(this.h, (C.intptr_t)(useCaretStickyBehaviour))
}

func (this *ScintillaEdit) ToggleCaretSticky() {
	C.ScintillaEdit_ToggleCaretSticky(this.h)
}

func (this *ScintillaEdit) SetPasteConvertEndings(convert bool) {
	C.ScintillaEdit_SetPasteConvertEndings(this.h, (C.bool)(convert))
}

func (this *ScintillaEdit) PasteConvertEndings() bool {
	return (bool)(C.ScintillaEdit_PasteConvertEndings(this.h))
}

func (this *ScintillaEdit) ReplaceRectangular(length uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_ReplaceRectangular(this.h, (C.intptr_t)(length), text_Cstring)
}

func (this *ScintillaEdit) SelectionDuplicate() {
	C.ScintillaEdit_SelectionDuplicate(this.h)
}

func (this *ScintillaEdit) SetCaretLineBackAlpha(alpha uintptr) {
	C.ScintillaEdit_SetCaretLineBackAlpha(this.h, (C.intptr_t)(alpha))
}

func (this *ScintillaEdit) CaretLineBackAlpha() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretLineBackAlpha(this.h))
}

func (this *ScintillaEdit) SetCaretStyle(caretStyle uintptr) {
	C.ScintillaEdit_SetCaretStyle(this.h, (C.intptr_t)(caretStyle))
}

func (this *ScintillaEdit) CaretStyle() uintptr {
	return (uintptr)(C.ScintillaEdit_CaretStyle(this.h))
}

func (this *ScintillaEdit) SetIndicatorCurrent(indicator uintptr) {
	C.ScintillaEdit_SetIndicatorCurrent(this.h, (C.intptr_t)(indicator))
}

func (this *ScintillaEdit) IndicatorCurrent() uintptr {
	return (uintptr)(C.ScintillaEdit_IndicatorCurrent(this.h))
}

func (this *ScintillaEdit) SetIndicatorValue(value uintptr) {
	C.ScintillaEdit_SetIndicatorValue(this.h, (C.intptr_t)(value))
}

func (this *ScintillaEdit) IndicatorValue() uintptr {
	return (uintptr)(C.ScintillaEdit_IndicatorValue(this.h))
}

func (this *ScintillaEdit) IndicatorFillRange(start uintptr, lengthFill uintptr) {
	C.ScintillaEdit_IndicatorFillRange(this.h, (C.intptr_t)(start), (C.intptr_t)(lengthFill))
}

func (this *ScintillaEdit) IndicatorClearRange(start uintptr, lengthClear uintptr) {
	C.ScintillaEdit_IndicatorClearRange(this.h, (C.intptr_t)(start), (C.intptr_t)(lengthClear))
}

func (this *ScintillaEdit) IndicatorAllOnFor(pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicatorAllOnFor(this.h, (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) IndicatorValueAt(indicator uintptr, pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicatorValueAt(this.h, (C.intptr_t)(indicator), (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) IndicatorStart(indicator uintptr, pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicatorStart(this.h, (C.intptr_t)(indicator), (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) IndicatorEnd(indicator uintptr, pos uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicatorEnd(this.h, (C.intptr_t)(indicator), (C.intptr_t)(pos)))
}

func (this *ScintillaEdit) SetPositionCache(size uintptr) {
	C.ScintillaEdit_SetPositionCache(this.h, (C.intptr_t)(size))
}

func (this *ScintillaEdit) PositionCache() uintptr {
	return (uintptr)(C.ScintillaEdit_PositionCache(this.h))
}

func (this *ScintillaEdit) SetLayoutThreads(threads uintptr) {
	C.ScintillaEdit_SetLayoutThreads(this.h, (C.intptr_t)(threads))
}

func (this *ScintillaEdit) LayoutThreads() uintptr {
	return (uintptr)(C.ScintillaEdit_LayoutThreads(this.h))
}

func (this *ScintillaEdit) CopyAllowLine() {
	C.ScintillaEdit_CopyAllowLine(this.h)
}

func (this *ScintillaEdit) CutAllowLine() {
	C.ScintillaEdit_CutAllowLine(this.h)
}

func (this *ScintillaEdit) SetCopySeparator(separator string) {
	separator_Cstring := C.CString(separator)
	defer C.free(unsafe.Pointer(separator_Cstring))
	C.ScintillaEdit_SetCopySeparator(this.h, separator_Cstring)
}

func (this *ScintillaEdit) CopySeparator() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_CopySeparator(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) CharacterPointer() uintptr {
	return (uintptr)(C.ScintillaEdit_CharacterPointer(this.h))
}

func (this *ScintillaEdit) RangePointer(start uintptr, lengthRange uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_RangePointer(this.h, (C.intptr_t)(start), (C.intptr_t)(lengthRange)))
}

func (this *ScintillaEdit) GapPosition() uintptr {
	return (uintptr)(C.ScintillaEdit_GapPosition(this.h))
}

func (this *ScintillaEdit) IndicSetAlpha(indicator uintptr, alpha uintptr) {
	C.ScintillaEdit_IndicSetAlpha(this.h, (C.intptr_t)(indicator), (C.intptr_t)(alpha))
}

func (this *ScintillaEdit) IndicAlpha(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicAlpha(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) IndicSetOutlineAlpha(indicator uintptr, alpha uintptr) {
	C.ScintillaEdit_IndicSetOutlineAlpha(this.h, (C.intptr_t)(indicator), (C.intptr_t)(alpha))
}

func (this *ScintillaEdit) IndicOutlineAlpha(indicator uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndicOutlineAlpha(this.h, (C.intptr_t)(indicator)))
}

func (this *ScintillaEdit) SetExtraAscent(extraAscent uintptr) {
	C.ScintillaEdit_SetExtraAscent(this.h, (C.intptr_t)(extraAscent))
}

func (this *ScintillaEdit) ExtraAscent() uintptr {
	return (uintptr)(C.ScintillaEdit_ExtraAscent(this.h))
}

func (this *ScintillaEdit) SetExtraDescent(extraDescent uintptr) {
	C.ScintillaEdit_SetExtraDescent(this.h, (C.intptr_t)(extraDescent))
}

func (this *ScintillaEdit) ExtraDescent() uintptr {
	return (uintptr)(C.ScintillaEdit_ExtraDescent(this.h))
}

func (this *ScintillaEdit) MarkerSymbolDefined(markerNumber uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarkerSymbolDefined(this.h, (C.intptr_t)(markerNumber)))
}

func (this *ScintillaEdit) MarginSetText(line uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_MarginSetText(this.h, (C.intptr_t)(line), text_Cstring)
}

func (this *ScintillaEdit) MarginText(line uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_MarginText(this.h, (C.intptr_t)(line))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) MarginSetStyle(line uintptr, style uintptr) {
	C.ScintillaEdit_MarginSetStyle(this.h, (C.intptr_t)(line), (C.intptr_t)(style))
}

func (this *ScintillaEdit) MarginStyle(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_MarginStyle(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) MarginSetStyles(line uintptr, styles string) {
	styles_Cstring := C.CString(styles)
	defer C.free(unsafe.Pointer(styles_Cstring))
	C.ScintillaEdit_MarginSetStyles(this.h, (C.intptr_t)(line), styles_Cstring)
}

func (this *ScintillaEdit) MarginStyles(line uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_MarginStyles(this.h, (C.intptr_t)(line))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) MarginTextClearAll() {
	C.ScintillaEdit_MarginTextClearAll(this.h)
}

func (this *ScintillaEdit) MarginSetStyleOffset(style uintptr) {
	C.ScintillaEdit_MarginSetStyleOffset(this.h, (C.intptr_t)(style))
}

func (this *ScintillaEdit) MarginStyleOffset() uintptr {
	return (uintptr)(C.ScintillaEdit_MarginStyleOffset(this.h))
}

func (this *ScintillaEdit) SetMarginOptions(marginOptions uintptr) {
	C.ScintillaEdit_SetMarginOptions(this.h, (C.intptr_t)(marginOptions))
}

func (this *ScintillaEdit) MarginOptions() uintptr {
	return (uintptr)(C.ScintillaEdit_MarginOptions(this.h))
}

func (this *ScintillaEdit) AnnotationSetText(line uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_AnnotationSetText(this.h, (C.intptr_t)(line), text_Cstring)
}

func (this *ScintillaEdit) AnnotationText(line uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_AnnotationText(this.h, (C.intptr_t)(line))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) AnnotationSetStyle(line uintptr, style uintptr) {
	C.ScintillaEdit_AnnotationSetStyle(this.h, (C.intptr_t)(line), (C.intptr_t)(style))
}

func (this *ScintillaEdit) AnnotationStyle(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_AnnotationStyle(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) AnnotationSetStyles(line uintptr, styles string) {
	styles_Cstring := C.CString(styles)
	defer C.free(unsafe.Pointer(styles_Cstring))
	C.ScintillaEdit_AnnotationSetStyles(this.h, (C.intptr_t)(line), styles_Cstring)
}

func (this *ScintillaEdit) AnnotationStyles(line uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_AnnotationStyles(this.h, (C.intptr_t)(line))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) AnnotationLines(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_AnnotationLines(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) AnnotationClearAll() {
	C.ScintillaEdit_AnnotationClearAll(this.h)
}

func (this *ScintillaEdit) AnnotationSetVisible(visible uintptr) {
	C.ScintillaEdit_AnnotationSetVisible(this.h, (C.intptr_t)(visible))
}

func (this *ScintillaEdit) AnnotationVisible() uintptr {
	return (uintptr)(C.ScintillaEdit_AnnotationVisible(this.h))
}

func (this *ScintillaEdit) AnnotationSetStyleOffset(style uintptr) {
	C.ScintillaEdit_AnnotationSetStyleOffset(this.h, (C.intptr_t)(style))
}

func (this *ScintillaEdit) AnnotationStyleOffset() uintptr {
	return (uintptr)(C.ScintillaEdit_AnnotationStyleOffset(this.h))
}

func (this *ScintillaEdit) ReleaseAllExtendedStyles() {
	C.ScintillaEdit_ReleaseAllExtendedStyles(this.h)
}

func (this *ScintillaEdit) AllocateExtendedStyles(numberStyles uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_AllocateExtendedStyles(this.h, (C.intptr_t)(numberStyles)))
}

func (this *ScintillaEdit) AddUndoAction(token uintptr, flags uintptr) {
	C.ScintillaEdit_AddUndoAction(this.h, (C.intptr_t)(token), (C.intptr_t)(flags))
}

func (this *ScintillaEdit) CharPositionFromPoint(x uintptr, y uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CharPositionFromPoint(this.h, (C.intptr_t)(x), (C.intptr_t)(y)))
}

func (this *ScintillaEdit) CharPositionFromPointClose(x uintptr, y uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CharPositionFromPointClose(this.h, (C.intptr_t)(x), (C.intptr_t)(y)))
}

func (this *ScintillaEdit) SetMouseSelectionRectangularSwitch(mouseSelectionRectangularSwitch bool) {
	C.ScintillaEdit_SetMouseSelectionRectangularSwitch(this.h, (C.bool)(mouseSelectionRectangularSwitch))
}

func (this *ScintillaEdit) MouseSelectionRectangularSwitch() bool {
	return (bool)(C.ScintillaEdit_MouseSelectionRectangularSwitch(this.h))
}

func (this *ScintillaEdit) SetMultipleSelection(multipleSelection bool) {
	C.ScintillaEdit_SetMultipleSelection(this.h, (C.bool)(multipleSelection))
}

func (this *ScintillaEdit) MultipleSelection() bool {
	return (bool)(C.ScintillaEdit_MultipleSelection(this.h))
}

func (this *ScintillaEdit) SetAdditionalSelectionTyping(additionalSelectionTyping bool) {
	C.ScintillaEdit_SetAdditionalSelectionTyping(this.h, (C.bool)(additionalSelectionTyping))
}

func (this *ScintillaEdit) AdditionalSelectionTyping() bool {
	return (bool)(C.ScintillaEdit_AdditionalSelectionTyping(this.h))
}

func (this *ScintillaEdit) SetAdditionalCaretsBlink(additionalCaretsBlink bool) {
	C.ScintillaEdit_SetAdditionalCaretsBlink(this.h, (C.bool)(additionalCaretsBlink))
}

func (this *ScintillaEdit) AdditionalCaretsBlink() bool {
	return (bool)(C.ScintillaEdit_AdditionalCaretsBlink(this.h))
}

func (this *ScintillaEdit) SetAdditionalCaretsVisible(additionalCaretsVisible bool) {
	C.ScintillaEdit_SetAdditionalCaretsVisible(this.h, (C.bool)(additionalCaretsVisible))
}

func (this *ScintillaEdit) AdditionalCaretsVisible() bool {
	return (bool)(C.ScintillaEdit_AdditionalCaretsVisible(this.h))
}

func (this *ScintillaEdit) Selections() uintptr {
	return (uintptr)(C.ScintillaEdit_Selections(this.h))
}

func (this *ScintillaEdit) SelectionEmpty() bool {
	return (bool)(C.ScintillaEdit_SelectionEmpty(this.h))
}

func (this *ScintillaEdit) ClearSelections() {
	C.ScintillaEdit_ClearSelections(this.h)
}

func (this *ScintillaEdit) SetSelection(caret uintptr, anchor uintptr) {
	C.ScintillaEdit_SetSelection(this.h, (C.intptr_t)(caret), (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) AddSelection(caret uintptr, anchor uintptr) {
	C.ScintillaEdit_AddSelection(this.h, (C.intptr_t)(caret), (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) SelectionFromPoint(x uintptr, y uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionFromPoint(this.h, (C.intptr_t)(x), (C.intptr_t)(y)))
}

func (this *ScintillaEdit) DropSelectionN(selection uintptr) {
	C.ScintillaEdit_DropSelectionN(this.h, (C.intptr_t)(selection))
}

func (this *ScintillaEdit) SetMainSelection(selection uintptr) {
	C.ScintillaEdit_SetMainSelection(this.h, (C.intptr_t)(selection))
}

func (this *ScintillaEdit) MainSelection() uintptr {
	return (uintptr)(C.ScintillaEdit_MainSelection(this.h))
}

func (this *ScintillaEdit) SetSelectionNCaret(selection uintptr, caret uintptr) {
	C.ScintillaEdit_SetSelectionNCaret(this.h, (C.intptr_t)(selection), (C.intptr_t)(caret))
}

func (this *ScintillaEdit) SelectionNCaret(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNCaret(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SetSelectionNAnchor(selection uintptr, anchor uintptr) {
	C.ScintillaEdit_SetSelectionNAnchor(this.h, (C.intptr_t)(selection), (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) SelectionNAnchor(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNAnchor(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SetSelectionNCaretVirtualSpace(selection uintptr, space uintptr) {
	C.ScintillaEdit_SetSelectionNCaretVirtualSpace(this.h, (C.intptr_t)(selection), (C.intptr_t)(space))
}

func (this *ScintillaEdit) SelectionNCaretVirtualSpace(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNCaretVirtualSpace(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SetSelectionNAnchorVirtualSpace(selection uintptr, space uintptr) {
	C.ScintillaEdit_SetSelectionNAnchorVirtualSpace(this.h, (C.intptr_t)(selection), (C.intptr_t)(space))
}

func (this *ScintillaEdit) SelectionNAnchorVirtualSpace(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNAnchorVirtualSpace(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SetSelectionNStart(selection uintptr, anchor uintptr) {
	C.ScintillaEdit_SetSelectionNStart(this.h, (C.intptr_t)(selection), (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) SelectionNStart(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNStart(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SelectionNStartVirtualSpace(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNStartVirtualSpace(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SetSelectionNEnd(selection uintptr, caret uintptr) {
	C.ScintillaEdit_SetSelectionNEnd(this.h, (C.intptr_t)(selection), (C.intptr_t)(caret))
}

func (this *ScintillaEdit) SelectionNEndVirtualSpace(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNEndVirtualSpace(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SelectionNEnd(selection uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SelectionNEnd(this.h, (C.intptr_t)(selection)))
}

func (this *ScintillaEdit) SetRectangularSelectionCaret(caret uintptr) {
	C.ScintillaEdit_SetRectangularSelectionCaret(this.h, (C.intptr_t)(caret))
}

func (this *ScintillaEdit) RectangularSelectionCaret() uintptr {
	return (uintptr)(C.ScintillaEdit_RectangularSelectionCaret(this.h))
}

func (this *ScintillaEdit) SetRectangularSelectionAnchor(anchor uintptr) {
	C.ScintillaEdit_SetRectangularSelectionAnchor(this.h, (C.intptr_t)(anchor))
}

func (this *ScintillaEdit) RectangularSelectionAnchor() uintptr {
	return (uintptr)(C.ScintillaEdit_RectangularSelectionAnchor(this.h))
}

func (this *ScintillaEdit) SetRectangularSelectionCaretVirtualSpace(space uintptr) {
	C.ScintillaEdit_SetRectangularSelectionCaretVirtualSpace(this.h, (C.intptr_t)(space))
}

func (this *ScintillaEdit) RectangularSelectionCaretVirtualSpace() uintptr {
	return (uintptr)(C.ScintillaEdit_RectangularSelectionCaretVirtualSpace(this.h))
}

func (this *ScintillaEdit) SetRectangularSelectionAnchorVirtualSpace(space uintptr) {
	C.ScintillaEdit_SetRectangularSelectionAnchorVirtualSpace(this.h, (C.intptr_t)(space))
}

func (this *ScintillaEdit) RectangularSelectionAnchorVirtualSpace() uintptr {
	return (uintptr)(C.ScintillaEdit_RectangularSelectionAnchorVirtualSpace(this.h))
}

func (this *ScintillaEdit) SetVirtualSpaceOptions(virtualSpaceOptions uintptr) {
	C.ScintillaEdit_SetVirtualSpaceOptions(this.h, (C.intptr_t)(virtualSpaceOptions))
}

func (this *ScintillaEdit) VirtualSpaceOptions() uintptr {
	return (uintptr)(C.ScintillaEdit_VirtualSpaceOptions(this.h))
}

func (this *ScintillaEdit) SetRectangularSelectionModifier(modifier uintptr) {
	C.ScintillaEdit_SetRectangularSelectionModifier(this.h, (C.intptr_t)(modifier))
}

func (this *ScintillaEdit) RectangularSelectionModifier() uintptr {
	return (uintptr)(C.ScintillaEdit_RectangularSelectionModifier(this.h))
}

func (this *ScintillaEdit) SetAdditionalSelFore(fore uintptr) {
	C.ScintillaEdit_SetAdditionalSelFore(this.h, (C.intptr_t)(fore))
}

func (this *ScintillaEdit) SetAdditionalSelBack(back uintptr) {
	C.ScintillaEdit_SetAdditionalSelBack(this.h, (C.intptr_t)(back))
}

func (this *ScintillaEdit) SetAdditionalSelAlpha(alpha uintptr) {
	C.ScintillaEdit_SetAdditionalSelAlpha(this.h, (C.intptr_t)(alpha))
}

func (this *ScintillaEdit) AdditionalSelAlpha() uintptr {
	return (uintptr)(C.ScintillaEdit_AdditionalSelAlpha(this.h))
}

func (this *ScintillaEdit) SetAdditionalCaretFore(fore uintptr) {
	C.ScintillaEdit_SetAdditionalCaretFore(this.h, (C.intptr_t)(fore))
}

func (this *ScintillaEdit) AdditionalCaretFore() uintptr {
	return (uintptr)(C.ScintillaEdit_AdditionalCaretFore(this.h))
}

func (this *ScintillaEdit) RotateSelection() {
	C.ScintillaEdit_RotateSelection(this.h)
}

func (this *ScintillaEdit) SwapMainAnchorCaret() {
	C.ScintillaEdit_SwapMainAnchorCaret(this.h)
}

func (this *ScintillaEdit) MultipleSelectAddNext() {
	C.ScintillaEdit_MultipleSelectAddNext(this.h)
}

func (this *ScintillaEdit) MultipleSelectAddEach() {
	C.ScintillaEdit_MultipleSelectAddEach(this.h)
}

func (this *ScintillaEdit) ChangeLexerState(start uintptr, end uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_ChangeLexerState(this.h, (C.intptr_t)(start), (C.intptr_t)(end)))
}

func (this *ScintillaEdit) ContractedFoldNext(lineStart uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_ContractedFoldNext(this.h, (C.intptr_t)(lineStart)))
}

func (this *ScintillaEdit) VerticalCentreCaret() {
	C.ScintillaEdit_VerticalCentreCaret(this.h)
}

func (this *ScintillaEdit) MoveSelectedLinesUp() {
	C.ScintillaEdit_MoveSelectedLinesUp(this.h)
}

func (this *ScintillaEdit) MoveSelectedLinesDown() {
	C.ScintillaEdit_MoveSelectedLinesDown(this.h)
}

func (this *ScintillaEdit) SetIdentifier(identifier uintptr) {
	C.ScintillaEdit_SetIdentifier(this.h, (C.intptr_t)(identifier))
}

func (this *ScintillaEdit) Identifier() uintptr {
	return (uintptr)(C.ScintillaEdit_Identifier(this.h))
}

func (this *ScintillaEdit) RGBAImageSetWidth(width uintptr) {
	C.ScintillaEdit_RGBAImageSetWidth(this.h, (C.intptr_t)(width))
}

func (this *ScintillaEdit) RGBAImageSetHeight(height uintptr) {
	C.ScintillaEdit_RGBAImageSetHeight(this.h, (C.intptr_t)(height))
}

func (this *ScintillaEdit) RGBAImageSetScale(scalePercent uintptr) {
	C.ScintillaEdit_RGBAImageSetScale(this.h, (C.intptr_t)(scalePercent))
}

func (this *ScintillaEdit) MarkerDefineRGBAImage(markerNumber uintptr, pixels string) {
	pixels_Cstring := C.CString(pixels)
	defer C.free(unsafe.Pointer(pixels_Cstring))
	C.ScintillaEdit_MarkerDefineRGBAImage(this.h, (C.intptr_t)(markerNumber), pixels_Cstring)
}

func (this *ScintillaEdit) RegisterRGBAImage(typeVal uintptr, pixels string) {
	pixels_Cstring := C.CString(pixels)
	defer C.free(unsafe.Pointer(pixels_Cstring))
	C.ScintillaEdit_RegisterRGBAImage(this.h, (C.intptr_t)(typeVal), pixels_Cstring)
}

func (this *ScintillaEdit) ScrollToStart() {
	C.ScintillaEdit_ScrollToStart(this.h)
}

func (this *ScintillaEdit) ScrollToEnd() {
	C.ScintillaEdit_ScrollToEnd(this.h)
}

func (this *ScintillaEdit) SetTechnology(technology uintptr) {
	C.ScintillaEdit_SetTechnology(this.h, (C.intptr_t)(technology))
}

func (this *ScintillaEdit) Technology() uintptr {
	return (uintptr)(C.ScintillaEdit_Technology(this.h))
}

func (this *ScintillaEdit) CreateLoader(bytes uintptr, documentOptions uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_CreateLoader(this.h, (C.intptr_t)(bytes), (C.intptr_t)(documentOptions)))
}

func (this *ScintillaEdit) FindIndicatorShow(start uintptr, end uintptr) {
	C.ScintillaEdit_FindIndicatorShow(this.h, (C.intptr_t)(start), (C.intptr_t)(end))
}

func (this *ScintillaEdit) FindIndicatorFlash(start uintptr, end uintptr) {
	C.ScintillaEdit_FindIndicatorFlash(this.h, (C.intptr_t)(start), (C.intptr_t)(end))
}

func (this *ScintillaEdit) FindIndicatorHide() {
	C.ScintillaEdit_FindIndicatorHide(this.h)
}

func (this *ScintillaEdit) VCHomeDisplay() {
	C.ScintillaEdit_VCHomeDisplay(this.h)
}

func (this *ScintillaEdit) VCHomeDisplayExtend() {
	C.ScintillaEdit_VCHomeDisplayExtend(this.h)
}

func (this *ScintillaEdit) CaretLineVisibleAlways() bool {
	return (bool)(C.ScintillaEdit_CaretLineVisibleAlways(this.h))
}

func (this *ScintillaEdit) SetCaretLineVisibleAlways(alwaysVisible bool) {
	C.ScintillaEdit_SetCaretLineVisibleAlways(this.h, (C.bool)(alwaysVisible))
}

func (this *ScintillaEdit) SetLineEndTypesAllowed(lineEndBitSet uintptr) {
	C.ScintillaEdit_SetLineEndTypesAllowed(this.h, (C.intptr_t)(lineEndBitSet))
}

func (this *ScintillaEdit) LineEndTypesAllowed() uintptr {
	return (uintptr)(C.ScintillaEdit_LineEndTypesAllowed(this.h))
}

func (this *ScintillaEdit) LineEndTypesActive() uintptr {
	return (uintptr)(C.ScintillaEdit_LineEndTypesActive(this.h))
}

func (this *ScintillaEdit) SetRepresentation(encodedCharacter string, representation string) {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	representation_Cstring := C.CString(representation)
	defer C.free(unsafe.Pointer(representation_Cstring))
	C.ScintillaEdit_SetRepresentation(this.h, encodedCharacter_Cstring, representation_Cstring)
}

func (this *ScintillaEdit) Representation(encodedCharacter string) []byte {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_Representation(this.h, encodedCharacter_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) ClearRepresentation(encodedCharacter string) {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	C.ScintillaEdit_ClearRepresentation(this.h, encodedCharacter_Cstring)
}

func (this *ScintillaEdit) ClearAllRepresentations() {
	C.ScintillaEdit_ClearAllRepresentations(this.h)
}

func (this *ScintillaEdit) SetRepresentationAppearance(encodedCharacter string, appearance uintptr) {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	C.ScintillaEdit_SetRepresentationAppearance(this.h, encodedCharacter_Cstring, (C.intptr_t)(appearance))
}

func (this *ScintillaEdit) RepresentationAppearance(encodedCharacter string) uintptr {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	return (uintptr)(C.ScintillaEdit_RepresentationAppearance(this.h, encodedCharacter_Cstring))
}

func (this *ScintillaEdit) SetRepresentationColour(encodedCharacter string, colour uintptr) {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	C.ScintillaEdit_SetRepresentationColour(this.h, encodedCharacter_Cstring, (C.intptr_t)(colour))
}

func (this *ScintillaEdit) RepresentationColour(encodedCharacter string) uintptr {
	encodedCharacter_Cstring := C.CString(encodedCharacter)
	defer C.free(unsafe.Pointer(encodedCharacter_Cstring))
	return (uintptr)(C.ScintillaEdit_RepresentationColour(this.h, encodedCharacter_Cstring))
}

func (this *ScintillaEdit) EOLAnnotationSetText(line uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.ScintillaEdit_EOLAnnotationSetText(this.h, (C.intptr_t)(line), text_Cstring)
}

func (this *ScintillaEdit) EOLAnnotationText(line uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_EOLAnnotationText(this.h, (C.intptr_t)(line))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) EOLAnnotationSetStyle(line uintptr, style uintptr) {
	C.ScintillaEdit_EOLAnnotationSetStyle(this.h, (C.intptr_t)(line), (C.intptr_t)(style))
}

func (this *ScintillaEdit) EOLAnnotationStyle(line uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_EOLAnnotationStyle(this.h, (C.intptr_t)(line)))
}

func (this *ScintillaEdit) EOLAnnotationClearAll() {
	C.ScintillaEdit_EOLAnnotationClearAll(this.h)
}

func (this *ScintillaEdit) EOLAnnotationSetVisible(visible uintptr) {
	C.ScintillaEdit_EOLAnnotationSetVisible(this.h, (C.intptr_t)(visible))
}

func (this *ScintillaEdit) EOLAnnotationVisible() uintptr {
	return (uintptr)(C.ScintillaEdit_EOLAnnotationVisible(this.h))
}

func (this *ScintillaEdit) EOLAnnotationSetStyleOffset(style uintptr) {
	C.ScintillaEdit_EOLAnnotationSetStyleOffset(this.h, (C.intptr_t)(style))
}

func (this *ScintillaEdit) EOLAnnotationStyleOffset() uintptr {
	return (uintptr)(C.ScintillaEdit_EOLAnnotationStyleOffset(this.h))
}

func (this *ScintillaEdit) SupportsFeature(feature uintptr) bool {
	return (bool)(C.ScintillaEdit_SupportsFeature(this.h, (C.intptr_t)(feature)))
}

func (this *ScintillaEdit) LineCharacterIndex() uintptr {
	return (uintptr)(C.ScintillaEdit_LineCharacterIndex(this.h))
}

func (this *ScintillaEdit) AllocateLineCharacterIndex(lineCharacterIndex uintptr) {
	C.ScintillaEdit_AllocateLineCharacterIndex(this.h, (C.intptr_t)(lineCharacterIndex))
}

func (this *ScintillaEdit) ReleaseLineCharacterIndex(lineCharacterIndex uintptr) {
	C.ScintillaEdit_ReleaseLineCharacterIndex(this.h, (C.intptr_t)(lineCharacterIndex))
}

func (this *ScintillaEdit) LineFromIndexPosition(pos uintptr, lineCharacterIndex uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_LineFromIndexPosition(this.h, (C.intptr_t)(pos), (C.intptr_t)(lineCharacterIndex)))
}

func (this *ScintillaEdit) IndexPositionFromLine(line uintptr, lineCharacterIndex uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_IndexPositionFromLine(this.h, (C.intptr_t)(line), (C.intptr_t)(lineCharacterIndex)))
}

func (this *ScintillaEdit) StartRecord() {
	C.ScintillaEdit_StartRecord(this.h)
}

func (this *ScintillaEdit) StopRecord() {
	C.ScintillaEdit_StopRecord(this.h)
}

func (this *ScintillaEdit) Lexer() uintptr {
	return (uintptr)(C.ScintillaEdit_Lexer(this.h))
}

func (this *ScintillaEdit) Colourise(start uintptr, end uintptr) {
	C.ScintillaEdit_Colourise(this.h, (C.intptr_t)(start), (C.intptr_t)(end))
}

func (this *ScintillaEdit) SetProperty(key string, value string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.ScintillaEdit_SetProperty(this.h, key_Cstring, value_Cstring)
}

func (this *ScintillaEdit) SetKeyWords(keyWordSet uintptr, keyWords string) {
	keyWords_Cstring := C.CString(keyWords)
	defer C.free(unsafe.Pointer(keyWords_Cstring))
	C.ScintillaEdit_SetKeyWords(this.h, (C.intptr_t)(keyWordSet), keyWords_Cstring)
}

func (this *ScintillaEdit) Property(key string) []byte {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_Property(this.h, key_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) PropertyExpanded(key string) []byte {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_PropertyExpanded(this.h, key_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) PropertyInt(key string, defaultValue uintptr) uintptr {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (uintptr)(C.ScintillaEdit_PropertyInt(this.h, key_Cstring, (C.intptr_t)(defaultValue)))
}

func (this *ScintillaEdit) LexerLanguage() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_LexerLanguage(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) PrivateLexerCall(operation uintptr, pointer uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PrivateLexerCall(this.h, (C.intptr_t)(operation), (C.intptr_t)(pointer)))
}

func (this *ScintillaEdit) PropertyNames() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_PropertyNames(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) PropertyType(name string) uintptr {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (uintptr)(C.ScintillaEdit_PropertyType(this.h, name_Cstring))
}

func (this *ScintillaEdit) DescribeProperty(name string) []byte {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_DescribeProperty(this.h, name_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) DescribeKeyWordSets() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_DescribeKeyWordSets(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) LineEndTypesSupported() uintptr {
	return (uintptr)(C.ScintillaEdit_LineEndTypesSupported(this.h))
}

func (this *ScintillaEdit) AllocateSubStyles(styleBase uintptr, numberStyles uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_AllocateSubStyles(this.h, (C.intptr_t)(styleBase), (C.intptr_t)(numberStyles)))
}

func (this *ScintillaEdit) SubStylesStart(styleBase uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SubStylesStart(this.h, (C.intptr_t)(styleBase)))
}

func (this *ScintillaEdit) SubStylesLength(styleBase uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_SubStylesLength(this.h, (C.intptr_t)(styleBase)))
}

func (this *ScintillaEdit) StyleFromSubStyle(subStyle uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_StyleFromSubStyle(this.h, (C.intptr_t)(subStyle)))
}

func (this *ScintillaEdit) PrimaryStyleFromStyle(style uintptr) uintptr {
	return (uintptr)(C.ScintillaEdit_PrimaryStyleFromStyle(this.h, (C.intptr_t)(style)))
}

func (this *ScintillaEdit) FreeSubStyles() {
	C.ScintillaEdit_FreeSubStyles(this.h)
}

func (this *ScintillaEdit) SetIdentifiers(style uintptr, identifiers string) {
	identifiers_Cstring := C.CString(identifiers)
	defer C.free(unsafe.Pointer(identifiers_Cstring))
	C.ScintillaEdit_SetIdentifiers(this.h, (C.intptr_t)(style), identifiers_Cstring)
}

func (this *ScintillaEdit) DistanceToSecondaryStyles() uintptr {
	return (uintptr)(C.ScintillaEdit_DistanceToSecondaryStyles(this.h))
}

func (this *ScintillaEdit) SubStyleBases() []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_SubStyleBases(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) NamedStyles() uintptr {
	return (uintptr)(C.ScintillaEdit_NamedStyles(this.h))
}

func (this *ScintillaEdit) NameOfStyle(style uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_NameOfStyle(this.h, (C.intptr_t)(style))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) TagsOfStyle(style uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_TagsOfStyle(this.h, (C.intptr_t)(style))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) DescriptionOfStyle(style uintptr) []byte {
	var _bytearray C.struct_miqt_string = C.ScintillaEdit_DescriptionOfStyle(this.h, (C.intptr_t)(style))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *ScintillaEdit) SetILexer(ilexer uintptr) {
	C.ScintillaEdit_SetILexer(this.h, (C.intptr_t)(ilexer))
}

func (this *ScintillaEdit) Bidirectional() uintptr {
	return (uintptr)(C.ScintillaEdit_Bidirectional(this.h))
}

func (this *ScintillaEdit) SetBidirectional(bidirectional uintptr) {
	C.ScintillaEdit_SetBidirectional(this.h, (C.intptr_t)(bidirectional))
}

func ScintillaEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEdit_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func ScintillaEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.ScintillaEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *ScintillaEdit) callVirtualBase_Send(iMessage uint, wParam uintptr, lParam uintptr) uintptr {

	return (uintptr)(C.ScintillaEdit_virtualbase_Send(unsafe.Pointer(this.h), (C.uint)(iMessage), (C.uintptr_t)(wParam), (C.intptr_t)(lParam)))

}
func (this *ScintillaEdit) OnSend(slot func(super func(iMessage uint, wParam uintptr, lParam uintptr) uintptr, iMessage uint, wParam uintptr, lParam uintptr) uintptr) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_Send(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_Send
func miqt_exec_callback_ScintillaEdit_Send(self *C.ScintillaEdit, cb C.intptr_t, iMessage C.uint, wParam C.uintptr_t, lParam C.intptr_t) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(iMessage uint, wParam uintptr, lParam uintptr) uintptr, iMessage uint, wParam uintptr, lParam uintptr) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint)(iMessage)

	slotval2 := (uintptr)(wParam)

	slotval3 := (uintptr)(lParam)

	virtualReturn := gofunc((&ScintillaEdit{h: self}).callVirtualBase_Send, slotval1, slotval2, slotval3)

	return (C.intptr_t)(virtualReturn)

}

func (this *ScintillaEdit) callVirtualBase_Sends(iMessage uint, wParam uintptr, s string) uintptr {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))

	return (uintptr)(C.ScintillaEdit_virtualbase_Sends(unsafe.Pointer(this.h), (C.uint)(iMessage), (C.uintptr_t)(wParam), s_Cstring))

}
func (this *ScintillaEdit) OnSends(slot func(super func(iMessage uint, wParam uintptr, s string) uintptr, iMessage uint, wParam uintptr, s string) uintptr) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_Sends(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_Sends
func miqt_exec_callback_ScintillaEdit_Sends(self *C.ScintillaEdit, cb C.intptr_t, iMessage C.uint, wParam C.uintptr_t, s *C.const_char) C.intptr_t {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(iMessage uint, wParam uintptr, s string) uintptr, iMessage uint, wParam uintptr, s string) uintptr)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint)(iMessage)

	slotval2 := (uintptr)(wParam)

	s_ret := s
	slotval3 := C.GoString(s_ret)

	virtualReturn := gofunc((&ScintillaEdit{h: self}).callVirtualBase_Sends, slotval1, slotval2, slotval3)

	return (C.intptr_t)(virtualReturn)

}

func (this *ScintillaEdit) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.ScintillaEdit_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *ScintillaEdit) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_Event
func miqt_exec_callback_ScintillaEdit_Event(self *C.ScintillaEdit, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&ScintillaEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *ScintillaEdit) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.ScintillaEdit_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_PaintEvent
func miqt_exec_callback_ScintillaEdit_PaintEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.ScintillaEdit_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_WheelEvent
func miqt_exec_callback_ScintillaEdit_WheelEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.ScintillaEdit_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_FocusInEvent
func miqt_exec_callback_ScintillaEdit_FocusInEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.ScintillaEdit_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_FocusOutEvent
func miqt_exec_callback_ScintillaEdit_FocusOutEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.ScintillaEdit_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_ResizeEvent
func miqt_exec_callback_ScintillaEdit_ResizeEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.ScintillaEdit_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_KeyPressEvent
func miqt_exec_callback_ScintillaEdit_KeyPressEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.ScintillaEdit_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_MousePressEvent
func miqt_exec_callback_ScintillaEdit_MousePressEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.ScintillaEdit_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_MouseReleaseEvent
func miqt_exec_callback_ScintillaEdit_MouseReleaseEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.ScintillaEdit_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_MouseDoubleClickEvent
func miqt_exec_callback_ScintillaEdit_MouseDoubleClickEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.ScintillaEdit_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_MouseMoveEvent
func miqt_exec_callback_ScintillaEdit_MouseMoveEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.ScintillaEdit_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_ContextMenuEvent
func miqt_exec_callback_ScintillaEdit_ContextMenuEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.ScintillaEdit_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_DragEnterEvent
func miqt_exec_callback_ScintillaEdit_DragEnterEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.ScintillaEdit_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_DragLeaveEvent
func miqt_exec_callback_ScintillaEdit_DragLeaveEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.ScintillaEdit_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_DragMoveEvent
func miqt_exec_callback_ScintillaEdit_DragMoveEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.ScintillaEdit_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_DropEvent
func miqt_exec_callback_ScintillaEdit_DropEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_InputMethodEvent(event *qt.QInputMethodEvent) {

	C.ScintillaEdit_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *ScintillaEdit) OnInputMethodEvent(slot func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_InputMethodEvent
func miqt_exec_callback_ScintillaEdit_InputMethodEvent(self *C.ScintillaEdit, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *ScintillaEdit) callVirtualBase_InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.ScintillaEdit_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *ScintillaEdit) OnInputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_InputMethodQuery
func miqt_exec_callback_ScintillaEdit_InputMethodQuery(self *C.ScintillaEdit, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(query)

	virtualReturn := gofunc((&ScintillaEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *ScintillaEdit) callVirtualBase_ScrollContentsBy(param1 int, param2 int) {

	C.ScintillaEdit_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(param1), (C.int)(param2))

}
func (this *ScintillaEdit) OnScrollContentsBy(slot func(super func(param1 int, param2 int), param1 int, param2 int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.ScintillaEdit_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_ScintillaEdit_ScrollContentsBy
func miqt_exec_callback_ScintillaEdit_ScrollContentsBy(self *C.ScintillaEdit, cb C.intptr_t, param1 C.int, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int, param2 int), param1 int, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (int)(param2)

	gofunc((&ScintillaEdit{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *ScintillaEdit) Delete() {
	C.ScintillaEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *ScintillaEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *ScintillaEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
