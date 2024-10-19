package qt

/*

#include "gen_qstyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStyle__StateFlag int

const (
	QStyle__State_None                QStyle__StateFlag = 0
	QStyle__State_Enabled             QStyle__StateFlag = 1
	QStyle__State_Raised              QStyle__StateFlag = 2
	QStyle__State_Sunken              QStyle__StateFlag = 4
	QStyle__State_Off                 QStyle__StateFlag = 8
	QStyle__State_NoChange            QStyle__StateFlag = 16
	QStyle__State_On                  QStyle__StateFlag = 32
	QStyle__State_DownArrow           QStyle__StateFlag = 64
	QStyle__State_Horizontal          QStyle__StateFlag = 128
	QStyle__State_HasFocus            QStyle__StateFlag = 256
	QStyle__State_Top                 QStyle__StateFlag = 512
	QStyle__State_Bottom              QStyle__StateFlag = 1024
	QStyle__State_FocusAtBorder       QStyle__StateFlag = 2048
	QStyle__State_AutoRaise           QStyle__StateFlag = 4096
	QStyle__State_MouseOver           QStyle__StateFlag = 8192
	QStyle__State_UpArrow             QStyle__StateFlag = 16384
	QStyle__State_Selected            QStyle__StateFlag = 32768
	QStyle__State_Active              QStyle__StateFlag = 65536
	QStyle__State_Window              QStyle__StateFlag = 131072
	QStyle__State_Open                QStyle__StateFlag = 262144
	QStyle__State_Children            QStyle__StateFlag = 524288
	QStyle__State_Item                QStyle__StateFlag = 1048576
	QStyle__State_Sibling             QStyle__StateFlag = 2097152
	QStyle__State_Editing             QStyle__StateFlag = 4194304
	QStyle__State_KeyboardFocusChange QStyle__StateFlag = 8388608
	QStyle__State_ReadOnly            QStyle__StateFlag = 33554432
	QStyle__State_Small               QStyle__StateFlag = 67108864
	QStyle__State_Mini                QStyle__StateFlag = 134217728
)

type QStyle__PrimitiveElement int

const (
	QStyle__PE_Frame                           QStyle__PrimitiveElement = 0
	QStyle__PE_FrameDefaultButton              QStyle__PrimitiveElement = 1
	QStyle__PE_FrameDockWidget                 QStyle__PrimitiveElement = 2
	QStyle__PE_FrameFocusRect                  QStyle__PrimitiveElement = 3
	QStyle__PE_FrameGroupBox                   QStyle__PrimitiveElement = 4
	QStyle__PE_FrameLineEdit                   QStyle__PrimitiveElement = 5
	QStyle__PE_FrameMenu                       QStyle__PrimitiveElement = 6
	QStyle__PE_FrameStatusBarItem              QStyle__PrimitiveElement = 7
	QStyle__PE_FrameStatusBar                  QStyle__PrimitiveElement = 7
	QStyle__PE_FrameTabWidget                  QStyle__PrimitiveElement = 8
	QStyle__PE_FrameWindow                     QStyle__PrimitiveElement = 9
	QStyle__PE_FrameButtonBevel                QStyle__PrimitiveElement = 10
	QStyle__PE_FrameButtonTool                 QStyle__PrimitiveElement = 11
	QStyle__PE_FrameTabBarBase                 QStyle__PrimitiveElement = 12
	QStyle__PE_PanelButtonCommand              QStyle__PrimitiveElement = 13
	QStyle__PE_PanelButtonBevel                QStyle__PrimitiveElement = 14
	QStyle__PE_PanelButtonTool                 QStyle__PrimitiveElement = 15
	QStyle__PE_PanelMenuBar                    QStyle__PrimitiveElement = 16
	QStyle__PE_PanelToolBar                    QStyle__PrimitiveElement = 17
	QStyle__PE_PanelLineEdit                   QStyle__PrimitiveElement = 18
	QStyle__PE_IndicatorArrowDown              QStyle__PrimitiveElement = 19
	QStyle__PE_IndicatorArrowLeft              QStyle__PrimitiveElement = 20
	QStyle__PE_IndicatorArrowRight             QStyle__PrimitiveElement = 21
	QStyle__PE_IndicatorArrowUp                QStyle__PrimitiveElement = 22
	QStyle__PE_IndicatorBranch                 QStyle__PrimitiveElement = 23
	QStyle__PE_IndicatorButtonDropDown         QStyle__PrimitiveElement = 24
	QStyle__PE_IndicatorItemViewItemCheck      QStyle__PrimitiveElement = 25
	QStyle__PE_IndicatorViewItemCheck          QStyle__PrimitiveElement = 25
	QStyle__PE_IndicatorCheckBox               QStyle__PrimitiveElement = 26
	QStyle__PE_IndicatorDockWidgetResizeHandle QStyle__PrimitiveElement = 27
	QStyle__PE_IndicatorHeaderArrow            QStyle__PrimitiveElement = 28
	QStyle__PE_IndicatorMenuCheckMark          QStyle__PrimitiveElement = 29
	QStyle__PE_IndicatorProgressChunk          QStyle__PrimitiveElement = 30
	QStyle__PE_IndicatorRadioButton            QStyle__PrimitiveElement = 31
	QStyle__PE_IndicatorSpinDown               QStyle__PrimitiveElement = 32
	QStyle__PE_IndicatorSpinMinus              QStyle__PrimitiveElement = 33
	QStyle__PE_IndicatorSpinPlus               QStyle__PrimitiveElement = 34
	QStyle__PE_IndicatorSpinUp                 QStyle__PrimitiveElement = 35
	QStyle__PE_IndicatorToolBarHandle          QStyle__PrimitiveElement = 36
	QStyle__PE_IndicatorToolBarSeparator       QStyle__PrimitiveElement = 37
	QStyle__PE_PanelTipLabel                   QStyle__PrimitiveElement = 38
	QStyle__PE_IndicatorTabTear                QStyle__PrimitiveElement = 39
	QStyle__PE_IndicatorTabTearLeft            QStyle__PrimitiveElement = 39
	QStyle__PE_PanelScrollAreaCorner           QStyle__PrimitiveElement = 40
	QStyle__PE_Widget                          QStyle__PrimitiveElement = 41
	QStyle__PE_IndicatorColumnViewArrow        QStyle__PrimitiveElement = 42
	QStyle__PE_IndicatorItemViewItemDrop       QStyle__PrimitiveElement = 43
	QStyle__PE_PanelItemViewItem               QStyle__PrimitiveElement = 44
	QStyle__PE_PanelItemViewRow                QStyle__PrimitiveElement = 45
	QStyle__PE_PanelStatusBar                  QStyle__PrimitiveElement = 46
	QStyle__PE_IndicatorTabClose               QStyle__PrimitiveElement = 47
	QStyle__PE_PanelMenu                       QStyle__PrimitiveElement = 48
	QStyle__PE_IndicatorTabTearRight           QStyle__PrimitiveElement = 49
	QStyle__PE_CustomBase                      QStyle__PrimitiveElement = 251658240
)

type QStyle__ControlElement int

const (
	QStyle__CE_PushButton          QStyle__ControlElement = 0
	QStyle__CE_PushButtonBevel     QStyle__ControlElement = 1
	QStyle__CE_PushButtonLabel     QStyle__ControlElement = 2
	QStyle__CE_CheckBox            QStyle__ControlElement = 3
	QStyle__CE_CheckBoxLabel       QStyle__ControlElement = 4
	QStyle__CE_RadioButton         QStyle__ControlElement = 5
	QStyle__CE_RadioButtonLabel    QStyle__ControlElement = 6
	QStyle__CE_TabBarTab           QStyle__ControlElement = 7
	QStyle__CE_TabBarTabShape      QStyle__ControlElement = 8
	QStyle__CE_TabBarTabLabel      QStyle__ControlElement = 9
	QStyle__CE_ProgressBar         QStyle__ControlElement = 10
	QStyle__CE_ProgressBarGroove   QStyle__ControlElement = 11
	QStyle__CE_ProgressBarContents QStyle__ControlElement = 12
	QStyle__CE_ProgressBarLabel    QStyle__ControlElement = 13
	QStyle__CE_MenuItem            QStyle__ControlElement = 14
	QStyle__CE_MenuScroller        QStyle__ControlElement = 15
	QStyle__CE_MenuVMargin         QStyle__ControlElement = 16
	QStyle__CE_MenuHMargin         QStyle__ControlElement = 17
	QStyle__CE_MenuTearoff         QStyle__ControlElement = 18
	QStyle__CE_MenuEmptyArea       QStyle__ControlElement = 19
	QStyle__CE_MenuBarItem         QStyle__ControlElement = 20
	QStyle__CE_MenuBarEmptyArea    QStyle__ControlElement = 21
	QStyle__CE_ToolButtonLabel     QStyle__ControlElement = 22
	QStyle__CE_Header              QStyle__ControlElement = 23
	QStyle__CE_HeaderSection       QStyle__ControlElement = 24
	QStyle__CE_HeaderLabel         QStyle__ControlElement = 25
	QStyle__CE_ToolBoxTab          QStyle__ControlElement = 26
	QStyle__CE_SizeGrip            QStyle__ControlElement = 27
	QStyle__CE_Splitter            QStyle__ControlElement = 28
	QStyle__CE_RubberBand          QStyle__ControlElement = 29
	QStyle__CE_DockWidgetTitle     QStyle__ControlElement = 30
	QStyle__CE_ScrollBarAddLine    QStyle__ControlElement = 31
	QStyle__CE_ScrollBarSubLine    QStyle__ControlElement = 32
	QStyle__CE_ScrollBarAddPage    QStyle__ControlElement = 33
	QStyle__CE_ScrollBarSubPage    QStyle__ControlElement = 34
	QStyle__CE_ScrollBarSlider     QStyle__ControlElement = 35
	QStyle__CE_ScrollBarFirst      QStyle__ControlElement = 36
	QStyle__CE_ScrollBarLast       QStyle__ControlElement = 37
	QStyle__CE_FocusFrame          QStyle__ControlElement = 38
	QStyle__CE_ComboBoxLabel       QStyle__ControlElement = 39
	QStyle__CE_ToolBar             QStyle__ControlElement = 40
	QStyle__CE_ToolBoxTabShape     QStyle__ControlElement = 41
	QStyle__CE_ToolBoxTabLabel     QStyle__ControlElement = 42
	QStyle__CE_HeaderEmptyArea     QStyle__ControlElement = 43
	QStyle__CE_ColumnViewGrip      QStyle__ControlElement = 44
	QStyle__CE_ItemViewItem        QStyle__ControlElement = 45
	QStyle__CE_ShapedFrame         QStyle__ControlElement = 46
	QStyle__CE_CustomBase          QStyle__ControlElement = 4026531840
)

type QStyle__SubElement int

const (
	QStyle__SE_PushButtonContents         QStyle__SubElement = 0
	QStyle__SE_PushButtonFocusRect        QStyle__SubElement = 1
	QStyle__SE_CheckBoxIndicator          QStyle__SubElement = 2
	QStyle__SE_CheckBoxContents           QStyle__SubElement = 3
	QStyle__SE_CheckBoxFocusRect          QStyle__SubElement = 4
	QStyle__SE_CheckBoxClickRect          QStyle__SubElement = 5
	QStyle__SE_RadioButtonIndicator       QStyle__SubElement = 6
	QStyle__SE_RadioButtonContents        QStyle__SubElement = 7
	QStyle__SE_RadioButtonFocusRect       QStyle__SubElement = 8
	QStyle__SE_RadioButtonClickRect       QStyle__SubElement = 9
	QStyle__SE_ComboBoxFocusRect          QStyle__SubElement = 10
	QStyle__SE_SliderFocusRect            QStyle__SubElement = 11
	QStyle__SE_ProgressBarGroove          QStyle__SubElement = 12
	QStyle__SE_ProgressBarContents        QStyle__SubElement = 13
	QStyle__SE_ProgressBarLabel           QStyle__SubElement = 14
	QStyle__SE_ToolBoxTabContents         QStyle__SubElement = 15
	QStyle__SE_HeaderLabel                QStyle__SubElement = 16
	QStyle__SE_HeaderArrow                QStyle__SubElement = 17
	QStyle__SE_TabWidgetTabBar            QStyle__SubElement = 18
	QStyle__SE_TabWidgetTabPane           QStyle__SubElement = 19
	QStyle__SE_TabWidgetTabContents       QStyle__SubElement = 20
	QStyle__SE_TabWidgetLeftCorner        QStyle__SubElement = 21
	QStyle__SE_TabWidgetRightCorner       QStyle__SubElement = 22
	QStyle__SE_ItemViewItemCheckIndicator QStyle__SubElement = 23
	QStyle__SE_ViewItemCheckIndicator     QStyle__SubElement = 23
	QStyle__SE_TabBarTearIndicator        QStyle__SubElement = 24
	QStyle__SE_TabBarTearIndicatorLeft    QStyle__SubElement = 24
	QStyle__SE_TreeViewDisclosureItem     QStyle__SubElement = 25
	QStyle__SE_LineEditContents           QStyle__SubElement = 26
	QStyle__SE_FrameContents              QStyle__SubElement = 27
	QStyle__SE_DockWidgetCloseButton      QStyle__SubElement = 28
	QStyle__SE_DockWidgetFloatButton      QStyle__SubElement = 29
	QStyle__SE_DockWidgetTitleBarText     QStyle__SubElement = 30
	QStyle__SE_DockWidgetIcon             QStyle__SubElement = 31
	QStyle__SE_CheckBoxLayoutItem         QStyle__SubElement = 32
	QStyle__SE_ComboBoxLayoutItem         QStyle__SubElement = 33
	QStyle__SE_DateTimeEditLayoutItem     QStyle__SubElement = 34
	QStyle__SE_DialogButtonBoxLayoutItem  QStyle__SubElement = 35
	QStyle__SE_LabelLayoutItem            QStyle__SubElement = 36
	QStyle__SE_ProgressBarLayoutItem      QStyle__SubElement = 37
	QStyle__SE_PushButtonLayoutItem       QStyle__SubElement = 38
	QStyle__SE_RadioButtonLayoutItem      QStyle__SubElement = 39
	QStyle__SE_SliderLayoutItem           QStyle__SubElement = 40
	QStyle__SE_SpinBoxLayoutItem          QStyle__SubElement = 41
	QStyle__SE_ToolButtonLayoutItem       QStyle__SubElement = 42
	QStyle__SE_FrameLayoutItem            QStyle__SubElement = 43
	QStyle__SE_GroupBoxLayoutItem         QStyle__SubElement = 44
	QStyle__SE_TabWidgetLayoutItem        QStyle__SubElement = 45
	QStyle__SE_ItemViewItemDecoration     QStyle__SubElement = 46
	QStyle__SE_ItemViewItemText           QStyle__SubElement = 47
	QStyle__SE_ItemViewItemFocusRect      QStyle__SubElement = 48
	QStyle__SE_TabBarTabLeftButton        QStyle__SubElement = 49
	QStyle__SE_TabBarTabRightButton       QStyle__SubElement = 50
	QStyle__SE_TabBarTabText              QStyle__SubElement = 51
	QStyle__SE_ShapedFrameContents        QStyle__SubElement = 52
	QStyle__SE_ToolBarHandle              QStyle__SubElement = 53
	QStyle__SE_TabBarScrollLeftButton     QStyle__SubElement = 54
	QStyle__SE_TabBarScrollRightButton    QStyle__SubElement = 55
	QStyle__SE_TabBarTearIndicatorRight   QStyle__SubElement = 56
	QStyle__SE_PushButtonBevel            QStyle__SubElement = 57
	QStyle__SE_CustomBase                 QStyle__SubElement = 4026531840
)

type QStyle__ComplexControl int

const (
	QStyle__CC_SpinBox     QStyle__ComplexControl = 0
	QStyle__CC_ComboBox    QStyle__ComplexControl = 1
	QStyle__CC_ScrollBar   QStyle__ComplexControl = 2
	QStyle__CC_Slider      QStyle__ComplexControl = 3
	QStyle__CC_ToolButton  QStyle__ComplexControl = 4
	QStyle__CC_TitleBar    QStyle__ComplexControl = 5
	QStyle__CC_Dial        QStyle__ComplexControl = 6
	QStyle__CC_GroupBox    QStyle__ComplexControl = 7
	QStyle__CC_MdiControls QStyle__ComplexControl = 8
	QStyle__CC_CustomBase  QStyle__ComplexControl = 4026531840
)

type QStyle__SubControl int

const (
	QStyle__SC_None                      QStyle__SubControl = 0
	QStyle__SC_ScrollBarAddLine          QStyle__SubControl = 1
	QStyle__SC_ScrollBarSubLine          QStyle__SubControl = 2
	QStyle__SC_ScrollBarAddPage          QStyle__SubControl = 4
	QStyle__SC_ScrollBarSubPage          QStyle__SubControl = 8
	QStyle__SC_ScrollBarFirst            QStyle__SubControl = 16
	QStyle__SC_ScrollBarLast             QStyle__SubControl = 32
	QStyle__SC_ScrollBarSlider           QStyle__SubControl = 64
	QStyle__SC_ScrollBarGroove           QStyle__SubControl = 128
	QStyle__SC_SpinBoxUp                 QStyle__SubControl = 1
	QStyle__SC_SpinBoxDown               QStyle__SubControl = 2
	QStyle__SC_SpinBoxFrame              QStyle__SubControl = 4
	QStyle__SC_SpinBoxEditField          QStyle__SubControl = 8
	QStyle__SC_ComboBoxFrame             QStyle__SubControl = 1
	QStyle__SC_ComboBoxEditField         QStyle__SubControl = 2
	QStyle__SC_ComboBoxArrow             QStyle__SubControl = 4
	QStyle__SC_ComboBoxListBoxPopup      QStyle__SubControl = 8
	QStyle__SC_SliderGroove              QStyle__SubControl = 1
	QStyle__SC_SliderHandle              QStyle__SubControl = 2
	QStyle__SC_SliderTickmarks           QStyle__SubControl = 4
	QStyle__SC_ToolButton                QStyle__SubControl = 1
	QStyle__SC_ToolButtonMenu            QStyle__SubControl = 2
	QStyle__SC_TitleBarSysMenu           QStyle__SubControl = 1
	QStyle__SC_TitleBarMinButton         QStyle__SubControl = 2
	QStyle__SC_TitleBarMaxButton         QStyle__SubControl = 4
	QStyle__SC_TitleBarCloseButton       QStyle__SubControl = 8
	QStyle__SC_TitleBarNormalButton      QStyle__SubControl = 16
	QStyle__SC_TitleBarShadeButton       QStyle__SubControl = 32
	QStyle__SC_TitleBarUnshadeButton     QStyle__SubControl = 64
	QStyle__SC_TitleBarContextHelpButton QStyle__SubControl = 128
	QStyle__SC_TitleBarLabel             QStyle__SubControl = 256
	QStyle__SC_DialGroove                QStyle__SubControl = 1
	QStyle__SC_DialHandle                QStyle__SubControl = 2
	QStyle__SC_DialTickmarks             QStyle__SubControl = 4
	QStyle__SC_GroupBoxCheckBox          QStyle__SubControl = 1
	QStyle__SC_GroupBoxLabel             QStyle__SubControl = 2
	QStyle__SC_GroupBoxContents          QStyle__SubControl = 4
	QStyle__SC_GroupBoxFrame             QStyle__SubControl = 8
	QStyle__SC_MdiMinButton              QStyle__SubControl = 1
	QStyle__SC_MdiNormalButton           QStyle__SubControl = 2
	QStyle__SC_MdiCloseButton            QStyle__SubControl = 4
	QStyle__SC_CustomBase                QStyle__SubControl = 4026531840
	QStyle__SC_All                       QStyle__SubControl = 4294967295
)

type QStyle__PixelMetric int

const (
	QStyle__PM_ButtonMargin                       QStyle__PixelMetric = 0
	QStyle__PM_ButtonDefaultIndicator             QStyle__PixelMetric = 1
	QStyle__PM_MenuButtonIndicator                QStyle__PixelMetric = 2
	QStyle__PM_ButtonShiftHorizontal              QStyle__PixelMetric = 3
	QStyle__PM_ButtonShiftVertical                QStyle__PixelMetric = 4
	QStyle__PM_DefaultFrameWidth                  QStyle__PixelMetric = 5
	QStyle__PM_SpinBoxFrameWidth                  QStyle__PixelMetric = 6
	QStyle__PM_ComboBoxFrameWidth                 QStyle__PixelMetric = 7
	QStyle__PM_MaximumDragDistance                QStyle__PixelMetric = 8
	QStyle__PM_ScrollBarExtent                    QStyle__PixelMetric = 9
	QStyle__PM_ScrollBarSliderMin                 QStyle__PixelMetric = 10
	QStyle__PM_SliderThickness                    QStyle__PixelMetric = 11
	QStyle__PM_SliderControlThickness             QStyle__PixelMetric = 12
	QStyle__PM_SliderLength                       QStyle__PixelMetric = 13
	QStyle__PM_SliderTickmarkOffset               QStyle__PixelMetric = 14
	QStyle__PM_SliderSpaceAvailable               QStyle__PixelMetric = 15
	QStyle__PM_DockWidgetSeparatorExtent          QStyle__PixelMetric = 16
	QStyle__PM_DockWidgetHandleExtent             QStyle__PixelMetric = 17
	QStyle__PM_DockWidgetFrameWidth               QStyle__PixelMetric = 18
	QStyle__PM_TabBarTabOverlap                   QStyle__PixelMetric = 19
	QStyle__PM_TabBarTabHSpace                    QStyle__PixelMetric = 20
	QStyle__PM_TabBarTabVSpace                    QStyle__PixelMetric = 21
	QStyle__PM_TabBarBaseHeight                   QStyle__PixelMetric = 22
	QStyle__PM_TabBarBaseOverlap                  QStyle__PixelMetric = 23
	QStyle__PM_ProgressBarChunkWidth              QStyle__PixelMetric = 24
	QStyle__PM_SplitterWidth                      QStyle__PixelMetric = 25
	QStyle__PM_TitleBarHeight                     QStyle__PixelMetric = 26
	QStyle__PM_MenuScrollerHeight                 QStyle__PixelMetric = 27
	QStyle__PM_MenuHMargin                        QStyle__PixelMetric = 28
	QStyle__PM_MenuVMargin                        QStyle__PixelMetric = 29
	QStyle__PM_MenuPanelWidth                     QStyle__PixelMetric = 30
	QStyle__PM_MenuTearoffHeight                  QStyle__PixelMetric = 31
	QStyle__PM_MenuDesktopFrameWidth              QStyle__PixelMetric = 32
	QStyle__PM_MenuBarPanelWidth                  QStyle__PixelMetric = 33
	QStyle__PM_MenuBarItemSpacing                 QStyle__PixelMetric = 34
	QStyle__PM_MenuBarVMargin                     QStyle__PixelMetric = 35
	QStyle__PM_MenuBarHMargin                     QStyle__PixelMetric = 36
	QStyle__PM_IndicatorWidth                     QStyle__PixelMetric = 37
	QStyle__PM_IndicatorHeight                    QStyle__PixelMetric = 38
	QStyle__PM_ExclusiveIndicatorWidth            QStyle__PixelMetric = 39
	QStyle__PM_ExclusiveIndicatorHeight           QStyle__PixelMetric = 40
	QStyle__PM_DialogButtonsSeparator             QStyle__PixelMetric = 41
	QStyle__PM_DialogButtonsButtonWidth           QStyle__PixelMetric = 42
	QStyle__PM_DialogButtonsButtonHeight          QStyle__PixelMetric = 43
	QStyle__PM_MdiSubWindowFrameWidth             QStyle__PixelMetric = 44
	QStyle__PM_MdiSubWindowMinimizedWidth         QStyle__PixelMetric = 45
	QStyle__PM_MDIFrameWidth                      QStyle__PixelMetric = 44
	QStyle__PM_MDIMinimizedWidth                  QStyle__PixelMetric = 45
	QStyle__PM_HeaderMargin                       QStyle__PixelMetric = 46
	QStyle__PM_HeaderMarkSize                     QStyle__PixelMetric = 47
	QStyle__PM_HeaderGripMargin                   QStyle__PixelMetric = 48
	QStyle__PM_TabBarTabShiftHorizontal           QStyle__PixelMetric = 49
	QStyle__PM_TabBarTabShiftVertical             QStyle__PixelMetric = 50
	QStyle__PM_TabBarScrollButtonWidth            QStyle__PixelMetric = 51
	QStyle__PM_ToolBarFrameWidth                  QStyle__PixelMetric = 52
	QStyle__PM_ToolBarHandleExtent                QStyle__PixelMetric = 53
	QStyle__PM_ToolBarItemSpacing                 QStyle__PixelMetric = 54
	QStyle__PM_ToolBarItemMargin                  QStyle__PixelMetric = 55
	QStyle__PM_ToolBarSeparatorExtent             QStyle__PixelMetric = 56
	QStyle__PM_ToolBarExtensionExtent             QStyle__PixelMetric = 57
	QStyle__PM_SpinBoxSliderHeight                QStyle__PixelMetric = 58
	QStyle__PM_DefaultTopLevelMargin              QStyle__PixelMetric = 59
	QStyle__PM_DefaultChildMargin                 QStyle__PixelMetric = 60
	QStyle__PM_DefaultLayoutSpacing               QStyle__PixelMetric = 61
	QStyle__PM_ToolBarIconSize                    QStyle__PixelMetric = 62
	QStyle__PM_ListViewIconSize                   QStyle__PixelMetric = 63
	QStyle__PM_IconViewIconSize                   QStyle__PixelMetric = 64
	QStyle__PM_SmallIconSize                      QStyle__PixelMetric = 65
	QStyle__PM_LargeIconSize                      QStyle__PixelMetric = 66
	QStyle__PM_FocusFrameVMargin                  QStyle__PixelMetric = 67
	QStyle__PM_FocusFrameHMargin                  QStyle__PixelMetric = 68
	QStyle__PM_ToolTipLabelFrameWidth             QStyle__PixelMetric = 69
	QStyle__PM_CheckBoxLabelSpacing               QStyle__PixelMetric = 70
	QStyle__PM_TabBarIconSize                     QStyle__PixelMetric = 71
	QStyle__PM_SizeGripSize                       QStyle__PixelMetric = 72
	QStyle__PM_DockWidgetTitleMargin              QStyle__PixelMetric = 73
	QStyle__PM_MessageBoxIconSize                 QStyle__PixelMetric = 74
	QStyle__PM_ButtonIconSize                     QStyle__PixelMetric = 75
	QStyle__PM_DockWidgetTitleBarButtonMargin     QStyle__PixelMetric = 76
	QStyle__PM_RadioButtonLabelSpacing            QStyle__PixelMetric = 77
	QStyle__PM_LayoutLeftMargin                   QStyle__PixelMetric = 78
	QStyle__PM_LayoutTopMargin                    QStyle__PixelMetric = 79
	QStyle__PM_LayoutRightMargin                  QStyle__PixelMetric = 80
	QStyle__PM_LayoutBottomMargin                 QStyle__PixelMetric = 81
	QStyle__PM_LayoutHorizontalSpacing            QStyle__PixelMetric = 82
	QStyle__PM_LayoutVerticalSpacing              QStyle__PixelMetric = 83
	QStyle__PM_TabBar_ScrollButtonOverlap         QStyle__PixelMetric = 84
	QStyle__PM_TextCursorWidth                    QStyle__PixelMetric = 85
	QStyle__PM_TabCloseIndicatorWidth             QStyle__PixelMetric = 86
	QStyle__PM_TabCloseIndicatorHeight            QStyle__PixelMetric = 87
	QStyle__PM_ScrollView_ScrollBarSpacing        QStyle__PixelMetric = 88
	QStyle__PM_ScrollView_ScrollBarOverlap        QStyle__PixelMetric = 89
	QStyle__PM_SubMenuOverlap                     QStyle__PixelMetric = 90
	QStyle__PM_TreeViewIndentation                QStyle__PixelMetric = 91
	QStyle__PM_HeaderDefaultSectionSizeHorizontal QStyle__PixelMetric = 92
	QStyle__PM_HeaderDefaultSectionSizeVertical   QStyle__PixelMetric = 93
	QStyle__PM_TitleBarButtonIconSize             QStyle__PixelMetric = 94
	QStyle__PM_TitleBarButtonSize                 QStyle__PixelMetric = 95
	QStyle__PM_CustomBase                         QStyle__PixelMetric = 4026531840
)

type QStyle__ContentsType int

const (
	QStyle__CT_PushButton    QStyle__ContentsType = 0
	QStyle__CT_CheckBox      QStyle__ContentsType = 1
	QStyle__CT_RadioButton   QStyle__ContentsType = 2
	QStyle__CT_ToolButton    QStyle__ContentsType = 3
	QStyle__CT_ComboBox      QStyle__ContentsType = 4
	QStyle__CT_Splitter      QStyle__ContentsType = 5
	QStyle__CT_ProgressBar   QStyle__ContentsType = 6
	QStyle__CT_MenuItem      QStyle__ContentsType = 7
	QStyle__CT_MenuBarItem   QStyle__ContentsType = 8
	QStyle__CT_MenuBar       QStyle__ContentsType = 9
	QStyle__CT_Menu          QStyle__ContentsType = 10
	QStyle__CT_TabBarTab     QStyle__ContentsType = 11
	QStyle__CT_Slider        QStyle__ContentsType = 12
	QStyle__CT_ScrollBar     QStyle__ContentsType = 13
	QStyle__CT_LineEdit      QStyle__ContentsType = 14
	QStyle__CT_SpinBox       QStyle__ContentsType = 15
	QStyle__CT_SizeGrip      QStyle__ContentsType = 16
	QStyle__CT_TabWidget     QStyle__ContentsType = 17
	QStyle__CT_DialogButtons QStyle__ContentsType = 18
	QStyle__CT_HeaderSection QStyle__ContentsType = 19
	QStyle__CT_GroupBox      QStyle__ContentsType = 20
	QStyle__CT_MdiControls   QStyle__ContentsType = 21
	QStyle__CT_ItemViewItem  QStyle__ContentsType = 22
	QStyle__CT_CustomBase    QStyle__ContentsType = 4026531840
)

type QStyle__RequestSoftwareInputPanel int

const (
	QStyle__RSIP_OnMouseClickAndAlreadyFocused QStyle__RequestSoftwareInputPanel = 0
	QStyle__RSIP_OnMouseClick                  QStyle__RequestSoftwareInputPanel = 1
)

type QStyle__StyleHint int

const (
	QStyle__SH_EtchDisabledText                               QStyle__StyleHint = 0
	QStyle__SH_DitherDisabledText                             QStyle__StyleHint = 1
	QStyle__SH_ScrollBar_MiddleClickAbsolutePosition          QStyle__StyleHint = 2
	QStyle__SH_ScrollBar_ScrollWhenPointerLeavesControl       QStyle__StyleHint = 3
	QStyle__SH_TabBar_SelectMouseType                         QStyle__StyleHint = 4
	QStyle__SH_TabBar_Alignment                               QStyle__StyleHint = 5
	QStyle__SH_Header_ArrowAlignment                          QStyle__StyleHint = 6
	QStyle__SH_Slider_SnapToValue                             QStyle__StyleHint = 7
	QStyle__SH_Slider_SloppyKeyEvents                         QStyle__StyleHint = 8
	QStyle__SH_ProgressDialog_CenterCancelButton              QStyle__StyleHint = 9
	QStyle__SH_ProgressDialog_TextLabelAlignment              QStyle__StyleHint = 10
	QStyle__SH_PrintDialog_RightAlignButtons                  QStyle__StyleHint = 11
	QStyle__SH_MainWindow_SpaceBelowMenuBar                   QStyle__StyleHint = 12
	QStyle__SH_FontDialog_SelectAssociatedText                QStyle__StyleHint = 13
	QStyle__SH_Menu_AllowActiveAndDisabled                    QStyle__StyleHint = 14
	QStyle__SH_Menu_SpaceActivatesItem                        QStyle__StyleHint = 15
	QStyle__SH_Menu_SubMenuPopupDelay                         QStyle__StyleHint = 16
	QStyle__SH_ScrollView_FrameOnlyAroundContents             QStyle__StyleHint = 17
	QStyle__SH_MenuBar_AltKeyNavigation                       QStyle__StyleHint = 18
	QStyle__SH_ComboBox_ListMouseTracking                     QStyle__StyleHint = 19
	QStyle__SH_Menu_MouseTracking                             QStyle__StyleHint = 20
	QStyle__SH_MenuBar_MouseTracking                          QStyle__StyleHint = 21
	QStyle__SH_ItemView_ChangeHighlightOnFocus                QStyle__StyleHint = 22
	QStyle__SH_Widget_ShareActivation                         QStyle__StyleHint = 23
	QStyle__SH_Workspace_FillSpaceOnMaximize                  QStyle__StyleHint = 24
	QStyle__SH_ComboBox_Popup                                 QStyle__StyleHint = 25
	QStyle__SH_TitleBar_NoBorder                              QStyle__StyleHint = 26
	QStyle__SH_Slider_StopMouseOverSlider                     QStyle__StyleHint = 27
	QStyle__SH_ScrollBar_StopMouseOverSlider                  QStyle__StyleHint = 27
	QStyle__SH_BlinkCursorWhenTextSelected                    QStyle__StyleHint = 28
	QStyle__SH_RichText_FullWidthSelection                    QStyle__StyleHint = 29
	QStyle__SH_Menu_Scrollable                                QStyle__StyleHint = 30
	QStyle__SH_GroupBox_TextLabelVerticalAlignment            QStyle__StyleHint = 31
	QStyle__SH_GroupBox_TextLabelColor                        QStyle__StyleHint = 32
	QStyle__SH_Menu_SloppySubMenus                            QStyle__StyleHint = 33
	QStyle__SH_Table_GridLineColor                            QStyle__StyleHint = 34
	QStyle__SH_LineEdit_PasswordCharacter                     QStyle__StyleHint = 35
	QStyle__SH_DialogButtons_DefaultButton                    QStyle__StyleHint = 36
	QStyle__SH_ToolBox_SelectedPageTitleBold                  QStyle__StyleHint = 37
	QStyle__SH_TabBar_PreferNoArrows                          QStyle__StyleHint = 38
	QStyle__SH_ScrollBar_LeftClickAbsolutePosition            QStyle__StyleHint = 39
	QStyle__SH_ListViewExpand_SelectMouseType                 QStyle__StyleHint = 40
	QStyle__SH_UnderlineShortcut                              QStyle__StyleHint = 41
	QStyle__SH_SpinBox_AnimateButton                          QStyle__StyleHint = 42
	QStyle__SH_SpinBox_KeyPressAutoRepeatRate                 QStyle__StyleHint = 43
	QStyle__SH_SpinBox_ClickAutoRepeatRate                    QStyle__StyleHint = 44
	QStyle__SH_Menu_FillScreenWithScroll                      QStyle__StyleHint = 45
	QStyle__SH_ToolTipLabel_Opacity                           QStyle__StyleHint = 46
	QStyle__SH_DrawMenuBarSeparator                           QStyle__StyleHint = 47
	QStyle__SH_TitleBar_ModifyNotification                    QStyle__StyleHint = 48
	QStyle__SH_Button_FocusPolicy                             QStyle__StyleHint = 49
	QStyle__SH_MessageBox_UseBorderForButtonSpacing           QStyle__StyleHint = 50
	QStyle__SH_TitleBar_AutoRaise                             QStyle__StyleHint = 51
	QStyle__SH_ToolButton_PopupDelay                          QStyle__StyleHint = 52
	QStyle__SH_FocusFrame_Mask                                QStyle__StyleHint = 53
	QStyle__SH_RubberBand_Mask                                QStyle__StyleHint = 54
	QStyle__SH_WindowFrame_Mask                               QStyle__StyleHint = 55
	QStyle__SH_SpinControls_DisableOnBounds                   QStyle__StyleHint = 56
	QStyle__SH_Dial_BackgroundRole                            QStyle__StyleHint = 57
	QStyle__SH_ComboBox_LayoutDirection                       QStyle__StyleHint = 58
	QStyle__SH_ItemView_EllipsisLocation                      QStyle__StyleHint = 59
	QStyle__SH_ItemView_ShowDecorationSelected                QStyle__StyleHint = 60
	QStyle__SH_ItemView_ActivateItemOnSingleClick             QStyle__StyleHint = 61
	QStyle__SH_ScrollBar_ContextMenu                          QStyle__StyleHint = 62
	QStyle__SH_ScrollBar_RollBetweenButtons                   QStyle__StyleHint = 63
	QStyle__SH_Slider_AbsoluteSetButtons                      QStyle__StyleHint = 64
	QStyle__SH_Slider_PageSetButtons                          QStyle__StyleHint = 65
	QStyle__SH_Menu_KeyboardSearch                            QStyle__StyleHint = 66
	QStyle__SH_TabBar_ElideMode                               QStyle__StyleHint = 67
	QStyle__SH_DialogButtonLayout                             QStyle__StyleHint = 68
	QStyle__SH_ComboBox_PopupFrameStyle                       QStyle__StyleHint = 69
	QStyle__SH_MessageBox_TextInteractionFlags                QStyle__StyleHint = 70
	QStyle__SH_DialogButtonBox_ButtonsHaveIcons               QStyle__StyleHint = 71
	QStyle__SH_SpellCheckUnderlineStyle                       QStyle__StyleHint = 72
	QStyle__SH_MessageBox_CenterButtons                       QStyle__StyleHint = 73
	QStyle__SH_Menu_SelectionWrap                             QStyle__StyleHint = 74
	QStyle__SH_ItemView_MovementWithoutUpdatingSelection      QStyle__StyleHint = 75
	QStyle__SH_ToolTip_Mask                                   QStyle__StyleHint = 76
	QStyle__SH_FocusFrame_AboveWidget                         QStyle__StyleHint = 77
	QStyle__SH_TextControl_FocusIndicatorTextCharFormat       QStyle__StyleHint = 78
	QStyle__SH_WizardStyle                                    QStyle__StyleHint = 79
	QStyle__SH_ItemView_ArrowKeysNavigateIntoChildren         QStyle__StyleHint = 80
	QStyle__SH_Menu_Mask                                      QStyle__StyleHint = 81
	QStyle__SH_Menu_FlashTriggeredItem                        QStyle__StyleHint = 82
	QStyle__SH_Menu_FadeOutOnHide                             QStyle__StyleHint = 83
	QStyle__SH_SpinBox_ClickAutoRepeatThreshold               QStyle__StyleHint = 84
	QStyle__SH_ItemView_PaintAlternatingRowColorsForEmptyArea QStyle__StyleHint = 85
	QStyle__SH_FormLayoutWrapPolicy                           QStyle__StyleHint = 86
	QStyle__SH_TabWidget_DefaultTabPosition                   QStyle__StyleHint = 87
	QStyle__SH_ToolBar_Movable                                QStyle__StyleHint = 88
	QStyle__SH_FormLayoutFieldGrowthPolicy                    QStyle__StyleHint = 89
	QStyle__SH_FormLayoutFormAlignment                        QStyle__StyleHint = 90
	QStyle__SH_FormLayoutLabelAlignment                       QStyle__StyleHint = 91
	QStyle__SH_ItemView_DrawDelegateFrame                     QStyle__StyleHint = 92
	QStyle__SH_TabBar_CloseButtonPosition                     QStyle__StyleHint = 93
	QStyle__SH_DockWidget_ButtonsHaveFrame                    QStyle__StyleHint = 94
	QStyle__SH_ToolButtonStyle                                QStyle__StyleHint = 95
	QStyle__SH_RequestSoftwareInputPanel                      QStyle__StyleHint = 96
	QStyle__SH_ScrollBar_Transient                            QStyle__StyleHint = 97
	QStyle__SH_Menu_SupportsSections                          QStyle__StyleHint = 98
	QStyle__SH_ToolTip_WakeUpDelay                            QStyle__StyleHint = 99
	QStyle__SH_ToolTip_FallAsleepDelay                        QStyle__StyleHint = 100
	QStyle__SH_Widget_Animate                                 QStyle__StyleHint = 101
	QStyle__SH_Splitter_OpaqueResize                          QStyle__StyleHint = 102
	QStyle__SH_ComboBox_UseNativePopup                        QStyle__StyleHint = 103
	QStyle__SH_LineEdit_PasswordMaskDelay                     QStyle__StyleHint = 104
	QStyle__SH_TabBar_ChangeCurrentDelay                      QStyle__StyleHint = 105
	QStyle__SH_Menu_SubMenuUniDirection                       QStyle__StyleHint = 106
	QStyle__SH_Menu_SubMenuUniDirectionFailCount              QStyle__StyleHint = 107
	QStyle__SH_Menu_SubMenuSloppySelectOtherActions           QStyle__StyleHint = 108
	QStyle__SH_Menu_SubMenuSloppyCloseTimeout                 QStyle__StyleHint = 109
	QStyle__SH_Menu_SubMenuResetWhenReenteringParent          QStyle__StyleHint = 110
	QStyle__SH_Menu_SubMenuDontStartSloppyOnLeave             QStyle__StyleHint = 111
	QStyle__SH_ItemView_ScrollMode                            QStyle__StyleHint = 112
	QStyle__SH_TitleBar_ShowToolTipsOnButtons                 QStyle__StyleHint = 113
	QStyle__SH_Widget_Animation_Duration                      QStyle__StyleHint = 114
	QStyle__SH_ComboBox_AllowWheelScrolling                   QStyle__StyleHint = 115
	QStyle__SH_SpinBox_ButtonsInsideFrame                     QStyle__StyleHint = 116
	QStyle__SH_SpinBox_StepModifier                           QStyle__StyleHint = 117
	QStyle__SH_CustomBase                                     QStyle__StyleHint = 4026531840
)

type QStyle__StandardPixmap int

const (
	QStyle__SP_TitleBarMenuButton               QStyle__StandardPixmap = 0
	QStyle__SP_TitleBarMinButton                QStyle__StandardPixmap = 1
	QStyle__SP_TitleBarMaxButton                QStyle__StandardPixmap = 2
	QStyle__SP_TitleBarCloseButton              QStyle__StandardPixmap = 3
	QStyle__SP_TitleBarNormalButton             QStyle__StandardPixmap = 4
	QStyle__SP_TitleBarShadeButton              QStyle__StandardPixmap = 5
	QStyle__SP_TitleBarUnshadeButton            QStyle__StandardPixmap = 6
	QStyle__SP_TitleBarContextHelpButton        QStyle__StandardPixmap = 7
	QStyle__SP_DockWidgetCloseButton            QStyle__StandardPixmap = 8
	QStyle__SP_MessageBoxInformation            QStyle__StandardPixmap = 9
	QStyle__SP_MessageBoxWarning                QStyle__StandardPixmap = 10
	QStyle__SP_MessageBoxCritical               QStyle__StandardPixmap = 11
	QStyle__SP_MessageBoxQuestion               QStyle__StandardPixmap = 12
	QStyle__SP_DesktopIcon                      QStyle__StandardPixmap = 13
	QStyle__SP_TrashIcon                        QStyle__StandardPixmap = 14
	QStyle__SP_ComputerIcon                     QStyle__StandardPixmap = 15
	QStyle__SP_DriveFDIcon                      QStyle__StandardPixmap = 16
	QStyle__SP_DriveHDIcon                      QStyle__StandardPixmap = 17
	QStyle__SP_DriveCDIcon                      QStyle__StandardPixmap = 18
	QStyle__SP_DriveDVDIcon                     QStyle__StandardPixmap = 19
	QStyle__SP_DriveNetIcon                     QStyle__StandardPixmap = 20
	QStyle__SP_DirOpenIcon                      QStyle__StandardPixmap = 21
	QStyle__SP_DirClosedIcon                    QStyle__StandardPixmap = 22
	QStyle__SP_DirLinkIcon                      QStyle__StandardPixmap = 23
	QStyle__SP_DirLinkOpenIcon                  QStyle__StandardPixmap = 24
	QStyle__SP_FileIcon                         QStyle__StandardPixmap = 25
	QStyle__SP_FileLinkIcon                     QStyle__StandardPixmap = 26
	QStyle__SP_ToolBarHorizontalExtensionButton QStyle__StandardPixmap = 27
	QStyle__SP_ToolBarVerticalExtensionButton   QStyle__StandardPixmap = 28
	QStyle__SP_FileDialogStart                  QStyle__StandardPixmap = 29
	QStyle__SP_FileDialogEnd                    QStyle__StandardPixmap = 30
	QStyle__SP_FileDialogToParent               QStyle__StandardPixmap = 31
	QStyle__SP_FileDialogNewFolder              QStyle__StandardPixmap = 32
	QStyle__SP_FileDialogDetailedView           QStyle__StandardPixmap = 33
	QStyle__SP_FileDialogInfoView               QStyle__StandardPixmap = 34
	QStyle__SP_FileDialogContentsView           QStyle__StandardPixmap = 35
	QStyle__SP_FileDialogListView               QStyle__StandardPixmap = 36
	QStyle__SP_FileDialogBack                   QStyle__StandardPixmap = 37
	QStyle__SP_DirIcon                          QStyle__StandardPixmap = 38
	QStyle__SP_DialogOkButton                   QStyle__StandardPixmap = 39
	QStyle__SP_DialogCancelButton               QStyle__StandardPixmap = 40
	QStyle__SP_DialogHelpButton                 QStyle__StandardPixmap = 41
	QStyle__SP_DialogOpenButton                 QStyle__StandardPixmap = 42
	QStyle__SP_DialogSaveButton                 QStyle__StandardPixmap = 43
	QStyle__SP_DialogCloseButton                QStyle__StandardPixmap = 44
	QStyle__SP_DialogApplyButton                QStyle__StandardPixmap = 45
	QStyle__SP_DialogResetButton                QStyle__StandardPixmap = 46
	QStyle__SP_DialogDiscardButton              QStyle__StandardPixmap = 47
	QStyle__SP_DialogYesButton                  QStyle__StandardPixmap = 48
	QStyle__SP_DialogNoButton                   QStyle__StandardPixmap = 49
	QStyle__SP_ArrowUp                          QStyle__StandardPixmap = 50
	QStyle__SP_ArrowDown                        QStyle__StandardPixmap = 51
	QStyle__SP_ArrowLeft                        QStyle__StandardPixmap = 52
	QStyle__SP_ArrowRight                       QStyle__StandardPixmap = 53
	QStyle__SP_ArrowBack                        QStyle__StandardPixmap = 54
	QStyle__SP_ArrowForward                     QStyle__StandardPixmap = 55
	QStyle__SP_DirHomeIcon                      QStyle__StandardPixmap = 56
	QStyle__SP_CommandLink                      QStyle__StandardPixmap = 57
	QStyle__SP_VistaShield                      QStyle__StandardPixmap = 58
	QStyle__SP_BrowserReload                    QStyle__StandardPixmap = 59
	QStyle__SP_BrowserStop                      QStyle__StandardPixmap = 60
	QStyle__SP_MediaPlay                        QStyle__StandardPixmap = 61
	QStyle__SP_MediaStop                        QStyle__StandardPixmap = 62
	QStyle__SP_MediaPause                       QStyle__StandardPixmap = 63
	QStyle__SP_MediaSkipForward                 QStyle__StandardPixmap = 64
	QStyle__SP_MediaSkipBackward                QStyle__StandardPixmap = 65
	QStyle__SP_MediaSeekForward                 QStyle__StandardPixmap = 66
	QStyle__SP_MediaSeekBackward                QStyle__StandardPixmap = 67
	QStyle__SP_MediaVolume                      QStyle__StandardPixmap = 68
	QStyle__SP_MediaVolumeMuted                 QStyle__StandardPixmap = 69
	QStyle__SP_LineEditClearButton              QStyle__StandardPixmap = 70
	QStyle__SP_DialogYesToAllButton             QStyle__StandardPixmap = 71
	QStyle__SP_DialogNoToAllButton              QStyle__StandardPixmap = 72
	QStyle__SP_DialogSaveAllButton              QStyle__StandardPixmap = 73
	QStyle__SP_DialogAbortButton                QStyle__StandardPixmap = 74
	QStyle__SP_DialogRetryButton                QStyle__StandardPixmap = 75
	QStyle__SP_DialogIgnoreButton               QStyle__StandardPixmap = 76
	QStyle__SP_RestoreDefaultsButton            QStyle__StandardPixmap = 77
	QStyle__SP_CustomBase                       QStyle__StandardPixmap = 4026531840
)

type QStyle struct {
	h *C.QStyle
	*QObject
}

func (this *QStyle) cPointer() *C.QStyle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQStyle(h *C.QStyle) *QStyle {
	if h == nil {
		return nil
	}
	return &QStyle{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQStyle(h unsafe.Pointer) *QStyle {
	return newQStyle((*C.QStyle)(h))
}

func (this *QStyle) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QStyle_MetaObject(this.h)))
}

func (this *QStyle) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStyle_Metacast(this.h, param1_Cstring))
}

func QStyle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStyle_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStyle_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStyle) Polish(widget *QWidget) {
	C.QStyle_Polish(this.h, widget.cPointer())
}

func (this *QStyle) Unpolish(widget *QWidget) {
	C.QStyle_Unpolish(this.h, widget.cPointer())
}

func (this *QStyle) PolishWithApplication(application *QApplication) {
	C.QStyle_PolishWithApplication(this.h, application.cPointer())
}

func (this *QStyle) UnpolishWithApplication(application *QApplication) {
	C.QStyle_UnpolishWithApplication(this.h, application.cPointer())
}

func (this *QStyle) PolishWithPalette(palette *QPalette) {
	C.QStyle_PolishWithPalette(this.h, palette.cPointer())
}

func (this *QStyle) ItemTextRect(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_ret := C.QStyle_ItemTextRect(this.h, fm.cPointer(), r.cPointer(), (C.int)(flags), (C.bool)(enabled), text_ms)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) ItemPixmapRect(r *QRect, flags int, pixmap *QPixmap) *QRect {
	_ret := C.QStyle_ItemPixmapRect(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) DrawItemText(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyle_DrawItemText(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms)
}

func (this *QStyle) DrawItemPixmap(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap) {
	C.QStyle_DrawItemPixmap(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), pixmap.cPointer())
}

func (this *QStyle) StandardPalette() *QPalette {
	_ret := C.QStyle_StandardPalette(this.h)
	_goptr := newQPalette(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter) {
	C.QStyle_DrawPrimitive(this.h, (C.int)(pe), opt.cPointer(), p.cPointer())
}

func (this *QStyle) DrawControl(element QStyle__ControlElement, opt *QStyleOption, p *QPainter) {
	C.QStyle_DrawControl(this.h, (C.int)(element), opt.cPointer(), p.cPointer())
}

func (this *QStyle) SubElementRect(subElement QStyle__SubElement, option *QStyleOption) *QRect {
	_ret := C.QStyle_SubElementRect(this.h, (C.int)(subElement), option.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter) {
	C.QStyle_DrawComplexControl(this.h, (C.int)(cc), opt.cPointer(), p.cPointer())
}

func (this *QStyle) HitTestComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint) QStyle__SubControl {
	return (QStyle__SubControl)(C.QStyle_HitTestComplexControl(this.h, (C.int)(cc), opt.cPointer(), pt.cPointer()))
}

func (this *QStyle) SubControlRect(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl) *QRect {
	_ret := C.QStyle_SubControlRect(this.h, (C.int)(cc), opt.cPointer(), (C.int)(sc))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) PixelMetric(metric QStyle__PixelMetric) int {
	return (int)(C.QStyle_PixelMetric(this.h, (C.int)(metric)))
}

func (this *QStyle) SizeFromContents(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize) *QSize {
	_ret := C.QStyle_SizeFromContents(this.h, (C.int)(ct), opt.cPointer(), contentsSize.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) StyleHint(stylehint QStyle__StyleHint) int {
	return (int)(C.QStyle_StyleHint(this.h, (C.int)(stylehint)))
}

func (this *QStyle) StandardPixmap(standardPixmap QStyle__StandardPixmap) *QPixmap {
	_ret := C.QStyle_StandardPixmap(this.h, (C.int)(standardPixmap))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) StandardIcon(standardIcon QStyle__StandardPixmap) *QIcon {
	_ret := C.QStyle_StandardIcon(this.h, (C.int)(standardIcon))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) GeneratedIconPixmap(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap {
	_ret := C.QStyle_GeneratedIconPixmap(this.h, (C.int)(iconMode), pixmap.cPointer(), opt.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QStyle_VisualRect(direction LayoutDirection, boundingRect *QRect, logicalRect *QRect) *QRect {
	_ret := C.QStyle_VisualRect((C.int)(direction), boundingRect.cPointer(), logicalRect.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QStyle_VisualPos(direction LayoutDirection, boundingRect *QRect, logicalPos *QPoint) *QPoint {
	_ret := C.QStyle_VisualPos((C.int)(direction), boundingRect.cPointer(), logicalPos.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QStyle_SliderPositionFromValue(min int, max int, val int, space int) int {
	return (int)(C.QStyle_SliderPositionFromValue((C.int)(min), (C.int)(max), (C.int)(val), (C.int)(space)))
}

func QStyle_SliderValueFromPosition(min int, max int, pos int, space int) int {
	return (int)(C.QStyle_SliderValueFromPosition((C.int)(min), (C.int)(max), (C.int)(pos), (C.int)(space)))
}

func QStyle_VisualAlignment(direction LayoutDirection, alignment AlignmentFlag) AlignmentFlag {
	return (AlignmentFlag)(C.QStyle_VisualAlignment((C.int)(direction), (C.int)(alignment)))
}

func QStyle_AlignedRect(direction LayoutDirection, alignment AlignmentFlag, size *QSize, rectangle *QRect) *QRect {
	_ret := C.QStyle_AlignedRect((C.int)(direction), (C.int)(alignment), size.cPointer(), rectangle.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) LayoutSpacing(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation) int {
	return (int)(C.QStyle_LayoutSpacing(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation)))
}

func (this *QStyle) CombinedLayoutSpacing(controls1 QSizePolicy__ControlType, controls2 QSizePolicy__ControlType, orientation Orientation) int {
	return (int)(C.QStyle_CombinedLayoutSpacing(this.h, (C.int)(controls1), (C.int)(controls2), (C.int)(orientation)))
}

func (this *QStyle) Proxy() *QStyle {
	return UnsafeNewQStyle(unsafe.Pointer(C.QStyle_Proxy(this.h)))
}

func QStyle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyle_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyle_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyle_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStyle) DrawItemText7(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStyle_DrawItemText7(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms, (C.int)(textRole))
}

func (this *QStyle) DrawPrimitive4(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QStyle_DrawPrimitive4(this.h, (C.int)(pe), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QStyle) DrawControl4(element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QStyle_DrawControl4(this.h, (C.int)(element), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QStyle) SubElementRect3(subElement QStyle__SubElement, option *QStyleOption, widget *QWidget) *QRect {
	_ret := C.QStyle_SubElementRect3(this.h, (C.int)(subElement), option.cPointer(), widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) DrawComplexControl4(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, widget *QWidget) {
	C.QStyle_DrawComplexControl4(this.h, (C.int)(cc), opt.cPointer(), p.cPointer(), widget.cPointer())
}

func (this *QStyle) HitTestComplexControl4(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, widget *QWidget) QStyle__SubControl {
	return (QStyle__SubControl)(C.QStyle_HitTestComplexControl4(this.h, (C.int)(cc), opt.cPointer(), pt.cPointer(), widget.cPointer()))
}

func (this *QStyle) SubControlRect4(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, widget *QWidget) *QRect {
	_ret := C.QStyle_SubControlRect4(this.h, (C.int)(cc), opt.cPointer(), (C.int)(sc), widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) PixelMetric2(metric QStyle__PixelMetric, option *QStyleOption) int {
	return (int)(C.QStyle_PixelMetric2(this.h, (C.int)(metric), option.cPointer()))
}

func (this *QStyle) PixelMetric3(metric QStyle__PixelMetric, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QStyle_PixelMetric3(this.h, (C.int)(metric), option.cPointer(), widget.cPointer()))
}

func (this *QStyle) SizeFromContents4(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, w *QWidget) *QSize {
	_ret := C.QStyle_SizeFromContents4(this.h, (C.int)(ct), opt.cPointer(), contentsSize.cPointer(), w.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) StyleHint2(stylehint QStyle__StyleHint, opt *QStyleOption) int {
	return (int)(C.QStyle_StyleHint2(this.h, (C.int)(stylehint), opt.cPointer()))
}

func (this *QStyle) StyleHint3(stylehint QStyle__StyleHint, opt *QStyleOption, widget *QWidget) int {
	return (int)(C.QStyle_StyleHint3(this.h, (C.int)(stylehint), opt.cPointer(), widget.cPointer()))
}

func (this *QStyle) StyleHint4(stylehint QStyle__StyleHint, opt *QStyleOption, widget *QWidget, returnData *QStyleHintReturn) int {
	return (int)(C.QStyle_StyleHint4(this.h, (C.int)(stylehint), opt.cPointer(), widget.cPointer(), returnData.cPointer()))
}

func (this *QStyle) StandardPixmap2(standardPixmap QStyle__StandardPixmap, opt *QStyleOption) *QPixmap {
	_ret := C.QStyle_StandardPixmap2(this.h, (C.int)(standardPixmap), opt.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) StandardPixmap3(standardPixmap QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap {
	_ret := C.QStyle_StandardPixmap3(this.h, (C.int)(standardPixmap), opt.cPointer(), widget.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) StandardIcon2(standardIcon QStyle__StandardPixmap, option *QStyleOption) *QIcon {
	_ret := C.QStyle_StandardIcon2(this.h, (C.int)(standardIcon), option.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyle) StandardIcon3(standardIcon QStyle__StandardPixmap, option *QStyleOption, widget *QWidget) *QIcon {
	_ret := C.QStyle_StandardIcon3(this.h, (C.int)(standardIcon), option.cPointer(), widget.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QStyle_SliderPositionFromValue5(min int, max int, val int, space int, upsideDown bool) int {
	return (int)(C.QStyle_SliderPositionFromValue5((C.int)(min), (C.int)(max), (C.int)(val), (C.int)(space), (C.bool)(upsideDown)))
}

func QStyle_SliderValueFromPosition5(min int, max int, pos int, space int, upsideDown bool) int {
	return (int)(C.QStyle_SliderValueFromPosition5((C.int)(min), (C.int)(max), (C.int)(pos), (C.int)(space), (C.bool)(upsideDown)))
}

func (this *QStyle) LayoutSpacing4(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption) int {
	return (int)(C.QStyle_LayoutSpacing4(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer()))
}

func (this *QStyle) LayoutSpacing5(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QStyle_LayoutSpacing5(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer(), widget.cPointer()))
}

func (this *QStyle) CombinedLayoutSpacing4(controls1 QSizePolicy__ControlType, controls2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption) int {
	return (int)(C.QStyle_CombinedLayoutSpacing4(this.h, (C.int)(controls1), (C.int)(controls2), (C.int)(orientation), option.cPointer()))
}

func (this *QStyle) CombinedLayoutSpacing5(controls1 QSizePolicy__ControlType, controls2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QStyle_CombinedLayoutSpacing5(this.h, (C.int)(controls1), (C.int)(controls2), (C.int)(orientation), option.cPointer(), widget.cPointer()))
}

// Delete this object from C++ memory.
func (this *QStyle) Delete() {
	C.QStyle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyle) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
