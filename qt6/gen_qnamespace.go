package qt6

/*

#include "gen_qnamespace.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type GlobalColor int

const (
	Color0      GlobalColor = 0
	Color1      GlobalColor = 1
	Black       GlobalColor = 2
	White       GlobalColor = 3
	DarkGray    GlobalColor = 4
	Gray        GlobalColor = 5
	LightGray   GlobalColor = 6
	Red         GlobalColor = 7
	Green       GlobalColor = 8
	Blue        GlobalColor = 9
	Cyan        GlobalColor = 10
	Magenta     GlobalColor = 11
	Yellow      GlobalColor = 12
	DarkRed     GlobalColor = 13
	DarkGreen   GlobalColor = 14
	DarkBlue    GlobalColor = 15
	DarkCyan    GlobalColor = 16
	DarkMagenta GlobalColor = 17
	DarkYellow  GlobalColor = 18
	Transparent GlobalColor = 19
)

type MouseButton int

const (
	NoButton       MouseButton = 0
	LeftButton     MouseButton = 1
	RightButton    MouseButton = 2
	MiddleButton   MouseButton = 4
	BackButton     MouseButton = 8
	XButton1       MouseButton = 8
	ExtraButton1   MouseButton = 8
	ForwardButton  MouseButton = 16
	XButton2       MouseButton = 16
	ExtraButton2   MouseButton = 16
	TaskButton     MouseButton = 32
	ExtraButton3   MouseButton = 32
	ExtraButton4   MouseButton = 64
	ExtraButton5   MouseButton = 128
	ExtraButton6   MouseButton = 256
	ExtraButton7   MouseButton = 512
	ExtraButton8   MouseButton = 1024
	ExtraButton9   MouseButton = 2048
	ExtraButton10  MouseButton = 4096
	ExtraButton11  MouseButton = 8192
	ExtraButton12  MouseButton = 16384
	ExtraButton13  MouseButton = 32768
	ExtraButton14  MouseButton = 65536
	ExtraButton15  MouseButton = 131072
	ExtraButton16  MouseButton = 262144
	ExtraButton17  MouseButton = 524288
	ExtraButton18  MouseButton = 1048576
	ExtraButton19  MouseButton = 2097152
	ExtraButton20  MouseButton = 4194304
	ExtraButton21  MouseButton = 8388608
	ExtraButton22  MouseButton = 16777216
	ExtraButton23  MouseButton = 33554432
	ExtraButton24  MouseButton = 67108864
	AllButtons     MouseButton = 134217727
	MaxMouseButton MouseButton = 67108864
)

type Orientation int

const (
	Horizontal Orientation = 1
	Vertical   Orientation = 2
)

type FocusPolicy int

const (
	NoFocus     FocusPolicy = 0
	TabFocus    FocusPolicy = 1
	ClickFocus  FocusPolicy = 2
	StrongFocus FocusPolicy = 11
	WheelFocus  FocusPolicy = 15
)

type TabFocusBehavior int

const (
	NoTabFocus           TabFocusBehavior = 0
	TabFocusTextControls TabFocusBehavior = 1
	TabFocusListControls TabFocusBehavior = 2
	TabFocusAllControls  TabFocusBehavior = 255
)

type SortOrder int

const (
	AscendingOrder  SortOrder = 0
	DescendingOrder SortOrder = 1
)

type SplitBehaviorFlags int

const (
	KeepEmptyParts SplitBehaviorFlags = 0
	SkipEmptyParts SplitBehaviorFlags = 1
)

type TileRule int

const (
	StretchTile TileRule = 0
	RepeatTile  TileRule = 1
	RoundTile   TileRule = 2
)

type AlignmentFlag int

const (
	AlignLeft            AlignmentFlag = 1
	AlignLeading         AlignmentFlag = 1
	AlignRight           AlignmentFlag = 2
	AlignTrailing        AlignmentFlag = 2
	AlignHCenter         AlignmentFlag = 4
	AlignJustify         AlignmentFlag = 8
	AlignAbsolute        AlignmentFlag = 16
	AlignHorizontal_Mask AlignmentFlag = 31
	AlignTop             AlignmentFlag = 32
	AlignBottom          AlignmentFlag = 64
	AlignVCenter         AlignmentFlag = 128
	AlignBaseline        AlignmentFlag = 256
	AlignVertical_Mask   AlignmentFlag = 480
	AlignCenter          AlignmentFlag = 132
)

type TextFlag int

const (
	TextSingleLine            TextFlag = 256
	TextDontClip              TextFlag = 512
	TextExpandTabs            TextFlag = 1024
	TextShowMnemonic          TextFlag = 2048
	TextWordWrap              TextFlag = 4096
	TextWrapAnywhere          TextFlag = 8192
	TextDontPrint             TextFlag = 16384
	TextIncludeTrailingSpaces TextFlag = 134217728
	TextHideMnemonic          TextFlag = 32768
	TextJustificationForced   TextFlag = 65536
	TextForceLeftToRight      TextFlag = 131072
	TextForceRightToLeft      TextFlag = 262144
	TextLongestVariant        TextFlag = 524288
)

type TextElideMode int

const (
	ElideLeft   TextElideMode = 0
	ElideRight  TextElideMode = 1
	ElideMiddle TextElideMode = 2
	ElideNone   TextElideMode = 3
)

type WhiteSpaceMode int

const (
	WhiteSpaceNormal        WhiteSpaceMode = 0
	WhiteSpacePre           WhiteSpaceMode = 1
	WhiteSpaceNoWrap        WhiteSpaceMode = 2
	WhiteSpaceModeUndefined WhiteSpaceMode = -1
)

type HitTestAccuracy int

const (
	ExactHit HitTestAccuracy = 0
	FuzzyHit HitTestAccuracy = 1
)

type WindowType int

const (
	Widget                              WindowType = 0
	Window                              WindowType = 1
	Dialog                              WindowType = 3
	Sheet                               WindowType = 5
	Drawer                              WindowType = 7
	Popup                               WindowType = 9
	Tool                                WindowType = 11
	ToolTip                             WindowType = 13
	SplashScreen                        WindowType = 15
	Desktop                             WindowType = 17
	SubWindow                           WindowType = 18
	ForeignWindow                       WindowType = 33
	CoverWindow                         WindowType = 65
	WindowType_Mask                     WindowType = 255
	MSWindowsFixedSizeDialogHint        WindowType = 256
	MSWindowsOwnDC                      WindowType = 512
	BypassWindowManagerHint             WindowType = 1024
	X11BypassWindowManagerHint          WindowType = 1024
	FramelessWindowHint                 WindowType = 2048
	WindowTitleHint                     WindowType = 4096
	WindowSystemMenuHint                WindowType = 8192
	WindowMinimizeButtonHint            WindowType = 16384
	WindowMaximizeButtonHint            WindowType = 32768
	WindowMinMaxButtonsHint             WindowType = 49152
	WindowContextHelpButtonHint         WindowType = 65536
	WindowShadeButtonHint               WindowType = 131072
	WindowStaysOnTopHint                WindowType = 262144
	WindowTransparentForInput           WindowType = 524288
	WindowOverridesSystemGestures       WindowType = 1048576
	WindowDoesNotAcceptFocus            WindowType = 2097152
	MaximizeUsingFullscreenGeometryHint WindowType = 4194304
	CustomizeWindowHint                 WindowType = 33554432
	WindowStaysOnBottomHint             WindowType = 67108864
	WindowCloseButtonHint               WindowType = 134217728
	MacWindowToolBarButtonHint          WindowType = 268435456
	BypassGraphicsProxyWidget           WindowType = 536870912
	NoDropShadowWindowHint              WindowType = 1073741824
)

type WindowState int

const (
	WindowNoState    WindowState = 0
	WindowMinimized  WindowState = 1
	WindowMaximized  WindowState = 2
	WindowFullScreen WindowState = 4
	WindowActive     WindowState = 8
)

type ApplicationState int

const (
	ApplicationSuspended ApplicationState = 0
	ApplicationHidden    ApplicationState = 1
	ApplicationInactive  ApplicationState = 2
	ApplicationActive    ApplicationState = 4
)

type ScreenOrientation int

const (
	PrimaryOrientation           ScreenOrientation = 0
	PortraitOrientation          ScreenOrientation = 1
	LandscapeOrientation         ScreenOrientation = 2
	InvertedPortraitOrientation  ScreenOrientation = 4
	InvertedLandscapeOrientation ScreenOrientation = 8
)

type WidgetAttribute int

const (
	WA_Disabled                        WidgetAttribute = 0
	WA_UnderMouse                      WidgetAttribute = 1
	WA_MouseTracking                   WidgetAttribute = 2
	WA_OpaquePaintEvent                WidgetAttribute = 4
	WA_StaticContents                  WidgetAttribute = 5
	WA_LaidOut                         WidgetAttribute = 7
	WA_PaintOnScreen                   WidgetAttribute = 8
	WA_NoSystemBackground              WidgetAttribute = 9
	WA_UpdatesDisabled                 WidgetAttribute = 10
	WA_Mapped                          WidgetAttribute = 11
	WA_InputMethodEnabled              WidgetAttribute = 14
	WA_WState_Visible                  WidgetAttribute = 15
	WA_WState_Hidden                   WidgetAttribute = 16
	WA_ForceDisabled                   WidgetAttribute = 32
	WA_KeyCompression                  WidgetAttribute = 33
	WA_PendingMoveEvent                WidgetAttribute = 34
	WA_PendingResizeEvent              WidgetAttribute = 35
	WA_SetPalette                      WidgetAttribute = 36
	WA_SetFont                         WidgetAttribute = 37
	WA_SetCursor                       WidgetAttribute = 38
	WA_NoChildEventsFromChildren       WidgetAttribute = 39
	WA_WindowModified                  WidgetAttribute = 41
	WA_Resized                         WidgetAttribute = 42
	WA_Moved                           WidgetAttribute = 43
	WA_PendingUpdate                   WidgetAttribute = 44
	WA_InvalidSize                     WidgetAttribute = 45
	WA_CustomWhatsThis                 WidgetAttribute = 47
	WA_LayoutOnEntireRect              WidgetAttribute = 48
	WA_OutsideWSRange                  WidgetAttribute = 49
	WA_GrabbedShortcut                 WidgetAttribute = 50
	WA_TransparentForMouseEvents       WidgetAttribute = 51
	WA_PaintUnclipped                  WidgetAttribute = 52
	WA_SetWindowIcon                   WidgetAttribute = 53
	WA_NoMouseReplay                   WidgetAttribute = 54
	WA_DeleteOnClose                   WidgetAttribute = 55
	WA_RightToLeft                     WidgetAttribute = 56
	WA_SetLayoutDirection              WidgetAttribute = 57
	WA_NoChildEventsForParent          WidgetAttribute = 58
	WA_ForceUpdatesDisabled            WidgetAttribute = 59
	WA_WState_Created                  WidgetAttribute = 60
	WA_WState_CompressKeys             WidgetAttribute = 61
	WA_WState_InPaintEvent             WidgetAttribute = 62
	WA_WState_Reparented               WidgetAttribute = 63
	WA_WState_ConfigPending            WidgetAttribute = 64
	WA_WState_Polished                 WidgetAttribute = 66
	WA_WState_OwnSizePolicy            WidgetAttribute = 68
	WA_WState_ExplicitShowHide         WidgetAttribute = 69
	WA_ShowModal                       WidgetAttribute = 70
	WA_MouseNoMask                     WidgetAttribute = 71
	WA_NoMousePropagation              WidgetAttribute = 73
	WA_Hover                           WidgetAttribute = 74
	WA_InputMethodTransparent          WidgetAttribute = 75
	WA_QuitOnClose                     WidgetAttribute = 76
	WA_KeyboardFocusChange             WidgetAttribute = 77
	WA_AcceptDrops                     WidgetAttribute = 78
	WA_DropSiteRegistered              WidgetAttribute = 79
	WA_WindowPropagation               WidgetAttribute = 80
	WA_NoX11EventCompression           WidgetAttribute = 81
	WA_TintedBackground                WidgetAttribute = 82
	WA_X11OpenGLOverlay                WidgetAttribute = 83
	WA_AlwaysShowToolTips              WidgetAttribute = 84
	WA_MacOpaqueSizeGrip               WidgetAttribute = 85
	WA_SetStyle                        WidgetAttribute = 86
	WA_SetLocale                       WidgetAttribute = 87
	WA_MacShowFocusRect                WidgetAttribute = 88
	WA_MacNormalSize                   WidgetAttribute = 89
	WA_MacSmallSize                    WidgetAttribute = 90
	WA_MacMiniSize                     WidgetAttribute = 91
	WA_LayoutUsesWidgetRect            WidgetAttribute = 92
	WA_StyledBackground                WidgetAttribute = 93
	WA_CanHostQMdiSubWindowTitleBar    WidgetAttribute = 95
	WA_MacAlwaysShowToolWindow         WidgetAttribute = 96
	WA_StyleSheet                      WidgetAttribute = 97
	WA_ShowWithoutActivating           WidgetAttribute = 98
	WA_X11BypassTransientForHint       WidgetAttribute = 99
	WA_NativeWindow                    WidgetAttribute = 100
	WA_DontCreateNativeAncestors       WidgetAttribute = 101
	WA_DontShowOnScreen                WidgetAttribute = 103
	WA_X11NetWmWindowTypeDesktop       WidgetAttribute = 104
	WA_X11NetWmWindowTypeDock          WidgetAttribute = 105
	WA_X11NetWmWindowTypeToolBar       WidgetAttribute = 106
	WA_X11NetWmWindowTypeMenu          WidgetAttribute = 107
	WA_X11NetWmWindowTypeUtility       WidgetAttribute = 108
	WA_X11NetWmWindowTypeSplash        WidgetAttribute = 109
	WA_X11NetWmWindowTypeDialog        WidgetAttribute = 110
	WA_X11NetWmWindowTypeDropDownMenu  WidgetAttribute = 111
	WA_X11NetWmWindowTypePopupMenu     WidgetAttribute = 112
	WA_X11NetWmWindowTypeToolTip       WidgetAttribute = 113
	WA_X11NetWmWindowTypeNotification  WidgetAttribute = 114
	WA_X11NetWmWindowTypeCombo         WidgetAttribute = 115
	WA_X11NetWmWindowTypeDND           WidgetAttribute = 116
	WA_SetWindowModality               WidgetAttribute = 118
	WA_WState_WindowOpacitySet         WidgetAttribute = 119
	WA_TranslucentBackground           WidgetAttribute = 120
	WA_AcceptTouchEvents               WidgetAttribute = 121
	WA_WState_AcceptedTouchBeginEvent  WidgetAttribute = 122
	WA_TouchPadAcceptSingleTouchEvents WidgetAttribute = 123
	WA_X11DoNotAcceptFocus             WidgetAttribute = 126
	WA_AlwaysStackOnTop                WidgetAttribute = 128
	WA_TabletTracking                  WidgetAttribute = 129
	WA_ContentsMarginsRespectsSafeArea WidgetAttribute = 130
	WA_StyleSheetTarget                WidgetAttribute = 131
	WA_AttributeCount                  WidgetAttribute = 132
)

type ApplicationAttribute int

const (
	AA_DontShowIconsInMenus                    ApplicationAttribute = 2
	AA_NativeWindows                           ApplicationAttribute = 3
	AA_DontCreateNativeWidgetSiblings          ApplicationAttribute = 4
	AA_PluginApplication                       ApplicationAttribute = 5
	AA_DontUseNativeMenuBar                    ApplicationAttribute = 6
	AA_MacDontSwapCtrlAndMeta                  ApplicationAttribute = 7
	AA_Use96Dpi                                ApplicationAttribute = 8
	AA_DisableNativeVirtualKeyboard            ApplicationAttribute = 9
	AA_SynthesizeTouchForUnhandledMouseEvents  ApplicationAttribute = 11
	AA_SynthesizeMouseForUnhandledTouchEvents  ApplicationAttribute = 12
	AA_UseHighDpiPixmaps                       ApplicationAttribute = 13
	AA_ForceRasterWidgets                      ApplicationAttribute = 14
	AA_UseDesktopOpenGL                        ApplicationAttribute = 15
	AA_UseOpenGLES                             ApplicationAttribute = 16
	AA_UseSoftwareOpenGL                       ApplicationAttribute = 17
	AA_ShareOpenGLContexts                     ApplicationAttribute = 18
	AA_SetPalette                              ApplicationAttribute = 19
	AA_EnableHighDpiScaling                    ApplicationAttribute = 20
	AA_DisableHighDpiScaling                   ApplicationAttribute = 21
	AA_UseStyleSheetPropagationInWidgetStyles  ApplicationAttribute = 22
	AA_DontUseNativeDialogs                    ApplicationAttribute = 23
	AA_SynthesizeMouseForUnhandledTabletEvents ApplicationAttribute = 24
	AA_CompressHighFrequencyEvents             ApplicationAttribute = 25
	AA_DontCheckOpenGLContextThreadAffinity    ApplicationAttribute = 26
	AA_DisableShaderDiskCache                  ApplicationAttribute = 27
	AA_DontShowShortcutsInContextMenus         ApplicationAttribute = 28
	AA_CompressTabletEvents                    ApplicationAttribute = 29
	AA_DisableSessionManager                   ApplicationAttribute = 31
	AA_AttributeCount                          ApplicationAttribute = 32
)

type ImageConversionFlag int

const (
	ColorMode_Mask       ImageConversionFlag = 3
	AutoColor            ImageConversionFlag = 0
	ColorOnly            ImageConversionFlag = 3
	MonoOnly             ImageConversionFlag = 2
	AlphaDither_Mask     ImageConversionFlag = 12
	ThresholdAlphaDither ImageConversionFlag = 0
	OrderedAlphaDither   ImageConversionFlag = 4
	DiffuseAlphaDither   ImageConversionFlag = 8
	NoAlpha              ImageConversionFlag = 12
	Dither_Mask          ImageConversionFlag = 48
	DiffuseDither        ImageConversionFlag = 0
	OrderedDither        ImageConversionFlag = 16
	ThresholdDither      ImageConversionFlag = 32
	DitherMode_Mask      ImageConversionFlag = 192
	AutoDither           ImageConversionFlag = 0
	PreferDither         ImageConversionFlag = 64
	AvoidDither          ImageConversionFlag = 128
	NoOpaqueDetection    ImageConversionFlag = 256
	NoFormatConversion   ImageConversionFlag = 512
)

type BGMode int

const (
	TransparentMode BGMode = 0
	OpaqueMode      BGMode = 1
)

type Key int

const (
	Key_Space                   Key = 32
	Key_Any                     Key = 32
	Key_Exclam                  Key = 33
	Key_QuoteDbl                Key = 34
	Key_NumberSign              Key = 35
	Key_Dollar                  Key = 36
	Key_Percent                 Key = 37
	Key_Ampersand               Key = 38
	Key_Apostrophe              Key = 39
	Key_ParenLeft               Key = 40
	Key_ParenRight              Key = 41
	Key_Asterisk                Key = 42
	Key_Plus                    Key = 43
	Key_Comma                   Key = 44
	Key_Minus                   Key = 45
	Key_Period                  Key = 46
	Key_Slash                   Key = 47
	Key_0                       Key = 48
	Key_1                       Key = 49
	Key_2                       Key = 50
	Key_3                       Key = 51
	Key_4                       Key = 52
	Key_5                       Key = 53
	Key_6                       Key = 54
	Key_7                       Key = 55
	Key_8                       Key = 56
	Key_9                       Key = 57
	Key_Colon                   Key = 58
	Key_Semicolon               Key = 59
	Key_Less                    Key = 60
	Key_Equal                   Key = 61
	Key_Greater                 Key = 62
	Key_Question                Key = 63
	Key_At                      Key = 64
	Key_A                       Key = 65
	Key_B                       Key = 66
	Key_C                       Key = 67
	Key_D                       Key = 68
	Key_E                       Key = 69
	Key_F                       Key = 70
	Key_G                       Key = 71
	Key_H                       Key = 72
	Key_I                       Key = 73
	Key_J                       Key = 74
	Key_K                       Key = 75
	Key_L                       Key = 76
	Key_M                       Key = 77
	Key_N                       Key = 78
	Key_O                       Key = 79
	Key_P                       Key = 80
	Key_Q                       Key = 81
	Key_R                       Key = 82
	Key_S                       Key = 83
	Key_T                       Key = 84
	Key_U                       Key = 85
	Key_V                       Key = 86
	Key_W                       Key = 87
	Key_X                       Key = 88
	Key_Y                       Key = 89
	Key_Z                       Key = 90
	Key_BracketLeft             Key = 91
	Key_Backslash               Key = 92
	Key_BracketRight            Key = 93
	Key_AsciiCircum             Key = 94
	Key_Underscore              Key = 95
	Key_QuoteLeft               Key = 96
	Key_BraceLeft               Key = 123
	Key_Bar                     Key = 124
	Key_BraceRight              Key = 125
	Key_AsciiTilde              Key = 126
	Key_nobreakspace            Key = 160
	Key_exclamdown              Key = 161
	Key_cent                    Key = 162
	Key_sterling                Key = 163
	Key_currency                Key = 164
	Key_yen                     Key = 165
	Key_brokenbar               Key = 166
	Key_section                 Key = 167
	Key_diaeresis               Key = 168
	Key_copyright               Key = 169
	Key_ordfeminine             Key = 170
	Key_guillemotleft           Key = 171
	Key_notsign                 Key = 172
	Key_hyphen                  Key = 173
	Key_registered              Key = 174
	Key_macron                  Key = 175
	Key_degree                  Key = 176
	Key_plusminus               Key = 177
	Key_twosuperior             Key = 178
	Key_threesuperior           Key = 179
	Key_acute                   Key = 180
	Key_mu                      Key = 181
	Key_paragraph               Key = 182
	Key_periodcentered          Key = 183
	Key_cedilla                 Key = 184
	Key_onesuperior             Key = 185
	Key_masculine               Key = 186
	Key_guillemotright          Key = 187
	Key_onequarter              Key = 188
	Key_onehalf                 Key = 189
	Key_threequarters           Key = 190
	Key_questiondown            Key = 191
	Key_Agrave                  Key = 192
	Key_Aacute                  Key = 193
	Key_Acircumflex             Key = 194
	Key_Atilde                  Key = 195
	Key_Adiaeresis              Key = 196
	Key_Aring                   Key = 197
	Key_AE                      Key = 198
	Key_Ccedilla                Key = 199
	Key_Egrave                  Key = 200
	Key_Eacute                  Key = 201
	Key_Ecircumflex             Key = 202
	Key_Ediaeresis              Key = 203
	Key_Igrave                  Key = 204
	Key_Iacute                  Key = 205
	Key_Icircumflex             Key = 206
	Key_Idiaeresis              Key = 207
	Key_ETH                     Key = 208
	Key_Ntilde                  Key = 209
	Key_Ograve                  Key = 210
	Key_Oacute                  Key = 211
	Key_Ocircumflex             Key = 212
	Key_Otilde                  Key = 213
	Key_Odiaeresis              Key = 214
	Key_multiply                Key = 215
	Key_Ooblique                Key = 216
	Key_Ugrave                  Key = 217
	Key_Uacute                  Key = 218
	Key_Ucircumflex             Key = 219
	Key_Udiaeresis              Key = 220
	Key_Yacute                  Key = 221
	Key_THORN                   Key = 222
	Key_ssharp                  Key = 223
	Key_division                Key = 247
	Key_ydiaeresis              Key = 255
	Key_Escape                  Key = 16777216
	Key_Tab                     Key = 16777217
	Key_Backtab                 Key = 16777218
	Key_Backspace               Key = 16777219
	Key_Return                  Key = 16777220
	Key_Enter                   Key = 16777221
	Key_Insert                  Key = 16777222
	Key_Delete                  Key = 16777223
	Key_Pause                   Key = 16777224
	Key_Print                   Key = 16777225
	Key_SysReq                  Key = 16777226
	Key_Clear                   Key = 16777227
	Key_Home                    Key = 16777232
	Key_End                     Key = 16777233
	Key_Left                    Key = 16777234
	Key_Up                      Key = 16777235
	Key_Right                   Key = 16777236
	Key_Down                    Key = 16777237
	Key_PageUp                  Key = 16777238
	Key_PageDown                Key = 16777239
	Key_Shift                   Key = 16777248
	Key_Control                 Key = 16777249
	Key_Meta                    Key = 16777250
	Key_Alt                     Key = 16777251
	Key_CapsLock                Key = 16777252
	Key_NumLock                 Key = 16777253
	Key_ScrollLock              Key = 16777254
	Key_F1                      Key = 16777264
	Key_F2                      Key = 16777265
	Key_F3                      Key = 16777266
	Key_F4                      Key = 16777267
	Key_F5                      Key = 16777268
	Key_F6                      Key = 16777269
	Key_F7                      Key = 16777270
	Key_F8                      Key = 16777271
	Key_F9                      Key = 16777272
	Key_F10                     Key = 16777273
	Key_F11                     Key = 16777274
	Key_F12                     Key = 16777275
	Key_F13                     Key = 16777276
	Key_F14                     Key = 16777277
	Key_F15                     Key = 16777278
	Key_F16                     Key = 16777279
	Key_F17                     Key = 16777280
	Key_F18                     Key = 16777281
	Key_F19                     Key = 16777282
	Key_F20                     Key = 16777283
	Key_F21                     Key = 16777284
	Key_F22                     Key = 16777285
	Key_F23                     Key = 16777286
	Key_F24                     Key = 16777287
	Key_F25                     Key = 16777288
	Key_F26                     Key = 16777289
	Key_F27                     Key = 16777290
	Key_F28                     Key = 16777291
	Key_F29                     Key = 16777292
	Key_F30                     Key = 16777293
	Key_F31                     Key = 16777294
	Key_F32                     Key = 16777295
	Key_F33                     Key = 16777296
	Key_F34                     Key = 16777297
	Key_F35                     Key = 16777298
	Key_Super_L                 Key = 16777299
	Key_Super_R                 Key = 16777300
	Key_Menu                    Key = 16777301
	Key_Hyper_L                 Key = 16777302
	Key_Hyper_R                 Key = 16777303
	Key_Help                    Key = 16777304
	Key_Direction_L             Key = 16777305
	Key_Direction_R             Key = 16777312
	Key_AltGr                   Key = 16781571
	Key_Multi_key               Key = 16781600
	Key_Codeinput               Key = 16781623
	Key_SingleCandidate         Key = 16781628
	Key_MultipleCandidate       Key = 16781629
	Key_PreviousCandidate       Key = 16781630
	Key_Mode_switch             Key = 16781694
	Key_Kanji                   Key = 16781601
	Key_Muhenkan                Key = 16781602
	Key_Henkan                  Key = 16781603
	Key_Romaji                  Key = 16781604
	Key_Hiragana                Key = 16781605
	Key_Katakana                Key = 16781606
	Key_Hiragana_Katakana       Key = 16781607
	Key_Zenkaku                 Key = 16781608
	Key_Hankaku                 Key = 16781609
	Key_Zenkaku_Hankaku         Key = 16781610
	Key_Touroku                 Key = 16781611
	Key_Massyo                  Key = 16781612
	Key_Kana_Lock               Key = 16781613
	Key_Kana_Shift              Key = 16781614
	Key_Eisu_Shift              Key = 16781615
	Key_Eisu_toggle             Key = 16781616
	Key_Hangul                  Key = 16781617
	Key_Hangul_Start            Key = 16781618
	Key_Hangul_End              Key = 16781619
	Key_Hangul_Hanja            Key = 16781620
	Key_Hangul_Jamo             Key = 16781621
	Key_Hangul_Romaja           Key = 16781622
	Key_Hangul_Jeonja           Key = 16781624
	Key_Hangul_Banja            Key = 16781625
	Key_Hangul_PreHanja         Key = 16781626
	Key_Hangul_PostHanja        Key = 16781627
	Key_Hangul_Special          Key = 16781631
	Key_Dead_Grave              Key = 16781904
	Key_Dead_Acute              Key = 16781905
	Key_Dead_Circumflex         Key = 16781906
	Key_Dead_Tilde              Key = 16781907
	Key_Dead_Macron             Key = 16781908
	Key_Dead_Breve              Key = 16781909
	Key_Dead_Abovedot           Key = 16781910
	Key_Dead_Diaeresis          Key = 16781911
	Key_Dead_Abovering          Key = 16781912
	Key_Dead_Doubleacute        Key = 16781913
	Key_Dead_Caron              Key = 16781914
	Key_Dead_Cedilla            Key = 16781915
	Key_Dead_Ogonek             Key = 16781916
	Key_Dead_Iota               Key = 16781917
	Key_Dead_Voiced_Sound       Key = 16781918
	Key_Dead_Semivoiced_Sound   Key = 16781919
	Key_Dead_Belowdot           Key = 16781920
	Key_Dead_Hook               Key = 16781921
	Key_Dead_Horn               Key = 16781922
	Key_Dead_Stroke             Key = 16781923
	Key_Dead_Abovecomma         Key = 16781924
	Key_Dead_Abovereversedcomma Key = 16781925
	Key_Dead_Doublegrave        Key = 16781926
	Key_Dead_Belowring          Key = 16781927
	Key_Dead_Belowmacron        Key = 16781928
	Key_Dead_Belowcircumflex    Key = 16781929
	Key_Dead_Belowtilde         Key = 16781930
	Key_Dead_Belowbreve         Key = 16781931
	Key_Dead_Belowdiaeresis     Key = 16781932
	Key_Dead_Invertedbreve      Key = 16781933
	Key_Dead_Belowcomma         Key = 16781934
	Key_Dead_Currency           Key = 16781935
	Key_Dead_a                  Key = 16781952
	Key_Dead_A                  Key = 16781953
	Key_Dead_e                  Key = 16781954
	Key_Dead_E                  Key = 16781955
	Key_Dead_i                  Key = 16781956
	Key_Dead_I                  Key = 16781957
	Key_Dead_o                  Key = 16781958
	Key_Dead_O                  Key = 16781959
	Key_Dead_u                  Key = 16781960
	Key_Dead_U                  Key = 16781961
	Key_Dead_Small_Schwa        Key = 16781962
	Key_Dead_Capital_Schwa      Key = 16781963
	Key_Dead_Greek              Key = 16781964
	Key_Dead_Lowline            Key = 16781968
	Key_Dead_Aboveverticalline  Key = 16781969
	Key_Dead_Belowverticalline  Key = 16781970
	Key_Dead_Longsolidusoverlay Key = 16781971
	Key_Back                    Key = 16777313
	Key_Forward                 Key = 16777314
	Key_Stop                    Key = 16777315
	Key_Refresh                 Key = 16777316
	Key_VolumeDown              Key = 16777328
	Key_VolumeMute              Key = 16777329
	Key_VolumeUp                Key = 16777330
	Key_BassBoost               Key = 16777331
	Key_BassUp                  Key = 16777332
	Key_BassDown                Key = 16777333
	Key_TrebleUp                Key = 16777334
	Key_TrebleDown              Key = 16777335
	Key_MediaPlay               Key = 16777344
	Key_MediaStop               Key = 16777345
	Key_MediaPrevious           Key = 16777346
	Key_MediaNext               Key = 16777347
	Key_MediaRecord             Key = 16777348
	Key_MediaPause              Key = 16777349
	Key_MediaTogglePlayPause    Key = 16777350
	Key_HomePage                Key = 16777360
	Key_Favorites               Key = 16777361
	Key_Search                  Key = 16777362
	Key_Standby                 Key = 16777363
	Key_OpenUrl                 Key = 16777364
	Key_LaunchMail              Key = 16777376
	Key_LaunchMedia             Key = 16777377
	Key_Launch0                 Key = 16777378
	Key_Launch1                 Key = 16777379
	Key_Launch2                 Key = 16777380
	Key_Launch3                 Key = 16777381
	Key_Launch4                 Key = 16777382
	Key_Launch5                 Key = 16777383
	Key_Launch6                 Key = 16777384
	Key_Launch7                 Key = 16777385
	Key_Launch8                 Key = 16777386
	Key_Launch9                 Key = 16777387
	Key_LaunchA                 Key = 16777388
	Key_LaunchB                 Key = 16777389
	Key_LaunchC                 Key = 16777390
	Key_LaunchD                 Key = 16777391
	Key_LaunchE                 Key = 16777392
	Key_LaunchF                 Key = 16777393
	Key_MonBrightnessUp         Key = 16777394
	Key_MonBrightnessDown       Key = 16777395
	Key_KeyboardLightOnOff      Key = 16777396
	Key_KeyboardBrightnessUp    Key = 16777397
	Key_KeyboardBrightnessDown  Key = 16777398
	Key_PowerOff                Key = 16777399
	Key_WakeUp                  Key = 16777400
	Key_Eject                   Key = 16777401
	Key_ScreenSaver             Key = 16777402
	Key_WWW                     Key = 16777403
	Key_Memo                    Key = 16777404
	Key_LightBulb               Key = 16777405
	Key_Shop                    Key = 16777406
	Key_History                 Key = 16777407
	Key_AddFavorite             Key = 16777408
	Key_HotLinks                Key = 16777409
	Key_BrightnessAdjust        Key = 16777410
	Key_Finance                 Key = 16777411
	Key_Community               Key = 16777412
	Key_AudioRewind             Key = 16777413
	Key_BackForward             Key = 16777414
	Key_ApplicationLeft         Key = 16777415
	Key_ApplicationRight        Key = 16777416
	Key_Book                    Key = 16777417
	Key_CD                      Key = 16777418
	Key_Calculator              Key = 16777419
	Key_ToDoList                Key = 16777420
	Key_ClearGrab               Key = 16777421
	Key_Close                   Key = 16777422
	Key_Copy                    Key = 16777423
	Key_Cut                     Key = 16777424
	Key_Display                 Key = 16777425
	Key_DOS                     Key = 16777426
	Key_Documents               Key = 16777427
	Key_Excel                   Key = 16777428
	Key_Explorer                Key = 16777429
	Key_Game                    Key = 16777430
	Key_Go                      Key = 16777431
	Key_iTouch                  Key = 16777432
	Key_LogOff                  Key = 16777433
	Key_Market                  Key = 16777434
	Key_Meeting                 Key = 16777435
	Key_MenuKB                  Key = 16777436
	Key_MenuPB                  Key = 16777437
	Key_MySites                 Key = 16777438
	Key_News                    Key = 16777439
	Key_OfficeHome              Key = 16777440
	Key_Option                  Key = 16777441
	Key_Paste                   Key = 16777442
	Key_Phone                   Key = 16777443
	Key_Calendar                Key = 16777444
	Key_Reply                   Key = 16777445
	Key_Reload                  Key = 16777446
	Key_RotateWindows           Key = 16777447
	Key_RotationPB              Key = 16777448
	Key_RotationKB              Key = 16777449
	Key_Save                    Key = 16777450
	Key_Send                    Key = 16777451
	Key_Spell                   Key = 16777452
	Key_SplitScreen             Key = 16777453
	Key_Support                 Key = 16777454
	Key_TaskPane                Key = 16777455
	Key_Terminal                Key = 16777456
	Key_Tools                   Key = 16777457
	Key_Travel                  Key = 16777458
	Key_Video                   Key = 16777459
	Key_Word                    Key = 16777460
	Key_Xfer                    Key = 16777461
	Key_ZoomIn                  Key = 16777462
	Key_ZoomOut                 Key = 16777463
	Key_Away                    Key = 16777464
	Key_Messenger               Key = 16777465
	Key_WebCam                  Key = 16777466
	Key_MailForward             Key = 16777467
	Key_Pictures                Key = 16777468
	Key_Music                   Key = 16777469
	Key_Battery                 Key = 16777470
	Key_Bluetooth               Key = 16777471
	Key_WLAN                    Key = 16777472
	Key_UWB                     Key = 16777473
	Key_AudioForward            Key = 16777474
	Key_AudioRepeat             Key = 16777475
	Key_AudioRandomPlay         Key = 16777476
	Key_Subtitle                Key = 16777477
	Key_AudioCycleTrack         Key = 16777478
	Key_Time                    Key = 16777479
	Key_Hibernate               Key = 16777480
	Key_View                    Key = 16777481
	Key_TopMenu                 Key = 16777482
	Key_PowerDown               Key = 16777483
	Key_Suspend                 Key = 16777484
	Key_ContrastAdjust          Key = 16777485
	Key_LaunchG                 Key = 16777486
	Key_LaunchH                 Key = 16777487
	Key_TouchpadToggle          Key = 16777488
	Key_TouchpadOn              Key = 16777489
	Key_TouchpadOff             Key = 16777490
	Key_MicMute                 Key = 16777491
	Key_Red                     Key = 16777492
	Key_Green                   Key = 16777493
	Key_Yellow                  Key = 16777494
	Key_Blue                    Key = 16777495
	Key_ChannelUp               Key = 16777496
	Key_ChannelDown             Key = 16777497
	Key_Guide                   Key = 16777498
	Key_Info                    Key = 16777499
	Key_Settings                Key = 16777500
	Key_MicVolumeUp             Key = 16777501
	Key_MicVolumeDown           Key = 16777502
	Key_New                     Key = 16777504
	Key_Open                    Key = 16777505
	Key_Find                    Key = 16777506
	Key_Undo                    Key = 16777507
	Key_Redo                    Key = 16777508
	Key_MediaLast               Key = 16842751
	Key_Select                  Key = 16842752
	Key_Yes                     Key = 16842753
	Key_No                      Key = 16842754
	Key_Cancel                  Key = 16908289
	Key_Printer                 Key = 16908290
	Key_Execute                 Key = 16908291
	Key_Sleep                   Key = 16908292
	Key_Play                    Key = 16908293
	Key_Zoom                    Key = 16908294
	Key_Exit                    Key = 16908298
	Key_Context1                Key = 17825792
	Key_Context2                Key = 17825793
	Key_Context3                Key = 17825794
	Key_Context4                Key = 17825795
	Key_Call                    Key = 17825796
	Key_Hangup                  Key = 17825797
	Key_Flip                    Key = 17825798
	Key_ToggleCallHangup        Key = 17825799
	Key_VoiceDial               Key = 17825800
	Key_LastNumberRedial        Key = 17825801
	Key_Camera                  Key = 17825824
	Key_CameraFocus             Key = 17825825
	Key_unknown                 Key = 33554431
)

type KeyboardModifier int

const (
	NoModifier          KeyboardModifier = 0
	ShiftModifier       KeyboardModifier = 33554432
	ControlModifier     KeyboardModifier = 67108864
	AltModifier         KeyboardModifier = 134217728
	MetaModifier        KeyboardModifier = 268435456
	KeypadModifier      KeyboardModifier = 536870912
	GroupSwitchModifier KeyboardModifier = 1073741824
)

type Modifier int

const (
	META  Modifier = 268435456
	SHIFT Modifier = 33554432
	CTRL  Modifier = 67108864
	ALT   Modifier = 134217728
)

type ArrowType int

const (
	NoArrow    ArrowType = 0
	UpArrow    ArrowType = 1
	DownArrow  ArrowType = 2
	LeftArrow  ArrowType = 3
	RightArrow ArrowType = 4
)

type PenStyle int

const (
	NoPen          PenStyle = 0
	SolidLine      PenStyle = 1
	DashLine       PenStyle = 2
	DotLine        PenStyle = 3
	DashDotLine    PenStyle = 4
	DashDotDotLine PenStyle = 5
	CustomDashLine PenStyle = 6
	MPenStyle      PenStyle = 15
)

type PenCapStyle int

const (
	FlatCap      PenCapStyle = 0
	SquareCap    PenCapStyle = 16
	RoundCap     PenCapStyle = 32
	MPenCapStyle PenCapStyle = 48
)

type PenJoinStyle int

const (
	MiterJoin     PenJoinStyle = 0
	BevelJoin     PenJoinStyle = 64
	RoundJoin     PenJoinStyle = 128
	SvgMiterJoin  PenJoinStyle = 256
	MPenJoinStyle PenJoinStyle = 448
)

type BrushStyle int

const (
	NoBrush                BrushStyle = 0
	SolidPattern           BrushStyle = 1
	Dense1Pattern          BrushStyle = 2
	Dense2Pattern          BrushStyle = 3
	Dense3Pattern          BrushStyle = 4
	Dense4Pattern          BrushStyle = 5
	Dense5Pattern          BrushStyle = 6
	Dense6Pattern          BrushStyle = 7
	Dense7Pattern          BrushStyle = 8
	HorPattern             BrushStyle = 9
	VerPattern             BrushStyle = 10
	CrossPattern           BrushStyle = 11
	BDiagPattern           BrushStyle = 12
	FDiagPattern           BrushStyle = 13
	DiagCrossPattern       BrushStyle = 14
	LinearGradientPattern  BrushStyle = 15
	RadialGradientPattern  BrushStyle = 16
	ConicalGradientPattern BrushStyle = 17
	TexturePattern         BrushStyle = 24
)

type SizeMode int

const (
	AbsoluteSize SizeMode = 0
	RelativeSize SizeMode = 1
)

type UIEffect int

const (
	UI_General        UIEffect = 0
	UI_AnimateMenu    UIEffect = 1
	UI_FadeMenu       UIEffect = 2
	UI_AnimateCombo   UIEffect = 3
	UI_AnimateTooltip UIEffect = 4
	UI_FadeTooltip    UIEffect = 5
	UI_AnimateToolBox UIEffect = 6
)

type CursorShape int

const (
	ArrowCursor        CursorShape = 0
	UpArrowCursor      CursorShape = 1
	CrossCursor        CursorShape = 2
	WaitCursor         CursorShape = 3
	IBeamCursor        CursorShape = 4
	SizeVerCursor      CursorShape = 5
	SizeHorCursor      CursorShape = 6
	SizeBDiagCursor    CursorShape = 7
	SizeFDiagCursor    CursorShape = 8
	SizeAllCursor      CursorShape = 9
	BlankCursor        CursorShape = 10
	SplitVCursor       CursorShape = 11
	SplitHCursor       CursorShape = 12
	PointingHandCursor CursorShape = 13
	ForbiddenCursor    CursorShape = 14
	WhatsThisCursor    CursorShape = 15
	BusyCursor         CursorShape = 16
	OpenHandCursor     CursorShape = 17
	ClosedHandCursor   CursorShape = 18
	DragCopyCursor     CursorShape = 19
	DragMoveCursor     CursorShape = 20
	DragLinkCursor     CursorShape = 21
	LastCursor         CursorShape = 21
	BitmapCursor       CursorShape = 24
	CustomCursor       CursorShape = 25
)

type TextFormat int

const (
	PlainText    TextFormat = 0
	RichText     TextFormat = 1
	AutoText     TextFormat = 2
	MarkdownText TextFormat = 3
)

type AspectRatioMode int

const (
	IgnoreAspectRatio          AspectRatioMode = 0
	KeepAspectRatio            AspectRatioMode = 1
	KeepAspectRatioByExpanding AspectRatioMode = 2
)

type DockWidgetArea int

const (
	LeftDockWidgetArea   DockWidgetArea = 1
	RightDockWidgetArea  DockWidgetArea = 2
	TopDockWidgetArea    DockWidgetArea = 4
	BottomDockWidgetArea DockWidgetArea = 8
	DockWidgetArea_Mask  DockWidgetArea = 15
	AllDockWidgetAreas   DockWidgetArea = 15
	NoDockWidgetArea     DockWidgetArea = 0
)

type DockWidgetAreaSizes int

const (
	NDockWidgetAreas DockWidgetAreaSizes = 4
)

type ToolBarArea int

const (
	LeftToolBarArea   ToolBarArea = 1
	RightToolBarArea  ToolBarArea = 2
	TopToolBarArea    ToolBarArea = 4
	BottomToolBarArea ToolBarArea = 8
	ToolBarArea_Mask  ToolBarArea = 15
	AllToolBarAreas   ToolBarArea = 15
	NoToolBarArea     ToolBarArea = 0
)

type ToolBarAreaSizes int

const (
	NToolBarAreas ToolBarAreaSizes = 4
)

type DateFormat int

const (
	TextDate      DateFormat = 0
	ISODate       DateFormat = 1
	RFC2822Date   DateFormat = 8
	ISODateWithMs DateFormat = 9
)

type TimeSpec int

const (
	LocalTime     TimeSpec = 0
	UTC           TimeSpec = 1
	OffsetFromUTC TimeSpec = 2
	TimeZone      TimeSpec = 3
)

type DayOfWeek int

const (
	Monday    DayOfWeek = 1
	Tuesday   DayOfWeek = 2
	Wednesday DayOfWeek = 3
	Thursday  DayOfWeek = 4
	Friday    DayOfWeek = 5
	Saturday  DayOfWeek = 6
	Sunday    DayOfWeek = 7
)

type ScrollBarPolicy int

const (
	ScrollBarAsNeeded  ScrollBarPolicy = 0
	ScrollBarAlwaysOff ScrollBarPolicy = 1
	ScrollBarAlwaysOn  ScrollBarPolicy = 2
)

type CaseSensitivity int

const (
	CaseInsensitive CaseSensitivity = 0
	CaseSensitive   CaseSensitivity = 1
)

type Corner int

const (
	TopLeftCorner     Corner = 0
	TopRightCorner    Corner = 1
	BottomLeftCorner  Corner = 2
	BottomRightCorner Corner = 3
)

type Edge int

const (
	TopEdge    Edge = 1
	LeftEdge   Edge = 2
	RightEdge  Edge = 4
	BottomEdge Edge = 8
)

type ConnectionType int

const (
	AutoConnection           ConnectionType = 0
	DirectConnection         ConnectionType = 1
	QueuedConnection         ConnectionType = 2
	BlockingQueuedConnection ConnectionType = 3
	UniqueConnection         ConnectionType = 128
	SingleShotConnection     ConnectionType = 256
)

type ShortcutContext int

const (
	WidgetShortcut             ShortcutContext = 0
	WindowShortcut             ShortcutContext = 1
	ApplicationShortcut        ShortcutContext = 2
	WidgetWithChildrenShortcut ShortcutContext = 3
)

type FillRule int

const (
	OddEvenFill FillRule = 0
	WindingFill FillRule = 1
)

type MaskMode int

const (
	MaskInColor  MaskMode = 0
	MaskOutColor MaskMode = 1
)

type ClipOperation int

const (
	NoClip        ClipOperation = 0
	ReplaceClip   ClipOperation = 1
	IntersectClip ClipOperation = 2
)

type ItemSelectionMode int

const (
	ContainsItemShape          ItemSelectionMode = 0
	IntersectsItemShape        ItemSelectionMode = 1
	ContainsItemBoundingRect   ItemSelectionMode = 2
	IntersectsItemBoundingRect ItemSelectionMode = 3
)

type ItemSelectionOperation int

const (
	ReplaceSelection ItemSelectionOperation = 0
	AddToSelection   ItemSelectionOperation = 1
)

type TransformationMode int

const (
	FastTransformation   TransformationMode = 0
	SmoothTransformation TransformationMode = 1
)

type Axis int

const (
	XAxis Axis = 0
	YAxis Axis = 1
	ZAxis Axis = 2
)

type FocusReason int

const (
	MouseFocusReason        FocusReason = 0
	TabFocusReason          FocusReason = 1
	BacktabFocusReason      FocusReason = 2
	ActiveWindowFocusReason FocusReason = 3
	PopupFocusReason        FocusReason = 4
	ShortcutFocusReason     FocusReason = 5
	MenuBarFocusReason      FocusReason = 6
	OtherFocusReason        FocusReason = 7
	NoFocusReason           FocusReason = 8
)

type ContextMenuPolicy int

const (
	NoContextMenu      ContextMenuPolicy = 0
	DefaultContextMenu ContextMenuPolicy = 1
	ActionsContextMenu ContextMenuPolicy = 2
	CustomContextMenu  ContextMenuPolicy = 3
	PreventContextMenu ContextMenuPolicy = 4
)

type InputMethodQuery int

const (
	ImEnabled                InputMethodQuery = 1
	ImCursorRectangle        InputMethodQuery = 2
	ImFont                   InputMethodQuery = 4
	ImCursorPosition         InputMethodQuery = 8
	ImSurroundingText        InputMethodQuery = 16
	ImCurrentSelection       InputMethodQuery = 32
	ImMaximumTextLength      InputMethodQuery = 64
	ImAnchorPosition         InputMethodQuery = 128
	ImHints                  InputMethodQuery = 256
	ImPreferredLanguage      InputMethodQuery = 512
	ImAbsolutePosition       InputMethodQuery = 1024
	ImTextBeforeCursor       InputMethodQuery = 2048
	ImTextAfterCursor        InputMethodQuery = 4096
	ImEnterKeyType           InputMethodQuery = 8192
	ImAnchorRectangle        InputMethodQuery = 16384
	ImInputItemClipRectangle InputMethodQuery = 32768
	ImReadOnly               InputMethodQuery = 65536
	ImQueryInput             InputMethodQuery = 16570
)

type InputMethodHint int

const (
	ImhNone                   InputMethodHint = 0
	ImhHiddenText             InputMethodHint = 1
	ImhSensitiveData          InputMethodHint = 2
	ImhNoAutoUppercase        InputMethodHint = 4
	ImhPreferNumbers          InputMethodHint = 8
	ImhPreferUppercase        InputMethodHint = 16
	ImhPreferLowercase        InputMethodHint = 32
	ImhNoPredictiveText       InputMethodHint = 64
	ImhDate                   InputMethodHint = 128
	ImhTime                   InputMethodHint = 256
	ImhPreferLatin            InputMethodHint = 512
	ImhMultiLine              InputMethodHint = 1024
	ImhNoEditMenu             InputMethodHint = 2048
	ImhNoTextHandles          InputMethodHint = 4096
	ImhDigitsOnly             InputMethodHint = 65536
	ImhFormattedNumbersOnly   InputMethodHint = 131072
	ImhUppercaseOnly          InputMethodHint = 262144
	ImhLowercaseOnly          InputMethodHint = 524288
	ImhDialableCharactersOnly InputMethodHint = 1048576
	ImhEmailCharactersOnly    InputMethodHint = 2097152
	ImhUrlCharactersOnly      InputMethodHint = 4194304
	ImhLatinOnly              InputMethodHint = 8388608
)

type EnterKeyType int

const (
	EnterKeyDefault  EnterKeyType = 0
	EnterKeyReturn   EnterKeyType = 1
	EnterKeyDone     EnterKeyType = 2
	EnterKeyGo       EnterKeyType = 3
	EnterKeySend     EnterKeyType = 4
	EnterKeySearch   EnterKeyType = 5
	EnterKeyNext     EnterKeyType = 6
	EnterKeyPrevious EnterKeyType = 7
)

type ToolButtonStyle int

const (
	ToolButtonIconOnly       ToolButtonStyle = 0
	ToolButtonTextOnly       ToolButtonStyle = 1
	ToolButtonTextBesideIcon ToolButtonStyle = 2
	ToolButtonTextUnderIcon  ToolButtonStyle = 3
	ToolButtonFollowStyle    ToolButtonStyle = 4
)

type LayoutDirection int

const (
	LeftToRight         LayoutDirection = 0
	RightToLeft         LayoutDirection = 1
	LayoutDirectionAuto LayoutDirection = 2
)

type AnchorPoint int

const (
	AnchorLeft             AnchorPoint = 0
	AnchorHorizontalCenter AnchorPoint = 1
	AnchorRight            AnchorPoint = 2
	AnchorTop              AnchorPoint = 3
	AnchorVerticalCenter   AnchorPoint = 4
	AnchorBottom           AnchorPoint = 5
)

type FindChildOption int

const (
	FindDirectChildrenOnly  FindChildOption = 0
	FindChildrenRecursively FindChildOption = 1
)

type DropAction int

const (
	CopyAction       DropAction = 1
	MoveAction       DropAction = 2
	LinkAction       DropAction = 4
	ActionMask       DropAction = 255
	TargetMoveAction DropAction = 32770
	IgnoreAction     DropAction = 0
)

type CheckState int

const (
	Unchecked        CheckState = 0
	PartiallyChecked CheckState = 1
	Checked          CheckState = 2
)

type ItemDataRole int

const (
	DisplayRole               ItemDataRole = 0
	DecorationRole            ItemDataRole = 1
	EditRole                  ItemDataRole = 2
	ToolTipRole               ItemDataRole = 3
	StatusTipRole             ItemDataRole = 4
	WhatsThisRole             ItemDataRole = 5
	FontRole                  ItemDataRole = 6
	TextAlignmentRole         ItemDataRole = 7
	BackgroundRole            ItemDataRole = 8
	ForegroundRole            ItemDataRole = 9
	CheckStateRole            ItemDataRole = 10
	AccessibleTextRole        ItemDataRole = 11
	AccessibleDescriptionRole ItemDataRole = 12
	SizeHintRole              ItemDataRole = 13
	InitialSortOrderRole      ItemDataRole = 14
	DisplayPropertyRole       ItemDataRole = 27
	DecorationPropertyRole    ItemDataRole = 28
	ToolTipPropertyRole       ItemDataRole = 29
	StatusTipPropertyRole     ItemDataRole = 30
	WhatsThisPropertyRole     ItemDataRole = 31
	UserRole                  ItemDataRole = 256
)

type ItemFlag int

const (
	NoItemFlags          ItemFlag = 0
	ItemIsSelectable     ItemFlag = 1
	ItemIsEditable       ItemFlag = 2
	ItemIsDragEnabled    ItemFlag = 4
	ItemIsDropEnabled    ItemFlag = 8
	ItemIsUserCheckable  ItemFlag = 16
	ItemIsEnabled        ItemFlag = 32
	ItemIsAutoTristate   ItemFlag = 64
	ItemNeverHasChildren ItemFlag = 128
	ItemIsUserTristate   ItemFlag = 256
)

type MatchFlag int

const (
	MatchExactly           MatchFlag = 0
	MatchContains          MatchFlag = 1
	MatchStartsWith        MatchFlag = 2
	MatchEndsWith          MatchFlag = 3
	MatchRegularExpression MatchFlag = 4
	MatchWildcard          MatchFlag = 5
	MatchFixedString       MatchFlag = 8
	MatchTypeMask          MatchFlag = 15
	MatchCaseSensitive     MatchFlag = 16
	MatchWrap              MatchFlag = 32
	MatchRecursive         MatchFlag = 64
)

type WindowModality int

const (
	NonModal         WindowModality = 0
	WindowModal      WindowModality = 1
	ApplicationModal WindowModality = 2
)

type TextInteractionFlag int

const (
	NoTextInteraction         TextInteractionFlag = 0
	TextSelectableByMouse     TextInteractionFlag = 1
	TextSelectableByKeyboard  TextInteractionFlag = 2
	LinksAccessibleByMouse    TextInteractionFlag = 4
	LinksAccessibleByKeyboard TextInteractionFlag = 8
	TextEditable              TextInteractionFlag = 16
	TextEditorInteraction     TextInteractionFlag = 19
	TextBrowserInteraction    TextInteractionFlag = 13
)

type EventPriority int

const (
	HighEventPriority   EventPriority = 1
	NormalEventPriority EventPriority = 0
	LowEventPriority    EventPriority = -1
)

type SizeHint int

const (
	MinimumSize    SizeHint = 0
	PreferredSize  SizeHint = 1
	MaximumSize    SizeHint = 2
	MinimumDescent SizeHint = 3
	NSizeHints     SizeHint = 4
)

type WindowFrameSection int

const (
	NoSection          WindowFrameSection = 0
	LeftSection        WindowFrameSection = 1
	TopLeftSection     WindowFrameSection = 2
	TopSection         WindowFrameSection = 3
	TopRightSection    WindowFrameSection = 4
	RightSection       WindowFrameSection = 5
	BottomRightSection WindowFrameSection = 6
	BottomSection      WindowFrameSection = 7
	BottomLeftSection  WindowFrameSection = 8
	TitleBarArea       WindowFrameSection = 9
)

type Initialization int

const (
	Uninitialized Initialization = 0
)

type CoordinateSystem int

const (
	DeviceCoordinates  CoordinateSystem = 0
	LogicalCoordinates CoordinateSystem = 1
)

type TouchPointState int

const (
	TouchPointUnknownState TouchPointState = 0
	TouchPointPressed      TouchPointState = 1
	TouchPointMoved        TouchPointState = 2
	TouchPointStationary   TouchPointState = 4
	TouchPointReleased     TouchPointState = 8
)

type GestureState int

const (
	NoGesture       GestureState = 0
	GestureStarted  GestureState = 1
	GestureUpdated  GestureState = 2
	GestureFinished GestureState = 3
	GestureCanceled GestureState = 4
)

type GestureType int

const (
	TapGesture        GestureType = 1
	TapAndHoldGesture GestureType = 2
	PanGesture        GestureType = 3
	PinchGesture      GestureType = 4
	SwipeGesture      GestureType = 5
	CustomGesture     GestureType = 256
)

type GestureFlag int

const (
	DontStartGestureOnChildren       GestureFlag = 1
	ReceivePartialGestures           GestureFlag = 2
	IgnoredGesturesPropagateToParent GestureFlag = 4
)

type NativeGestureType int

const (
	BeginNativeGesture     NativeGestureType = 0
	EndNativeGesture       NativeGestureType = 1
	PanNativeGesture       NativeGestureType = 2
	ZoomNativeGesture      NativeGestureType = 3
	SmartZoomNativeGesture NativeGestureType = 4
	RotateNativeGesture    NativeGestureType = 5
	SwipeNativeGesture     NativeGestureType = 6
)

type NavigationMode int

const (
	NavigationModeNone               NavigationMode = 0
	NavigationModeKeypadTabOrder     NavigationMode = 1
	NavigationModeKeypadDirectional  NavigationMode = 2
	NavigationModeCursorAuto         NavigationMode = 3
	NavigationModeCursorForceVisible NavigationMode = 4
)

type CursorMoveStyle int

const (
	LogicalMoveStyle CursorMoveStyle = 0
	VisualMoveStyle  CursorMoveStyle = 1
)

type TimerType int

const (
	PreciseTimer    TimerType = 0
	CoarseTimer     TimerType = 1
	VeryCoarseTimer TimerType = 2
)

type ScrollPhase int

const (
	NoScrollPhase  ScrollPhase = 0
	ScrollBegin    ScrollPhase = 1
	ScrollUpdate   ScrollPhase = 2
	ScrollEnd      ScrollPhase = 3
	ScrollMomentum ScrollPhase = 4
)

type MouseEventSource int

const (
	MouseEventNotSynthesized           MouseEventSource = 0
	MouseEventSynthesizedBySystem      MouseEventSource = 1
	MouseEventSynthesizedByQt          MouseEventSource = 2
	MouseEventSynthesizedByApplication MouseEventSource = 3
)

type MouseEventFlag int

const (
	NoMouseEventFlag             MouseEventFlag = 0
	MouseEventCreatedDoubleClick MouseEventFlag = 1
	MouseEventFlagMask           MouseEventFlag = 255
)

type ChecksumType int

const (
	ChecksumIso3309 ChecksumType = 0
	ChecksumItuV41  ChecksumType = 1
)

type HighDpiScaleFactorRoundingPolicy int

const (
	Unset            HighDpiScaleFactorRoundingPolicy = 0
	Round            HighDpiScaleFactorRoundingPolicy = 1
	Ceil             HighDpiScaleFactorRoundingPolicy = 2
	Floor            HighDpiScaleFactorRoundingPolicy = 3
	RoundPreferFloor HighDpiScaleFactorRoundingPolicy = 4
	PassThrough      HighDpiScaleFactorRoundingPolicy = 5
)

type ReturnByValueConstant int

const (
	ReturnByValue ReturnByValueConstant = 0
)

type QInternal__PaintDeviceFlags int

const (
	QInternal__UnknownDevice     QInternal__PaintDeviceFlags = 0
	QInternal__Widget            QInternal__PaintDeviceFlags = 1
	QInternal__Pixmap            QInternal__PaintDeviceFlags = 2
	QInternal__Image             QInternal__PaintDeviceFlags = 3
	QInternal__Printer           QInternal__PaintDeviceFlags = 4
	QInternal__Picture           QInternal__PaintDeviceFlags = 5
	QInternal__Pbuffer           QInternal__PaintDeviceFlags = 6
	QInternal__FramebufferObject QInternal__PaintDeviceFlags = 7
	QInternal__CustomRaster      QInternal__PaintDeviceFlags = 8
	QInternal__PaintBuffer       QInternal__PaintDeviceFlags = 10
	QInternal__OpenGL            QInternal__PaintDeviceFlags = 11
)

type QInternal__RelayoutType int

const (
	QInternal__RelayoutNormal   QInternal__RelayoutType = 0
	QInternal__RelayoutDragging QInternal__RelayoutType = 1
	QInternal__RelayoutDropped  QInternal__RelayoutType = 2
)

type QInternal__DockPosition int

const (
	QInternal__LeftDock   QInternal__DockPosition = 0
	QInternal__RightDock  QInternal__DockPosition = 1
	QInternal__TopDock    QInternal__DockPosition = 2
	QInternal__BottomDock QInternal__DockPosition = 3
	QInternal__DockCount  QInternal__DockPosition = 4
)

type QInternal__Callback int

const (
	QInternal__EventNotifyCallback QInternal__Callback = 0
	QInternal__LastCallback        QInternal__Callback = 1
)

type Disambiguated_t struct {
	h          *C.Disambiguated_t
	isSubclass bool
}

func (this *Disambiguated_t) cPointer() *C.Disambiguated_t {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Disambiguated_t) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newDisambiguated_t constructs the type using only CGO pointers.
func newDisambiguated_t(h *C.Disambiguated_t) *Disambiguated_t {
	if h == nil {
		return nil
	}

	return &Disambiguated_t{h: h}
}

// UnsafeNewDisambiguated_t constructs the type using only unsafe pointers.
func UnsafeNewDisambiguated_t(h unsafe.Pointer) *Disambiguated_t {
	return newDisambiguated_t((*C.Disambiguated_t)(h))
}

// NewDisambiguated_t constructs a new Qt::Disambiguated_t object.
func NewDisambiguated_t() *Disambiguated_t {

	ret := newDisambiguated_t(C.Disambiguated_t_new())
	ret.isSubclass = true
	return ret
}

// NewDisambiguated_t2 constructs a new Qt::Disambiguated_t object.
func NewDisambiguated_t2(param1 *Disambiguated_t) *Disambiguated_t {

	ret := newDisambiguated_t(C.Disambiguated_t_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// Delete this object from C++ memory.
func (this *Disambiguated_t) Delete() {
	C.Disambiguated_t_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Disambiguated_t) GoGC() {
	runtime.SetFinalizer(this, func(this *Disambiguated_t) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInternal struct {
	h          *C.QInternal
	isSubclass bool
}

func (this *QInternal) cPointer() *C.QInternal {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInternal) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInternal constructs the type using only CGO pointers.
func newQInternal(h *C.QInternal) *QInternal {
	if h == nil {
		return nil
	}

	return &QInternal{h: h}
}

// UnsafeNewQInternal constructs the type using only unsafe pointers.
func UnsafeNewQInternal(h unsafe.Pointer) *QInternal {
	return newQInternal((*C.QInternal)(h))
}

// Delete this object from C++ memory.
func (this *QInternal) Delete() {
	C.QInternal_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInternal) GoGC() {
	runtime.SetFinalizer(this, func(this *QInternal) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QKeyCombination struct {
	h          *C.QKeyCombination
	isSubclass bool
}

func (this *QKeyCombination) cPointer() *C.QKeyCombination {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeyCombination) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeyCombination constructs the type using only CGO pointers.
func newQKeyCombination(h *C.QKeyCombination) *QKeyCombination {
	if h == nil {
		return nil
	}

	return &QKeyCombination{h: h}
}

// UnsafeNewQKeyCombination constructs the type using only unsafe pointers.
func UnsafeNewQKeyCombination(h unsafe.Pointer) *QKeyCombination {
	return newQKeyCombination((*C.QKeyCombination)(h))
}

// NewQKeyCombination constructs a new QKeyCombination object.
func NewQKeyCombination() *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new())
	ret.isSubclass = true
	return ret
}

// NewQKeyCombination2 constructs a new QKeyCombination object.
func NewQKeyCombination2(modifiers Modifier) *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new2((C.int)(modifiers)))
	ret.isSubclass = true
	return ret
}

// NewQKeyCombination3 constructs a new QKeyCombination object.
func NewQKeyCombination3(modifiers KeyboardModifier) *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new3((C.int)(modifiers)))
	ret.isSubclass = true
	return ret
}

// NewQKeyCombination4 constructs a new QKeyCombination object.
func NewQKeyCombination4(param1 *QKeyCombination) *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new4(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQKeyCombination5 constructs a new QKeyCombination object.
func NewQKeyCombination5(key Key) *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new5((C.int)(key)))
	ret.isSubclass = true
	return ret
}

// NewQKeyCombination6 constructs a new QKeyCombination object.
func NewQKeyCombination6(modifiers Modifier, key Key) *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new6((C.int)(modifiers), (C.int)(key)))
	ret.isSubclass = true
	return ret
}

// NewQKeyCombination7 constructs a new QKeyCombination object.
func NewQKeyCombination7(modifiers KeyboardModifier, key Key) *QKeyCombination {

	ret := newQKeyCombination(C.QKeyCombination_new7((C.int)(modifiers), (C.int)(key)))
	ret.isSubclass = true
	return ret
}

func (this *QKeyCombination) KeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QKeyCombination_KeyboardModifiers(this.h))
}

func (this *QKeyCombination) Key() Key {
	return (Key)(C.QKeyCombination_Key(this.h))
}

func QKeyCombination_FromCombined(combined int) *QKeyCombination {
	_goptr := newQKeyCombination(C.QKeyCombination_FromCombined((C.int)(combined)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeyCombination) ToCombined() int {
	return (int)(C.QKeyCombination_ToCombined(this.h))
}

func (this *QKeyCombination) ToInt() int {
	return (int)(C.QKeyCombination_ToInt(this.h))
}

// Delete this object from C++ memory.
func (this *QKeyCombination) Delete() {
	C.QKeyCombination_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyCombination) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyCombination) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
