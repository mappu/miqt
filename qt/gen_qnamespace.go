package qt

/*

#include "gen_qnamespace.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type GlobalColor int

const (
	GlobalColor__color0      GlobalColor = 0
	GlobalColor__color1      GlobalColor = 1
	GlobalColor__black       GlobalColor = 2
	GlobalColor__white       GlobalColor = 3
	GlobalColor__darkGray    GlobalColor = 4
	GlobalColor__gray        GlobalColor = 5
	GlobalColor__lightGray   GlobalColor = 6
	GlobalColor__red         GlobalColor = 7
	GlobalColor__green       GlobalColor = 8
	GlobalColor__blue        GlobalColor = 9
	GlobalColor__cyan        GlobalColor = 10
	GlobalColor__magenta     GlobalColor = 11
	GlobalColor__yellow      GlobalColor = 12
	GlobalColor__darkRed     GlobalColor = 13
	GlobalColor__darkGreen   GlobalColor = 14
	GlobalColor__darkBlue    GlobalColor = 15
	GlobalColor__darkCyan    GlobalColor = 16
	GlobalColor__darkMagenta GlobalColor = 17
	GlobalColor__darkYellow  GlobalColor = 18
	GlobalColor__transparent GlobalColor = 19
)

type KeyboardModifier int

const (
	KeyboardModifier__NoModifier           KeyboardModifier = 0
	KeyboardModifier__ShiftModifier        KeyboardModifier = 33554432
	KeyboardModifier__ControlModifier      KeyboardModifier = 67108864
	KeyboardModifier__AltModifier          KeyboardModifier = 134217728
	KeyboardModifier__MetaModifier         KeyboardModifier = 268435456
	KeyboardModifier__KeypadModifier       KeyboardModifier = 536870912
	KeyboardModifier__GroupSwitchModifier  KeyboardModifier = 1073741824
	KeyboardModifier__KeyboardModifierMask KeyboardModifier = 4261412864
)

type Modifier int

const (
	Modifier__META          Modifier = 268435456
	Modifier__SHIFT         Modifier = 33554432
	Modifier__CTRL          Modifier = 67108864
	Modifier__ALT           Modifier = 134217728
	Modifier__MODIFIER_MASK Modifier = 4261412864
	Modifier__UNICODE_ACCEL Modifier = 0
)

type MouseButton int

const (
	MouseButton__NoButton        MouseButton = 0
	MouseButton__LeftButton      MouseButton = 1
	MouseButton__RightButton     MouseButton = 2
	MouseButton__MiddleButton    MouseButton = 4
	MouseButton__MidButton       MouseButton = 4
	MouseButton__BackButton      MouseButton = 8
	MouseButton__XButton1        MouseButton = 8
	MouseButton__ExtraButton1    MouseButton = 8
	MouseButton__ForwardButton   MouseButton = 16
	MouseButton__XButton2        MouseButton = 16
	MouseButton__ExtraButton2    MouseButton = 16
	MouseButton__TaskButton      MouseButton = 32
	MouseButton__ExtraButton3    MouseButton = 32
	MouseButton__ExtraButton4    MouseButton = 64
	MouseButton__ExtraButton5    MouseButton = 128
	MouseButton__ExtraButton6    MouseButton = 256
	MouseButton__ExtraButton7    MouseButton = 512
	MouseButton__ExtraButton8    MouseButton = 1024
	MouseButton__ExtraButton9    MouseButton = 2048
	MouseButton__ExtraButton10   MouseButton = 4096
	MouseButton__ExtraButton11   MouseButton = 8192
	MouseButton__ExtraButton12   MouseButton = 16384
	MouseButton__ExtraButton13   MouseButton = 32768
	MouseButton__ExtraButton14   MouseButton = 65536
	MouseButton__ExtraButton15   MouseButton = 131072
	MouseButton__ExtraButton16   MouseButton = 262144
	MouseButton__ExtraButton17   MouseButton = 524288
	MouseButton__ExtraButton18   MouseButton = 1048576
	MouseButton__ExtraButton19   MouseButton = 2097152
	MouseButton__ExtraButton20   MouseButton = 4194304
	MouseButton__ExtraButton21   MouseButton = 8388608
	MouseButton__ExtraButton22   MouseButton = 16777216
	MouseButton__ExtraButton23   MouseButton = 33554432
	MouseButton__ExtraButton24   MouseButton = 67108864
	MouseButton__AllButtons      MouseButton = 134217727
	MouseButton__MaxMouseButton  MouseButton = 67108864
	MouseButton__MouseButtonMask MouseButton = 4294967295
)

type Orientation int

const (
	Orientation__Horizontal Orientation = 1
	Orientation__Vertical   Orientation = 2
)

type FocusPolicy int

const (
	FocusPolicy__NoFocus     FocusPolicy = 0
	FocusPolicy__TabFocus    FocusPolicy = 1
	FocusPolicy__ClickFocus  FocusPolicy = 2
	FocusPolicy__StrongFocus FocusPolicy = 11
	FocusPolicy__WheelFocus  FocusPolicy = 15
)

type TabFocusBehavior int

const (
	TabFocusBehavior__NoTabFocus           TabFocusBehavior = 0
	TabFocusBehavior__TabFocusTextControls TabFocusBehavior = 1
	TabFocusBehavior__TabFocusListControls TabFocusBehavior = 2
	TabFocusBehavior__TabFocusAllControls  TabFocusBehavior = 255
)

type SortOrder int

const (
	SortOrder__AscendingOrder  SortOrder = 0
	SortOrder__DescendingOrder SortOrder = 1
)

type SplitBehaviorFlags int

const (
	SplitBehaviorFlags__KeepEmptyParts SplitBehaviorFlags = 0
	SplitBehaviorFlags__SkipEmptyParts SplitBehaviorFlags = 1
)

type TileRule int

const (
	TileRule__StretchTile TileRule = 0
	TileRule__RepeatTile  TileRule = 1
	TileRule__RoundTile   TileRule = 2
)

type AlignmentFlag int

const (
	AlignmentFlag__AlignLeft            AlignmentFlag = 1
	AlignmentFlag__AlignLeading         AlignmentFlag = 1
	AlignmentFlag__AlignRight           AlignmentFlag = 2
	AlignmentFlag__AlignTrailing        AlignmentFlag = 2
	AlignmentFlag__AlignHCenter         AlignmentFlag = 4
	AlignmentFlag__AlignJustify         AlignmentFlag = 8
	AlignmentFlag__AlignAbsolute        AlignmentFlag = 16
	AlignmentFlag__AlignHorizontal_Mask AlignmentFlag = 31
	AlignmentFlag__AlignTop             AlignmentFlag = 32
	AlignmentFlag__AlignBottom          AlignmentFlag = 64
	AlignmentFlag__AlignVCenter         AlignmentFlag = 128
	AlignmentFlag__AlignBaseline        AlignmentFlag = 256
	AlignmentFlag__AlignVertical_Mask   AlignmentFlag = 480
	AlignmentFlag__AlignCenter          AlignmentFlag = 132
)

type TextFlag int

const (
	TextFlag__TextSingleLine            TextFlag = 256
	TextFlag__TextDontClip              TextFlag = 512
	TextFlag__TextExpandTabs            TextFlag = 1024
	TextFlag__TextShowMnemonic          TextFlag = 2048
	TextFlag__TextWordWrap              TextFlag = 4096
	TextFlag__TextWrapAnywhere          TextFlag = 8192
	TextFlag__TextDontPrint             TextFlag = 16384
	TextFlag__TextIncludeTrailingSpaces TextFlag = 134217728
	TextFlag__TextHideMnemonic          TextFlag = 32768
	TextFlag__TextJustificationForced   TextFlag = 65536
	TextFlag__TextForceLeftToRight      TextFlag = 131072
	TextFlag__TextForceRightToLeft      TextFlag = 262144
	TextFlag__TextLongestVariant        TextFlag = 524288
	TextFlag__TextBypassShaping         TextFlag = 1048576
)

type TextElideMode int

const (
	TextElideMode__ElideLeft   TextElideMode = 0
	TextElideMode__ElideRight  TextElideMode = 1
	TextElideMode__ElideMiddle TextElideMode = 2
	TextElideMode__ElideNone   TextElideMode = 3
)

type WhiteSpaceMode int

const (
	WhiteSpaceMode__WhiteSpaceNormal        WhiteSpaceMode = 0
	WhiteSpaceMode__WhiteSpacePre           WhiteSpaceMode = 1
	WhiteSpaceMode__WhiteSpaceNoWrap        WhiteSpaceMode = 2
	WhiteSpaceMode__WhiteSpaceModeUndefined WhiteSpaceMode = -1
)

type HitTestAccuracy int

const (
	HitTestAccuracy__ExactHit HitTestAccuracy = 0
	HitTestAccuracy__FuzzyHit HitTestAccuracy = 1
)

type WindowType int

const (
	WindowType__Widget                              WindowType = 0
	WindowType__Window                              WindowType = 1
	WindowType__Dialog                              WindowType = 3
	WindowType__Sheet                               WindowType = 5
	WindowType__Drawer                              WindowType = 7
	WindowType__Popup                               WindowType = 9
	WindowType__Tool                                WindowType = 11
	WindowType__ToolTip                             WindowType = 13
	WindowType__SplashScreen                        WindowType = 15
	WindowType__Desktop                             WindowType = 17
	WindowType__SubWindow                           WindowType = 18
	WindowType__ForeignWindow                       WindowType = 33
	WindowType__CoverWindow                         WindowType = 65
	WindowType__WindowType_Mask                     WindowType = 255
	WindowType__MSWindowsFixedSizeDialogHint        WindowType = 256
	WindowType__MSWindowsOwnDC                      WindowType = 512
	WindowType__BypassWindowManagerHint             WindowType = 1024
	WindowType__X11BypassWindowManagerHint          WindowType = 1024
	WindowType__FramelessWindowHint                 WindowType = 2048
	WindowType__WindowTitleHint                     WindowType = 4096
	WindowType__WindowSystemMenuHint                WindowType = 8192
	WindowType__WindowMinimizeButtonHint            WindowType = 16384
	WindowType__WindowMaximizeButtonHint            WindowType = 32768
	WindowType__WindowMinMaxButtonsHint             WindowType = 49152
	WindowType__WindowContextHelpButtonHint         WindowType = 65536
	WindowType__WindowShadeButtonHint               WindowType = 131072
	WindowType__WindowStaysOnTopHint                WindowType = 262144
	WindowType__WindowTransparentForInput           WindowType = 524288
	WindowType__WindowOverridesSystemGestures       WindowType = 1048576
	WindowType__WindowDoesNotAcceptFocus            WindowType = 2097152
	WindowType__MaximizeUsingFullscreenGeometryHint WindowType = 4194304
	WindowType__CustomizeWindowHint                 WindowType = 33554432
	WindowType__WindowStaysOnBottomHint             WindowType = 67108864
	WindowType__WindowCloseButtonHint               WindowType = 134217728
	WindowType__MacWindowToolBarButtonHint          WindowType = 268435456
	WindowType__BypassGraphicsProxyWidget           WindowType = 536870912
	WindowType__NoDropShadowWindowHint              WindowType = 1073741824
	WindowType__WindowFullscreenButtonHint          WindowType = 2147483648
)

type WindowState int

const (
	WindowState__WindowNoState    WindowState = 0
	WindowState__WindowMinimized  WindowState = 1
	WindowState__WindowMaximized  WindowState = 2
	WindowState__WindowFullScreen WindowState = 4
	WindowState__WindowActive     WindowState = 8
)

type ApplicationState int

const (
	ApplicationState__ApplicationSuspended ApplicationState = 0
	ApplicationState__ApplicationHidden    ApplicationState = 1
	ApplicationState__ApplicationInactive  ApplicationState = 2
	ApplicationState__ApplicationActive    ApplicationState = 4
)

type ScreenOrientation int

const (
	ScreenOrientation__PrimaryOrientation           ScreenOrientation = 0
	ScreenOrientation__PortraitOrientation          ScreenOrientation = 1
	ScreenOrientation__LandscapeOrientation         ScreenOrientation = 2
	ScreenOrientation__InvertedPortraitOrientation  ScreenOrientation = 4
	ScreenOrientation__InvertedLandscapeOrientation ScreenOrientation = 8
)

type WidgetAttribute int

const (
	WidgetAttribute__WA_Disabled                        WidgetAttribute = 0
	WidgetAttribute__WA_UnderMouse                      WidgetAttribute = 1
	WidgetAttribute__WA_MouseTracking                   WidgetAttribute = 2
	WidgetAttribute__WA_ContentsPropagated              WidgetAttribute = 3
	WidgetAttribute__WA_OpaquePaintEvent                WidgetAttribute = 4
	WidgetAttribute__WA_NoBackground                    WidgetAttribute = 4
	WidgetAttribute__WA_StaticContents                  WidgetAttribute = 5
	WidgetAttribute__WA_LaidOut                         WidgetAttribute = 7
	WidgetAttribute__WA_PaintOnScreen                   WidgetAttribute = 8
	WidgetAttribute__WA_NoSystemBackground              WidgetAttribute = 9
	WidgetAttribute__WA_UpdatesDisabled                 WidgetAttribute = 10
	WidgetAttribute__WA_Mapped                          WidgetAttribute = 11
	WidgetAttribute__WA_MacNoClickThrough               WidgetAttribute = 12
	WidgetAttribute__WA_InputMethodEnabled              WidgetAttribute = 14
	WidgetAttribute__WA_WState_Visible                  WidgetAttribute = 15
	WidgetAttribute__WA_WState_Hidden                   WidgetAttribute = 16
	WidgetAttribute__WA_ForceDisabled                   WidgetAttribute = 32
	WidgetAttribute__WA_KeyCompression                  WidgetAttribute = 33
	WidgetAttribute__WA_PendingMoveEvent                WidgetAttribute = 34
	WidgetAttribute__WA_PendingResizeEvent              WidgetAttribute = 35
	WidgetAttribute__WA_SetPalette                      WidgetAttribute = 36
	WidgetAttribute__WA_SetFont                         WidgetAttribute = 37
	WidgetAttribute__WA_SetCursor                       WidgetAttribute = 38
	WidgetAttribute__WA_NoChildEventsFromChildren       WidgetAttribute = 39
	WidgetAttribute__WA_WindowModified                  WidgetAttribute = 41
	WidgetAttribute__WA_Resized                         WidgetAttribute = 42
	WidgetAttribute__WA_Moved                           WidgetAttribute = 43
	WidgetAttribute__WA_PendingUpdate                   WidgetAttribute = 44
	WidgetAttribute__WA_InvalidSize                     WidgetAttribute = 45
	WidgetAttribute__WA_MacBrushedMetal                 WidgetAttribute = 46
	WidgetAttribute__WA_MacMetalStyle                   WidgetAttribute = 46
	WidgetAttribute__WA_CustomWhatsThis                 WidgetAttribute = 47
	WidgetAttribute__WA_LayoutOnEntireRect              WidgetAttribute = 48
	WidgetAttribute__WA_OutsideWSRange                  WidgetAttribute = 49
	WidgetAttribute__WA_GrabbedShortcut                 WidgetAttribute = 50
	WidgetAttribute__WA_TransparentForMouseEvents       WidgetAttribute = 51
	WidgetAttribute__WA_PaintUnclipped                  WidgetAttribute = 52
	WidgetAttribute__WA_SetWindowIcon                   WidgetAttribute = 53
	WidgetAttribute__WA_NoMouseReplay                   WidgetAttribute = 54
	WidgetAttribute__WA_DeleteOnClose                   WidgetAttribute = 55
	WidgetAttribute__WA_RightToLeft                     WidgetAttribute = 56
	WidgetAttribute__WA_SetLayoutDirection              WidgetAttribute = 57
	WidgetAttribute__WA_NoChildEventsForParent          WidgetAttribute = 58
	WidgetAttribute__WA_ForceUpdatesDisabled            WidgetAttribute = 59
	WidgetAttribute__WA_WState_Created                  WidgetAttribute = 60
	WidgetAttribute__WA_WState_CompressKeys             WidgetAttribute = 61
	WidgetAttribute__WA_WState_InPaintEvent             WidgetAttribute = 62
	WidgetAttribute__WA_WState_Reparented               WidgetAttribute = 63
	WidgetAttribute__WA_WState_ConfigPending            WidgetAttribute = 64
	WidgetAttribute__WA_WState_Polished                 WidgetAttribute = 66
	WidgetAttribute__WA_WState_DND                      WidgetAttribute = 67
	WidgetAttribute__WA_WState_OwnSizePolicy            WidgetAttribute = 68
	WidgetAttribute__WA_WState_ExplicitShowHide         WidgetAttribute = 69
	WidgetAttribute__WA_ShowModal                       WidgetAttribute = 70
	WidgetAttribute__WA_MouseNoMask                     WidgetAttribute = 71
	WidgetAttribute__WA_GroupLeader                     WidgetAttribute = 72
	WidgetAttribute__WA_NoMousePropagation              WidgetAttribute = 73
	WidgetAttribute__WA_Hover                           WidgetAttribute = 74
	WidgetAttribute__WA_InputMethodTransparent          WidgetAttribute = 75
	WidgetAttribute__WA_QuitOnClose                     WidgetAttribute = 76
	WidgetAttribute__WA_KeyboardFocusChange             WidgetAttribute = 77
	WidgetAttribute__WA_AcceptDrops                     WidgetAttribute = 78
	WidgetAttribute__WA_DropSiteRegistered              WidgetAttribute = 79
	WidgetAttribute__WA_ForceAcceptDrops                WidgetAttribute = 79
	WidgetAttribute__WA_WindowPropagation               WidgetAttribute = 80
	WidgetAttribute__WA_NoX11EventCompression           WidgetAttribute = 81
	WidgetAttribute__WA_TintedBackground                WidgetAttribute = 82
	WidgetAttribute__WA_X11OpenGLOverlay                WidgetAttribute = 83
	WidgetAttribute__WA_AlwaysShowToolTips              WidgetAttribute = 84
	WidgetAttribute__WA_MacOpaqueSizeGrip               WidgetAttribute = 85
	WidgetAttribute__WA_SetStyle                        WidgetAttribute = 86
	WidgetAttribute__WA_SetLocale                       WidgetAttribute = 87
	WidgetAttribute__WA_MacShowFocusRect                WidgetAttribute = 88
	WidgetAttribute__WA_MacNormalSize                   WidgetAttribute = 89
	WidgetAttribute__WA_MacSmallSize                    WidgetAttribute = 90
	WidgetAttribute__WA_MacMiniSize                     WidgetAttribute = 91
	WidgetAttribute__WA_LayoutUsesWidgetRect            WidgetAttribute = 92
	WidgetAttribute__WA_StyledBackground                WidgetAttribute = 93
	WidgetAttribute__WA_MSWindowsUseDirect3D            WidgetAttribute = 94
	WidgetAttribute__WA_CanHostQMdiSubWindowTitleBar    WidgetAttribute = 95
	WidgetAttribute__WA_MacAlwaysShowToolWindow         WidgetAttribute = 96
	WidgetAttribute__WA_StyleSheet                      WidgetAttribute = 97
	WidgetAttribute__WA_ShowWithoutActivating           WidgetAttribute = 98
	WidgetAttribute__WA_X11BypassTransientForHint       WidgetAttribute = 99
	WidgetAttribute__WA_NativeWindow                    WidgetAttribute = 100
	WidgetAttribute__WA_DontCreateNativeAncestors       WidgetAttribute = 101
	WidgetAttribute__WA_MacVariableSize                 WidgetAttribute = 102
	WidgetAttribute__WA_DontShowOnScreen                WidgetAttribute = 103
	WidgetAttribute__WA_X11NetWmWindowTypeDesktop       WidgetAttribute = 104
	WidgetAttribute__WA_X11NetWmWindowTypeDock          WidgetAttribute = 105
	WidgetAttribute__WA_X11NetWmWindowTypeToolBar       WidgetAttribute = 106
	WidgetAttribute__WA_X11NetWmWindowTypeMenu          WidgetAttribute = 107
	WidgetAttribute__WA_X11NetWmWindowTypeUtility       WidgetAttribute = 108
	WidgetAttribute__WA_X11NetWmWindowTypeSplash        WidgetAttribute = 109
	WidgetAttribute__WA_X11NetWmWindowTypeDialog        WidgetAttribute = 110
	WidgetAttribute__WA_X11NetWmWindowTypeDropDownMenu  WidgetAttribute = 111
	WidgetAttribute__WA_X11NetWmWindowTypePopupMenu     WidgetAttribute = 112
	WidgetAttribute__WA_X11NetWmWindowTypeToolTip       WidgetAttribute = 113
	WidgetAttribute__WA_X11NetWmWindowTypeNotification  WidgetAttribute = 114
	WidgetAttribute__WA_X11NetWmWindowTypeCombo         WidgetAttribute = 115
	WidgetAttribute__WA_X11NetWmWindowTypeDND           WidgetAttribute = 116
	WidgetAttribute__WA_MacFrameworkScaled              WidgetAttribute = 117
	WidgetAttribute__WA_SetWindowModality               WidgetAttribute = 118
	WidgetAttribute__WA_WState_WindowOpacitySet         WidgetAttribute = 119
	WidgetAttribute__WA_TranslucentBackground           WidgetAttribute = 120
	WidgetAttribute__WA_AcceptTouchEvents               WidgetAttribute = 121
	WidgetAttribute__WA_WState_AcceptedTouchBeginEvent  WidgetAttribute = 122
	WidgetAttribute__WA_TouchPadAcceptSingleTouchEvents WidgetAttribute = 123
	WidgetAttribute__WA_X11DoNotAcceptFocus             WidgetAttribute = 126
	WidgetAttribute__WA_MacNoShadow                     WidgetAttribute = 127
	WidgetAttribute__WA_AlwaysStackOnTop                WidgetAttribute = 128
	WidgetAttribute__WA_TabletTracking                  WidgetAttribute = 129
	WidgetAttribute__WA_ContentsMarginsRespectsSafeArea WidgetAttribute = 130
	WidgetAttribute__WA_StyleSheetTarget                WidgetAttribute = 131
	WidgetAttribute__WA_AttributeCount                  WidgetAttribute = 132
)

type ApplicationAttribute int

const (
	ApplicationAttribute__AA_ImmediateWidgetCreation                 ApplicationAttribute = 0
	ApplicationAttribute__AA_MSWindowsUseDirect3DByDefault           ApplicationAttribute = 1
	ApplicationAttribute__AA_DontShowIconsInMenus                    ApplicationAttribute = 2
	ApplicationAttribute__AA_NativeWindows                           ApplicationAttribute = 3
	ApplicationAttribute__AA_DontCreateNativeWidgetSiblings          ApplicationAttribute = 4
	ApplicationAttribute__AA_PluginApplication                       ApplicationAttribute = 5
	ApplicationAttribute__AA_MacPluginApplication                    ApplicationAttribute = 5
	ApplicationAttribute__AA_DontUseNativeMenuBar                    ApplicationAttribute = 6
	ApplicationAttribute__AA_MacDontSwapCtrlAndMeta                  ApplicationAttribute = 7
	ApplicationAttribute__AA_Use96Dpi                                ApplicationAttribute = 8
	ApplicationAttribute__AA_DisableNativeVirtualKeyboard            ApplicationAttribute = 9
	ApplicationAttribute__AA_X11InitThreads                          ApplicationAttribute = 10
	ApplicationAttribute__AA_SynthesizeTouchForUnhandledMouseEvents  ApplicationAttribute = 11
	ApplicationAttribute__AA_SynthesizeMouseForUnhandledTouchEvents  ApplicationAttribute = 12
	ApplicationAttribute__AA_UseHighDpiPixmaps                       ApplicationAttribute = 13
	ApplicationAttribute__AA_ForceRasterWidgets                      ApplicationAttribute = 14
	ApplicationAttribute__AA_UseDesktopOpenGL                        ApplicationAttribute = 15
	ApplicationAttribute__AA_UseOpenGLES                             ApplicationAttribute = 16
	ApplicationAttribute__AA_UseSoftwareOpenGL                       ApplicationAttribute = 17
	ApplicationAttribute__AA_ShareOpenGLContexts                     ApplicationAttribute = 18
	ApplicationAttribute__AA_SetPalette                              ApplicationAttribute = 19
	ApplicationAttribute__AA_EnableHighDpiScaling                    ApplicationAttribute = 20
	ApplicationAttribute__AA_DisableHighDpiScaling                   ApplicationAttribute = 21
	ApplicationAttribute__AA_UseStyleSheetPropagationInWidgetStyles  ApplicationAttribute = 22
	ApplicationAttribute__AA_DontUseNativeDialogs                    ApplicationAttribute = 23
	ApplicationAttribute__AA_SynthesizeMouseForUnhandledTabletEvents ApplicationAttribute = 24
	ApplicationAttribute__AA_CompressHighFrequencyEvents             ApplicationAttribute = 25
	ApplicationAttribute__AA_DontCheckOpenGLContextThreadAffinity    ApplicationAttribute = 26
	ApplicationAttribute__AA_DisableShaderDiskCache                  ApplicationAttribute = 27
	ApplicationAttribute__AA_DontShowShortcutsInContextMenus         ApplicationAttribute = 28
	ApplicationAttribute__AA_CompressTabletEvents                    ApplicationAttribute = 29
	ApplicationAttribute__AA_DisableWindowContextHelpButton          ApplicationAttribute = 30
	ApplicationAttribute__AA_DisableSessionManager                   ApplicationAttribute = 31
	ApplicationAttribute__AA_AttributeCount                          ApplicationAttribute = 32
)

type ImageConversionFlag int

const (
	ImageConversionFlag__ColorMode_Mask       ImageConversionFlag = 3
	ImageConversionFlag__AutoColor            ImageConversionFlag = 0
	ImageConversionFlag__ColorOnly            ImageConversionFlag = 3
	ImageConversionFlag__MonoOnly             ImageConversionFlag = 2
	ImageConversionFlag__AlphaDither_Mask     ImageConversionFlag = 12
	ImageConversionFlag__ThresholdAlphaDither ImageConversionFlag = 0
	ImageConversionFlag__OrderedAlphaDither   ImageConversionFlag = 4
	ImageConversionFlag__DiffuseAlphaDither   ImageConversionFlag = 8
	ImageConversionFlag__NoAlpha              ImageConversionFlag = 12
	ImageConversionFlag__Dither_Mask          ImageConversionFlag = 48
	ImageConversionFlag__DiffuseDither        ImageConversionFlag = 0
	ImageConversionFlag__OrderedDither        ImageConversionFlag = 16
	ImageConversionFlag__ThresholdDither      ImageConversionFlag = 32
	ImageConversionFlag__DitherMode_Mask      ImageConversionFlag = 192
	ImageConversionFlag__AutoDither           ImageConversionFlag = 0
	ImageConversionFlag__PreferDither         ImageConversionFlag = 64
	ImageConversionFlag__AvoidDither          ImageConversionFlag = 128
	ImageConversionFlag__NoOpaqueDetection    ImageConversionFlag = 256
	ImageConversionFlag__NoFormatConversion   ImageConversionFlag = 512
)

type BGMode int

const (
	BGMode__TransparentMode BGMode = 0
	BGMode__OpaqueMode      BGMode = 1
)

type Key int

const (
	Key__Key_Escape                  Key = 16777216
	Key__Key_Tab                     Key = 16777217
	Key__Key_Backtab                 Key = 16777218
	Key__Key_Backspace               Key = 16777219
	Key__Key_Return                  Key = 16777220
	Key__Key_Enter                   Key = 16777221
	Key__Key_Insert                  Key = 16777222
	Key__Key_Delete                  Key = 16777223
	Key__Key_Pause                   Key = 16777224
	Key__Key_Print                   Key = 16777225
	Key__Key_SysReq                  Key = 16777226
	Key__Key_Clear                   Key = 16777227
	Key__Key_Home                    Key = 16777232
	Key__Key_End                     Key = 16777233
	Key__Key_Left                    Key = 16777234
	Key__Key_Up                      Key = 16777235
	Key__Key_Right                   Key = 16777236
	Key__Key_Down                    Key = 16777237
	Key__Key_PageUp                  Key = 16777238
	Key__Key_PageDown                Key = 16777239
	Key__Key_Shift                   Key = 16777248
	Key__Key_Control                 Key = 16777249
	Key__Key_Meta                    Key = 16777250
	Key__Key_Alt                     Key = 16777251
	Key__Key_CapsLock                Key = 16777252
	Key__Key_NumLock                 Key = 16777253
	Key__Key_ScrollLock              Key = 16777254
	Key__Key_F1                      Key = 16777264
	Key__Key_F2                      Key = 16777265
	Key__Key_F3                      Key = 16777266
	Key__Key_F4                      Key = 16777267
	Key__Key_F5                      Key = 16777268
	Key__Key_F6                      Key = 16777269
	Key__Key_F7                      Key = 16777270
	Key__Key_F8                      Key = 16777271
	Key__Key_F9                      Key = 16777272
	Key__Key_F10                     Key = 16777273
	Key__Key_F11                     Key = 16777274
	Key__Key_F12                     Key = 16777275
	Key__Key_F13                     Key = 16777276
	Key__Key_F14                     Key = 16777277
	Key__Key_F15                     Key = 16777278
	Key__Key_F16                     Key = 16777279
	Key__Key_F17                     Key = 16777280
	Key__Key_F18                     Key = 16777281
	Key__Key_F19                     Key = 16777282
	Key__Key_F20                     Key = 16777283
	Key__Key_F21                     Key = 16777284
	Key__Key_F22                     Key = 16777285
	Key__Key_F23                     Key = 16777286
	Key__Key_F24                     Key = 16777287
	Key__Key_F25                     Key = 16777288
	Key__Key_F26                     Key = 16777289
	Key__Key_F27                     Key = 16777290
	Key__Key_F28                     Key = 16777291
	Key__Key_F29                     Key = 16777292
	Key__Key_F30                     Key = 16777293
	Key__Key_F31                     Key = 16777294
	Key__Key_F32                     Key = 16777295
	Key__Key_F33                     Key = 16777296
	Key__Key_F34                     Key = 16777297
	Key__Key_F35                     Key = 16777298
	Key__Key_Super_L                 Key = 16777299
	Key__Key_Super_R                 Key = 16777300
	Key__Key_Menu                    Key = 16777301
	Key__Key_Hyper_L                 Key = 16777302
	Key__Key_Hyper_R                 Key = 16777303
	Key__Key_Help                    Key = 16777304
	Key__Key_Direction_L             Key = 16777305
	Key__Key_Direction_R             Key = 16777312
	Key__Key_Space                   Key = 32
	Key__Key_Any                     Key = 32
	Key__Key_Exclam                  Key = 33
	Key__Key_QuoteDbl                Key = 34
	Key__Key_NumberSign              Key = 35
	Key__Key_Dollar                  Key = 36
	Key__Key_Percent                 Key = 37
	Key__Key_Ampersand               Key = 38
	Key__Key_Apostrophe              Key = 39
	Key__Key_ParenLeft               Key = 40
	Key__Key_ParenRight              Key = 41
	Key__Key_Asterisk                Key = 42
	Key__Key_Plus                    Key = 43
	Key__Key_Comma                   Key = 44
	Key__Key_Minus                   Key = 45
	Key__Key_Period                  Key = 46
	Key__Key_Slash                   Key = 47
	Key__Key_0                       Key = 48
	Key__Key_1                       Key = 49
	Key__Key_2                       Key = 50
	Key__Key_3                       Key = 51
	Key__Key_4                       Key = 52
	Key__Key_5                       Key = 53
	Key__Key_6                       Key = 54
	Key__Key_7                       Key = 55
	Key__Key_8                       Key = 56
	Key__Key_9                       Key = 57
	Key__Key_Colon                   Key = 58
	Key__Key_Semicolon               Key = 59
	Key__Key_Less                    Key = 60
	Key__Key_Equal                   Key = 61
	Key__Key_Greater                 Key = 62
	Key__Key_Question                Key = 63
	Key__Key_At                      Key = 64
	Key__Key_A                       Key = 65
	Key__Key_B                       Key = 66
	Key__Key_C                       Key = 67
	Key__Key_D                       Key = 68
	Key__Key_E                       Key = 69
	Key__Key_F                       Key = 70
	Key__Key_G                       Key = 71
	Key__Key_H                       Key = 72
	Key__Key_I                       Key = 73
	Key__Key_J                       Key = 74
	Key__Key_K                       Key = 75
	Key__Key_L                       Key = 76
	Key__Key_M                       Key = 77
	Key__Key_N                       Key = 78
	Key__Key_O                       Key = 79
	Key__Key_P                       Key = 80
	Key__Key_Q                       Key = 81
	Key__Key_R                       Key = 82
	Key__Key_S                       Key = 83
	Key__Key_T                       Key = 84
	Key__Key_U                       Key = 85
	Key__Key_V                       Key = 86
	Key__Key_W                       Key = 87
	Key__Key_X                       Key = 88
	Key__Key_Y                       Key = 89
	Key__Key_Z                       Key = 90
	Key__Key_BracketLeft             Key = 91
	Key__Key_Backslash               Key = 92
	Key__Key_BracketRight            Key = 93
	Key__Key_AsciiCircum             Key = 94
	Key__Key_Underscore              Key = 95
	Key__Key_QuoteLeft               Key = 96
	Key__Key_BraceLeft               Key = 123
	Key__Key_Bar                     Key = 124
	Key__Key_BraceRight              Key = 125
	Key__Key_AsciiTilde              Key = 126
	Key__Key_nobreakspace            Key = 160
	Key__Key_exclamdown              Key = 161
	Key__Key_cent                    Key = 162
	Key__Key_sterling                Key = 163
	Key__Key_currency                Key = 164
	Key__Key_yen                     Key = 165
	Key__Key_brokenbar               Key = 166
	Key__Key_section                 Key = 167
	Key__Key_diaeresis               Key = 168
	Key__Key_copyright               Key = 169
	Key__Key_ordfeminine             Key = 170
	Key__Key_guillemotleft           Key = 171
	Key__Key_notsign                 Key = 172
	Key__Key_hyphen                  Key = 173
	Key__Key_registered              Key = 174
	Key__Key_macron                  Key = 175
	Key__Key_degree                  Key = 176
	Key__Key_plusminus               Key = 177
	Key__Key_twosuperior             Key = 178
	Key__Key_threesuperior           Key = 179
	Key__Key_acute                   Key = 180
	Key__Key_mu                      Key = 181
	Key__Key_paragraph               Key = 182
	Key__Key_periodcentered          Key = 183
	Key__Key_cedilla                 Key = 184
	Key__Key_onesuperior             Key = 185
	Key__Key_masculine               Key = 186
	Key__Key_guillemotright          Key = 187
	Key__Key_onequarter              Key = 188
	Key__Key_onehalf                 Key = 189
	Key__Key_threequarters           Key = 190
	Key__Key_questiondown            Key = 191
	Key__Key_Agrave                  Key = 192
	Key__Key_Aacute                  Key = 193
	Key__Key_Acircumflex             Key = 194
	Key__Key_Atilde                  Key = 195
	Key__Key_Adiaeresis              Key = 196
	Key__Key_Aring                   Key = 197
	Key__Key_AE                      Key = 198
	Key__Key_Ccedilla                Key = 199
	Key__Key_Egrave                  Key = 200
	Key__Key_Eacute                  Key = 201
	Key__Key_Ecircumflex             Key = 202
	Key__Key_Ediaeresis              Key = 203
	Key__Key_Igrave                  Key = 204
	Key__Key_Iacute                  Key = 205
	Key__Key_Icircumflex             Key = 206
	Key__Key_Idiaeresis              Key = 207
	Key__Key_ETH                     Key = 208
	Key__Key_Ntilde                  Key = 209
	Key__Key_Ograve                  Key = 210
	Key__Key_Oacute                  Key = 211
	Key__Key_Ocircumflex             Key = 212
	Key__Key_Otilde                  Key = 213
	Key__Key_Odiaeresis              Key = 214
	Key__Key_multiply                Key = 215
	Key__Key_Ooblique                Key = 216
	Key__Key_Ugrave                  Key = 217
	Key__Key_Uacute                  Key = 218
	Key__Key_Ucircumflex             Key = 219
	Key__Key_Udiaeresis              Key = 220
	Key__Key_Yacute                  Key = 221
	Key__Key_THORN                   Key = 222
	Key__Key_ssharp                  Key = 223
	Key__Key_division                Key = 247
	Key__Key_ydiaeresis              Key = 255
	Key__Key_AltGr                   Key = 16781571
	Key__Key_Multi_key               Key = 16781600
	Key__Key_Codeinput               Key = 16781623
	Key__Key_SingleCandidate         Key = 16781628
	Key__Key_MultipleCandidate       Key = 16781629
	Key__Key_PreviousCandidate       Key = 16781630
	Key__Key_Mode_switch             Key = 16781694
	Key__Key_Kanji                   Key = 16781601
	Key__Key_Muhenkan                Key = 16781602
	Key__Key_Henkan                  Key = 16781603
	Key__Key_Romaji                  Key = 16781604
	Key__Key_Hiragana                Key = 16781605
	Key__Key_Katakana                Key = 16781606
	Key__Key_Hiragana_Katakana       Key = 16781607
	Key__Key_Zenkaku                 Key = 16781608
	Key__Key_Hankaku                 Key = 16781609
	Key__Key_Zenkaku_Hankaku         Key = 16781610
	Key__Key_Touroku                 Key = 16781611
	Key__Key_Massyo                  Key = 16781612
	Key__Key_Kana_Lock               Key = 16781613
	Key__Key_Kana_Shift              Key = 16781614
	Key__Key_Eisu_Shift              Key = 16781615
	Key__Key_Eisu_toggle             Key = 16781616
	Key__Key_Hangul                  Key = 16781617
	Key__Key_Hangul_Start            Key = 16781618
	Key__Key_Hangul_End              Key = 16781619
	Key__Key_Hangul_Hanja            Key = 16781620
	Key__Key_Hangul_Jamo             Key = 16781621
	Key__Key_Hangul_Romaja           Key = 16781622
	Key__Key_Hangul_Jeonja           Key = 16781624
	Key__Key_Hangul_Banja            Key = 16781625
	Key__Key_Hangul_PreHanja         Key = 16781626
	Key__Key_Hangul_PostHanja        Key = 16781627
	Key__Key_Hangul_Special          Key = 16781631
	Key__Key_Dead_Grave              Key = 16781904
	Key__Key_Dead_Acute              Key = 16781905
	Key__Key_Dead_Circumflex         Key = 16781906
	Key__Key_Dead_Tilde              Key = 16781907
	Key__Key_Dead_Macron             Key = 16781908
	Key__Key_Dead_Breve              Key = 16781909
	Key__Key_Dead_Abovedot           Key = 16781910
	Key__Key_Dead_Diaeresis          Key = 16781911
	Key__Key_Dead_Abovering          Key = 16781912
	Key__Key_Dead_Doubleacute        Key = 16781913
	Key__Key_Dead_Caron              Key = 16781914
	Key__Key_Dead_Cedilla            Key = 16781915
	Key__Key_Dead_Ogonek             Key = 16781916
	Key__Key_Dead_Iota               Key = 16781917
	Key__Key_Dead_Voiced_Sound       Key = 16781918
	Key__Key_Dead_Semivoiced_Sound   Key = 16781919
	Key__Key_Dead_Belowdot           Key = 16781920
	Key__Key_Dead_Hook               Key = 16781921
	Key__Key_Dead_Horn               Key = 16781922
	Key__Key_Dead_Stroke             Key = 16781923
	Key__Key_Dead_Abovecomma         Key = 16781924
	Key__Key_Dead_Abovereversedcomma Key = 16781925
	Key__Key_Dead_Doublegrave        Key = 16781926
	Key__Key_Dead_Belowring          Key = 16781927
	Key__Key_Dead_Belowmacron        Key = 16781928
	Key__Key_Dead_Belowcircumflex    Key = 16781929
	Key__Key_Dead_Belowtilde         Key = 16781930
	Key__Key_Dead_Belowbreve         Key = 16781931
	Key__Key_Dead_Belowdiaeresis     Key = 16781932
	Key__Key_Dead_Invertedbreve      Key = 16781933
	Key__Key_Dead_Belowcomma         Key = 16781934
	Key__Key_Dead_Currency           Key = 16781935
	Key__Key_Dead_a                  Key = 16781952
	Key__Key_Dead_A                  Key = 16781953
	Key__Key_Dead_e                  Key = 16781954
	Key__Key_Dead_E                  Key = 16781955
	Key__Key_Dead_i                  Key = 16781956
	Key__Key_Dead_I                  Key = 16781957
	Key__Key_Dead_o                  Key = 16781958
	Key__Key_Dead_O                  Key = 16781959
	Key__Key_Dead_u                  Key = 16781960
	Key__Key_Dead_U                  Key = 16781961
	Key__Key_Dead_Small_Schwa        Key = 16781962
	Key__Key_Dead_Capital_Schwa      Key = 16781963
	Key__Key_Dead_Greek              Key = 16781964
	Key__Key_Dead_Lowline            Key = 16781968
	Key__Key_Dead_Aboveverticalline  Key = 16781969
	Key__Key_Dead_Belowverticalline  Key = 16781970
	Key__Key_Dead_Longsolidusoverlay Key = 16781971
	Key__Key_Back                    Key = 16777313
	Key__Key_Forward                 Key = 16777314
	Key__Key_Stop                    Key = 16777315
	Key__Key_Refresh                 Key = 16777316
	Key__Key_VolumeDown              Key = 16777328
	Key__Key_VolumeMute              Key = 16777329
	Key__Key_VolumeUp                Key = 16777330
	Key__Key_BassBoost               Key = 16777331
	Key__Key_BassUp                  Key = 16777332
	Key__Key_BassDown                Key = 16777333
	Key__Key_TrebleUp                Key = 16777334
	Key__Key_TrebleDown              Key = 16777335
	Key__Key_MediaPlay               Key = 16777344
	Key__Key_MediaStop               Key = 16777345
	Key__Key_MediaPrevious           Key = 16777346
	Key__Key_MediaNext               Key = 16777347
	Key__Key_MediaRecord             Key = 16777348
	Key__Key_MediaPause              Key = 16777349
	Key__Key_MediaTogglePlayPause    Key = 16777350
	Key__Key_HomePage                Key = 16777360
	Key__Key_Favorites               Key = 16777361
	Key__Key_Search                  Key = 16777362
	Key__Key_Standby                 Key = 16777363
	Key__Key_OpenUrl                 Key = 16777364
	Key__Key_LaunchMail              Key = 16777376
	Key__Key_LaunchMedia             Key = 16777377
	Key__Key_Launch0                 Key = 16777378
	Key__Key_Launch1                 Key = 16777379
	Key__Key_Launch2                 Key = 16777380
	Key__Key_Launch3                 Key = 16777381
	Key__Key_Launch4                 Key = 16777382
	Key__Key_Launch5                 Key = 16777383
	Key__Key_Launch6                 Key = 16777384
	Key__Key_Launch7                 Key = 16777385
	Key__Key_Launch8                 Key = 16777386
	Key__Key_Launch9                 Key = 16777387
	Key__Key_LaunchA                 Key = 16777388
	Key__Key_LaunchB                 Key = 16777389
	Key__Key_LaunchC                 Key = 16777390
	Key__Key_LaunchD                 Key = 16777391
	Key__Key_LaunchE                 Key = 16777392
	Key__Key_LaunchF                 Key = 16777393
	Key__Key_MonBrightnessUp         Key = 16777394
	Key__Key_MonBrightnessDown       Key = 16777395
	Key__Key_KeyboardLightOnOff      Key = 16777396
	Key__Key_KeyboardBrightnessUp    Key = 16777397
	Key__Key_KeyboardBrightnessDown  Key = 16777398
	Key__Key_PowerOff                Key = 16777399
	Key__Key_WakeUp                  Key = 16777400
	Key__Key_Eject                   Key = 16777401
	Key__Key_ScreenSaver             Key = 16777402
	Key__Key_WWW                     Key = 16777403
	Key__Key_Memo                    Key = 16777404
	Key__Key_LightBulb               Key = 16777405
	Key__Key_Shop                    Key = 16777406
	Key__Key_History                 Key = 16777407
	Key__Key_AddFavorite             Key = 16777408
	Key__Key_HotLinks                Key = 16777409
	Key__Key_BrightnessAdjust        Key = 16777410
	Key__Key_Finance                 Key = 16777411
	Key__Key_Community               Key = 16777412
	Key__Key_AudioRewind             Key = 16777413
	Key__Key_BackForward             Key = 16777414
	Key__Key_ApplicationLeft         Key = 16777415
	Key__Key_ApplicationRight        Key = 16777416
	Key__Key_Book                    Key = 16777417
	Key__Key_CD                      Key = 16777418
	Key__Key_Calculator              Key = 16777419
	Key__Key_ToDoList                Key = 16777420
	Key__Key_ClearGrab               Key = 16777421
	Key__Key_Close                   Key = 16777422
	Key__Key_Copy                    Key = 16777423
	Key__Key_Cut                     Key = 16777424
	Key__Key_Display                 Key = 16777425
	Key__Key_DOS                     Key = 16777426
	Key__Key_Documents               Key = 16777427
	Key__Key_Excel                   Key = 16777428
	Key__Key_Explorer                Key = 16777429
	Key__Key_Game                    Key = 16777430
	Key__Key_Go                      Key = 16777431
	Key__Key_iTouch                  Key = 16777432
	Key__Key_LogOff                  Key = 16777433
	Key__Key_Market                  Key = 16777434
	Key__Key_Meeting                 Key = 16777435
	Key__Key_MenuKB                  Key = 16777436
	Key__Key_MenuPB                  Key = 16777437
	Key__Key_MySites                 Key = 16777438
	Key__Key_News                    Key = 16777439
	Key__Key_OfficeHome              Key = 16777440
	Key__Key_Option                  Key = 16777441
	Key__Key_Paste                   Key = 16777442
	Key__Key_Phone                   Key = 16777443
	Key__Key_Calendar                Key = 16777444
	Key__Key_Reply                   Key = 16777445
	Key__Key_Reload                  Key = 16777446
	Key__Key_RotateWindows           Key = 16777447
	Key__Key_RotationPB              Key = 16777448
	Key__Key_RotationKB              Key = 16777449
	Key__Key_Save                    Key = 16777450
	Key__Key_Send                    Key = 16777451
	Key__Key_Spell                   Key = 16777452
	Key__Key_SplitScreen             Key = 16777453
	Key__Key_Support                 Key = 16777454
	Key__Key_TaskPane                Key = 16777455
	Key__Key_Terminal                Key = 16777456
	Key__Key_Tools                   Key = 16777457
	Key__Key_Travel                  Key = 16777458
	Key__Key_Video                   Key = 16777459
	Key__Key_Word                    Key = 16777460
	Key__Key_Xfer                    Key = 16777461
	Key__Key_ZoomIn                  Key = 16777462
	Key__Key_ZoomOut                 Key = 16777463
	Key__Key_Away                    Key = 16777464
	Key__Key_Messenger               Key = 16777465
	Key__Key_WebCam                  Key = 16777466
	Key__Key_MailForward             Key = 16777467
	Key__Key_Pictures                Key = 16777468
	Key__Key_Music                   Key = 16777469
	Key__Key_Battery                 Key = 16777470
	Key__Key_Bluetooth               Key = 16777471
	Key__Key_WLAN                    Key = 16777472
	Key__Key_UWB                     Key = 16777473
	Key__Key_AudioForward            Key = 16777474
	Key__Key_AudioRepeat             Key = 16777475
	Key__Key_AudioRandomPlay         Key = 16777476
	Key__Key_Subtitle                Key = 16777477
	Key__Key_AudioCycleTrack         Key = 16777478
	Key__Key_Time                    Key = 16777479
	Key__Key_Hibernate               Key = 16777480
	Key__Key_View                    Key = 16777481
	Key__Key_TopMenu                 Key = 16777482
	Key__Key_PowerDown               Key = 16777483
	Key__Key_Suspend                 Key = 16777484
	Key__Key_ContrastAdjust          Key = 16777485
	Key__Key_LaunchG                 Key = 16777486
	Key__Key_LaunchH                 Key = 16777487
	Key__Key_TouchpadToggle          Key = 16777488
	Key__Key_TouchpadOn              Key = 16777489
	Key__Key_TouchpadOff             Key = 16777490
	Key__Key_MicMute                 Key = 16777491
	Key__Key_Red                     Key = 16777492
	Key__Key_Green                   Key = 16777493
	Key__Key_Yellow                  Key = 16777494
	Key__Key_Blue                    Key = 16777495
	Key__Key_ChannelUp               Key = 16777496
	Key__Key_ChannelDown             Key = 16777497
	Key__Key_Guide                   Key = 16777498
	Key__Key_Info                    Key = 16777499
	Key__Key_Settings                Key = 16777500
	Key__Key_MicVolumeUp             Key = 16777501
	Key__Key_MicVolumeDown           Key = 16777502
	Key__Key_New                     Key = 16777504
	Key__Key_Open                    Key = 16777505
	Key__Key_Find                    Key = 16777506
	Key__Key_Undo                    Key = 16777507
	Key__Key_Redo                    Key = 16777508
	Key__Key_MediaLast               Key = 16842751
	Key__Key_Select                  Key = 16842752
	Key__Key_Yes                     Key = 16842753
	Key__Key_No                      Key = 16842754
	Key__Key_Cancel                  Key = 16908289
	Key__Key_Printer                 Key = 16908290
	Key__Key_Execute                 Key = 16908291
	Key__Key_Sleep                   Key = 16908292
	Key__Key_Play                    Key = 16908293
	Key__Key_Zoom                    Key = 16908294
	Key__Key_Exit                    Key = 16908298
	Key__Key_Context1                Key = 17825792
	Key__Key_Context2                Key = 17825793
	Key__Key_Context3                Key = 17825794
	Key__Key_Context4                Key = 17825795
	Key__Key_Call                    Key = 17825796
	Key__Key_Hangup                  Key = 17825797
	Key__Key_Flip                    Key = 17825798
	Key__Key_ToggleCallHangup        Key = 17825799
	Key__Key_VoiceDial               Key = 17825800
	Key__Key_LastNumberRedial        Key = 17825801
	Key__Key_Camera                  Key = 17825824
	Key__Key_CameraFocus             Key = 17825825
	Key__Key_unknown                 Key = 33554431
)

type ArrowType int

const (
	ArrowType__NoArrow    ArrowType = 0
	ArrowType__UpArrow    ArrowType = 1
	ArrowType__DownArrow  ArrowType = 2
	ArrowType__LeftArrow  ArrowType = 3
	ArrowType__RightArrow ArrowType = 4
)

type PenStyle int

const (
	PenStyle__NoPen          PenStyle = 0
	PenStyle__SolidLine      PenStyle = 1
	PenStyle__DashLine       PenStyle = 2
	PenStyle__DotLine        PenStyle = 3
	PenStyle__DashDotLine    PenStyle = 4
	PenStyle__DashDotDotLine PenStyle = 5
	PenStyle__CustomDashLine PenStyle = 6
	PenStyle__MPenStyle      PenStyle = 15
)

type PenCapStyle int

const (
	PenCapStyle__FlatCap      PenCapStyle = 0
	PenCapStyle__SquareCap    PenCapStyle = 16
	PenCapStyle__RoundCap     PenCapStyle = 32
	PenCapStyle__MPenCapStyle PenCapStyle = 48
)

type PenJoinStyle int

const (
	PenJoinStyle__MiterJoin     PenJoinStyle = 0
	PenJoinStyle__BevelJoin     PenJoinStyle = 64
	PenJoinStyle__RoundJoin     PenJoinStyle = 128
	PenJoinStyle__SvgMiterJoin  PenJoinStyle = 256
	PenJoinStyle__MPenJoinStyle PenJoinStyle = 448
)

type BrushStyle int

const (
	BrushStyle__NoBrush                BrushStyle = 0
	BrushStyle__SolidPattern           BrushStyle = 1
	BrushStyle__Dense1Pattern          BrushStyle = 2
	BrushStyle__Dense2Pattern          BrushStyle = 3
	BrushStyle__Dense3Pattern          BrushStyle = 4
	BrushStyle__Dense4Pattern          BrushStyle = 5
	BrushStyle__Dense5Pattern          BrushStyle = 6
	BrushStyle__Dense6Pattern          BrushStyle = 7
	BrushStyle__Dense7Pattern          BrushStyle = 8
	BrushStyle__HorPattern             BrushStyle = 9
	BrushStyle__VerPattern             BrushStyle = 10
	BrushStyle__CrossPattern           BrushStyle = 11
	BrushStyle__BDiagPattern           BrushStyle = 12
	BrushStyle__FDiagPattern           BrushStyle = 13
	BrushStyle__DiagCrossPattern       BrushStyle = 14
	BrushStyle__LinearGradientPattern  BrushStyle = 15
	BrushStyle__RadialGradientPattern  BrushStyle = 16
	BrushStyle__ConicalGradientPattern BrushStyle = 17
	BrushStyle__TexturePattern         BrushStyle = 24
)

type SizeMode int

const (
	SizeMode__AbsoluteSize SizeMode = 0
	SizeMode__RelativeSize SizeMode = 1
)

type UIEffect int

const (
	UIEffect__UI_General        UIEffect = 0
	UIEffect__UI_AnimateMenu    UIEffect = 1
	UIEffect__UI_FadeMenu       UIEffect = 2
	UIEffect__UI_AnimateCombo   UIEffect = 3
	UIEffect__UI_AnimateTooltip UIEffect = 4
	UIEffect__UI_FadeTooltip    UIEffect = 5
	UIEffect__UI_AnimateToolBox UIEffect = 6
)

type CursorShape int

const (
	CursorShape__ArrowCursor        CursorShape = 0
	CursorShape__UpArrowCursor      CursorShape = 1
	CursorShape__CrossCursor        CursorShape = 2
	CursorShape__WaitCursor         CursorShape = 3
	CursorShape__IBeamCursor        CursorShape = 4
	CursorShape__SizeVerCursor      CursorShape = 5
	CursorShape__SizeHorCursor      CursorShape = 6
	CursorShape__SizeBDiagCursor    CursorShape = 7
	CursorShape__SizeFDiagCursor    CursorShape = 8
	CursorShape__SizeAllCursor      CursorShape = 9
	CursorShape__BlankCursor        CursorShape = 10
	CursorShape__SplitVCursor       CursorShape = 11
	CursorShape__SplitHCursor       CursorShape = 12
	CursorShape__PointingHandCursor CursorShape = 13
	CursorShape__ForbiddenCursor    CursorShape = 14
	CursorShape__WhatsThisCursor    CursorShape = 15
	CursorShape__BusyCursor         CursorShape = 16
	CursorShape__OpenHandCursor     CursorShape = 17
	CursorShape__ClosedHandCursor   CursorShape = 18
	CursorShape__DragCopyCursor     CursorShape = 19
	CursorShape__DragMoveCursor     CursorShape = 20
	CursorShape__DragLinkCursor     CursorShape = 21
	CursorShape__LastCursor         CursorShape = 21
	CursorShape__BitmapCursor       CursorShape = 24
	CursorShape__CustomCursor       CursorShape = 25
)

type TextFormat int

const (
	TextFormat__PlainText    TextFormat = 0
	TextFormat__RichText     TextFormat = 1
	TextFormat__AutoText     TextFormat = 2
	TextFormat__MarkdownText TextFormat = 3
)

type AspectRatioMode int

const (
	AspectRatioMode__IgnoreAspectRatio          AspectRatioMode = 0
	AspectRatioMode__KeepAspectRatio            AspectRatioMode = 1
	AspectRatioMode__KeepAspectRatioByExpanding AspectRatioMode = 2
)

type DockWidgetArea int

const (
	DockWidgetArea__LeftDockWidgetArea   DockWidgetArea = 1
	DockWidgetArea__RightDockWidgetArea  DockWidgetArea = 2
	DockWidgetArea__TopDockWidgetArea    DockWidgetArea = 4
	DockWidgetArea__BottomDockWidgetArea DockWidgetArea = 8
	DockWidgetArea__DockWidgetArea_Mask  DockWidgetArea = 15
	DockWidgetArea__AllDockWidgetAreas   DockWidgetArea = 15
	DockWidgetArea__NoDockWidgetArea     DockWidgetArea = 0
)

type DockWidgetAreaSizes int

const (
	DockWidgetAreaSizes__NDockWidgetAreas DockWidgetAreaSizes = 4
)

type ToolBarArea int

const (
	ToolBarArea__LeftToolBarArea   ToolBarArea = 1
	ToolBarArea__RightToolBarArea  ToolBarArea = 2
	ToolBarArea__TopToolBarArea    ToolBarArea = 4
	ToolBarArea__BottomToolBarArea ToolBarArea = 8
	ToolBarArea__ToolBarArea_Mask  ToolBarArea = 15
	ToolBarArea__AllToolBarAreas   ToolBarArea = 15
	ToolBarArea__NoToolBarArea     ToolBarArea = 0
)

type ToolBarAreaSizes int

const (
	ToolBarAreaSizes__NToolBarAreas ToolBarAreaSizes = 4
)

type DateFormat int

const (
	DateFormat__TextDate               DateFormat = 0
	DateFormat__ISODate                DateFormat = 1
	DateFormat__SystemLocaleDate       DateFormat = 2
	DateFormat__LocalDate              DateFormat = 2
	DateFormat__LocaleDate             DateFormat = 3
	DateFormat__SystemLocaleShortDate  DateFormat = 4
	DateFormat__SystemLocaleLongDate   DateFormat = 5
	DateFormat__DefaultLocaleShortDate DateFormat = 6
	DateFormat__DefaultLocaleLongDate  DateFormat = 7
	DateFormat__RFC2822Date            DateFormat = 8
	DateFormat__ISODateWithMs          DateFormat = 9
)

type TimeSpec int

const (
	TimeSpec__LocalTime     TimeSpec = 0
	TimeSpec__UTC           TimeSpec = 1
	TimeSpec__OffsetFromUTC TimeSpec = 2
	TimeSpec__TimeZone      TimeSpec = 3
)

type DayOfWeek int

const (
	DayOfWeek__Monday    DayOfWeek = 1
	DayOfWeek__Tuesday   DayOfWeek = 2
	DayOfWeek__Wednesday DayOfWeek = 3
	DayOfWeek__Thursday  DayOfWeek = 4
	DayOfWeek__Friday    DayOfWeek = 5
	DayOfWeek__Saturday  DayOfWeek = 6
	DayOfWeek__Sunday    DayOfWeek = 7
)

type ScrollBarPolicy int

const (
	ScrollBarPolicy__ScrollBarAsNeeded  ScrollBarPolicy = 0
	ScrollBarPolicy__ScrollBarAlwaysOff ScrollBarPolicy = 1
	ScrollBarPolicy__ScrollBarAlwaysOn  ScrollBarPolicy = 2
)

type CaseSensitivity int

const (
	CaseSensitivity__CaseInsensitive CaseSensitivity = 0
	CaseSensitivity__CaseSensitive   CaseSensitivity = 1
)

type Corner int

const (
	Corner__TopLeftCorner     Corner = 0
	Corner__TopRightCorner    Corner = 1
	Corner__BottomLeftCorner  Corner = 2
	Corner__BottomRightCorner Corner = 3
)

type Edge int

const (
	Edge__TopEdge    Edge = 1
	Edge__LeftEdge   Edge = 2
	Edge__RightEdge  Edge = 4
	Edge__BottomEdge Edge = 8
)

type ConnectionType int

const (
	ConnectionType__AutoConnection           ConnectionType = 0
	ConnectionType__DirectConnection         ConnectionType = 1
	ConnectionType__QueuedConnection         ConnectionType = 2
	ConnectionType__BlockingQueuedConnection ConnectionType = 3
	ConnectionType__UniqueConnection         ConnectionType = 128
)

type ShortcutContext int

const (
	ShortcutContext__WidgetShortcut             ShortcutContext = 0
	ShortcutContext__WindowShortcut             ShortcutContext = 1
	ShortcutContext__ApplicationShortcut        ShortcutContext = 2
	ShortcutContext__WidgetWithChildrenShortcut ShortcutContext = 3
)

type FillRule int

const (
	FillRule__OddEvenFill FillRule = 0
	FillRule__WindingFill FillRule = 1
)

type MaskMode int

const (
	MaskMode__MaskInColor  MaskMode = 0
	MaskMode__MaskOutColor MaskMode = 1
)

type ClipOperation int

const (
	ClipOperation__NoClip        ClipOperation = 0
	ClipOperation__ReplaceClip   ClipOperation = 1
	ClipOperation__IntersectClip ClipOperation = 2
)

type ItemSelectionMode int

const (
	ItemSelectionMode__ContainsItemShape          ItemSelectionMode = 0
	ItemSelectionMode__IntersectsItemShape        ItemSelectionMode = 1
	ItemSelectionMode__ContainsItemBoundingRect   ItemSelectionMode = 2
	ItemSelectionMode__IntersectsItemBoundingRect ItemSelectionMode = 3
)

type ItemSelectionOperation int

const (
	ItemSelectionOperation__ReplaceSelection ItemSelectionOperation = 0
	ItemSelectionOperation__AddToSelection   ItemSelectionOperation = 1
)

type TransformationMode int

const (
	TransformationMode__FastTransformation   TransformationMode = 0
	TransformationMode__SmoothTransformation TransformationMode = 1
)

type Axis int

const (
	Axis__XAxis Axis = 0
	Axis__YAxis Axis = 1
	Axis__ZAxis Axis = 2
)

type FocusReason int

const (
	FocusReason__MouseFocusReason        FocusReason = 0
	FocusReason__TabFocusReason          FocusReason = 1
	FocusReason__BacktabFocusReason      FocusReason = 2
	FocusReason__ActiveWindowFocusReason FocusReason = 3
	FocusReason__PopupFocusReason        FocusReason = 4
	FocusReason__ShortcutFocusReason     FocusReason = 5
	FocusReason__MenuBarFocusReason      FocusReason = 6
	FocusReason__OtherFocusReason        FocusReason = 7
	FocusReason__NoFocusReason           FocusReason = 8
)

type ContextMenuPolicy int

const (
	ContextMenuPolicy__NoContextMenu      ContextMenuPolicy = 0
	ContextMenuPolicy__DefaultContextMenu ContextMenuPolicy = 1
	ContextMenuPolicy__ActionsContextMenu ContextMenuPolicy = 2
	ContextMenuPolicy__CustomContextMenu  ContextMenuPolicy = 3
	ContextMenuPolicy__PreventContextMenu ContextMenuPolicy = 4
)

type InputMethodQuery int

const (
	InputMethodQuery__ImEnabled                InputMethodQuery = 1
	InputMethodQuery__ImCursorRectangle        InputMethodQuery = 2
	InputMethodQuery__ImMicroFocus             InputMethodQuery = 2
	InputMethodQuery__ImFont                   InputMethodQuery = 4
	InputMethodQuery__ImCursorPosition         InputMethodQuery = 8
	InputMethodQuery__ImSurroundingText        InputMethodQuery = 16
	InputMethodQuery__ImCurrentSelection       InputMethodQuery = 32
	InputMethodQuery__ImMaximumTextLength      InputMethodQuery = 64
	InputMethodQuery__ImAnchorPosition         InputMethodQuery = 128
	InputMethodQuery__ImHints                  InputMethodQuery = 256
	InputMethodQuery__ImPreferredLanguage      InputMethodQuery = 512
	InputMethodQuery__ImAbsolutePosition       InputMethodQuery = 1024
	InputMethodQuery__ImTextBeforeCursor       InputMethodQuery = 2048
	InputMethodQuery__ImTextAfterCursor        InputMethodQuery = 4096
	InputMethodQuery__ImEnterKeyType           InputMethodQuery = 8192
	InputMethodQuery__ImAnchorRectangle        InputMethodQuery = 16384
	InputMethodQuery__ImInputItemClipRectangle InputMethodQuery = 32768
	InputMethodQuery__ImPlatformData           InputMethodQuery = 2147483648
	InputMethodQuery__ImQueryInput             InputMethodQuery = 16570
	InputMethodQuery__ImQueryAll               InputMethodQuery = 4294967295
)

type InputMethodHint int

const (
	InputMethodHint__ImhNone                   InputMethodHint = 0
	InputMethodHint__ImhHiddenText             InputMethodHint = 1
	InputMethodHint__ImhSensitiveData          InputMethodHint = 2
	InputMethodHint__ImhNoAutoUppercase        InputMethodHint = 4
	InputMethodHint__ImhPreferNumbers          InputMethodHint = 8
	InputMethodHint__ImhPreferUppercase        InputMethodHint = 16
	InputMethodHint__ImhPreferLowercase        InputMethodHint = 32
	InputMethodHint__ImhNoPredictiveText       InputMethodHint = 64
	InputMethodHint__ImhDate                   InputMethodHint = 128
	InputMethodHint__ImhTime                   InputMethodHint = 256
	InputMethodHint__ImhPreferLatin            InputMethodHint = 512
	InputMethodHint__ImhMultiLine              InputMethodHint = 1024
	InputMethodHint__ImhNoEditMenu             InputMethodHint = 2048
	InputMethodHint__ImhNoTextHandles          InputMethodHint = 4096
	InputMethodHint__ImhDigitsOnly             InputMethodHint = 65536
	InputMethodHint__ImhFormattedNumbersOnly   InputMethodHint = 131072
	InputMethodHint__ImhUppercaseOnly          InputMethodHint = 262144
	InputMethodHint__ImhLowercaseOnly          InputMethodHint = 524288
	InputMethodHint__ImhDialableCharactersOnly InputMethodHint = 1048576
	InputMethodHint__ImhEmailCharactersOnly    InputMethodHint = 2097152
	InputMethodHint__ImhUrlCharactersOnly      InputMethodHint = 4194304
	InputMethodHint__ImhLatinOnly              InputMethodHint = 8388608
	InputMethodHint__ImhExclusiveInputMask     InputMethodHint = 4294901760
)

type EnterKeyType int

const (
	EnterKeyType__EnterKeyDefault  EnterKeyType = 0
	EnterKeyType__EnterKeyReturn   EnterKeyType = 1
	EnterKeyType__EnterKeyDone     EnterKeyType = 2
	EnterKeyType__EnterKeyGo       EnterKeyType = 3
	EnterKeyType__EnterKeySend     EnterKeyType = 4
	EnterKeyType__EnterKeySearch   EnterKeyType = 5
	EnterKeyType__EnterKeyNext     EnterKeyType = 6
	EnterKeyType__EnterKeyPrevious EnterKeyType = 7
)

type ToolButtonStyle int

const (
	ToolButtonStyle__ToolButtonIconOnly       ToolButtonStyle = 0
	ToolButtonStyle__ToolButtonTextOnly       ToolButtonStyle = 1
	ToolButtonStyle__ToolButtonTextBesideIcon ToolButtonStyle = 2
	ToolButtonStyle__ToolButtonTextUnderIcon  ToolButtonStyle = 3
	ToolButtonStyle__ToolButtonFollowStyle    ToolButtonStyle = 4
)

type LayoutDirection int

const (
	LayoutDirection__LeftToRight         LayoutDirection = 0
	LayoutDirection__RightToLeft         LayoutDirection = 1
	LayoutDirection__LayoutDirectionAuto LayoutDirection = 2
)

type AnchorPoint int

const (
	AnchorPoint__AnchorLeft             AnchorPoint = 0
	AnchorPoint__AnchorHorizontalCenter AnchorPoint = 1
	AnchorPoint__AnchorRight            AnchorPoint = 2
	AnchorPoint__AnchorTop              AnchorPoint = 3
	AnchorPoint__AnchorVerticalCenter   AnchorPoint = 4
	AnchorPoint__AnchorBottom           AnchorPoint = 5
)

type FindChildOption int

const (
	FindChildOption__FindDirectChildrenOnly  FindChildOption = 0
	FindChildOption__FindChildrenRecursively FindChildOption = 1
)

type DropAction int

const (
	DropAction__CopyAction       DropAction = 1
	DropAction__MoveAction       DropAction = 2
	DropAction__LinkAction       DropAction = 4
	DropAction__ActionMask       DropAction = 255
	DropAction__TargetMoveAction DropAction = 32770
	DropAction__IgnoreAction     DropAction = 0
)

type CheckState int

const (
	CheckState__Unchecked        CheckState = 0
	CheckState__PartiallyChecked CheckState = 1
	CheckState__Checked          CheckState = 2
)

type ItemDataRole int

const (
	ItemDataRole__DisplayRole               ItemDataRole = 0
	ItemDataRole__DecorationRole            ItemDataRole = 1
	ItemDataRole__EditRole                  ItemDataRole = 2
	ItemDataRole__ToolTipRole               ItemDataRole = 3
	ItemDataRole__StatusTipRole             ItemDataRole = 4
	ItemDataRole__WhatsThisRole             ItemDataRole = 5
	ItemDataRole__FontRole                  ItemDataRole = 6
	ItemDataRole__TextAlignmentRole         ItemDataRole = 7
	ItemDataRole__BackgroundRole            ItemDataRole = 8
	ItemDataRole__ForegroundRole            ItemDataRole = 9
	ItemDataRole__BackgroundColorRole       ItemDataRole = 8
	ItemDataRole__TextColorRole             ItemDataRole = 9
	ItemDataRole__CheckStateRole            ItemDataRole = 10
	ItemDataRole__AccessibleTextRole        ItemDataRole = 11
	ItemDataRole__AccessibleDescriptionRole ItemDataRole = 12
	ItemDataRole__SizeHintRole              ItemDataRole = 13
	ItemDataRole__InitialSortOrderRole      ItemDataRole = 14
	ItemDataRole__DisplayPropertyRole       ItemDataRole = 27
	ItemDataRole__DecorationPropertyRole    ItemDataRole = 28
	ItemDataRole__ToolTipPropertyRole       ItemDataRole = 29
	ItemDataRole__StatusTipPropertyRole     ItemDataRole = 30
	ItemDataRole__WhatsThisPropertyRole     ItemDataRole = 31
	ItemDataRole__UserRole                  ItemDataRole = 256
)

type ItemFlag int

const (
	ItemFlag__NoItemFlags          ItemFlag = 0
	ItemFlag__ItemIsSelectable     ItemFlag = 1
	ItemFlag__ItemIsEditable       ItemFlag = 2
	ItemFlag__ItemIsDragEnabled    ItemFlag = 4
	ItemFlag__ItemIsDropEnabled    ItemFlag = 8
	ItemFlag__ItemIsUserCheckable  ItemFlag = 16
	ItemFlag__ItemIsEnabled        ItemFlag = 32
	ItemFlag__ItemIsAutoTristate   ItemFlag = 64
	ItemFlag__ItemIsTristate       ItemFlag = 64
	ItemFlag__ItemNeverHasChildren ItemFlag = 128
	ItemFlag__ItemIsUserTristate   ItemFlag = 256
)

type MatchFlag int

const (
	MatchFlag__MatchExactly           MatchFlag = 0
	MatchFlag__MatchContains          MatchFlag = 1
	MatchFlag__MatchStartsWith        MatchFlag = 2
	MatchFlag__MatchEndsWith          MatchFlag = 3
	MatchFlag__MatchRegExp            MatchFlag = 4
	MatchFlag__MatchWildcard          MatchFlag = 5
	MatchFlag__MatchFixedString       MatchFlag = 8
	MatchFlag__MatchRegularExpression MatchFlag = 9
	MatchFlag__MatchCaseSensitive     MatchFlag = 16
	MatchFlag__MatchWrap              MatchFlag = 32
	MatchFlag__MatchRecursive         MatchFlag = 64
)

type WindowModality int

const (
	WindowModality__NonModal         WindowModality = 0
	WindowModality__WindowModal      WindowModality = 1
	WindowModality__ApplicationModal WindowModality = 2
)

type TextInteractionFlag int

const (
	TextInteractionFlag__NoTextInteraction         TextInteractionFlag = 0
	TextInteractionFlag__TextSelectableByMouse     TextInteractionFlag = 1
	TextInteractionFlag__TextSelectableByKeyboard  TextInteractionFlag = 2
	TextInteractionFlag__LinksAccessibleByMouse    TextInteractionFlag = 4
	TextInteractionFlag__LinksAccessibleByKeyboard TextInteractionFlag = 8
	TextInteractionFlag__TextEditable              TextInteractionFlag = 16
	TextInteractionFlag__TextEditorInteraction     TextInteractionFlag = 19
	TextInteractionFlag__TextBrowserInteraction    TextInteractionFlag = 13
)

type EventPriority int

const (
	EventPriority__HighEventPriority   EventPriority = 1
	EventPriority__NormalEventPriority EventPriority = 0
	EventPriority__LowEventPriority    EventPriority = -1
)

type SizeHint int

const (
	SizeHint__MinimumSize    SizeHint = 0
	SizeHint__PreferredSize  SizeHint = 1
	SizeHint__MaximumSize    SizeHint = 2
	SizeHint__MinimumDescent SizeHint = 3
	SizeHint__NSizeHints     SizeHint = 4
)

type WindowFrameSection int

const (
	WindowFrameSection__NoSection          WindowFrameSection = 0
	WindowFrameSection__LeftSection        WindowFrameSection = 1
	WindowFrameSection__TopLeftSection     WindowFrameSection = 2
	WindowFrameSection__TopSection         WindowFrameSection = 3
	WindowFrameSection__TopRightSection    WindowFrameSection = 4
	WindowFrameSection__RightSection       WindowFrameSection = 5
	WindowFrameSection__BottomRightSection WindowFrameSection = 6
	WindowFrameSection__BottomSection      WindowFrameSection = 7
	WindowFrameSection__BottomLeftSection  WindowFrameSection = 8
	WindowFrameSection__TitleBarArea       WindowFrameSection = 9
)

type Initialization int

const (
	Initialization__Uninitialized Initialization = 0
)

type CoordinateSystem int

const (
	CoordinateSystem__DeviceCoordinates  CoordinateSystem = 0
	CoordinateSystem__LogicalCoordinates CoordinateSystem = 1
)

type TouchPointState int

const (
	TouchPointState__TouchPointPressed    TouchPointState = 1
	TouchPointState__TouchPointMoved      TouchPointState = 2
	TouchPointState__TouchPointStationary TouchPointState = 4
	TouchPointState__TouchPointReleased   TouchPointState = 8
)

type GestureState int

const (
	GestureState__NoGesture       GestureState = 0
	GestureState__GestureStarted  GestureState = 1
	GestureState__GestureUpdated  GestureState = 2
	GestureState__GestureFinished GestureState = 3
	GestureState__GestureCanceled GestureState = 4
)

type GestureType int

const (
	GestureType__TapGesture        GestureType = 1
	GestureType__TapAndHoldGesture GestureType = 2
	GestureType__PanGesture        GestureType = 3
	GestureType__PinchGesture      GestureType = 4
	GestureType__SwipeGesture      GestureType = 5
	GestureType__CustomGesture     GestureType = 256
	GestureType__LastGestureType   GestureType = 4294967295
)

type GestureFlag int

const (
	GestureFlag__DontStartGestureOnChildren       GestureFlag = 1
	GestureFlag__ReceivePartialGestures           GestureFlag = 2
	GestureFlag__IgnoredGesturesPropagateToParent GestureFlag = 4
)

type NativeGestureType int

const (
	NativeGestureType__BeginNativeGesture     NativeGestureType = 0
	NativeGestureType__EndNativeGesture       NativeGestureType = 1
	NativeGestureType__PanNativeGesture       NativeGestureType = 2
	NativeGestureType__ZoomNativeGesture      NativeGestureType = 3
	NativeGestureType__SmartZoomNativeGesture NativeGestureType = 4
	NativeGestureType__RotateNativeGesture    NativeGestureType = 5
	NativeGestureType__SwipeNativeGesture     NativeGestureType = 6
)

type NavigationMode int

const (
	NavigationMode__NavigationModeNone               NavigationMode = 0
	NavigationMode__NavigationModeKeypadTabOrder     NavigationMode = 1
	NavigationMode__NavigationModeKeypadDirectional  NavigationMode = 2
	NavigationMode__NavigationModeCursorAuto         NavigationMode = 3
	NavigationMode__NavigationModeCursorForceVisible NavigationMode = 4
)

type CursorMoveStyle int

const (
	CursorMoveStyle__LogicalMoveStyle CursorMoveStyle = 0
	CursorMoveStyle__VisualMoveStyle  CursorMoveStyle = 1
)

type TimerType int

const (
	TimerType__PreciseTimer    TimerType = 0
	TimerType__CoarseTimer     TimerType = 1
	TimerType__VeryCoarseTimer TimerType = 2
)

type ScrollPhase int

const (
	ScrollPhase__NoScrollPhase  ScrollPhase = 0
	ScrollPhase__ScrollBegin    ScrollPhase = 1
	ScrollPhase__ScrollUpdate   ScrollPhase = 2
	ScrollPhase__ScrollEnd      ScrollPhase = 3
	ScrollPhase__ScrollMomentum ScrollPhase = 4
)

type MouseEventSource int

const (
	MouseEventSource__MouseEventNotSynthesized           MouseEventSource = 0
	MouseEventSource__MouseEventSynthesizedBySystem      MouseEventSource = 1
	MouseEventSource__MouseEventSynthesizedByQt          MouseEventSource = 2
	MouseEventSource__MouseEventSynthesizedByApplication MouseEventSource = 3
)

type MouseEventFlag int

const (
	MouseEventFlag__MouseEventCreatedDoubleClick MouseEventFlag = 1
	MouseEventFlag__MouseEventFlagMask           MouseEventFlag = 255
)

type ChecksumType int

const (
	ChecksumType__ChecksumIso3309 ChecksumType = 0
	ChecksumType__ChecksumItuV41  ChecksumType = 1
)

type HighDpiScaleFactorRoundingPolicy int

const (
	HighDpiScaleFactorRoundingPolicy__Unset            HighDpiScaleFactorRoundingPolicy = 0
	HighDpiScaleFactorRoundingPolicy__Round            HighDpiScaleFactorRoundingPolicy = 1
	HighDpiScaleFactorRoundingPolicy__Ceil             HighDpiScaleFactorRoundingPolicy = 2
	HighDpiScaleFactorRoundingPolicy__Floor            HighDpiScaleFactorRoundingPolicy = 3
	HighDpiScaleFactorRoundingPolicy__RoundPreferFloor HighDpiScaleFactorRoundingPolicy = 4
	HighDpiScaleFactorRoundingPolicy__PassThrough      HighDpiScaleFactorRoundingPolicy = 5
)

type ReturnByValueConstant int

const (
	ReturnByValueConstant__ReturnByValue ReturnByValueConstant = 0
)

type QInternal__PaintDeviceFlags int

const (
	QInternal__PaintDeviceFlags__UnknownDevice     QInternal__PaintDeviceFlags = 0
	QInternal__PaintDeviceFlags__Widget            QInternal__PaintDeviceFlags = 1
	QInternal__PaintDeviceFlags__Pixmap            QInternal__PaintDeviceFlags = 2
	QInternal__PaintDeviceFlags__Image             QInternal__PaintDeviceFlags = 3
	QInternal__PaintDeviceFlags__Printer           QInternal__PaintDeviceFlags = 4
	QInternal__PaintDeviceFlags__Picture           QInternal__PaintDeviceFlags = 5
	QInternal__PaintDeviceFlags__Pbuffer           QInternal__PaintDeviceFlags = 6
	QInternal__PaintDeviceFlags__FramebufferObject QInternal__PaintDeviceFlags = 7
	QInternal__PaintDeviceFlags__CustomRaster      QInternal__PaintDeviceFlags = 8
	QInternal__PaintDeviceFlags__MacQuartz         QInternal__PaintDeviceFlags = 9
	QInternal__PaintDeviceFlags__PaintBuffer       QInternal__PaintDeviceFlags = 10
	QInternal__PaintDeviceFlags__OpenGL            QInternal__PaintDeviceFlags = 11
)

type QInternal__RelayoutType int

const (
	QInternal__RelayoutType__RelayoutNormal   QInternal__RelayoutType = 0
	QInternal__RelayoutType__RelayoutDragging QInternal__RelayoutType = 1
	QInternal__RelayoutType__RelayoutDropped  QInternal__RelayoutType = 2
)

type QInternal__DockPosition int

const (
	QInternal__DockPosition__LeftDock   QInternal__DockPosition = 0
	QInternal__DockPosition__RightDock  QInternal__DockPosition = 1
	QInternal__DockPosition__TopDock    QInternal__DockPosition = 2
	QInternal__DockPosition__BottomDock QInternal__DockPosition = 3
	QInternal__DockPosition__DockCount  QInternal__DockPosition = 4
)

type QInternal__Callback int

const (
	QInternal__Callback__EventNotifyCallback QInternal__Callback = 0
	QInternal__Callback__LastCallback        QInternal__Callback = 1
)

type QInternal struct {
	h *C.QInternal
}

func (this *QInternal) cPointer() *C.QInternal {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInternal(h *C.QInternal) *QInternal {
	if h == nil {
		return nil
	}
	return &QInternal{h: h}
}

func newQInternal_U(h unsafe.Pointer) *QInternal {
	return newQInternal((*C.QInternal)(h))
}

func (this *QInternal) Delete() {
	C.QInternal_Delete(this.h)
}
