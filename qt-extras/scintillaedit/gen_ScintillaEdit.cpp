#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__CharacterRange
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__CharacterRangeFull
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ColourRGBA
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ColourStop
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Fill
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__FillStroke
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Font
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__FontParameters
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IListBoxDelegate
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IScreenLine
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__IScreenLineLayout
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Interval
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListBox
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListBoxEvent
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__ListOptions
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Menu
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__PRectangle
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Point
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Stroke
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Surface
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__SurfaceMode
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Internal__Window
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__NotificationData
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__NotifyHeader
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__RangeToFormat
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__RangeToFormatFull
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__Rectangle
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextRange
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextRangeFull
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextToFind
#define WORKAROUND_INNER_CLASS_DEFINITION_Scintilla__TextToFindFull
#include <ScintillaEdit.h>
#include "gen_ScintillaEdit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_Scintilla__Internal__Surface_Init(Scintilla__Internal__Surface*, intptr_t, void*);
void miqt_exec_callback_Scintilla__Internal__Surface_Init2(Scintilla__Internal__Surface*, intptr_t, void*, void*);
void miqt_exec_callback_Scintilla__Internal__Surface_SetMode(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__SurfaceMode*);
void miqt_exec_callback_Scintilla__Internal__Surface_Release(Scintilla__Internal__Surface*, intptr_t);
int miqt_exec_callback_Scintilla__Internal__Surface_SupportsFeature(Scintilla__Internal__Surface*, intptr_t, int);
bool miqt_exec_callback_Scintilla__Internal__Surface_Initialised(Scintilla__Internal__Surface*, intptr_t);
int miqt_exec_callback_Scintilla__Internal__Surface_LogPixelsY(Scintilla__Internal__Surface*, intptr_t);
int miqt_exec_callback_Scintilla__Internal__Surface_PixelDivisions(Scintilla__Internal__Surface*, intptr_t);
int miqt_exec_callback_Scintilla__Internal__Surface_DeviceHeightFont(Scintilla__Internal__Surface*, intptr_t, int);
void miqt_exec_callback_Scintilla__Internal__Surface_LineDraw(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Point*, Scintilla__Internal__Point*, Scintilla__Internal__Stroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_PolyLine(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Point*, size_t, Scintilla__Internal__Stroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_Polygon(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Point*, size_t, Scintilla__Internal__FillStroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_RectangleDraw(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__FillStroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_RectangleFrame(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__Stroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__Fill*);
void miqt_exec_callback_Scintilla__Internal__Surface_FillRectangleAligned(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__Fill*);
void miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle2(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__Surface*);
void miqt_exec_callback_Scintilla__Internal__Surface_RoundedRectangle(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__FillStroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_AlphaRectangle(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, double, Scintilla__Internal__FillStroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_DrawRGBAImage(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, int, int, const unsigned char*);
void miqt_exec_callback_Scintilla__Internal__Surface_Ellipse(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__FillStroke*);
void miqt_exec_callback_Scintilla__Internal__Surface_Stadium(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__FillStroke*, int);
void miqt_exec_callback_Scintilla__Internal__Surface_Copy(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*, Scintilla__Internal__Point*, Scintilla__Internal__Surface*);
double miqt_exec_callback_Scintilla__Internal__Surface_Ascent(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Font*);
double miqt_exec_callback_Scintilla__Internal__Surface_Descent(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Font*);
double miqt_exec_callback_Scintilla__Internal__Surface_InternalLeading(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Font*);
double miqt_exec_callback_Scintilla__Internal__Surface_Height(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Font*);
double miqt_exec_callback_Scintilla__Internal__Surface_AverageCharWidth(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__Font*);
void miqt_exec_callback_Scintilla__Internal__Surface_SetClip(Scintilla__Internal__Surface*, intptr_t, Scintilla__Internal__PRectangle*);
void miqt_exec_callback_Scintilla__Internal__Surface_PopClip(Scintilla__Internal__Surface*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__Surface_FlushCachedState(Scintilla__Internal__Surface*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__Surface_FlushDrawing(Scintilla__Internal__Surface*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__ListBox_SetFont(Scintilla__Internal__ListBox*, intptr_t, Scintilla__Internal__Font*);
void miqt_exec_callback_Scintilla__Internal__ListBox_Create(Scintilla__Internal__ListBox*, intptr_t, Scintilla__Internal__Window*, int, Scintilla__Internal__Point*, int, bool, int);
void miqt_exec_callback_Scintilla__Internal__ListBox_SetAverageCharWidth(Scintilla__Internal__ListBox*, intptr_t, int);
void miqt_exec_callback_Scintilla__Internal__ListBox_SetVisibleRows(Scintilla__Internal__ListBox*, intptr_t, int);
int miqt_exec_callback_Scintilla__Internal__ListBox_GetVisibleRows(const Scintilla__Internal__ListBox*, intptr_t);
Scintilla__Internal__PRectangle* miqt_exec_callback_Scintilla__Internal__ListBox_GetDesiredRect(Scintilla__Internal__ListBox*, intptr_t);
int miqt_exec_callback_Scintilla__Internal__ListBox_CaretFromEdge(Scintilla__Internal__ListBox*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__ListBox_Clear(Scintilla__Internal__ListBox*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__ListBox_Append(Scintilla__Internal__ListBox*, intptr_t, char*, int);
int miqt_exec_callback_Scintilla__Internal__ListBox_Length(Scintilla__Internal__ListBox*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__ListBox_Select(Scintilla__Internal__ListBox*, intptr_t, int);
int miqt_exec_callback_Scintilla__Internal__ListBox_GetSelection(Scintilla__Internal__ListBox*, intptr_t);
int miqt_exec_callback_Scintilla__Internal__ListBox_Find(Scintilla__Internal__ListBox*, intptr_t, const char*);
void miqt_exec_callback_Scintilla__Internal__ListBox_RegisterImage(Scintilla__Internal__ListBox*, intptr_t, int, const char*);
void miqt_exec_callback_Scintilla__Internal__ListBox_RegisterRGBAImage(Scintilla__Internal__ListBox*, intptr_t, int, int, int, const unsigned char*);
void miqt_exec_callback_Scintilla__Internal__ListBox_ClearRegisteredImages(Scintilla__Internal__ListBox*, intptr_t);
void miqt_exec_callback_Scintilla__Internal__ListBox_SetDelegate(Scintilla__Internal__ListBox*, intptr_t, Scintilla__Internal__IListBoxDelegate*);
void miqt_exec_callback_Scintilla__Internal__ListBox_SetList(Scintilla__Internal__ListBox*, intptr_t, const char*, char, char);
void miqt_exec_callback_Scintilla__Internal__ListBox_SetOptions(Scintilla__Internal__ListBox*, intptr_t, Scintilla__Internal__ListOptions*);
void miqt_exec_callback_ScintillaEditBase_horizontalScrolled(intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_verticalScrolled(intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_horizontalRangeChanged(intptr_t, int, int);
void miqt_exec_callback_ScintillaEditBase_verticalRangeChanged(intptr_t, int, int);
void miqt_exec_callback_ScintillaEditBase_notifyChange(intptr_t);
void miqt_exec_callback_ScintillaEditBase_linesAdded(intptr_t, intptr_t);
void miqt_exec_callback_ScintillaEditBase_aboutToCopy(intptr_t, QMimeData*);
void miqt_exec_callback_ScintillaEditBase_styleNeeded(intptr_t, intptr_t);
void miqt_exec_callback_ScintillaEditBase_charAdded(intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_savePointChanged(intptr_t, bool);
void miqt_exec_callback_ScintillaEditBase_modifyAttemptReadOnly(intptr_t);
void miqt_exec_callback_ScintillaEditBase_key(intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_doubleClick(intptr_t, intptr_t, intptr_t);
void miqt_exec_callback_ScintillaEditBase_updateUi(intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_modified(intptr_t, int, intptr_t, intptr_t, intptr_t, struct miqt_string, intptr_t, int, int);
void miqt_exec_callback_ScintillaEditBase_macroRecord(intptr_t, int, uintptr_t, intptr_t);
void miqt_exec_callback_ScintillaEditBase_marginClicked(intptr_t, intptr_t, int, int);
void miqt_exec_callback_ScintillaEditBase_textAreaClicked(intptr_t, intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_needShown(intptr_t, intptr_t, intptr_t);
void miqt_exec_callback_ScintillaEditBase_painted(intptr_t);
void miqt_exec_callback_ScintillaEditBase_userListSelection(intptr_t);
void miqt_exec_callback_ScintillaEditBase_uriDropped(intptr_t, struct miqt_string);
void miqt_exec_callback_ScintillaEditBase_dwellStart(intptr_t, int, int);
void miqt_exec_callback_ScintillaEditBase_dwellEnd(intptr_t, int, int);
void miqt_exec_callback_ScintillaEditBase_zoom(intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_hotSpotClick(intptr_t, intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_hotSpotDoubleClick(intptr_t, intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_callTipClick(intptr_t);
void miqt_exec_callback_ScintillaEditBase_autoCompleteSelection(intptr_t, intptr_t, struct miqt_string);
void miqt_exec_callback_ScintillaEditBase_autoCompleteCancelled(intptr_t);
void miqt_exec_callback_ScintillaEditBase_focusChanged(intptr_t, bool);
void miqt_exec_callback_ScintillaEditBase_notify(intptr_t, Scintilla__NotificationData*);
void miqt_exec_callback_ScintillaEditBase_command(intptr_t, uintptr_t, intptr_t);
void miqt_exec_callback_ScintillaEditBase_buttonPressed(intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEditBase_buttonReleased(intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEditBase_keyPressed(intptr_t, QKeyEvent*);
void miqt_exec_callback_ScintillaEditBase_resized(intptr_t);
intptr_t miqt_exec_callback_ScintillaEditBase_send(const ScintillaEditBase*, intptr_t, unsigned int, uintptr_t, intptr_t);
intptr_t miqt_exec_callback_ScintillaEditBase_sends(const ScintillaEditBase*, intptr_t, unsigned int, uintptr_t, const char*);
bool miqt_exec_callback_ScintillaEditBase_event(ScintillaEditBase*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEditBase_paintEvent(ScintillaEditBase*, intptr_t, QPaintEvent*);
void miqt_exec_callback_ScintillaEditBase_wheelEvent(ScintillaEditBase*, intptr_t, QWheelEvent*);
void miqt_exec_callback_ScintillaEditBase_focusInEvent(ScintillaEditBase*, intptr_t, QFocusEvent*);
void miqt_exec_callback_ScintillaEditBase_focusOutEvent(ScintillaEditBase*, intptr_t, QFocusEvent*);
void miqt_exec_callback_ScintillaEditBase_resizeEvent(ScintillaEditBase*, intptr_t, QResizeEvent*);
void miqt_exec_callback_ScintillaEditBase_keyPressEvent(ScintillaEditBase*, intptr_t, QKeyEvent*);
void miqt_exec_callback_ScintillaEditBase_mousePressEvent(ScintillaEditBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEditBase_mouseReleaseEvent(ScintillaEditBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEditBase_mouseDoubleClickEvent(ScintillaEditBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEditBase_mouseMoveEvent(ScintillaEditBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEditBase_contextMenuEvent(ScintillaEditBase*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_ScintillaEditBase_dragEnterEvent(ScintillaEditBase*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_ScintillaEditBase_dragLeaveEvent(ScintillaEditBase*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_ScintillaEditBase_dragMoveEvent(ScintillaEditBase*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_ScintillaEditBase_dropEvent(ScintillaEditBase*, intptr_t, QDropEvent*);
void miqt_exec_callback_ScintillaEditBase_inputMethodEvent(ScintillaEditBase*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_ScintillaEditBase_inputMethodQuery(const ScintillaEditBase*, intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_scrollContentsBy(ScintillaEditBase*, intptr_t, int, int);
QSize* miqt_exec_callback_ScintillaEditBase_minimumSizeHint(const ScintillaEditBase*, intptr_t);
QSize* miqt_exec_callback_ScintillaEditBase_sizeHint(const ScintillaEditBase*, intptr_t);
void miqt_exec_callback_ScintillaEditBase_setupViewport(ScintillaEditBase*, intptr_t, QWidget*);
bool miqt_exec_callback_ScintillaEditBase_eventFilter(ScintillaEditBase*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_ScintillaEditBase_viewportEvent(ScintillaEditBase*, intptr_t, QEvent*);
QSize* miqt_exec_callback_ScintillaEditBase_viewportSizeHint(const ScintillaEditBase*, intptr_t);
void miqt_exec_callback_ScintillaEditBase_changeEvent(ScintillaEditBase*, intptr_t, QEvent*);
int miqt_exec_callback_ScintillaEditBase_devType(const ScintillaEditBase*, intptr_t);
void miqt_exec_callback_ScintillaEditBase_setVisible(ScintillaEditBase*, intptr_t, bool);
int miqt_exec_callback_ScintillaEditBase_heightForWidth(const ScintillaEditBase*, intptr_t, int);
bool miqt_exec_callback_ScintillaEditBase_hasHeightForWidth(const ScintillaEditBase*, intptr_t);
QPaintEngine* miqt_exec_callback_ScintillaEditBase_paintEngine(const ScintillaEditBase*, intptr_t);
void miqt_exec_callback_ScintillaEditBase_keyReleaseEvent(ScintillaEditBase*, intptr_t, QKeyEvent*);
void miqt_exec_callback_ScintillaEditBase_enterEvent(ScintillaEditBase*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEditBase_leaveEvent(ScintillaEditBase*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEditBase_moveEvent(ScintillaEditBase*, intptr_t, QMoveEvent*);
void miqt_exec_callback_ScintillaEditBase_closeEvent(ScintillaEditBase*, intptr_t, QCloseEvent*);
void miqt_exec_callback_ScintillaEditBase_tabletEvent(ScintillaEditBase*, intptr_t, QTabletEvent*);
void miqt_exec_callback_ScintillaEditBase_actionEvent(ScintillaEditBase*, intptr_t, QActionEvent*);
void miqt_exec_callback_ScintillaEditBase_showEvent(ScintillaEditBase*, intptr_t, QShowEvent*);
void miqt_exec_callback_ScintillaEditBase_hideEvent(ScintillaEditBase*, intptr_t, QHideEvent*);
bool miqt_exec_callback_ScintillaEditBase_nativeEvent(ScintillaEditBase*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_ScintillaEditBase_metric(const ScintillaEditBase*, intptr_t, int);
void miqt_exec_callback_ScintillaEditBase_initPainter(const ScintillaEditBase*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_ScintillaEditBase_redirected(const ScintillaEditBase*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_ScintillaEditBase_sharedPainter(const ScintillaEditBase*, intptr_t);
bool miqt_exec_callback_ScintillaEditBase_focusNextPrevChild(ScintillaEditBase*, intptr_t, bool);
void miqt_exec_callback_ScintillaEditBase_timerEvent(ScintillaEditBase*, intptr_t, QTimerEvent*);
void miqt_exec_callback_ScintillaEditBase_childEvent(ScintillaEditBase*, intptr_t, QChildEvent*);
void miqt_exec_callback_ScintillaEditBase_customEvent(ScintillaEditBase*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEditBase_connectNotify(ScintillaEditBase*, intptr_t, QMetaMethod*);
void miqt_exec_callback_ScintillaEditBase_disconnectNotify(ScintillaEditBase*, intptr_t, QMetaMethod*);
void miqt_exec_callback_ScintillaDocument_modifyAttempt(intptr_t);
void miqt_exec_callback_ScintillaDocument_savePoint(intptr_t, bool);
void miqt_exec_callback_ScintillaDocument_modified(intptr_t, int, int, struct miqt_string, int, int, int, int, int);
void miqt_exec_callback_ScintillaDocument_styleNeeded(intptr_t, int);
void miqt_exec_callback_ScintillaDocument_errorOccurred(intptr_t, int);
bool miqt_exec_callback_ScintillaDocument_event(ScintillaDocument*, intptr_t, QEvent*);
bool miqt_exec_callback_ScintillaDocument_eventFilter(ScintillaDocument*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_ScintillaDocument_timerEvent(ScintillaDocument*, intptr_t, QTimerEvent*);
void miqt_exec_callback_ScintillaDocument_childEvent(ScintillaDocument*, intptr_t, QChildEvent*);
void miqt_exec_callback_ScintillaDocument_customEvent(ScintillaDocument*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaDocument_connectNotify(ScintillaDocument*, intptr_t, QMetaMethod*);
void miqt_exec_callback_ScintillaDocument_disconnectNotify(ScintillaDocument*, intptr_t, QMetaMethod*);
intptr_t miqt_exec_callback_ScintillaEdit_send(const ScintillaEdit*, intptr_t, unsigned int, uintptr_t, intptr_t);
intptr_t miqt_exec_callback_ScintillaEdit_sends(const ScintillaEdit*, intptr_t, unsigned int, uintptr_t, const char*);
bool miqt_exec_callback_ScintillaEdit_event(ScintillaEdit*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEdit_paintEvent(ScintillaEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_ScintillaEdit_wheelEvent(ScintillaEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_ScintillaEdit_focusInEvent(ScintillaEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_ScintillaEdit_focusOutEvent(ScintillaEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_ScintillaEdit_resizeEvent(ScintillaEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_ScintillaEdit_keyPressEvent(ScintillaEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_ScintillaEdit_mousePressEvent(ScintillaEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEdit_mouseReleaseEvent(ScintillaEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEdit_mouseDoubleClickEvent(ScintillaEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEdit_mouseMoveEvent(ScintillaEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_ScintillaEdit_contextMenuEvent(ScintillaEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_ScintillaEdit_dragEnterEvent(ScintillaEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_ScintillaEdit_dragLeaveEvent(ScintillaEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_ScintillaEdit_dragMoveEvent(ScintillaEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_ScintillaEdit_dropEvent(ScintillaEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_ScintillaEdit_inputMethodEvent(ScintillaEdit*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_ScintillaEdit_inputMethodQuery(const ScintillaEdit*, intptr_t, int);
void miqt_exec_callback_ScintillaEdit_scrollContentsBy(ScintillaEdit*, intptr_t, int, int);
QSize* miqt_exec_callback_ScintillaEdit_minimumSizeHint(const ScintillaEdit*, intptr_t);
QSize* miqt_exec_callback_ScintillaEdit_sizeHint(const ScintillaEdit*, intptr_t);
void miqt_exec_callback_ScintillaEdit_setupViewport(ScintillaEdit*, intptr_t, QWidget*);
bool miqt_exec_callback_ScintillaEdit_eventFilter(ScintillaEdit*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_ScintillaEdit_viewportEvent(ScintillaEdit*, intptr_t, QEvent*);
QSize* miqt_exec_callback_ScintillaEdit_viewportSizeHint(const ScintillaEdit*, intptr_t);
void miqt_exec_callback_ScintillaEdit_changeEvent(ScintillaEdit*, intptr_t, QEvent*);
int miqt_exec_callback_ScintillaEdit_devType(const ScintillaEdit*, intptr_t);
void miqt_exec_callback_ScintillaEdit_setVisible(ScintillaEdit*, intptr_t, bool);
int miqt_exec_callback_ScintillaEdit_heightForWidth(const ScintillaEdit*, intptr_t, int);
bool miqt_exec_callback_ScintillaEdit_hasHeightForWidth(const ScintillaEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_ScintillaEdit_paintEngine(const ScintillaEdit*, intptr_t);
void miqt_exec_callback_ScintillaEdit_keyReleaseEvent(ScintillaEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_ScintillaEdit_enterEvent(ScintillaEdit*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEdit_leaveEvent(ScintillaEdit*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEdit_moveEvent(ScintillaEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_ScintillaEdit_closeEvent(ScintillaEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_ScintillaEdit_tabletEvent(ScintillaEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_ScintillaEdit_actionEvent(ScintillaEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_ScintillaEdit_showEvent(ScintillaEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_ScintillaEdit_hideEvent(ScintillaEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_ScintillaEdit_nativeEvent(ScintillaEdit*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_ScintillaEdit_metric(const ScintillaEdit*, intptr_t, int);
void miqt_exec_callback_ScintillaEdit_initPainter(const ScintillaEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_ScintillaEdit_redirected(const ScintillaEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_ScintillaEdit_sharedPainter(const ScintillaEdit*, intptr_t);
bool miqt_exec_callback_ScintillaEdit_focusNextPrevChild(ScintillaEdit*, intptr_t, bool);
void miqt_exec_callback_ScintillaEdit_timerEvent(ScintillaEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_ScintillaEdit_childEvent(ScintillaEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_ScintillaEdit_customEvent(ScintillaEdit*, intptr_t, QEvent*);
void miqt_exec_callback_ScintillaEdit_connectNotify(ScintillaEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_ScintillaEdit_disconnectNotify(ScintillaEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

Scintilla__Internal__Point* Scintilla__Internal__Point_new() {
	return new Scintilla::Internal::Point();
}

Scintilla__Internal__Point* Scintilla__Internal__Point_new2(Scintilla__Internal__Point* param1) {
	return new Scintilla::Internal::Point(*param1);
}

Scintilla__Internal__Point* Scintilla__Internal__Point_new3(double x_) {
	return new Scintilla::Internal::Point(static_cast<Scintilla::Internal::XYPOSITION>(x_));
}

Scintilla__Internal__Point* Scintilla__Internal__Point_new4(double x_, double y_) {
	return new Scintilla::Internal::Point(static_cast<Scintilla::Internal::XYPOSITION>(x_), static_cast<Scintilla::Internal::XYPOSITION>(y_));
}

Scintilla__Internal__Point* Scintilla__Internal__Point_FromInts(int x_, int y_) {
	return new Scintilla::Internal::Point(Scintilla::Internal::Point::FromInts(static_cast<int>(x_), static_cast<int>(y_)));
}

bool Scintilla__Internal__Point_operatorEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return (*self == *other);
}

bool Scintilla__Internal__Point_operatorNotEqual(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return (*self != *other);
}

Scintilla__Internal__Point* Scintilla__Internal__Point_operatorPlus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return new Scintilla::Internal::Point(self->operator+(*other));
}

Scintilla__Internal__Point* Scintilla__Internal__Point_operatorMinus(const Scintilla__Internal__Point* self, Scintilla__Internal__Point* other) {
	return new Scintilla::Internal::Point(self->operator-(*other));
}

void Scintilla__Internal__Point_delete(Scintilla__Internal__Point* self) {
	delete self;
}

bool Scintilla__Internal__Interval_operatorEqual(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other) {
	return (*self == *other);
}

double Scintilla__Internal__Interval_Width(const Scintilla__Internal__Interval* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Width();
	return static_cast<double>(_ret);
}

bool Scintilla__Internal__Interval_Empty(const Scintilla__Internal__Interval* self) {
	return self->Empty();
}

bool Scintilla__Internal__Interval_Intersects(const Scintilla__Internal__Interval* self, Scintilla__Internal__Interval* other) {
	return self->Intersects(*other);
}

Scintilla__Internal__Interval* Scintilla__Internal__Interval_Offset(const Scintilla__Internal__Interval* self, double offset) {
	return new Scintilla::Internal::Interval(self->Offset(static_cast<Scintilla::Internal::XYPOSITION>(offset)));
}

void Scintilla__Internal__Interval_delete(Scintilla__Internal__Interval* self) {
	delete self;
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new() {
	return new Scintilla::Internal::PRectangle();
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new2(Scintilla__Internal__PRectangle* param1) {
	return new Scintilla::Internal::PRectangle(*param1);
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new3(double left_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new4(double left_, double top_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_), static_cast<Scintilla::Internal::XYPOSITION>(top_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new5(double left_, double top_, double right_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_), static_cast<Scintilla::Internal::XYPOSITION>(top_), static_cast<Scintilla::Internal::XYPOSITION>(right_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_new6(double left_, double top_, double right_, double bottom_) {
	return new Scintilla::Internal::PRectangle(static_cast<Scintilla::Internal::XYPOSITION>(left_), static_cast<Scintilla::Internal::XYPOSITION>(top_), static_cast<Scintilla::Internal::XYPOSITION>(right_), static_cast<Scintilla::Internal::XYPOSITION>(bottom_));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_FromInts(int left_, int top_, int right_, int bottom_) {
	return new Scintilla::Internal::PRectangle(Scintilla::Internal::PRectangle::FromInts(static_cast<int>(left_), static_cast<int>(top_), static_cast<int>(right_), static_cast<int>(bottom_)));
}

bool Scintilla__Internal__PRectangle_operatorEqual(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc) {
	return (*self == *rc);
}

bool Scintilla__Internal__PRectangle_Contains(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* pt) {
	return self->Contains(*pt);
}

bool Scintilla__Internal__PRectangle_ContainsWholePixel(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* pt) {
	return self->ContainsWholePixel(*pt);
}

bool Scintilla__Internal__PRectangle_ContainsWithRc(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* rc) {
	return self->Contains(*rc);
}

bool Scintilla__Internal__PRectangle_Intersects(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__PRectangle* other) {
	return self->Intersects(*other);
}

bool Scintilla__Internal__PRectangle_IntersectsWithHorizontalBounds(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Interval* horizontalBounds) {
	return self->Intersects(*horizontalBounds);
}

void Scintilla__Internal__PRectangle_Move(Scintilla__Internal__PRectangle* self, double xDelta, double yDelta) {
	self->Move(static_cast<Scintilla::Internal::XYPOSITION>(xDelta), static_cast<Scintilla::Internal::XYPOSITION>(yDelta));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_WithHorizontalBounds(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Interval* horizontal) {
	return new Scintilla::Internal::PRectangle(self->WithHorizontalBounds(*horizontal));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_Inset(const Scintilla__Internal__PRectangle* self, double delta) {
	return new Scintilla::Internal::PRectangle(self->Inset(static_cast<Scintilla::Internal::XYPOSITION>(delta)));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__PRectangle_InsetWithDelta(const Scintilla__Internal__PRectangle* self, Scintilla__Internal__Point* delta) {
	return new Scintilla::Internal::PRectangle(self->Inset(*delta));
}

Scintilla__Internal__Point* Scintilla__Internal__PRectangle_Centre(const Scintilla__Internal__PRectangle* self) {
	return new Scintilla::Internal::Point(self->Centre());
}

double Scintilla__Internal__PRectangle_Width(const Scintilla__Internal__PRectangle* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Width();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__PRectangle_Height(const Scintilla__Internal__PRectangle* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Height();
	return static_cast<double>(_ret);
}

bool Scintilla__Internal__PRectangle_Empty(const Scintilla__Internal__PRectangle* self) {
	return self->Empty();
}

void Scintilla__Internal__PRectangle_delete(Scintilla__Internal__PRectangle* self) {
	delete self;
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new() {
	return new Scintilla::Internal::ColourRGBA();
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new2(unsigned int red, unsigned int green, unsigned int blue) {
	return new Scintilla::Internal::ColourRGBA(static_cast<unsigned int>(red), static_cast<unsigned int>(green), static_cast<unsigned int>(blue));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new3(Scintilla__Internal__ColourRGBA* cd, unsigned int alpha) {
	return new Scintilla::Internal::ColourRGBA(*cd, static_cast<unsigned int>(alpha));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new4(Scintilla__Internal__ColourRGBA* param1) {
	return new Scintilla::Internal::ColourRGBA(*param1);
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new5(int co_) {
	return new Scintilla::Internal::ColourRGBA(static_cast<int>(co_));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_new6(unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha) {
	return new Scintilla::Internal::ColourRGBA(static_cast<unsigned int>(red), static_cast<unsigned int>(green), static_cast<unsigned int>(blue), static_cast<unsigned int>(alpha));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_FromRGB(int co_) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::FromRGB(static_cast<int>(co_)));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey(unsigned int grey) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::Grey(static_cast<unsigned int>(grey)));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_FromIpRGB(intptr_t co_) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::FromIpRGB(static_cast<intptr_t>(co_)));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_WithoutAlpha(const Scintilla__Internal__ColourRGBA* self) {
	return new Scintilla::Internal::ColourRGBA(self->WithoutAlpha());
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Opaque(const Scintilla__Internal__ColourRGBA* self) {
	return new Scintilla::Internal::ColourRGBA(self->Opaque());
}

int Scintilla__Internal__ColourRGBA_AsInteger(const Scintilla__Internal__ColourRGBA* self) {
	return self->AsInteger();
}

int Scintilla__Internal__ColourRGBA_OpaqueRGB(const Scintilla__Internal__ColourRGBA* self) {
	return self->OpaqueRGB();
}

unsigned char Scintilla__Internal__ColourRGBA_GetRed(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetRed();
}

unsigned char Scintilla__Internal__ColourRGBA_GetGreen(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetGreen();
}

unsigned char Scintilla__Internal__ColourRGBA_GetBlue(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetBlue();
}

unsigned char Scintilla__Internal__ColourRGBA_GetAlpha(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetAlpha();
}

float Scintilla__Internal__ColourRGBA_GetRedComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetRedComponent();
}

float Scintilla__Internal__ColourRGBA_GetGreenComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetGreenComponent();
}

float Scintilla__Internal__ColourRGBA_GetBlueComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetBlueComponent();
}

float Scintilla__Internal__ColourRGBA_GetAlphaComponent(const Scintilla__Internal__ColourRGBA* self) {
	return self->GetAlphaComponent();
}

bool Scintilla__Internal__ColourRGBA_operatorEqual(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other) {
	return (*self == *other);
}

bool Scintilla__Internal__ColourRGBA_IsOpaque(const Scintilla__Internal__ColourRGBA* self) {
	return self->IsOpaque();
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other) {
	return new Scintilla::Internal::ColourRGBA(self->MixedWith(*other));
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_MixedWith2(const Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* other, double proportion) {
	return new Scintilla::Internal::ColourRGBA(self->MixedWith(*other, static_cast<double>(proportion)));
}

void Scintilla__Internal__ColourRGBA_operatorAssign(Scintilla__Internal__ColourRGBA* self, Scintilla__Internal__ColourRGBA* param1) {
	self->operator=(*param1);
}

Scintilla__Internal__ColourRGBA* Scintilla__Internal__ColourRGBA_Grey2(unsigned int grey, unsigned int alpha) {
	return new Scintilla::Internal::ColourRGBA(Scintilla::Internal::ColourRGBA::Grey(static_cast<unsigned int>(grey), static_cast<unsigned int>(alpha)));
}

void Scintilla__Internal__ColourRGBA_delete(Scintilla__Internal__ColourRGBA* self) {
	delete self;
}

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new(Scintilla__Internal__ColourRGBA* colour_) {
	return new Scintilla::Internal::Stroke(*colour_);
}

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new2(Scintilla__Internal__Stroke* param1) {
	return new Scintilla::Internal::Stroke(*param1);
}

Scintilla__Internal__Stroke* Scintilla__Internal__Stroke_new3(Scintilla__Internal__ColourRGBA* colour_, double width_) {
	return new Scintilla::Internal::Stroke(*colour_, static_cast<Scintilla::Internal::XYPOSITION>(width_));
}

float Scintilla__Internal__Stroke_WidthF(const Scintilla__Internal__Stroke* self) {
	return self->WidthF();
}

void Scintilla__Internal__Stroke_delete(Scintilla__Internal__Stroke* self) {
	delete self;
}

Scintilla__Internal__Fill* Scintilla__Internal__Fill_new(Scintilla__Internal__ColourRGBA* colour_) {
	return new Scintilla::Internal::Fill(*colour_);
}

Scintilla__Internal__Fill* Scintilla__Internal__Fill_new2(Scintilla__Internal__Fill* param1) {
	return new Scintilla::Internal::Fill(*param1);
}

void Scintilla__Internal__Fill_delete(Scintilla__Internal__Fill* self) {
	delete self;
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_) {
	return new Scintilla::Internal::FillStroke(*colourFill_, *colourStroke_);
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new2(Scintilla__Internal__ColourRGBA* colourBoth) {
	return new Scintilla::Internal::FillStroke(*colourBoth);
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new3(Scintilla__Internal__ColourRGBA* colourFill_, Scintilla__Internal__ColourRGBA* colourStroke_, double widthStroke_) {
	return new Scintilla::Internal::FillStroke(*colourFill_, *colourStroke_, static_cast<Scintilla::Internal::XYPOSITION>(widthStroke_));
}

Scintilla__Internal__FillStroke* Scintilla__Internal__FillStroke_new4(Scintilla__Internal__ColourRGBA* colourBoth, double widthStroke_) {
	return new Scintilla::Internal::FillStroke(*colourBoth, static_cast<Scintilla::Internal::XYPOSITION>(widthStroke_));
}

void Scintilla__Internal__FillStroke_delete(Scintilla__Internal__FillStroke* self) {
	delete self;
}

Scintilla__Internal__ColourStop* Scintilla__Internal__ColourStop_new(double position_, Scintilla__Internal__ColourRGBA* colour_) {
	return new Scintilla::Internal::ColourStop(static_cast<Scintilla::Internal::XYPOSITION>(position_), *colour_);
}

void Scintilla__Internal__ColourStop_delete(Scintilla__Internal__ColourStop* self) {
	delete self;
}

void Scintilla__CharacterRange_delete(Scintilla__CharacterRange* self) {
	delete self;
}

void Scintilla__CharacterRangeFull_delete(Scintilla__CharacterRangeFull* self) {
	delete self;
}

void Scintilla__TextRange_delete(Scintilla__TextRange* self) {
	delete self;
}

void Scintilla__TextRangeFull_delete(Scintilla__TextRangeFull* self) {
	delete self;
}

void Scintilla__TextToFind_delete(Scintilla__TextToFind* self) {
	delete self;
}

void Scintilla__TextToFindFull_delete(Scintilla__TextToFindFull* self) {
	delete self;
}

void Scintilla__Rectangle_delete(Scintilla__Rectangle* self) {
	delete self;
}

void Scintilla__RangeToFormat_delete(Scintilla__RangeToFormat* self) {
	delete self;
}

void Scintilla__RangeToFormatFull_delete(Scintilla__RangeToFormatFull* self) {
	delete self;
}

void Scintilla__NotifyHeader_delete(Scintilla__NotifyHeader* self) {
	delete self;
}

void Scintilla__NotificationData_delete(Scintilla__NotificationData* self) {
	delete self;
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new(const char* faceName_) {
	return new Scintilla::Internal::FontParameters(faceName_);
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new2(const char* faceName_, double size_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new3(const char* faceName_, double size_, int weight_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new4(const char* faceName_, double size_, int weight_, bool italic_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_);
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new5(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new6(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new7(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_), static_cast<Scintilla::CharacterSet>(characterSet_));
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new8(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_), static_cast<Scintilla::CharacterSet>(characterSet_), localeName_);
}

Scintilla__Internal__FontParameters* Scintilla__Internal__FontParameters_new9(const char* faceName_, double size_, int weight_, bool italic_, int extraFontFlag_, int technology_, int characterSet_, const char* localeName_, int stretch_) {
	return new Scintilla::Internal::FontParameters(faceName_, static_cast<Scintilla::Internal::XYPOSITION>(size_), static_cast<Scintilla::FontWeight>(weight_), italic_, static_cast<Scintilla::FontQuality>(extraFontFlag_), static_cast<Scintilla::Technology>(technology_), static_cast<Scintilla::CharacterSet>(characterSet_), localeName_, static_cast<Scintilla::FontStretch>(stretch_));
}

void Scintilla__Internal__FontParameters_delete(Scintilla__Internal__FontParameters* self) {
	delete self;
}

Scintilla__Internal__Font* Scintilla__Internal__Font_new() {
	return new Scintilla::Internal::Font();
}

void Scintilla__Internal__Font_delete(Scintilla__Internal__Font* self) {
	delete self;
}

size_t Scintilla__Internal__IScreenLine_Length(const Scintilla__Internal__IScreenLine* self) {
	return self->Length();
}

size_t Scintilla__Internal__IScreenLine_RepresentationCount(const Scintilla__Internal__IScreenLine* self) {
	return self->RepresentationCount();
}

double Scintilla__Internal__IScreenLine_Width(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Width();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_Height(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->Height();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_TabWidth(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->TabWidth();
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_TabWidthMinimumPixels(const Scintilla__Internal__IScreenLine* self) {
	Scintilla::Internal::XYPOSITION _ret = self->TabWidthMinimumPixels();
	return static_cast<double>(_ret);
}

Scintilla__Internal__Font* Scintilla__Internal__IScreenLine_FontOfPosition(const Scintilla__Internal__IScreenLine* self, size_t position) {
	return (Scintilla__Internal__Font*) self->FontOfPosition(static_cast<size_t>(position));
}

double Scintilla__Internal__IScreenLine_RepresentationWidth(const Scintilla__Internal__IScreenLine* self, size_t position) {
	Scintilla::Internal::XYPOSITION _ret = self->RepresentationWidth(static_cast<size_t>(position));
	return static_cast<double>(_ret);
}

double Scintilla__Internal__IScreenLine_TabPositionAfter(const Scintilla__Internal__IScreenLine* self, double xPosition) {
	Scintilla::Internal::XYPOSITION _ret = self->TabPositionAfter(static_cast<Scintilla::Internal::XYPOSITION>(xPosition));
	return static_cast<double>(_ret);
}

void Scintilla__Internal__IScreenLine_operatorAssign(Scintilla__Internal__IScreenLine* self, Scintilla__Internal__IScreenLine* param1) {
	self->operator=(*param1);
}

void Scintilla__Internal__IScreenLine_delete(Scintilla__Internal__IScreenLine* self) {
	delete self;
}

size_t Scintilla__Internal__IScreenLineLayout_PositionFromX(Scintilla__Internal__IScreenLineLayout* self, double xDistance, bool charPosition) {
	return self->PositionFromX(static_cast<Scintilla::Internal::XYPOSITION>(xDistance), charPosition);
}

double Scintilla__Internal__IScreenLineLayout_XFromPosition(Scintilla__Internal__IScreenLineLayout* self, size_t caretPosition) {
	Scintilla::Internal::XYPOSITION _ret = self->XFromPosition(static_cast<size_t>(caretPosition));
	return static_cast<double>(_ret);
}

void Scintilla__Internal__IScreenLineLayout_operatorAssign(Scintilla__Internal__IScreenLineLayout* self, Scintilla__Internal__IScreenLineLayout* param1) {
	self->operator=(*param1);
}

void Scintilla__Internal__IScreenLineLayout_delete(Scintilla__Internal__IScreenLineLayout* self) {
	delete self;
}

Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new() {
	return new Scintilla::Internal::SurfaceMode();
}

Scintilla__Internal__SurfaceMode* Scintilla__Internal__SurfaceMode_new2(int codePage_, bool bidiR2L_) {
	return new Scintilla::Internal::SurfaceMode(static_cast<int>(codePage_), bidiR2L_);
}

void Scintilla__Internal__SurfaceMode_delete(Scintilla__Internal__SurfaceMode* self) {
	delete self;
}

class MiqtVirtualScintillaInternalSurface final : public Scintilla::Internal::Surface {
public:

	MiqtVirtualScintillaInternalSurface(): Scintilla::Internal::Surface() {};

	virtual ~MiqtVirtualScintillaInternalSurface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Init = 0;

	// Subclass to allow providing a Go implementation
	virtual void Init(Scintilla::Internal::WindowID wid) override {
		if (handle__Init == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Internal::WindowID wid_ret = wid;
		void* sigval1 = static_cast<void*>(wid_ret);

		miqt_exec_callback_Scintilla__Internal__Surface_Init(this, handle__Init, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Init2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void Init(Scintilla::Internal::SurfaceID sid, Scintilla::Internal::WindowID wid) override {
		if (handle__Init2 == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Internal::SurfaceID sid_ret = sid;
		void* sigval1 = static_cast<void*>(sid_ret);
		Scintilla::Internal::WindowID wid_ret = wid;
		void* sigval2 = static_cast<void*>(wid_ret);

		miqt_exec_callback_Scintilla__Internal__Surface_Init2(this, handle__Init2, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetMode(Scintilla::Internal::SurfaceMode mode) override {
		if (handle__SetMode == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__SurfaceMode* sigval1 = new Scintilla::Internal::SurfaceMode(mode);

		miqt_exec_callback_Scintilla__Internal__Surface_SetMode(this, handle__SetMode, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Release = 0;

	// Subclass to allow providing a Go implementation
	virtual void Release() override {
		if (handle__Release == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_Release(this, handle__Release);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsFeature = 0;

	// Subclass to allow providing a Go implementation
	virtual int SupportsFeature(Scintilla::Supports feature) override {
		if (handle__SupportsFeature == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Supports feature_ret = feature;
		int sigval1 = static_cast<int>(feature_ret);

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_SupportsFeature(this, handle__SupportsFeature, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Initialised = 0;

	// Subclass to allow providing a Go implementation
	virtual bool Initialised() override {
		if (handle__Initialised == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Initialised(this, handle__Initialised);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LogPixelsY = 0;

	// Subclass to allow providing a Go implementation
	virtual int LogPixelsY() override {
		if (handle__LogPixelsY == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_LogPixelsY(this, handle__LogPixelsY);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PixelDivisions = 0;

	// Subclass to allow providing a Go implementation
	virtual int PixelDivisions() override {
		if (handle__PixelDivisions == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_PixelDivisions(this, handle__PixelDivisions);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DeviceHeightFont = 0;

	// Subclass to allow providing a Go implementation
	virtual int DeviceHeightFont(int points) override {
		if (handle__DeviceHeightFont == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = points;

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_DeviceHeightFont(this, handle__DeviceHeightFont, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LineDraw = 0;

	// Subclass to allow providing a Go implementation
	virtual void LineDraw(Scintilla::Internal::Point start, Scintilla::Internal::Point end, Scintilla::Internal::Stroke stroke) override {
		if (handle__LineDraw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Point* sigval1 = new Scintilla::Internal::Point(start);
		Scintilla__Internal__Point* sigval2 = new Scintilla::Internal::Point(end);
		Scintilla__Internal__Stroke* sigval3 = new Scintilla::Internal::Stroke(stroke);

		miqt_exec_callback_Scintilla__Internal__Surface_LineDraw(this, handle__LineDraw, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolyLine = 0;

	// Subclass to allow providing a Go implementation
	virtual void PolyLine(const Scintilla::Internal::Point* pts, size_t npts, Scintilla::Internal::Stroke stroke) override {
		if (handle__PolyLine == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Point* sigval1 = (Scintilla__Internal__Point*) pts;
		size_t sigval2 = npts;
		Scintilla__Internal__Stroke* sigval3 = new Scintilla::Internal::Stroke(stroke);

		miqt_exec_callback_Scintilla__Internal__Surface_PolyLine(this, handle__PolyLine, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Polygon = 0;

	// Subclass to allow providing a Go implementation
	virtual void Polygon(const Scintilla::Internal::Point* pts, size_t npts, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__Polygon == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Point* sigval1 = (Scintilla__Internal__Point*) pts;
		size_t sigval2 = npts;
		Scintilla__Internal__FillStroke* sigval3 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_Polygon(this, handle__Polygon, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RectangleDraw = 0;

	// Subclass to allow providing a Go implementation
	virtual void RectangleDraw(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__RectangleDraw == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_RectangleDraw(this, handle__RectangleDraw, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RectangleFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void RectangleFrame(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Stroke stroke) override {
		if (handle__RectangleFrame == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Stroke* sigval2 = new Scintilla::Internal::Stroke(stroke);

		miqt_exec_callback_Scintilla__Internal__Surface_RectangleFrame(this, handle__RectangleFrame, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FillRectangle = 0;

	// Subclass to allow providing a Go implementation
	virtual void FillRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Fill fill) override {
		if (handle__FillRectangle == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Fill* sigval2 = new Scintilla::Internal::Fill(fill);

		miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle(this, handle__FillRectangle, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FillRectangleAligned = 0;

	// Subclass to allow providing a Go implementation
	virtual void FillRectangleAligned(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Fill fill) override {
		if (handle__FillRectangleAligned == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Fill* sigval2 = new Scintilla::Internal::Fill(fill);

		miqt_exec_callback_Scintilla__Internal__Surface_FillRectangleAligned(this, handle__FillRectangleAligned, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FillRectangle2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void FillRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Surface& surfacePattern) override {
		if (handle__FillRectangle2 == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla::Internal::Surface& surfacePattern_ret = surfacePattern;
		// Cast returned reference into pointer
		Scintilla__Internal__Surface* sigval2 = &surfacePattern_ret;

		miqt_exec_callback_Scintilla__Internal__Surface_FillRectangle2(this, handle__FillRectangle2, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoundedRectangle = 0;

	// Subclass to allow providing a Go implementation
	virtual void RoundedRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__RoundedRectangle == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_RoundedRectangle(this, handle__RoundedRectangle, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AlphaRectangle = 0;

	// Subclass to allow providing a Go implementation
	virtual void AlphaRectangle(Scintilla::Internal::PRectangle rc, Scintilla::Internal::XYPOSITION cornerSize, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__AlphaRectangle == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla::Internal::XYPOSITION cornerSize_ret = cornerSize;
		double sigval2 = static_cast<double>(cornerSize_ret);
		Scintilla__Internal__FillStroke* sigval3 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_AlphaRectangle(this, handle__AlphaRectangle, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawRGBAImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void DrawRGBAImage(Scintilla::Internal::PRectangle rc, int width, int height, const unsigned char* pixelsImage) override {
		if (handle__DrawRGBAImage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		int sigval2 = width;
		int sigval3 = height;
		const unsigned char* sigval4 = (const unsigned char*) pixelsImage;

		miqt_exec_callback_Scintilla__Internal__Surface_DrawRGBAImage(this, handle__DrawRGBAImage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Ellipse = 0;

	// Subclass to allow providing a Go implementation
	virtual void Ellipse(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke) override {
		if (handle__Ellipse == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);

		miqt_exec_callback_Scintilla__Internal__Surface_Ellipse(this, handle__Ellipse, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Stadium = 0;

	// Subclass to allow providing a Go implementation
	virtual void Stadium(Scintilla::Internal::PRectangle rc, Scintilla::Internal::FillStroke fillStroke, Scintilla::Internal::Surface::Ends ends) override {
		if (handle__Stadium == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__FillStroke* sigval2 = new Scintilla::Internal::FillStroke(fillStroke);
		Scintilla::Internal::Surface::Ends ends_ret = ends;
		int sigval3 = static_cast<int>(ends_ret);

		miqt_exec_callback_Scintilla__Internal__Surface_Stadium(this, handle__Stadium, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Copy = 0;

	// Subclass to allow providing a Go implementation
	virtual void Copy(Scintilla::Internal::PRectangle rc, Scintilla::Internal::Point from, Scintilla::Internal::Surface& surfaceSource) override {
		if (handle__Copy == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);
		Scintilla__Internal__Point* sigval2 = new Scintilla::Internal::Point(from);
		Scintilla::Internal::Surface& surfaceSource_ret = surfaceSource;
		// Cast returned reference into pointer
		Scintilla__Internal__Surface* sigval3 = &surfaceSource_ret;

		miqt_exec_callback_Scintilla__Internal__Surface_Copy(this, handle__Copy, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Ascent = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION Ascent(const Scintilla::Internal::Font* font_) override {
		if (handle__Ascent == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Ascent(this, handle__Ascent, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Descent = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION Descent(const Scintilla::Internal::Font* font_) override {
		if (handle__Descent == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Descent(this, handle__Descent, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InternalLeading = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION InternalLeading(const Scintilla::Internal::Font* font_) override {
		if (handle__InternalLeading == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_InternalLeading(this, handle__InternalLeading, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Height = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION Height(const Scintilla::Internal::Font* font_) override {
		if (handle__Height == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_Height(this, handle__Height, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AverageCharWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::XYPOSITION AverageCharWidth(const Scintilla::Internal::Font* font_) override {
		if (handle__AverageCharWidth == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font_;

		double callback_return_value = miqt_exec_callback_Scintilla__Internal__Surface_AverageCharWidth(this, handle__AverageCharWidth, sigval1);

		return static_cast<Scintilla::Internal::XYPOSITION>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetClip = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetClip(Scintilla::Internal::PRectangle rc) override {
		if (handle__SetClip == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__PRectangle* sigval1 = new Scintilla::Internal::PRectangle(rc);

		miqt_exec_callback_Scintilla__Internal__Surface_SetClip(this, handle__SetClip, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PopClip = 0;

	// Subclass to allow providing a Go implementation
	virtual void PopClip() override {
		if (handle__PopClip == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_PopClip(this, handle__PopClip);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FlushCachedState = 0;

	// Subclass to allow providing a Go implementation
	virtual void FlushCachedState() override {
		if (handle__FlushCachedState == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_FlushCachedState(this, handle__FlushCachedState);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FlushDrawing = 0;

	// Subclass to allow providing a Go implementation
	virtual void FlushDrawing() override {
		if (handle__FlushDrawing == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__Surface_FlushDrawing(this, handle__FlushDrawing);

		
	}

};

Scintilla__Internal__Surface* Scintilla__Internal__Surface_new() {
	return new MiqtVirtualScintillaInternalSurface();
}

void Scintilla__Internal__Surface_Init(Scintilla__Internal__Surface* self, void* wid) {
	self->Init(wid);
}

void Scintilla__Internal__Surface_Init2(Scintilla__Internal__Surface* self, void* sid, void* wid) {
	self->Init(sid, wid);
}

void Scintilla__Internal__Surface_SetMode(Scintilla__Internal__Surface* self, Scintilla__Internal__SurfaceMode* mode) {
	self->SetMode(*mode);
}

void Scintilla__Internal__Surface_Release(Scintilla__Internal__Surface* self) {
	self->Release();
}

int Scintilla__Internal__Surface_SupportsFeature(Scintilla__Internal__Surface* self, int feature) {
	return self->SupportsFeature(static_cast<Scintilla::Supports>(feature));
}

bool Scintilla__Internal__Surface_Initialised(Scintilla__Internal__Surface* self) {
	return self->Initialised();
}

int Scintilla__Internal__Surface_LogPixelsY(Scintilla__Internal__Surface* self) {
	return self->LogPixelsY();
}

int Scintilla__Internal__Surface_PixelDivisions(Scintilla__Internal__Surface* self) {
	return self->PixelDivisions();
}

int Scintilla__Internal__Surface_DeviceHeightFont(Scintilla__Internal__Surface* self, int points) {
	return self->DeviceHeightFont(static_cast<int>(points));
}

void Scintilla__Internal__Surface_LineDraw(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* start, Scintilla__Internal__Point* end, Scintilla__Internal__Stroke* stroke) {
	self->LineDraw(*start, *end, *stroke);
}

void Scintilla__Internal__Surface_PolyLine(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* pts, size_t npts, Scintilla__Internal__Stroke* stroke) {
	self->PolyLine(pts, static_cast<size_t>(npts), *stroke);
}

void Scintilla__Internal__Surface_Polygon(Scintilla__Internal__Surface* self, Scintilla__Internal__Point* pts, size_t npts, Scintilla__Internal__FillStroke* fillStroke) {
	self->Polygon(pts, static_cast<size_t>(npts), *fillStroke);
}

void Scintilla__Internal__Surface_RectangleDraw(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke) {
	self->RectangleDraw(*rc, *fillStroke);
}

void Scintilla__Internal__Surface_RectangleFrame(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Stroke* stroke) {
	self->RectangleFrame(*rc, *stroke);
}

void Scintilla__Internal__Surface_FillRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Fill* fill) {
	self->FillRectangle(*rc, *fill);
}

void Scintilla__Internal__Surface_FillRectangleAligned(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Fill* fill) {
	self->FillRectangleAligned(*rc, *fill);
}

void Scintilla__Internal__Surface_FillRectangle2(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Surface* surfacePattern) {
	self->FillRectangle(*rc, *surfacePattern);
}

void Scintilla__Internal__Surface_RoundedRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke) {
	self->RoundedRectangle(*rc, *fillStroke);
}

void Scintilla__Internal__Surface_AlphaRectangle(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, double cornerSize, Scintilla__Internal__FillStroke* fillStroke) {
	self->AlphaRectangle(*rc, static_cast<Scintilla::Internal::XYPOSITION>(cornerSize), *fillStroke);
}

void Scintilla__Internal__Surface_DrawRGBAImage(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, int width, int height, const unsigned char* pixelsImage) {
	self->DrawRGBAImage(*rc, static_cast<int>(width), static_cast<int>(height), static_cast<const unsigned char*>(pixelsImage));
}

void Scintilla__Internal__Surface_Ellipse(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke) {
	self->Ellipse(*rc, *fillStroke);
}

void Scintilla__Internal__Surface_Stadium(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__FillStroke* fillStroke, int ends) {
	self->Stadium(*rc, *fillStroke, static_cast<Scintilla::Internal::Surface::Ends>(ends));
}

void Scintilla__Internal__Surface_Copy(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Point* from, Scintilla__Internal__Surface* surfaceSource) {
	self->Copy(*rc, *from, *surfaceSource);
}

double Scintilla__Internal__Surface_Ascent(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->Ascent(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_Descent(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->Descent(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_InternalLeading(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->InternalLeading(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_Height(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->Height(font_);
	return static_cast<double>(_ret);
}

double Scintilla__Internal__Surface_AverageCharWidth(Scintilla__Internal__Surface* self, Scintilla__Internal__Font* font_) {
	Scintilla::Internal::XYPOSITION _ret = self->AverageCharWidth(font_);
	return static_cast<double>(_ret);
}

void Scintilla__Internal__Surface_SetClip(Scintilla__Internal__Surface* self, Scintilla__Internal__PRectangle* rc) {
	self->SetClip(*rc);
}

void Scintilla__Internal__Surface_PopClip(Scintilla__Internal__Surface* self) {
	self->PopClip();
}

void Scintilla__Internal__Surface_FlushCachedState(Scintilla__Internal__Surface* self) {
	self->FlushCachedState();
}

void Scintilla__Internal__Surface_FlushDrawing(Scintilla__Internal__Surface* self) {
	self->FlushDrawing();
}

bool Scintilla__Internal__Surface_override_virtual_Init(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Init = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Init2(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Init2 = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_SetMode(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMode = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Release(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Release = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_SupportsFeature(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsFeature = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Initialised(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Initialised = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_LogPixelsY(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LogPixelsY = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_PixelDivisions(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PixelDivisions = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_DeviceHeightFont(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DeviceHeightFont = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_LineDraw(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LineDraw = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_PolyLine(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PolyLine = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Polygon(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Polygon = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_RectangleDraw(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RectangleDraw = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_RectangleFrame(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RectangleFrame = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_FillRectangle(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FillRectangle = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_FillRectangleAligned(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FillRectangleAligned = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_FillRectangle2(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FillRectangle2 = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_RoundedRectangle(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoundedRectangle = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_AlphaRectangle(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AlphaRectangle = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_DrawRGBAImage(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawRGBAImage = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Ellipse(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Ellipse = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Stadium(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Stadium = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Copy(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Copy = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Ascent(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Ascent = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Descent(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Descent = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_InternalLeading(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InternalLeading = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_Height(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Height = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_AverageCharWidth(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AverageCharWidth = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_SetClip(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetClip = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_PopClip(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PopClip = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_FlushCachedState(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FlushCachedState = slot;
	return true;
}

bool Scintilla__Internal__Surface_override_virtual_FlushDrawing(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalSurface* self_cast = dynamic_cast<MiqtVirtualScintillaInternalSurface*>( (Scintilla__Internal__Surface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FlushDrawing = slot;
	return true;
}

void Scintilla__Internal__Surface_delete(Scintilla__Internal__Surface* self) {
	delete self;
}

Scintilla__Internal__Window* Scintilla__Internal__Window_new() {
	return new Scintilla::Internal::Window();
}

void Scintilla__Internal__Window_operatorAssign(Scintilla__Internal__Window* self, void* wid_) {
	self->operator=(wid_);
}

void* Scintilla__Internal__Window_GetID(const Scintilla__Internal__Window* self) {
	Scintilla::Internal::WindowID _ret = self->GetID();
	return static_cast<void*>(_ret);
}

bool Scintilla__Internal__Window_Created(const Scintilla__Internal__Window* self) {
	return self->Created();
}

void Scintilla__Internal__Window_Destroy(Scintilla__Internal__Window* self) {
	self->Destroy();
}

Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetPosition(const Scintilla__Internal__Window* self) {
	return new Scintilla::Internal::PRectangle(self->GetPosition());
}

void Scintilla__Internal__Window_SetPosition(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc) {
	self->SetPosition(*rc);
}

void Scintilla__Internal__Window_SetPositionRelative(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc, Scintilla__Internal__Window* relativeTo) {
	self->SetPositionRelative(*rc, relativeTo);
}

Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetClientPosition(const Scintilla__Internal__Window* self) {
	return new Scintilla::Internal::PRectangle(self->GetClientPosition());
}

void Scintilla__Internal__Window_Show(Scintilla__Internal__Window* self) {
	self->Show();
}

void Scintilla__Internal__Window_InvalidateAll(Scintilla__Internal__Window* self) {
	self->InvalidateAll();
}

void Scintilla__Internal__Window_InvalidateRectangle(Scintilla__Internal__Window* self, Scintilla__Internal__PRectangle* rc) {
	self->InvalidateRectangle(*rc);
}

void Scintilla__Internal__Window_SetCursor(Scintilla__Internal__Window* self, int curs) {
	self->SetCursor(static_cast<Scintilla::Internal::Window::Cursor>(curs));
}

Scintilla__Internal__PRectangle* Scintilla__Internal__Window_GetMonitorRect(Scintilla__Internal__Window* self, Scintilla__Internal__Point* pt) {
	return new Scintilla::Internal::PRectangle(self->GetMonitorRect(*pt));
}

void Scintilla__Internal__Window_Show1(Scintilla__Internal__Window* self, bool show) {
	self->Show(show);
}

void Scintilla__Internal__Window_delete(Scintilla__Internal__Window* self) {
	delete self;
}

Scintilla__Internal__ListBoxEvent* Scintilla__Internal__ListBoxEvent_new(int event_) {
	return new Scintilla::Internal::ListBoxEvent(static_cast<Scintilla::Internal::ListBoxEvent::EventType>(event_));
}

void Scintilla__Internal__ListBoxEvent_delete(Scintilla__Internal__ListBoxEvent* self) {
	delete self;
}

void Scintilla__Internal__IListBoxDelegate_ListNotify(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__ListBoxEvent* plbe) {
	self->ListNotify(plbe);
}

void Scintilla__Internal__IListBoxDelegate_operatorAssign(Scintilla__Internal__IListBoxDelegate* self, Scintilla__Internal__IListBoxDelegate* param1) {
	self->operator=(*param1);
}

void Scintilla__Internal__IListBoxDelegate_delete(Scintilla__Internal__IListBoxDelegate* self) {
	delete self;
}

void Scintilla__Internal__ListOptions_delete(Scintilla__Internal__ListOptions* self) {
	delete self;
}

class MiqtVirtualScintillaInternalListBox final : public Scintilla::Internal::ListBox {
public:

	MiqtVirtualScintillaInternalListBox(): Scintilla::Internal::ListBox() {};

	virtual ~MiqtVirtualScintillaInternalListBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetFont(const Scintilla::Internal::Font* font) override {
		if (handle__SetFont == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__Font* sigval1 = (Scintilla__Internal__Font*) font;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetFont(this, handle__SetFont, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual void Create(Scintilla::Internal::Window& parent, int ctrlID, Scintilla::Internal::Point location, int lineHeight_, bool unicodeMode_, Scintilla::Technology technology_) override {
		if (handle__Create == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla::Internal::Window& parent_ret = parent;
		// Cast returned reference into pointer
		Scintilla__Internal__Window* sigval1 = &parent_ret;
		int sigval2 = ctrlID;
		Scintilla__Internal__Point* sigval3 = new Scintilla::Internal::Point(location);
		int sigval4 = lineHeight_;
		bool sigval5 = unicodeMode_;
		Scintilla::Technology technology__ret = technology_;
		int sigval6 = static_cast<int>(technology__ret);

		miqt_exec_callback_Scintilla__Internal__ListBox_Create(this, handle__Create, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAverageCharWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetAverageCharWidth(int width) override {
		if (handle__SetAverageCharWidth == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = width;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetAverageCharWidth(this, handle__SetAverageCharWidth, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisibleRows = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetVisibleRows(int rows) override {
		if (handle__SetVisibleRows == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = rows;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetVisibleRows(this, handle__SetVisibleRows, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetVisibleRows = 0;

	// Subclass to allow providing a Go implementation
	virtual int GetVisibleRows() const override {
		if (handle__GetVisibleRows == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_GetVisibleRows(this, handle__GetVisibleRows);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetDesiredRect = 0;

	// Subclass to allow providing a Go implementation
	virtual Scintilla::Internal::PRectangle GetDesiredRect() override {
		if (handle__GetDesiredRect == 0) {
			return Scintilla::Internal::PRectangle(); // Pure virtual, there is no base we can call
		}
		

		Scintilla__Internal__PRectangle* callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_GetDesiredRect(this, handle__GetDesiredRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaretFromEdge = 0;

	// Subclass to allow providing a Go implementation
	virtual int CaretFromEdge() override {
		if (handle__CaretFromEdge == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_CaretFromEdge(this, handle__CaretFromEdge);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void Clear() override {
		if (handle__Clear == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__ListBox_Clear(this, handle__Clear);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Append = 0;

	// Subclass to allow providing a Go implementation
	virtual void Append(char* s, int type) override {
		if (handle__Append == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		char* sigval1 = s;
		int sigval2 = type;

		miqt_exec_callback_Scintilla__Internal__ListBox_Append(this, handle__Append, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Length = 0;

	// Subclass to allow providing a Go implementation
	virtual int Length() override {
		if (handle__Length == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_Length(this, handle__Length);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Select = 0;

	// Subclass to allow providing a Go implementation
	virtual void Select(int n) override {
		if (handle__Select == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = n;

		miqt_exec_callback_Scintilla__Internal__ListBox_Select(this, handle__Select, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual int GetSelection() override {
		if (handle__GetSelection == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_GetSelection(this, handle__GetSelection);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Find = 0;

	// Subclass to allow providing a Go implementation
	virtual int Find(const char* prefix) override {
		if (handle__Find == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) prefix;

		int callback_return_value = miqt_exec_callback_Scintilla__Internal__ListBox_Find(this, handle__Find, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisterImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void RegisterImage(int type, const char* xpm_data) override {
		if (handle__RegisterImage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = type;
		const char* sigval2 = (const char*) xpm_data;

		miqt_exec_callback_Scintilla__Internal__ListBox_RegisterImage(this, handle__RegisterImage, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RegisterRGBAImage = 0;

	// Subclass to allow providing a Go implementation
	virtual void RegisterRGBAImage(int type, int width, int height, const unsigned char* pixelsImage) override {
		if (handle__RegisterRGBAImage == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = type;
		int sigval2 = width;
		int sigval3 = height;
		const unsigned char* sigval4 = (const unsigned char*) pixelsImage;

		miqt_exec_callback_Scintilla__Internal__ListBox_RegisterRGBAImage(this, handle__RegisterRGBAImage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClearRegisteredImages = 0;

	// Subclass to allow providing a Go implementation
	virtual void ClearRegisteredImages() override {
		if (handle__ClearRegisteredImages == 0) {
			return; // Pure virtual, there is no base we can call
		}
		

		miqt_exec_callback_Scintilla__Internal__ListBox_ClearRegisteredImages(this, handle__ClearRegisteredImages);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetDelegate = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetDelegate(Scintilla::Internal::IListBoxDelegate* lbDelegate) override {
		if (handle__SetDelegate == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__IListBoxDelegate* sigval1 = lbDelegate;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetDelegate(this, handle__SetDelegate, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetList = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetList(const char* list, char separator, char typesep) override {
		if (handle__SetList == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) list;
		char sigval2 = separator;
		char sigval3 = typesep;

		miqt_exec_callback_Scintilla__Internal__ListBox_SetList(this, handle__SetList, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual void SetOptions(Scintilla::Internal::ListOptions options_) override {
		if (handle__SetOptions == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		Scintilla__Internal__ListOptions* sigval1 = new Scintilla::Internal::ListOptions(options_);

		miqt_exec_callback_Scintilla__Internal__ListBox_SetOptions(this, handle__SetOptions, sigval1);

		
	}

};

Scintilla__Internal__ListBox* Scintilla__Internal__ListBox_new() {
	return new MiqtVirtualScintillaInternalListBox();
}

void Scintilla__Internal__ListBox_virtbase(Scintilla__Internal__ListBox* src, Scintilla::Internal::Window** outptr_Scintilla__Internal__Window) {
	*outptr_Scintilla__Internal__Window = static_cast<Scintilla::Internal::Window*>(src);
}

void Scintilla__Internal__ListBox_SetFont(Scintilla__Internal__ListBox* self, Scintilla__Internal__Font* font) {
	self->SetFont(font);
}

void Scintilla__Internal__ListBox_Create(Scintilla__Internal__ListBox* self, Scintilla__Internal__Window* parent, int ctrlID, Scintilla__Internal__Point* location, int lineHeight_, bool unicodeMode_, int technology_) {
	self->Create(*parent, static_cast<int>(ctrlID), *location, static_cast<int>(lineHeight_), unicodeMode_, static_cast<Scintilla::Technology>(technology_));
}

void Scintilla__Internal__ListBox_SetAverageCharWidth(Scintilla__Internal__ListBox* self, int width) {
	self->SetAverageCharWidth(static_cast<int>(width));
}

void Scintilla__Internal__ListBox_SetVisibleRows(Scintilla__Internal__ListBox* self, int rows) {
	self->SetVisibleRows(static_cast<int>(rows));
}

int Scintilla__Internal__ListBox_GetVisibleRows(const Scintilla__Internal__ListBox* self) {
	return self->GetVisibleRows();
}

Scintilla__Internal__PRectangle* Scintilla__Internal__ListBox_GetDesiredRect(Scintilla__Internal__ListBox* self) {
	return new Scintilla::Internal::PRectangle(self->GetDesiredRect());
}

int Scintilla__Internal__ListBox_CaretFromEdge(Scintilla__Internal__ListBox* self) {
	return self->CaretFromEdge();
}

void Scintilla__Internal__ListBox_Clear(Scintilla__Internal__ListBox* self) {
	self->Clear();
}

void Scintilla__Internal__ListBox_Append(Scintilla__Internal__ListBox* self, char* s, int type) {
	self->Append(s, static_cast<int>(type));
}

int Scintilla__Internal__ListBox_Length(Scintilla__Internal__ListBox* self) {
	return self->Length();
}

void Scintilla__Internal__ListBox_Select(Scintilla__Internal__ListBox* self, int n) {
	self->Select(static_cast<int>(n));
}

int Scintilla__Internal__ListBox_GetSelection(Scintilla__Internal__ListBox* self) {
	return self->GetSelection();
}

int Scintilla__Internal__ListBox_Find(Scintilla__Internal__ListBox* self, const char* prefix) {
	return self->Find(prefix);
}

void Scintilla__Internal__ListBox_RegisterImage(Scintilla__Internal__ListBox* self, int type, const char* xpm_data) {
	self->RegisterImage(static_cast<int>(type), xpm_data);
}

void Scintilla__Internal__ListBox_RegisterRGBAImage(Scintilla__Internal__ListBox* self, int type, int width, int height, const unsigned char* pixelsImage) {
	self->RegisterRGBAImage(static_cast<int>(type), static_cast<int>(width), static_cast<int>(height), static_cast<const unsigned char*>(pixelsImage));
}

void Scintilla__Internal__ListBox_ClearRegisteredImages(Scintilla__Internal__ListBox* self) {
	self->ClearRegisteredImages();
}

void Scintilla__Internal__ListBox_SetDelegate(Scintilla__Internal__ListBox* self, Scintilla__Internal__IListBoxDelegate* lbDelegate) {
	self->SetDelegate(lbDelegate);
}

void Scintilla__Internal__ListBox_SetList(Scintilla__Internal__ListBox* self, const char* list, char separator, char typesep) {
	self->SetList(list, static_cast<char>(separator), static_cast<char>(typesep));
}

void Scintilla__Internal__ListBox_SetOptions(Scintilla__Internal__ListBox* self, Scintilla__Internal__ListOptions* options_) {
	self->SetOptions(*options_);
}

bool Scintilla__Internal__ListBox_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_Create(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Create = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_SetAverageCharWidth(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAverageCharWidth = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_SetVisibleRows(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisibleRows = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_GetVisibleRows(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetVisibleRows = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_GetDesiredRect(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetDesiredRect = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_CaretFromEdge(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaretFromEdge = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_Append(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Append = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_Length(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Length = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_Select(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Select = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_GetSelection(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetSelection = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_Find(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Find = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_RegisterImage(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RegisterImage = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_RegisterRGBAImage(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RegisterRGBAImage = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_ClearRegisteredImages(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ClearRegisteredImages = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_SetDelegate(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetDelegate = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_SetList(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetList = slot;
	return true;
}

bool Scintilla__Internal__ListBox_override_virtual_SetOptions(void* self, intptr_t slot) {
	MiqtVirtualScintillaInternalListBox* self_cast = dynamic_cast<MiqtVirtualScintillaInternalListBox*>( (Scintilla__Internal__ListBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetOptions = slot;
	return true;
}

void Scintilla__Internal__ListBox_delete(Scintilla__Internal__ListBox* self) {
	delete self;
}

Scintilla__Internal__Menu* Scintilla__Internal__Menu_new() {
	return new Scintilla::Internal::Menu();
}

void* Scintilla__Internal__Menu_GetID(const Scintilla__Internal__Menu* self) {
	Scintilla::Internal::MenuID _ret = self->GetID();
	return static_cast<void*>(_ret);
}

void Scintilla__Internal__Menu_CreatePopUp(Scintilla__Internal__Menu* self) {
	self->CreatePopUp();
}

void Scintilla__Internal__Menu_Destroy(Scintilla__Internal__Menu* self) {
	self->Destroy();
}

void Scintilla__Internal__Menu_Show(Scintilla__Internal__Menu* self, Scintilla__Internal__Point* pt, Scintilla__Internal__Window* w) {
	self->Show(*pt, *w);
}

void Scintilla__Internal__Menu_delete(Scintilla__Internal__Menu* self) {
	delete self;
}

void Sci_CharacterRange_delete(Sci_CharacterRange* self) {
	delete self;
}

void Sci_CharacterRangeFull_delete(Sci_CharacterRangeFull* self) {
	delete self;
}

void Sci_TextRange_delete(Sci_TextRange* self) {
	delete self;
}

void Sci_TextRangeFull_delete(Sci_TextRangeFull* self) {
	delete self;
}

void Sci_TextToFind_delete(Sci_TextToFind* self) {
	delete self;
}

void Sci_TextToFindFull_delete(Sci_TextToFindFull* self) {
	delete self;
}

void Sci_Rectangle_delete(Sci_Rectangle* self) {
	delete self;
}

void Sci_RangeToFormat_delete(Sci_RangeToFormat* self) {
	delete self;
}

void Sci_RangeToFormatFull_delete(Sci_RangeToFormatFull* self) {
	delete self;
}

void Sci_NotifyHeader_delete(Sci_NotifyHeader* self) {
	delete self;
}

void SCNotification_delete(SCNotification* self) {
	delete self;
}

class MiqtVirtualScintillaEditBase final : public ScintillaEditBase {
public:

	MiqtVirtualScintillaEditBase(QWidget* parent): ScintillaEditBase(parent) {};
	MiqtVirtualScintillaEditBase(): ScintillaEditBase() {};

	virtual ~MiqtVirtualScintillaEditBase() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__send = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t send(unsigned int iMessage, uptr_t wParam, sptr_t lParam) const override {
		if (handle__send == 0) {
			return ScintillaEditBase::send(iMessage, wParam, lParam);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		sptr_t lParam_ret = lParam;
		intptr_t sigval3 = static_cast<intptr_t>(lParam_ret);

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEditBase_send(this, handle__send, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	friend intptr_t ScintillaEditBase_virtualbase_send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sends = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t sends(unsigned int iMessage, uptr_t wParam, const char* s) const override {
		if (handle__sends == 0) {
			return ScintillaEditBase::sends(iMessage, wParam, s);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		const char* sigval3 = (const char*) s;

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEditBase_sends(this, handle__sends, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	friend intptr_t ScintillaEditBase_virtualbase_sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return ScintillaEditBase::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaEditBase_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			ScintillaEditBase::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			ScintillaEditBase::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			ScintillaEditBase::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			ScintillaEditBase::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			ScintillaEditBase::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			ScintillaEditBase::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			ScintillaEditBase::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			ScintillaEditBase::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			ScintillaEditBase::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			ScintillaEditBase::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			ScintillaEditBase::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			ScintillaEditBase::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			ScintillaEditBase::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			ScintillaEditBase::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			ScintillaEditBase::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			ScintillaEditBase::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return ScintillaEditBase::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_ScintillaEditBase_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* ScintillaEditBase_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int param1, int param2) override {
		if (handle__scrollContentsBy == 0) {
			ScintillaEditBase::scrollContentsBy(param1, param2);
			return;
		}
		
		int sigval1 = param1;
		int sigval2 = param2;

		miqt_exec_callback_ScintillaEditBase_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	friend void ScintillaEditBase_virtualbase_scrollContentsBy(void* self, int param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return ScintillaEditBase::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEditBase_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* ScintillaEditBase_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return ScintillaEditBase::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEditBase_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* ScintillaEditBase_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			ScintillaEditBase::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_ScintillaEditBase_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return ScintillaEditBase::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool ScintillaEditBase_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return ScintillaEditBase::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaEditBase_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return ScintillaEditBase::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEditBase_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	friend QSize* ScintillaEditBase_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			ScintillaEditBase::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_ScintillaEditBase_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return ScintillaEditBase::devType();
		}
		

		int callback_return_value = miqt_exec_callback_ScintillaEditBase_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int ScintillaEditBase_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			ScintillaEditBase::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_ScintillaEditBase_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return ScintillaEditBase::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_ScintillaEditBase_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int ScintillaEditBase_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return ScintillaEditBase::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool ScintillaEditBase_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return ScintillaEditBase::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_ScintillaEditBase_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* ScintillaEditBase_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			ScintillaEditBase::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			ScintillaEditBase::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			ScintillaEditBase::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			ScintillaEditBase::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			ScintillaEditBase::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			ScintillaEditBase::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			ScintillaEditBase::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			ScintillaEditBase::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			ScintillaEditBase::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return ScintillaEditBase::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool ScintillaEditBase_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return ScintillaEditBase::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_ScintillaEditBase_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int ScintillaEditBase_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			ScintillaEditBase::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_ScintillaEditBase_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return ScintillaEditBase::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_ScintillaEditBase_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* ScintillaEditBase_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return ScintillaEditBase::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_ScintillaEditBase_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* ScintillaEditBase_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return ScintillaEditBase::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_ScintillaEditBase_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaEditBase_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			ScintillaEditBase::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			ScintillaEditBase::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			ScintillaEditBase::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEditBase_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			ScintillaEditBase::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaEditBase_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			ScintillaEditBase::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaEditBase_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void ScintillaEditBase_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void ScintillaEditBase_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* ScintillaEditBase_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void ScintillaEditBase_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void ScintillaEditBase_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void ScintillaEditBase_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void ScintillaEditBase_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void ScintillaEditBase_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool ScintillaEditBase_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool ScintillaEditBase_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* ScintillaEditBase_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int ScintillaEditBase_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int ScintillaEditBase_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool ScintillaEditBase_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

ScintillaEditBase* ScintillaEditBase_new(QWidget* parent) {
	return new MiqtVirtualScintillaEditBase(parent);
}

ScintillaEditBase* ScintillaEditBase_new2() {
	return new MiqtVirtualScintillaEditBase();
}

void ScintillaEditBase_virtbase(ScintillaEditBase* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* ScintillaEditBase_metaObject(const ScintillaEditBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* ScintillaEditBase_metacast(ScintillaEditBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string ScintillaEditBase_tr(const char* s) {
	QString _ret = ScintillaEditBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_trUtf8(const char* s) {
	QString _ret = ScintillaEditBase::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEditBase_send(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam) {
	sptr_t _ret = self->send(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), static_cast<sptr_t>(lParam));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEditBase_sends(const ScintillaEditBase* self, unsigned int iMessage, uintptr_t wParam, const char* s) {
	sptr_t _ret = self->sends(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), s);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEditBase_scrollHorizontal(ScintillaEditBase* self, int value) {
	self->scrollHorizontal(static_cast<int>(value));
}

void ScintillaEditBase_scrollVertical(ScintillaEditBase* self, int value) {
	self->scrollVertical(static_cast<int>(value));
}

void ScintillaEditBase_notifyParent(ScintillaEditBase* self, Scintilla__NotificationData* scn) {
	self->notifyParent(*scn);
}

void ScintillaEditBase_eventCommand(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam) {
	self->event_command(static_cast<Scintilla::uptr_t>(wParam), static_cast<Scintilla::sptr_t>(lParam));
}

void ScintillaEditBase_horizontalScrolled(ScintillaEditBase* self, int value) {
	self->horizontalScrolled(static_cast<int>(value));
}

void ScintillaEditBase_connect_horizontalScrolled(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::horizontalScrolled), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_ScintillaEditBase_horizontalScrolled(slot, sigval1);
	});
}

void ScintillaEditBase_verticalScrolled(ScintillaEditBase* self, int value) {
	self->verticalScrolled(static_cast<int>(value));
}

void ScintillaEditBase_connect_verticalScrolled(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::verticalScrolled), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_ScintillaEditBase_verticalScrolled(slot, sigval1);
	});
}

void ScintillaEditBase_horizontalRangeChanged(ScintillaEditBase* self, int max, int page) {
	self->horizontalRangeChanged(static_cast<int>(max), static_cast<int>(page));
}

void ScintillaEditBase_connect_horizontalRangeChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::horizontalRangeChanged), self, [=](int max, int page) {
		int sigval1 = max;
		int sigval2 = page;
		miqt_exec_callback_ScintillaEditBase_horizontalRangeChanged(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_verticalRangeChanged(ScintillaEditBase* self, int max, int page) {
	self->verticalRangeChanged(static_cast<int>(max), static_cast<int>(page));
}

void ScintillaEditBase_connect_verticalRangeChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::verticalRangeChanged), self, [=](int max, int page) {
		int sigval1 = max;
		int sigval2 = page;
		miqt_exec_callback_ScintillaEditBase_verticalRangeChanged(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_notifyChange(ScintillaEditBase* self) {
	self->notifyChange();
}

void ScintillaEditBase_connect_notifyChange(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::notifyChange), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_notifyChange(slot);
	});
}

void ScintillaEditBase_linesAdded(ScintillaEditBase* self, intptr_t linesAdded) {
	self->linesAdded(static_cast<Scintilla::Position>(linesAdded));
}

void ScintillaEditBase_connect_linesAdded(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position)>(&ScintillaEditBase::linesAdded), self, [=](Scintilla::Position linesAdded) {
		Scintilla::Position linesAdded_ret = linesAdded;
		intptr_t sigval1 = static_cast<intptr_t>(linesAdded_ret);
		miqt_exec_callback_ScintillaEditBase_linesAdded(slot, sigval1);
	});
}

void ScintillaEditBase_aboutToCopy(ScintillaEditBase* self, QMimeData* data) {
	self->aboutToCopy(data);
}

void ScintillaEditBase_connect_aboutToCopy(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QMimeData*)>(&ScintillaEditBase::aboutToCopy), self, [=](QMimeData* data) {
		QMimeData* sigval1 = data;
		miqt_exec_callback_ScintillaEditBase_aboutToCopy(slot, sigval1);
	});
}

void ScintillaEditBase_styleNeeded(ScintillaEditBase* self, intptr_t position) {
	self->styleNeeded(static_cast<Scintilla::Position>(position));
}

void ScintillaEditBase_connect_styleNeeded(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position)>(&ScintillaEditBase::styleNeeded), self, [=](Scintilla::Position position) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		miqt_exec_callback_ScintillaEditBase_styleNeeded(slot, sigval1);
	});
}

void ScintillaEditBase_charAdded(ScintillaEditBase* self, int ch) {
	self->charAdded(static_cast<int>(ch));
}

void ScintillaEditBase_connect_charAdded(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::charAdded), self, [=](int ch) {
		int sigval1 = ch;
		miqt_exec_callback_ScintillaEditBase_charAdded(slot, sigval1);
	});
}

void ScintillaEditBase_savePointChanged(ScintillaEditBase* self, bool dirty) {
	self->savePointChanged(dirty);
}

void ScintillaEditBase_connect_savePointChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(bool)>(&ScintillaEditBase::savePointChanged), self, [=](bool dirty) {
		bool sigval1 = dirty;
		miqt_exec_callback_ScintillaEditBase_savePointChanged(slot, sigval1);
	});
}

void ScintillaEditBase_modifyAttemptReadOnly(ScintillaEditBase* self) {
	self->modifyAttemptReadOnly();
}

void ScintillaEditBase_connect_modifyAttemptReadOnly(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::modifyAttemptReadOnly), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_modifyAttemptReadOnly(slot);
	});
}

void ScintillaEditBase_key(ScintillaEditBase* self, int key) {
	self->key(static_cast<int>(key));
}

void ScintillaEditBase_connect_key(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::key), self, [=](int key) {
		int sigval1 = key;
		miqt_exec_callback_ScintillaEditBase_key(slot, sigval1);
	});
}

void ScintillaEditBase_doubleClick(ScintillaEditBase* self, intptr_t position, intptr_t line) {
	self->doubleClick(static_cast<Scintilla::Position>(position), static_cast<Scintilla::Position>(line));
}

void ScintillaEditBase_connect_doubleClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::Position)>(&ScintillaEditBase::doubleClick), self, [=](Scintilla::Position position, Scintilla::Position line) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::Position line_ret = line;
		intptr_t sigval2 = static_cast<intptr_t>(line_ret);
		miqt_exec_callback_ScintillaEditBase_doubleClick(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_updateUi(ScintillaEditBase* self, int updated) {
	self->updateUi(static_cast<Scintilla::Update>(updated));
}

void ScintillaEditBase_connect_updateUi(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Update)>(&ScintillaEditBase::updateUi), self, [=](Scintilla::Update updated) {
		Scintilla::Update updated_ret = updated;
		int sigval1 = static_cast<int>(updated_ret);
		miqt_exec_callback_ScintillaEditBase_updateUi(slot, sigval1);
	});
}

void ScintillaEditBase_modified(ScintillaEditBase* self, int type, intptr_t position, intptr_t length, intptr_t linesAdded, struct miqt_string text, intptr_t line, int foldNow, int foldPrev) {
	QByteArray text_QByteArray(text.data, text.len);
	self->modified(static_cast<Scintilla::ModificationFlags>(type), static_cast<Scintilla::Position>(position), static_cast<Scintilla::Position>(length), static_cast<Scintilla::Position>(linesAdded), text_QByteArray, static_cast<Scintilla::Position>(line), static_cast<Scintilla::FoldLevel>(foldNow), static_cast<Scintilla::FoldLevel>(foldPrev));
}

void ScintillaEditBase_connect_modified(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::ModificationFlags, Scintilla::Position, Scintilla::Position, Scintilla::Position, const QByteArray&, Scintilla::Position, Scintilla::FoldLevel, Scintilla::FoldLevel)>(&ScintillaEditBase::modified), self, [=](Scintilla::ModificationFlags type, Scintilla::Position position, Scintilla::Position length, Scintilla::Position linesAdded, const QByteArray& text, Scintilla::Position line, Scintilla::FoldLevel foldNow, Scintilla::FoldLevel foldPrev) {
		Scintilla::ModificationFlags type_ret = type;
		int sigval1 = static_cast<int>(type_ret);
		Scintilla::Position position_ret = position;
		intptr_t sigval2 = static_cast<intptr_t>(position_ret);
		Scintilla::Position length_ret = length;
		intptr_t sigval3 = static_cast<intptr_t>(length_ret);
		Scintilla::Position linesAdded_ret = linesAdded;
		intptr_t sigval4 = static_cast<intptr_t>(linesAdded_ret);
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval5 = text_ms;
		Scintilla::Position line_ret = line;
		intptr_t sigval6 = static_cast<intptr_t>(line_ret);
		Scintilla::FoldLevel foldNow_ret = foldNow;
		int sigval7 = static_cast<int>(foldNow_ret);
		Scintilla::FoldLevel foldPrev_ret = foldPrev;
		int sigval8 = static_cast<int>(foldPrev_ret);
		miqt_exec_callback_ScintillaEditBase_modified(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);
	});
}

void ScintillaEditBase_macroRecord(ScintillaEditBase* self, int message, uintptr_t wParam, intptr_t lParam) {
	self->macroRecord(static_cast<Scintilla::Message>(message), static_cast<Scintilla::uptr_t>(wParam), static_cast<Scintilla::sptr_t>(lParam));
}

void ScintillaEditBase_connect_macroRecord(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Message, Scintilla::uptr_t, Scintilla::sptr_t)>(&ScintillaEditBase::macroRecord), self, [=](Scintilla::Message message, Scintilla::uptr_t wParam, Scintilla::sptr_t lParam) {
		Scintilla::Message message_ret = message;
		int sigval1 = static_cast<int>(message_ret);
		Scintilla::uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		Scintilla::sptr_t lParam_ret = lParam;
		intptr_t sigval3 = static_cast<intptr_t>(lParam_ret);
		miqt_exec_callback_ScintillaEditBase_macroRecord(slot, sigval1, sigval2, sigval3);
	});
}

void ScintillaEditBase_marginClicked(ScintillaEditBase* self, intptr_t position, int modifiers, int margin) {
	self->marginClicked(static_cast<Scintilla::Position>(position), static_cast<Scintilla::KeyMod>(modifiers), static_cast<int>(margin));
}

void ScintillaEditBase_connect_marginClicked(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::KeyMod, int)>(&ScintillaEditBase::marginClicked), self, [=](Scintilla::Position position, Scintilla::KeyMod modifiers, int margin) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::KeyMod modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		int sigval3 = margin;
		miqt_exec_callback_ScintillaEditBase_marginClicked(slot, sigval1, sigval2, sigval3);
	});
}

void ScintillaEditBase_textAreaClicked(ScintillaEditBase* self, intptr_t line, int modifiers) {
	self->textAreaClicked(static_cast<Scintilla::Position>(line), static_cast<int>(modifiers));
}

void ScintillaEditBase_connect_textAreaClicked(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, int)>(&ScintillaEditBase::textAreaClicked), self, [=](Scintilla::Position line, int modifiers) {
		Scintilla::Position line_ret = line;
		intptr_t sigval1 = static_cast<intptr_t>(line_ret);
		int sigval2 = modifiers;
		miqt_exec_callback_ScintillaEditBase_textAreaClicked(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_needShown(ScintillaEditBase* self, intptr_t position, intptr_t length) {
	self->needShown(static_cast<Scintilla::Position>(position), static_cast<Scintilla::Position>(length));
}

void ScintillaEditBase_connect_needShown(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::Position)>(&ScintillaEditBase::needShown), self, [=](Scintilla::Position position, Scintilla::Position length) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::Position length_ret = length;
		intptr_t sigval2 = static_cast<intptr_t>(length_ret);
		miqt_exec_callback_ScintillaEditBase_needShown(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_painted(ScintillaEditBase* self) {
	self->painted();
}

void ScintillaEditBase_connect_painted(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::painted), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_painted(slot);
	});
}

void ScintillaEditBase_userListSelection(ScintillaEditBase* self) {
	self->userListSelection();
}

void ScintillaEditBase_connect_userListSelection(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::userListSelection), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_userListSelection(slot);
	});
}

void ScintillaEditBase_uriDropped(ScintillaEditBase* self, struct miqt_string uri) {
	QString uri_QString = QString::fromUtf8(uri.data, uri.len);
	self->uriDropped(uri_QString);
}

void ScintillaEditBase_connect_uriDropped(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(const QString&)>(&ScintillaEditBase::uriDropped), self, [=](const QString& uri) {
		const QString uri_ret = uri;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray uri_b = uri_ret.toUtf8();
		struct miqt_string uri_ms;
		uri_ms.len = uri_b.length();
		uri_ms.data = static_cast<char*>(malloc(uri_ms.len));
		memcpy(uri_ms.data, uri_b.data(), uri_ms.len);
		struct miqt_string sigval1 = uri_ms;
		miqt_exec_callback_ScintillaEditBase_uriDropped(slot, sigval1);
	});
}

void ScintillaEditBase_dwellStart(ScintillaEditBase* self, int x, int y) {
	self->dwellStart(static_cast<int>(x), static_cast<int>(y));
}

void ScintillaEditBase_connect_dwellStart(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::dwellStart), self, [=](int x, int y) {
		int sigval1 = x;
		int sigval2 = y;
		miqt_exec_callback_ScintillaEditBase_dwellStart(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_dwellEnd(ScintillaEditBase* self, int x, int y) {
	self->dwellEnd(static_cast<int>(x), static_cast<int>(y));
}

void ScintillaEditBase_connect_dwellEnd(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int, int)>(&ScintillaEditBase::dwellEnd), self, [=](int x, int y) {
		int sigval1 = x;
		int sigval2 = y;
		miqt_exec_callback_ScintillaEditBase_dwellEnd(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_zoom(ScintillaEditBase* self, int zoom) {
	self->zoom(static_cast<int>(zoom));
}

void ScintillaEditBase_connect_zoom(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(int)>(&ScintillaEditBase::zoom), self, [=](int zoom) {
		int sigval1 = zoom;
		miqt_exec_callback_ScintillaEditBase_zoom(slot, sigval1);
	});
}

void ScintillaEditBase_hotSpotClick(ScintillaEditBase* self, intptr_t position, int modifiers) {
	self->hotSpotClick(static_cast<Scintilla::Position>(position), static_cast<Scintilla::KeyMod>(modifiers));
}

void ScintillaEditBase_connect_hotSpotClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::KeyMod)>(&ScintillaEditBase::hotSpotClick), self, [=](Scintilla::Position position, Scintilla::KeyMod modifiers) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::KeyMod modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		miqt_exec_callback_ScintillaEditBase_hotSpotClick(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_hotSpotDoubleClick(ScintillaEditBase* self, intptr_t position, int modifiers) {
	self->hotSpotDoubleClick(static_cast<Scintilla::Position>(position), static_cast<Scintilla::KeyMod>(modifiers));
}

void ScintillaEditBase_connect_hotSpotDoubleClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, Scintilla::KeyMod)>(&ScintillaEditBase::hotSpotDoubleClick), self, [=](Scintilla::Position position, Scintilla::KeyMod modifiers) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		Scintilla::KeyMod modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		miqt_exec_callback_ScintillaEditBase_hotSpotDoubleClick(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_callTipClick(ScintillaEditBase* self) {
	self->callTipClick();
}

void ScintillaEditBase_connect_callTipClick(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::callTipClick), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_callTipClick(slot);
	});
}

void ScintillaEditBase_autoCompleteSelection(ScintillaEditBase* self, intptr_t position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->autoCompleteSelection(static_cast<Scintilla::Position>(position), text_QString);
}

void ScintillaEditBase_connect_autoCompleteSelection(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::Position, const QString&)>(&ScintillaEditBase::autoCompleteSelection), self, [=](Scintilla::Position position, const QString& text) {
		Scintilla::Position position_ret = position;
		intptr_t sigval1 = static_cast<intptr_t>(position_ret);
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval2 = text_ms;
		miqt_exec_callback_ScintillaEditBase_autoCompleteSelection(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_autoCompleteCancelled(ScintillaEditBase* self) {
	self->autoCompleteCancelled();
}

void ScintillaEditBase_connect_autoCompleteCancelled(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::autoCompleteCancelled), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_autoCompleteCancelled(slot);
	});
}

void ScintillaEditBase_focusChanged(ScintillaEditBase* self, bool focused) {
	self->focusChanged(focused);
}

void ScintillaEditBase_connect_focusChanged(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(bool)>(&ScintillaEditBase::focusChanged), self, [=](bool focused) {
		bool sigval1 = focused;
		miqt_exec_callback_ScintillaEditBase_focusChanged(slot, sigval1);
	});
}

void ScintillaEditBase_notify(ScintillaEditBase* self, Scintilla__NotificationData* pscn) {
	self->notify(pscn);
}

void ScintillaEditBase_connect_notify(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::NotificationData*)>(&ScintillaEditBase::notify), self, [=](Scintilla::NotificationData* pscn) {
		Scintilla__NotificationData* sigval1 = pscn;
		miqt_exec_callback_ScintillaEditBase_notify(slot, sigval1);
	});
}

void ScintillaEditBase_command(ScintillaEditBase* self, uintptr_t wParam, intptr_t lParam) {
	self->command(static_cast<Scintilla::uptr_t>(wParam), static_cast<Scintilla::sptr_t>(lParam));
}

void ScintillaEditBase_connect_command(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(Scintilla::uptr_t, Scintilla::sptr_t)>(&ScintillaEditBase::command), self, [=](Scintilla::uptr_t wParam, Scintilla::sptr_t lParam) {
		Scintilla::uptr_t wParam_ret = wParam;
		uintptr_t sigval1 = static_cast<uintptr_t>(wParam_ret);
		Scintilla::sptr_t lParam_ret = lParam;
		intptr_t sigval2 = static_cast<intptr_t>(lParam_ret);
		miqt_exec_callback_ScintillaEditBase_command(slot, sigval1, sigval2);
	});
}

void ScintillaEditBase_buttonPressed(ScintillaEditBase* self, QMouseEvent* event) {
	self->buttonPressed(event);
}

void ScintillaEditBase_connect_buttonPressed(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QMouseEvent*)>(&ScintillaEditBase::buttonPressed), self, [=](QMouseEvent* event) {
		QMouseEvent* sigval1 = event;
		miqt_exec_callback_ScintillaEditBase_buttonPressed(slot, sigval1);
	});
}

void ScintillaEditBase_buttonReleased(ScintillaEditBase* self, QMouseEvent* event) {
	self->buttonReleased(event);
}

void ScintillaEditBase_connect_buttonReleased(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QMouseEvent*)>(&ScintillaEditBase::buttonReleased), self, [=](QMouseEvent* event) {
		QMouseEvent* sigval1 = event;
		miqt_exec_callback_ScintillaEditBase_buttonReleased(slot, sigval1);
	});
}

void ScintillaEditBase_keyPressed(ScintillaEditBase* self, QKeyEvent* event) {
	self->keyPressed(event);
}

void ScintillaEditBase_connect_keyPressed(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)(QKeyEvent*)>(&ScintillaEditBase::keyPressed), self, [=](QKeyEvent* event) {
		QKeyEvent* sigval1 = event;
		miqt_exec_callback_ScintillaEditBase_keyPressed(slot, sigval1);
	});
}

void ScintillaEditBase_resized(ScintillaEditBase* self) {
	self->resized();
}

void ScintillaEditBase_connect_resized(ScintillaEditBase* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase::connect(self, static_cast<void (ScintillaEditBase::*)()>(&ScintillaEditBase::resized), self, [=]() {
		miqt_exec_callback_ScintillaEditBase_resized(slot);
	});
}

struct miqt_string ScintillaEditBase_tr2(const char* s, const char* c) {
	QString _ret = ScintillaEditBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_tr3(const char* s, const char* c, int n) {
	QString _ret = ScintillaEditBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_trUtf82(const char* s, const char* c) {
	QString _ret = ScintillaEditBase::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEditBase_trUtf83(const char* s, const char* c, int n) {
	QString _ret = ScintillaEditBase::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool ScintillaEditBase_override_virtual_send(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__send = slot;
	return true;
}

intptr_t ScintillaEditBase_virtualbase_send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam) {

	sptr_t _ret = ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::send(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), static_cast<sptr_t>(lParam));
	return static_cast<intptr_t>(_ret);

}

bool ScintillaEditBase_override_virtual_sends(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sends = slot;
	return true;
}

intptr_t ScintillaEditBase_virtualbase_sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s) {

	sptr_t _ret = ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::sends(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), s);
	return static_cast<intptr_t>(_ret);

}

bool ScintillaEditBase_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool ScintillaEditBase_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::event(event);

}

bool ScintillaEditBase_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_paintEvent(void* self, QPaintEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::paintEvent(event);

}

bool ScintillaEditBase_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::wheelEvent(event);

}

bool ScintillaEditBase_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::focusInEvent(event);

}

bool ScintillaEditBase_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::focusOutEvent(event);

}

bool ScintillaEditBase_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_resizeEvent(void* self, QResizeEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::resizeEvent(event);

}

bool ScintillaEditBase_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::keyPressEvent(event);

}

bool ScintillaEditBase_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::mousePressEvent(event);

}

bool ScintillaEditBase_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::mouseReleaseEvent(event);

}

bool ScintillaEditBase_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::mouseDoubleClickEvent(event);

}

bool ScintillaEditBase_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::mouseMoveEvent(event);

}

bool ScintillaEditBase_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::contextMenuEvent(event);

}

bool ScintillaEditBase_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::dragEnterEvent(event);

}

bool ScintillaEditBase_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::dragLeaveEvent(event);

}

bool ScintillaEditBase_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::dragMoveEvent(event);

}

bool ScintillaEditBase_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::dropEvent(event);

}

bool ScintillaEditBase_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::inputMethodEvent(event);

}

bool ScintillaEditBase_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* ScintillaEditBase_virtualbase_inputMethodQuery(const void* self, int query) {

	return new QVariant(( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

}

bool ScintillaEditBase_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void ScintillaEditBase_virtualbase_scrollContentsBy(void* self, int param1, int param2) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::scrollContentsBy(static_cast<int>(param1), static_cast<int>(param2));

}

bool ScintillaEditBase_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* ScintillaEditBase_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::minimumSizeHint());

}

bool ScintillaEditBase_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* ScintillaEditBase_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::sizeHint());

}

bool ScintillaEditBase_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void ScintillaEditBase_virtualbase_setupViewport(void* self, QWidget* viewport) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::setupViewport(viewport);

}

bool ScintillaEditBase_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool ScintillaEditBase_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {

	return ( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::eventFilter(param1, param2);

}

bool ScintillaEditBase_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool ScintillaEditBase_virtualbase_viewportEvent(void* self, QEvent* param1) {

	return ( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::viewportEvent(param1);

}

bool ScintillaEditBase_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* ScintillaEditBase_virtualbase_viewportSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::viewportSizeHint());

}

bool ScintillaEditBase_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_changeEvent(void* self, QEvent* param1) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::changeEvent(param1);

}

bool ScintillaEditBase_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int ScintillaEditBase_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::devType();

}

bool ScintillaEditBase_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void ScintillaEditBase_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::setVisible(visible);

}

bool ScintillaEditBase_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int ScintillaEditBase_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::heightForWidth(static_cast<int>(param1));

}

bool ScintillaEditBase_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool ScintillaEditBase_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::hasHeightForWidth();

}

bool ScintillaEditBase_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* ScintillaEditBase_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::paintEngine();

}

bool ScintillaEditBase_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::keyReleaseEvent(event);

}

bool ScintillaEditBase_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_enterEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::enterEvent(event);

}

bool ScintillaEditBase_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::leaveEvent(event);

}

bool ScintillaEditBase_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::moveEvent(event);

}

bool ScintillaEditBase_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::closeEvent(event);

}

bool ScintillaEditBase_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::tabletEvent(event);

}

bool ScintillaEditBase_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::actionEvent(event);

}

bool ScintillaEditBase_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::showEvent(event);

}

bool ScintillaEditBase_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::hideEvent(event);

}

bool ScintillaEditBase_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool ScintillaEditBase_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

}

bool ScintillaEditBase_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int ScintillaEditBase_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::metric(static_cast<MiqtVirtualScintillaEditBase::PaintDeviceMetric>(param1));

}

bool ScintillaEditBase_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void ScintillaEditBase_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::initPainter(painter);

}

bool ScintillaEditBase_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* ScintillaEditBase_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::redirected(offset);

}

bool ScintillaEditBase_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* ScintillaEditBase_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::sharedPainter();

}

bool ScintillaEditBase_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool ScintillaEditBase_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::focusNextPrevChild(next);

}

bool ScintillaEditBase_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::timerEvent(event);

}

bool ScintillaEditBase_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::childEvent(event);

}

bool ScintillaEditBase_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void ScintillaEditBase_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::customEvent(event);

}

bool ScintillaEditBase_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void ScintillaEditBase_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::connectNotify(*signal);

}

bool ScintillaEditBase_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void ScintillaEditBase_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualScintillaEditBase*)(self) )->ScintillaEditBase::disconnectNotify(*signal);

}

void ScintillaEditBase_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* ScintillaEditBase_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void ScintillaEditBase_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void ScintillaEditBase_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void ScintillaEditBase_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void ScintillaEditBase_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void ScintillaEditBase_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool ScintillaEditBase_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool ScintillaEditBase_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* ScintillaEditBase_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int ScintillaEditBase_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int ScintillaEditBase_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool ScintillaEditBase_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualScintillaEditBase* self_cast = dynamic_cast<MiqtVirtualScintillaEditBase*>( (ScintillaEditBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void ScintillaEditBase_delete(ScintillaEditBase* self) {
	delete self;
}

class MiqtVirtualScintillaDocument final : public ScintillaDocument {
public:

	MiqtVirtualScintillaDocument(): ScintillaDocument() {};
	MiqtVirtualScintillaDocument(QObject* parent): ScintillaDocument(parent) {};
	MiqtVirtualScintillaDocument(QObject* parent, void* pdoc_): ScintillaDocument(parent, pdoc_) {};

	virtual ~MiqtVirtualScintillaDocument() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return ScintillaDocument::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaDocument_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaDocument_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return ScintillaDocument::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaDocument_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool ScintillaDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			ScintillaDocument::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_ScintillaDocument_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void ScintillaDocument_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			ScintillaDocument::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_ScintillaDocument_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void ScintillaDocument_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			ScintillaDocument::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaDocument_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void ScintillaDocument_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			ScintillaDocument::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaDocument_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void ScintillaDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			ScintillaDocument::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaDocument_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void ScintillaDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* ScintillaDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int ScintillaDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int ScintillaDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool ScintillaDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

ScintillaDocument* ScintillaDocument_new() {
	return new MiqtVirtualScintillaDocument();
}

ScintillaDocument* ScintillaDocument_new2(QObject* parent) {
	return new MiqtVirtualScintillaDocument(parent);
}

ScintillaDocument* ScintillaDocument_new3(QObject* parent, void* pdoc_) {
	return new MiqtVirtualScintillaDocument(parent, pdoc_);
}

void ScintillaDocument_virtbase(ScintillaDocument* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* ScintillaDocument_metaObject(const ScintillaDocument* self) {
	return (QMetaObject*) self->metaObject();
}

void* ScintillaDocument_metacast(ScintillaDocument* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string ScintillaDocument_tr(const char* s) {
	QString _ret = ScintillaDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_trUtf8(const char* s) {
	QString _ret = ScintillaDocument::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void* ScintillaDocument_pointer(ScintillaDocument* self) {
	return self->pointer();
}

int ScintillaDocument_lineFromPosition(ScintillaDocument* self, int pos) {
	return self->line_from_position(static_cast<int>(pos));
}

bool ScintillaDocument_isCrLf(ScintillaDocument* self, int pos) {
	return self->is_cr_lf(static_cast<int>(pos));
}

bool ScintillaDocument_deleteChars(ScintillaDocument* self, int pos, int len) {
	return self->delete_chars(static_cast<int>(pos), static_cast<int>(len));
}

int ScintillaDocument_undo(ScintillaDocument* self) {
	return self->undo();
}

int ScintillaDocument_redo(ScintillaDocument* self) {
	return self->redo();
}

bool ScintillaDocument_canUndo(ScintillaDocument* self) {
	return self->can_undo();
}

bool ScintillaDocument_canRedo(ScintillaDocument* self) {
	return self->can_redo();
}

void ScintillaDocument_deleteUndoHistory(ScintillaDocument* self) {
	self->delete_undo_history();
}

bool ScintillaDocument_setUndoCollection(ScintillaDocument* self, bool collect_undo) {
	return self->set_undo_collection(collect_undo);
}

bool ScintillaDocument_isCollectingUndo(ScintillaDocument* self) {
	return self->is_collecting_undo();
}

void ScintillaDocument_beginUndoAction(ScintillaDocument* self) {
	self->begin_undo_action();
}

void ScintillaDocument_endUndoAction(ScintillaDocument* self) {
	self->end_undo_action();
}

void ScintillaDocument_setSavePoint(ScintillaDocument* self) {
	self->set_save_point();
}

bool ScintillaDocument_isSavePoint(ScintillaDocument* self) {
	return self->is_save_point();
}

void ScintillaDocument_setReadOnly(ScintillaDocument* self, bool read_only) {
	self->set_read_only(read_only);
}

bool ScintillaDocument_isReadOnly(ScintillaDocument* self) {
	return self->is_read_only();
}

void ScintillaDocument_insertString(ScintillaDocument* self, int position, struct miqt_string str) {
	QByteArray str_QByteArray(str.data, str.len);
	self->insert_string(static_cast<int>(position), str_QByteArray);
}

struct miqt_string ScintillaDocument_getCharRange(ScintillaDocument* self, int position, int length) {
	QByteArray _qb = self->get_char_range(static_cast<int>(position), static_cast<int>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

char ScintillaDocument_styleAt(ScintillaDocument* self, int position) {
	return self->style_at(static_cast<int>(position));
}

int ScintillaDocument_lineStart(ScintillaDocument* self, int lineno) {
	return self->line_start(static_cast<int>(lineno));
}

int ScintillaDocument_lineEnd(ScintillaDocument* self, int lineno) {
	return self->line_end(static_cast<int>(lineno));
}

int ScintillaDocument_lineEndPosition(ScintillaDocument* self, int pos) {
	return self->line_end_position(static_cast<int>(pos));
}

int ScintillaDocument_length(ScintillaDocument* self) {
	return self->length();
}

int ScintillaDocument_linesTotal(ScintillaDocument* self) {
	return self->lines_total();
}

void ScintillaDocument_startStyling(ScintillaDocument* self, int position) {
	self->start_styling(static_cast<int>(position));
}

bool ScintillaDocument_setStyleFor(ScintillaDocument* self, int length, char style) {
	return self->set_style_for(static_cast<int>(length), static_cast<char>(style));
}

int ScintillaDocument_getEndStyled(ScintillaDocument* self) {
	return self->get_end_styled();
}

void ScintillaDocument_ensureStyledTo(ScintillaDocument* self, int position) {
	self->ensure_styled_to(static_cast<int>(position));
}

void ScintillaDocument_setCurrentIndicator(ScintillaDocument* self, int indic) {
	self->set_current_indicator(static_cast<int>(indic));
}

void ScintillaDocument_decorationFillRange(ScintillaDocument* self, int position, int value, int fillLength) {
	self->decoration_fill_range(static_cast<int>(position), static_cast<int>(value), static_cast<int>(fillLength));
}

int ScintillaDocument_decorationsValueAt(ScintillaDocument* self, int indic, int position) {
	return self->decorations_value_at(static_cast<int>(indic), static_cast<int>(position));
}

int ScintillaDocument_decorationsStart(ScintillaDocument* self, int indic, int position) {
	return self->decorations_start(static_cast<int>(indic), static_cast<int>(position));
}

int ScintillaDocument_decorationsEnd(ScintillaDocument* self, int indic, int position) {
	return self->decorations_end(static_cast<int>(indic), static_cast<int>(position));
}

int ScintillaDocument_getCodePage(ScintillaDocument* self) {
	return self->get_code_page();
}

void ScintillaDocument_setCodePage(ScintillaDocument* self, int code_page) {
	self->set_code_page(static_cast<int>(code_page));
}

int ScintillaDocument_getEolMode(ScintillaDocument* self) {
	return self->get_eol_mode();
}

void ScintillaDocument_setEolMode(ScintillaDocument* self, int eol_mode) {
	self->set_eol_mode(static_cast<int>(eol_mode));
}

int ScintillaDocument_movePositionOutsideChar(ScintillaDocument* self, int pos, int move_dir, bool check_line_end) {
	return self->move_position_outside_char(static_cast<int>(pos), static_cast<int>(move_dir), check_line_end);
}

int ScintillaDocument_getCharacter(ScintillaDocument* self, int pos) {
	return self->get_character(static_cast<int>(pos));
}

void ScintillaDocument_modifyAttempt(ScintillaDocument* self) {
	self->modify_attempt();
}

void ScintillaDocument_connect_modifyAttempt(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)()>(&ScintillaDocument::modify_attempt), self, [=]() {
		miqt_exec_callback_ScintillaDocument_modifyAttempt(slot);
	});
}

void ScintillaDocument_savePoint(ScintillaDocument* self, bool atSavePoint) {
	self->save_point(atSavePoint);
}

void ScintillaDocument_connect_savePoint(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(bool)>(&ScintillaDocument::save_point), self, [=](bool atSavePoint) {
		bool sigval1 = atSavePoint;
		miqt_exec_callback_ScintillaDocument_savePoint(slot, sigval1);
	});
}

void ScintillaDocument_modified(ScintillaDocument* self, int position, int modification_type, struct miqt_string text, int length, int linesAdded, int line, int foldLevelNow, int foldLevelPrev) {
	QByteArray text_QByteArray(text.data, text.len);
	self->modified(static_cast<int>(position), static_cast<int>(modification_type), text_QByteArray, static_cast<int>(length), static_cast<int>(linesAdded), static_cast<int>(line), static_cast<int>(foldLevelNow), static_cast<int>(foldLevelPrev));
}

void ScintillaDocument_connect_modified(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(int, int, const QByteArray&, int, int, int, int, int)>(&ScintillaDocument::modified), self, [=](int position, int modification_type, const QByteArray& text, int length, int linesAdded, int line, int foldLevelNow, int foldLevelPrev) {
		int sigval1 = position;
		int sigval2 = modification_type;
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		int sigval4 = length;
		int sigval5 = linesAdded;
		int sigval6 = line;
		int sigval7 = foldLevelNow;
		int sigval8 = foldLevelPrev;
		miqt_exec_callback_ScintillaDocument_modified(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);
	});
}

void ScintillaDocument_styleNeeded(ScintillaDocument* self, int pos) {
	self->style_needed(static_cast<int>(pos));
}

void ScintillaDocument_connect_styleNeeded(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(int)>(&ScintillaDocument::style_needed), self, [=](int pos) {
		int sigval1 = pos;
		miqt_exec_callback_ScintillaDocument_styleNeeded(slot, sigval1);
	});
}

void ScintillaDocument_errorOccurred(ScintillaDocument* self, int status) {
	self->error_occurred(static_cast<int>(status));
}

void ScintillaDocument_connect_errorOccurred(ScintillaDocument* self, intptr_t slot) {
	MiqtVirtualScintillaDocument::connect(self, static_cast<void (ScintillaDocument::*)(int)>(&ScintillaDocument::error_occurred), self, [=](int status) {
		int sigval1 = status;
		miqt_exec_callback_ScintillaDocument_errorOccurred(slot, sigval1);
	});
}

struct miqt_string ScintillaDocument_tr2(const char* s, const char* c) {
	QString _ret = ScintillaDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_tr3(const char* s, const char* c, int n) {
	QString _ret = ScintillaDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_trUtf82(const char* s, const char* c) {
	QString _ret = ScintillaDocument::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaDocument_trUtf83(const char* s, const char* c, int n) {
	QString _ret = ScintillaDocument::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void ScintillaDocument_beginUndoAction1(ScintillaDocument* self, bool coalesceWithPrior) {
	self->begin_undo_action(coalesceWithPrior);
}

bool ScintillaDocument_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool ScintillaDocument_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::event(event);

}

bool ScintillaDocument_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool ScintillaDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::eventFilter(watched, event);

}

bool ScintillaDocument_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void ScintillaDocument_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::timerEvent(event);

}

bool ScintillaDocument_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void ScintillaDocument_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::childEvent(event);

}

bool ScintillaDocument_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void ScintillaDocument_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::customEvent(event);

}

bool ScintillaDocument_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void ScintillaDocument_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::connectNotify(*signal);

}

bool ScintillaDocument_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void ScintillaDocument_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualScintillaDocument*)(self) )->ScintillaDocument::disconnectNotify(*signal);

}

QObject* ScintillaDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int ScintillaDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int ScintillaDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool ScintillaDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualScintillaDocument* self_cast = dynamic_cast<MiqtVirtualScintillaDocument*>( (ScintillaDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void ScintillaDocument_delete(ScintillaDocument* self) {
	delete self;
}

class MiqtVirtualScintillaEdit final : public ScintillaEdit {
public:

	MiqtVirtualScintillaEdit(QWidget* parent): ScintillaEdit(parent) {};
	MiqtVirtualScintillaEdit(): ScintillaEdit() {};

	virtual ~MiqtVirtualScintillaEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__send = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t send(unsigned int iMessage, uptr_t wParam, sptr_t lParam) const override {
		if (handle__send == 0) {
			return ScintillaEdit::send(iMessage, wParam, lParam);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		sptr_t lParam_ret = lParam;
		intptr_t sigval3 = static_cast<intptr_t>(lParam_ret);

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEdit_send(this, handle__send, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	friend intptr_t ScintillaEdit_virtualbase_send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sends = 0;

	// Subclass to allow providing a Go implementation
	virtual sptr_t sends(unsigned int iMessage, uptr_t wParam, const char* s) const override {
		if (handle__sends == 0) {
			return ScintillaEdit::sends(iMessage, wParam, s);
		}
		
		unsigned int sigval1 = iMessage;
		uptr_t wParam_ret = wParam;
		uintptr_t sigval2 = static_cast<uintptr_t>(wParam_ret);
		const char* sigval3 = (const char*) s;

		intptr_t callback_return_value = miqt_exec_callback_ScintillaEdit_sends(this, handle__sends, sigval1, sigval2, sigval3);

		return static_cast<sptr_t>(callback_return_value);
	}

	friend intptr_t ScintillaEdit_virtualbase_sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return ScintillaEdit::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaEdit_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			ScintillaEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			ScintillaEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			ScintillaEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			ScintillaEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			ScintillaEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			ScintillaEdit::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			ScintillaEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			ScintillaEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			ScintillaEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			ScintillaEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			ScintillaEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			ScintillaEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			ScintillaEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			ScintillaEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			ScintillaEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			ScintillaEdit::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return ScintillaEdit::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_ScintillaEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* ScintillaEdit_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int param1, int param2) override {
		if (handle__scrollContentsBy == 0) {
			ScintillaEdit::scrollContentsBy(param1, param2);
			return;
		}
		
		int sigval1 = param1;
		int sigval2 = param2;

		miqt_exec_callback_ScintillaEdit_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	friend void ScintillaEdit_virtualbase_scrollContentsBy(void* self, int param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return ScintillaEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* ScintillaEdit_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return ScintillaEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* ScintillaEdit_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			ScintillaEdit::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_ScintillaEdit_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return ScintillaEdit::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool ScintillaEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return ScintillaEdit::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaEdit_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return ScintillaEdit::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_ScintillaEdit_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	friend QSize* ScintillaEdit_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			ScintillaEdit::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_ScintillaEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return ScintillaEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_ScintillaEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int ScintillaEdit_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			ScintillaEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_ScintillaEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return ScintillaEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_ScintillaEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int ScintillaEdit_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return ScintillaEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool ScintillaEdit_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return ScintillaEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_ScintillaEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* ScintillaEdit_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			ScintillaEdit::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			ScintillaEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			ScintillaEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			ScintillaEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			ScintillaEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			ScintillaEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			ScintillaEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			ScintillaEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			ScintillaEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return ScintillaEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool ScintillaEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return ScintillaEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_ScintillaEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int ScintillaEdit_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			ScintillaEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_ScintillaEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return ScintillaEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_ScintillaEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* ScintillaEdit_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return ScintillaEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_ScintillaEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* ScintillaEdit_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return ScintillaEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_ScintillaEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool ScintillaEdit_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			ScintillaEdit::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			ScintillaEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			ScintillaEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_ScintillaEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			ScintillaEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			ScintillaEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_ScintillaEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void ScintillaEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void ScintillaEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* ScintillaEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void ScintillaEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void ScintillaEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void ScintillaEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void ScintillaEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void ScintillaEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool ScintillaEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool ScintillaEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* ScintillaEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int ScintillaEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int ScintillaEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool ScintillaEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

ScintillaEdit* ScintillaEdit_new(QWidget* parent) {
	return new MiqtVirtualScintillaEdit(parent);
}

ScintillaEdit* ScintillaEdit_new2() {
	return new MiqtVirtualScintillaEdit();
}

void ScintillaEdit_virtbase(ScintillaEdit* src, ScintillaEditBase** outptr_ScintillaEditBase) {
	*outptr_ScintillaEditBase = static_cast<ScintillaEditBase*>(src);
}

QMetaObject* ScintillaEdit_metaObject(const ScintillaEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* ScintillaEdit_metacast(ScintillaEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string ScintillaEdit_tr(const char* s) {
	QString _ret = ScintillaEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_trUtf8(const char* s) {
	QString _ret = ScintillaEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_TextReturner(const ScintillaEdit* self, int message, uintptr_t wParam) {
	QByteArray _qb = self->TextReturner(static_cast<int>(message), static_cast<uptr_t>(wParam));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_map /* tuple of int and int */  ScintillaEdit_findText(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax) {
	QPair<int, int> _ret = self->find_text(static_cast<int>(flags), text, static_cast<int>(cpMin), static_cast<int>(cpMax));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

struct miqt_string ScintillaEdit_getTextRange(ScintillaEdit* self, int start, int end) {
	QByteArray _qb = self->get_text_range(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

ScintillaDocument* ScintillaEdit_getDoc(ScintillaEdit* self) {
	return self->get_doc();
}

void ScintillaEdit_setDoc(ScintillaEdit* self, ScintillaDocument* pdoc_) {
	self->set_doc(pdoc_);
}

struct miqt_map /* tuple of int and int */  ScintillaEdit_findText2(ScintillaEdit* self, int flags, const char* text, int cpMin, int cpMax) {
	QPair<int, int> _ret = self->findText(static_cast<int>(flags), text, static_cast<int>(cpMin), static_cast<int>(cpMax));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

struct miqt_string ScintillaEdit_textRange(ScintillaEdit* self, int start, int end) {
	QByteArray _qb = self->textRange(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long ScintillaEdit_formatRange(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end) {
	return self->format_range(draw, target, measure, *print_rect, *page_rect, static_cast<long>(range_start), static_cast<long>(range_end));
}

long ScintillaEdit_formatRange2(ScintillaEdit* self, bool draw, QPaintDevice* target, QPaintDevice* measure, QRect* print_rect, QRect* page_rect, long range_start, long range_end) {
	return self->formatRange(draw, target, measure, *print_rect, *page_rect, static_cast<long>(range_start), static_cast<long>(range_end));
}

void ScintillaEdit_addText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->addText(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_addStyledText(ScintillaEdit* self, intptr_t length, const char* c) {
	self->addStyledText(static_cast<sptr_t>(length), c);
}

void ScintillaEdit_insertText(ScintillaEdit* self, intptr_t pos, const char* text) {
	self->insertText(static_cast<sptr_t>(pos), text);
}

void ScintillaEdit_changeInsertion(ScintillaEdit* self, intptr_t length, const char* text) {
	self->changeInsertion(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_clearAll(ScintillaEdit* self) {
	self->clearAll();
}

void ScintillaEdit_deleteRange(ScintillaEdit* self, intptr_t start, intptr_t lengthDelete) {
	self->deleteRange(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthDelete));
}

void ScintillaEdit_clearDocumentStyle(ScintillaEdit* self) {
	self->clearDocumentStyle();
}

intptr_t ScintillaEdit_length(const ScintillaEdit* self) {
	sptr_t _ret = self->length();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_charAt(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->charAt(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_currentPos(const ScintillaEdit* self) {
	sptr_t _ret = self->currentPos();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_anchor(const ScintillaEdit* self) {
	sptr_t _ret = self->anchor();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_styleAt(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->styleAt(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_styleIndexAt(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->styleIndexAt(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_redo(ScintillaEdit* self) {
	self->redo();
}

void ScintillaEdit_setUndoCollection(ScintillaEdit* self, bool collectUndo) {
	self->setUndoCollection(collectUndo);
}

void ScintillaEdit_selectAll(ScintillaEdit* self) {
	self->selectAll();
}

void ScintillaEdit_setSavePoint(ScintillaEdit* self) {
	self->setSavePoint();
}

bool ScintillaEdit_canRedo(ScintillaEdit* self) {
	return self->canRedo();
}

intptr_t ScintillaEdit_markerLineFromHandle(ScintillaEdit* self, intptr_t markerHandle) {
	sptr_t _ret = self->markerLineFromHandle(static_cast<sptr_t>(markerHandle));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_markerDeleteHandle(ScintillaEdit* self, intptr_t markerHandle) {
	self->markerDeleteHandle(static_cast<sptr_t>(markerHandle));
}

intptr_t ScintillaEdit_markerHandleFromLine(ScintillaEdit* self, intptr_t line, intptr_t which) {
	sptr_t _ret = self->markerHandleFromLine(static_cast<sptr_t>(line), static_cast<sptr_t>(which));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_markerNumberFromLine(ScintillaEdit* self, intptr_t line, intptr_t which) {
	sptr_t _ret = self->markerNumberFromLine(static_cast<sptr_t>(line), static_cast<sptr_t>(which));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_undoCollection(const ScintillaEdit* self) {
	return self->undoCollection();
}

intptr_t ScintillaEdit_viewWS(const ScintillaEdit* self) {
	sptr_t _ret = self->viewWS();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setViewWS(ScintillaEdit* self, intptr_t viewWS) {
	self->setViewWS(static_cast<sptr_t>(viewWS));
}

intptr_t ScintillaEdit_tabDrawMode(const ScintillaEdit* self) {
	sptr_t _ret = self->tabDrawMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTabDrawMode(ScintillaEdit* self, intptr_t tabDrawMode) {
	self->setTabDrawMode(static_cast<sptr_t>(tabDrawMode));
}

intptr_t ScintillaEdit_positionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->positionFromPoint(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_positionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->positionFromPointClose(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_gotoLine(ScintillaEdit* self, intptr_t line) {
	self->gotoLine(static_cast<sptr_t>(line));
}

void ScintillaEdit_gotoPos(ScintillaEdit* self, intptr_t caret) {
	self->gotoPos(static_cast<sptr_t>(caret));
}

void ScintillaEdit_setAnchor(ScintillaEdit* self, intptr_t anchor) {
	self->setAnchor(static_cast<sptr_t>(anchor));
}

struct miqt_string ScintillaEdit_getCurLine(ScintillaEdit* self, intptr_t length) {
	QByteArray _qb = self->getCurLine(static_cast<sptr_t>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_endStyled(const ScintillaEdit* self) {
	sptr_t _ret = self->endStyled();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_convertEOLs(ScintillaEdit* self, intptr_t eolMode) {
	self->convertEOLs(static_cast<sptr_t>(eolMode));
}

intptr_t ScintillaEdit_eOLMode(const ScintillaEdit* self) {
	sptr_t _ret = self->eOLMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setEOLMode(ScintillaEdit* self, intptr_t eolMode) {
	self->setEOLMode(static_cast<sptr_t>(eolMode));
}

void ScintillaEdit_startStyling(ScintillaEdit* self, intptr_t start, intptr_t unused) {
	self->startStyling(static_cast<sptr_t>(start), static_cast<sptr_t>(unused));
}

void ScintillaEdit_setStyling(ScintillaEdit* self, intptr_t length, intptr_t style) {
	self->setStyling(static_cast<sptr_t>(length), static_cast<sptr_t>(style));
}

bool ScintillaEdit_bufferedDraw(const ScintillaEdit* self) {
	return self->bufferedDraw();
}

void ScintillaEdit_setBufferedDraw(ScintillaEdit* self, bool buffered) {
	self->setBufferedDraw(buffered);
}

void ScintillaEdit_setTabWidth(ScintillaEdit* self, intptr_t tabWidth) {
	self->setTabWidth(static_cast<sptr_t>(tabWidth));
}

intptr_t ScintillaEdit_tabWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->tabWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTabMinimumWidth(ScintillaEdit* self, intptr_t pixels) {
	self->setTabMinimumWidth(static_cast<sptr_t>(pixels));
}

intptr_t ScintillaEdit_tabMinimumWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->tabMinimumWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_clearTabStops(ScintillaEdit* self, intptr_t line) {
	self->clearTabStops(static_cast<sptr_t>(line));
}

void ScintillaEdit_addTabStop(ScintillaEdit* self, intptr_t line, intptr_t x) {
	self->addTabStop(static_cast<sptr_t>(line), static_cast<sptr_t>(x));
}

intptr_t ScintillaEdit_getNextTabStop(ScintillaEdit* self, intptr_t line, intptr_t x) {
	sptr_t _ret = self->getNextTabStop(static_cast<sptr_t>(line), static_cast<sptr_t>(x));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCodePage(ScintillaEdit* self, intptr_t codePage) {
	self->setCodePage(static_cast<sptr_t>(codePage));
}

void ScintillaEdit_setFontLocale(ScintillaEdit* self, const char* localeName) {
	self->setFontLocale(localeName);
}

struct miqt_string ScintillaEdit_fontLocale(const ScintillaEdit* self) {
	QByteArray _qb = self->fontLocale();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_iMEInteraction(const ScintillaEdit* self) {
	sptr_t _ret = self->iMEInteraction();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setIMEInteraction(ScintillaEdit* self, intptr_t imeInteraction) {
	self->setIMEInteraction(static_cast<sptr_t>(imeInteraction));
}

void ScintillaEdit_markerDefine(ScintillaEdit* self, intptr_t markerNumber, intptr_t markerSymbol) {
	self->markerDefine(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(markerSymbol));
}

void ScintillaEdit_markerSetFore(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore) {
	self->markerSetFore(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(fore));
}

void ScintillaEdit_markerSetBack(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBack(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_markerSetBackSelected(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBackSelected(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_markerSetForeTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t fore) {
	self->markerSetForeTranslucent(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(fore));
}

void ScintillaEdit_markerSetBackTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBackTranslucent(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_markerSetBackSelectedTranslucent(ScintillaEdit* self, intptr_t markerNumber, intptr_t back) {
	self->markerSetBackSelectedTranslucent(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(back));
}

void ScintillaEdit_markerSetStrokeWidth(ScintillaEdit* self, intptr_t markerNumber, intptr_t hundredths) {
	self->markerSetStrokeWidth(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(hundredths));
}

void ScintillaEdit_markerEnableHighlight(ScintillaEdit* self, bool enabled) {
	self->markerEnableHighlight(enabled);
}

intptr_t ScintillaEdit_markerAdd(ScintillaEdit* self, intptr_t line, intptr_t markerNumber) {
	sptr_t _ret = self->markerAdd(static_cast<sptr_t>(line), static_cast<sptr_t>(markerNumber));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_markerDelete(ScintillaEdit* self, intptr_t line, intptr_t markerNumber) {
	self->markerDelete(static_cast<sptr_t>(line), static_cast<sptr_t>(markerNumber));
}

void ScintillaEdit_markerDeleteAll(ScintillaEdit* self, intptr_t markerNumber) {
	self->markerDeleteAll(static_cast<sptr_t>(markerNumber));
}

intptr_t ScintillaEdit_markerGet(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->markerGet(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_markerNext(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask) {
	sptr_t _ret = self->markerNext(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(markerMask));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_markerPrevious(ScintillaEdit* self, intptr_t lineStart, intptr_t markerMask) {
	sptr_t _ret = self->markerPrevious(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(markerMask));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_markerDefinePixmap(ScintillaEdit* self, intptr_t markerNumber, const char* pixmap) {
	self->markerDefinePixmap(static_cast<sptr_t>(markerNumber), pixmap);
}

void ScintillaEdit_markerAddSet(ScintillaEdit* self, intptr_t line, intptr_t markerSet) {
	self->markerAddSet(static_cast<sptr_t>(line), static_cast<sptr_t>(markerSet));
}

void ScintillaEdit_markerSetAlpha(ScintillaEdit* self, intptr_t markerNumber, intptr_t alpha) {
	self->markerSetAlpha(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_markerLayer(const ScintillaEdit* self, intptr_t markerNumber) {
	sptr_t _ret = self->markerLayer(static_cast<sptr_t>(markerNumber));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_markerSetLayer(ScintillaEdit* self, intptr_t markerNumber, intptr_t layer) {
	self->markerSetLayer(static_cast<sptr_t>(markerNumber), static_cast<sptr_t>(layer));
}

void ScintillaEdit_setMarginTypeN(ScintillaEdit* self, intptr_t margin, intptr_t marginType) {
	self->setMarginTypeN(static_cast<sptr_t>(margin), static_cast<sptr_t>(marginType));
}

intptr_t ScintillaEdit_marginTypeN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginTypeN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMarginWidthN(ScintillaEdit* self, intptr_t margin, intptr_t pixelWidth) {
	self->setMarginWidthN(static_cast<sptr_t>(margin), static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_marginWidthN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginWidthN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMarginMaskN(ScintillaEdit* self, intptr_t margin, intptr_t mask) {
	self->setMarginMaskN(static_cast<sptr_t>(margin), static_cast<sptr_t>(mask));
}

intptr_t ScintillaEdit_marginMaskN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginMaskN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMarginSensitiveN(ScintillaEdit* self, intptr_t margin, bool sensitive) {
	self->setMarginSensitiveN(static_cast<sptr_t>(margin), sensitive);
}

bool ScintillaEdit_marginSensitiveN(const ScintillaEdit* self, intptr_t margin) {
	return self->marginSensitiveN(static_cast<sptr_t>(margin));
}

void ScintillaEdit_setMarginCursorN(ScintillaEdit* self, intptr_t margin, intptr_t cursor) {
	self->setMarginCursorN(static_cast<sptr_t>(margin), static_cast<sptr_t>(cursor));
}

intptr_t ScintillaEdit_marginCursorN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginCursorN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMarginBackN(ScintillaEdit* self, intptr_t margin, intptr_t back) {
	self->setMarginBackN(static_cast<sptr_t>(margin), static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_marginBackN(const ScintillaEdit* self, intptr_t margin) {
	sptr_t _ret = self->marginBackN(static_cast<sptr_t>(margin));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMargins(ScintillaEdit* self, intptr_t margins) {
	self->setMargins(static_cast<sptr_t>(margins));
}

intptr_t ScintillaEdit_margins(const ScintillaEdit* self) {
	sptr_t _ret = self->margins();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_styleClearAll(ScintillaEdit* self) {
	self->styleClearAll();
}

void ScintillaEdit_styleSetFore(ScintillaEdit* self, intptr_t style, intptr_t fore) {
	self->styleSetFore(static_cast<sptr_t>(style), static_cast<sptr_t>(fore));
}

void ScintillaEdit_styleSetBack(ScintillaEdit* self, intptr_t style, intptr_t back) {
	self->styleSetBack(static_cast<sptr_t>(style), static_cast<sptr_t>(back));
}

void ScintillaEdit_styleSetBold(ScintillaEdit* self, intptr_t style, bool bold) {
	self->styleSetBold(static_cast<sptr_t>(style), bold);
}

void ScintillaEdit_styleSetItalic(ScintillaEdit* self, intptr_t style, bool italic) {
	self->styleSetItalic(static_cast<sptr_t>(style), italic);
}

void ScintillaEdit_styleSetSize(ScintillaEdit* self, intptr_t style, intptr_t sizePoints) {
	self->styleSetSize(static_cast<sptr_t>(style), static_cast<sptr_t>(sizePoints));
}

void ScintillaEdit_styleSetFont(ScintillaEdit* self, intptr_t style, const char* fontName) {
	self->styleSetFont(static_cast<sptr_t>(style), fontName);
}

void ScintillaEdit_styleSetEOLFilled(ScintillaEdit* self, intptr_t style, bool eolFilled) {
	self->styleSetEOLFilled(static_cast<sptr_t>(style), eolFilled);
}

void ScintillaEdit_styleResetDefault(ScintillaEdit* self) {
	self->styleResetDefault();
}

void ScintillaEdit_styleSetUnderline(ScintillaEdit* self, intptr_t style, bool underline) {
	self->styleSetUnderline(static_cast<sptr_t>(style), underline);
}

intptr_t ScintillaEdit_styleFore(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleFore(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_styleBack(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleBack(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_styleBold(const ScintillaEdit* self, intptr_t style) {
	return self->styleBold(static_cast<sptr_t>(style));
}

bool ScintillaEdit_styleItalic(const ScintillaEdit* self, intptr_t style) {
	return self->styleItalic(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_styleSize(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleSize(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_styleFont(const ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->styleFont(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool ScintillaEdit_styleEOLFilled(const ScintillaEdit* self, intptr_t style) {
	return self->styleEOLFilled(static_cast<sptr_t>(style));
}

bool ScintillaEdit_styleUnderline(const ScintillaEdit* self, intptr_t style) {
	return self->styleUnderline(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_styleCase(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleCase(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_styleCharacterSet(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleCharacterSet(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_styleVisible(const ScintillaEdit* self, intptr_t style) {
	return self->styleVisible(static_cast<sptr_t>(style));
}

bool ScintillaEdit_styleChangeable(const ScintillaEdit* self, intptr_t style) {
	return self->styleChangeable(static_cast<sptr_t>(style));
}

bool ScintillaEdit_styleHotSpot(const ScintillaEdit* self, intptr_t style) {
	return self->styleHotSpot(static_cast<sptr_t>(style));
}

void ScintillaEdit_styleSetCase(ScintillaEdit* self, intptr_t style, intptr_t caseVisible) {
	self->styleSetCase(static_cast<sptr_t>(style), static_cast<sptr_t>(caseVisible));
}

void ScintillaEdit_styleSetSizeFractional(ScintillaEdit* self, intptr_t style, intptr_t sizeHundredthPoints) {
	self->styleSetSizeFractional(static_cast<sptr_t>(style), static_cast<sptr_t>(sizeHundredthPoints));
}

intptr_t ScintillaEdit_styleSizeFractional(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleSizeFractional(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_styleSetWeight(ScintillaEdit* self, intptr_t style, intptr_t weight) {
	self->styleSetWeight(static_cast<sptr_t>(style), static_cast<sptr_t>(weight));
}

intptr_t ScintillaEdit_styleWeight(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleWeight(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_styleSetCharacterSet(ScintillaEdit* self, intptr_t style, intptr_t characterSet) {
	self->styleSetCharacterSet(static_cast<sptr_t>(style), static_cast<sptr_t>(characterSet));
}

void ScintillaEdit_styleSetHotSpot(ScintillaEdit* self, intptr_t style, bool hotspot) {
	self->styleSetHotSpot(static_cast<sptr_t>(style), hotspot);
}

void ScintillaEdit_styleSetCheckMonospaced(ScintillaEdit* self, intptr_t style, bool checkMonospaced) {
	self->styleSetCheckMonospaced(static_cast<sptr_t>(style), checkMonospaced);
}

bool ScintillaEdit_styleCheckMonospaced(const ScintillaEdit* self, intptr_t style) {
	return self->styleCheckMonospaced(static_cast<sptr_t>(style));
}

void ScintillaEdit_styleSetStretch(ScintillaEdit* self, intptr_t style, intptr_t stretch) {
	self->styleSetStretch(static_cast<sptr_t>(style), static_cast<sptr_t>(stretch));
}

intptr_t ScintillaEdit_styleStretch(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->styleStretch(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_styleSetInvisibleRepresentation(ScintillaEdit* self, intptr_t style, const char* representation) {
	self->styleSetInvisibleRepresentation(static_cast<sptr_t>(style), representation);
}

struct miqt_string ScintillaEdit_styleInvisibleRepresentation(const ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->styleInvisibleRepresentation(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_setElementColour(ScintillaEdit* self, intptr_t element, intptr_t colourElement) {
	self->setElementColour(static_cast<sptr_t>(element), static_cast<sptr_t>(colourElement));
}

intptr_t ScintillaEdit_elementColour(const ScintillaEdit* self, intptr_t element) {
	sptr_t _ret = self->elementColour(static_cast<sptr_t>(element));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_resetElementColour(ScintillaEdit* self, intptr_t element) {
	self->resetElementColour(static_cast<sptr_t>(element));
}

bool ScintillaEdit_elementIsSet(const ScintillaEdit* self, intptr_t element) {
	return self->elementIsSet(static_cast<sptr_t>(element));
}

bool ScintillaEdit_elementAllowsTranslucent(const ScintillaEdit* self, intptr_t element) {
	return self->elementAllowsTranslucent(static_cast<sptr_t>(element));
}

intptr_t ScintillaEdit_elementBaseColour(const ScintillaEdit* self, intptr_t element) {
	sptr_t _ret = self->elementBaseColour(static_cast<sptr_t>(element));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelFore(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setSelFore(useSetting, static_cast<sptr_t>(fore));
}

void ScintillaEdit_setSelBack(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setSelBack(useSetting, static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_selAlpha(const ScintillaEdit* self) {
	sptr_t _ret = self->selAlpha();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelAlpha(ScintillaEdit* self, intptr_t alpha) {
	self->setSelAlpha(static_cast<sptr_t>(alpha));
}

bool ScintillaEdit_selEOLFilled(const ScintillaEdit* self) {
	return self->selEOLFilled();
}

void ScintillaEdit_setSelEOLFilled(ScintillaEdit* self, bool filled) {
	self->setSelEOLFilled(filled);
}

intptr_t ScintillaEdit_selectionLayer(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionLayer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionLayer(ScintillaEdit* self, intptr_t layer) {
	self->setSelectionLayer(static_cast<sptr_t>(layer));
}

intptr_t ScintillaEdit_caretLineLayer(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineLayer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCaretLineLayer(ScintillaEdit* self, intptr_t layer) {
	self->setCaretLineLayer(static_cast<sptr_t>(layer));
}

bool ScintillaEdit_caretLineHighlightSubLine(const ScintillaEdit* self) {
	return self->caretLineHighlightSubLine();
}

void ScintillaEdit_setCaretLineHighlightSubLine(ScintillaEdit* self, bool subLine) {
	self->setCaretLineHighlightSubLine(subLine);
}

void ScintillaEdit_setCaretFore(ScintillaEdit* self, intptr_t fore) {
	self->setCaretFore(static_cast<sptr_t>(fore));
}

void ScintillaEdit_assignCmdKey(ScintillaEdit* self, intptr_t keyDefinition, intptr_t sciCommand) {
	self->assignCmdKey(static_cast<sptr_t>(keyDefinition), static_cast<sptr_t>(sciCommand));
}

void ScintillaEdit_clearCmdKey(ScintillaEdit* self, intptr_t keyDefinition) {
	self->clearCmdKey(static_cast<sptr_t>(keyDefinition));
}

void ScintillaEdit_clearAllCmdKeys(ScintillaEdit* self) {
	self->clearAllCmdKeys();
}

void ScintillaEdit_setStylingEx(ScintillaEdit* self, intptr_t length, const char* styles) {
	self->setStylingEx(static_cast<sptr_t>(length), styles);
}

void ScintillaEdit_styleSetVisible(ScintillaEdit* self, intptr_t style, bool visible) {
	self->styleSetVisible(static_cast<sptr_t>(style), visible);
}

intptr_t ScintillaEdit_caretPeriod(const ScintillaEdit* self) {
	sptr_t _ret = self->caretPeriod();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCaretPeriod(ScintillaEdit* self, intptr_t periodMilliseconds) {
	self->setCaretPeriod(static_cast<sptr_t>(periodMilliseconds));
}

void ScintillaEdit_setWordChars(ScintillaEdit* self, const char* characters) {
	self->setWordChars(characters);
}

struct miqt_string ScintillaEdit_wordChars(const ScintillaEdit* self) {
	QByteArray _qb = self->wordChars();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_setCharacterCategoryOptimization(ScintillaEdit* self, intptr_t countCharacters) {
	self->setCharacterCategoryOptimization(static_cast<sptr_t>(countCharacters));
}

intptr_t ScintillaEdit_characterCategoryOptimization(const ScintillaEdit* self) {
	sptr_t _ret = self->characterCategoryOptimization();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_beginUndoAction(ScintillaEdit* self) {
	self->beginUndoAction();
}

void ScintillaEdit_endUndoAction(ScintillaEdit* self) {
	self->endUndoAction();
}

intptr_t ScintillaEdit_undoSequence(const ScintillaEdit* self) {
	sptr_t _ret = self->undoSequence();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_undoActions(const ScintillaEdit* self) {
	sptr_t _ret = self->undoActions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setUndoSavePoint(ScintillaEdit* self, intptr_t action) {
	self->setUndoSavePoint(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_undoSavePoint(const ScintillaEdit* self) {
	sptr_t _ret = self->undoSavePoint();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setUndoDetach(ScintillaEdit* self, intptr_t action) {
	self->setUndoDetach(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_undoDetach(const ScintillaEdit* self) {
	sptr_t _ret = self->undoDetach();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setUndoTentative(ScintillaEdit* self, intptr_t action) {
	self->setUndoTentative(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_undoTentative(const ScintillaEdit* self) {
	sptr_t _ret = self->undoTentative();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setUndoCurrent(ScintillaEdit* self, intptr_t action) {
	self->setUndoCurrent(static_cast<sptr_t>(action));
}

intptr_t ScintillaEdit_undoCurrent(const ScintillaEdit* self) {
	sptr_t _ret = self->undoCurrent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_pushUndoActionType(ScintillaEdit* self, intptr_t type, intptr_t pos) {
	self->pushUndoActionType(static_cast<sptr_t>(type), static_cast<sptr_t>(pos));
}

void ScintillaEdit_changeLastUndoActionText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->changeLastUndoActionText(static_cast<sptr_t>(length), text);
}

intptr_t ScintillaEdit_undoActionType(const ScintillaEdit* self, intptr_t action) {
	sptr_t _ret = self->undoActionType(static_cast<sptr_t>(action));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_undoActionPosition(const ScintillaEdit* self, intptr_t action) {
	sptr_t _ret = self->undoActionPosition(static_cast<sptr_t>(action));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_undoActionText(const ScintillaEdit* self, intptr_t action) {
	QByteArray _qb = self->undoActionText(static_cast<sptr_t>(action));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_indicSetStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle) {
	self->indicSetStyle(static_cast<sptr_t>(indicator), static_cast<sptr_t>(indicatorStyle));
}

intptr_t ScintillaEdit_indicStyle(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicStyle(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore) {
	self->indicSetFore(static_cast<sptr_t>(indicator), static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_indicFore(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicFore(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetUnder(ScintillaEdit* self, intptr_t indicator, bool under) {
	self->indicSetUnder(static_cast<sptr_t>(indicator), under);
}

bool ScintillaEdit_indicUnder(const ScintillaEdit* self, intptr_t indicator) {
	return self->indicUnder(static_cast<sptr_t>(indicator));
}

void ScintillaEdit_indicSetHoverStyle(ScintillaEdit* self, intptr_t indicator, intptr_t indicatorStyle) {
	self->indicSetHoverStyle(static_cast<sptr_t>(indicator), static_cast<sptr_t>(indicatorStyle));
}

intptr_t ScintillaEdit_indicHoverStyle(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicHoverStyle(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetHoverFore(ScintillaEdit* self, intptr_t indicator, intptr_t fore) {
	self->indicSetHoverFore(static_cast<sptr_t>(indicator), static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_indicHoverFore(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicHoverFore(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetFlags(ScintillaEdit* self, intptr_t indicator, intptr_t flags) {
	self->indicSetFlags(static_cast<sptr_t>(indicator), static_cast<sptr_t>(flags));
}

intptr_t ScintillaEdit_indicFlags(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicFlags(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetStrokeWidth(ScintillaEdit* self, intptr_t indicator, intptr_t hundredths) {
	self->indicSetStrokeWidth(static_cast<sptr_t>(indicator), static_cast<sptr_t>(hundredths));
}

intptr_t ScintillaEdit_indicStrokeWidth(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicStrokeWidth(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setWhitespaceFore(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setWhitespaceFore(useSetting, static_cast<sptr_t>(fore));
}

void ScintillaEdit_setWhitespaceBack(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setWhitespaceBack(useSetting, static_cast<sptr_t>(back));
}

void ScintillaEdit_setWhitespaceSize(ScintillaEdit* self, intptr_t size) {
	self->setWhitespaceSize(static_cast<sptr_t>(size));
}

intptr_t ScintillaEdit_whitespaceSize(const ScintillaEdit* self) {
	sptr_t _ret = self->whitespaceSize();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setLineState(ScintillaEdit* self, intptr_t line, intptr_t state) {
	self->setLineState(static_cast<sptr_t>(line), static_cast<sptr_t>(state));
}

intptr_t ScintillaEdit_lineState(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineState(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_maxLineState(const ScintillaEdit* self) {
	sptr_t _ret = self->maxLineState();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_caretLineVisible(const ScintillaEdit* self) {
	return self->caretLineVisible();
}

void ScintillaEdit_setCaretLineVisible(ScintillaEdit* self, bool show) {
	self->setCaretLineVisible(show);
}

intptr_t ScintillaEdit_caretLineBack(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineBack();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCaretLineBack(ScintillaEdit* self, intptr_t back) {
	self->setCaretLineBack(static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_caretLineFrame(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineFrame();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCaretLineFrame(ScintillaEdit* self, intptr_t width) {
	self->setCaretLineFrame(static_cast<sptr_t>(width));
}

void ScintillaEdit_styleSetChangeable(ScintillaEdit* self, intptr_t style, bool changeable) {
	self->styleSetChangeable(static_cast<sptr_t>(style), changeable);
}

void ScintillaEdit_autoCShow(ScintillaEdit* self, intptr_t lengthEntered, const char* itemList) {
	self->autoCShow(static_cast<sptr_t>(lengthEntered), itemList);
}

void ScintillaEdit_autoCCancel(ScintillaEdit* self) {
	self->autoCCancel();
}

bool ScintillaEdit_autoCActive(ScintillaEdit* self) {
	return self->autoCActive();
}

intptr_t ScintillaEdit_autoCPosStart(ScintillaEdit* self) {
	sptr_t _ret = self->autoCPosStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCComplete(ScintillaEdit* self) {
	self->autoCComplete();
}

void ScintillaEdit_autoCStops(ScintillaEdit* self, const char* characterSet) {
	self->autoCStops(characterSet);
}

void ScintillaEdit_autoCSetSeparator(ScintillaEdit* self, intptr_t separatorCharacter) {
	self->autoCSetSeparator(static_cast<sptr_t>(separatorCharacter));
}

intptr_t ScintillaEdit_autoCSeparator(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCSeparator();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSelect(ScintillaEdit* self, const char* select) {
	self->autoCSelect(select);
}

void ScintillaEdit_autoCSetCancelAtStart(ScintillaEdit* self, bool cancel) {
	self->autoCSetCancelAtStart(cancel);
}

bool ScintillaEdit_autoCCancelAtStart(const ScintillaEdit* self) {
	return self->autoCCancelAtStart();
}

void ScintillaEdit_autoCSetFillUps(ScintillaEdit* self, const char* characterSet) {
	self->autoCSetFillUps(characterSet);
}

void ScintillaEdit_autoCSetChooseSingle(ScintillaEdit* self, bool chooseSingle) {
	self->autoCSetChooseSingle(chooseSingle);
}

bool ScintillaEdit_autoCChooseSingle(const ScintillaEdit* self) {
	return self->autoCChooseSingle();
}

void ScintillaEdit_autoCSetIgnoreCase(ScintillaEdit* self, bool ignoreCase) {
	self->autoCSetIgnoreCase(ignoreCase);
}

bool ScintillaEdit_autoCIgnoreCase(const ScintillaEdit* self) {
	return self->autoCIgnoreCase();
}

void ScintillaEdit_userListShow(ScintillaEdit* self, intptr_t listType, const char* itemList) {
	self->userListShow(static_cast<sptr_t>(listType), itemList);
}

void ScintillaEdit_autoCSetAutoHide(ScintillaEdit* self, bool autoHide) {
	self->autoCSetAutoHide(autoHide);
}

bool ScintillaEdit_autoCAutoHide(const ScintillaEdit* self) {
	return self->autoCAutoHide();
}

void ScintillaEdit_autoCSetOptions(ScintillaEdit* self, intptr_t options) {
	self->autoCSetOptions(static_cast<sptr_t>(options));
}

intptr_t ScintillaEdit_autoCOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCOptions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSetDropRestOfWord(ScintillaEdit* self, bool dropRestOfWord) {
	self->autoCSetDropRestOfWord(dropRestOfWord);
}

bool ScintillaEdit_autoCDropRestOfWord(const ScintillaEdit* self) {
	return self->autoCDropRestOfWord();
}

void ScintillaEdit_registerImage(ScintillaEdit* self, intptr_t type, const char* xpmData) {
	self->registerImage(static_cast<sptr_t>(type), xpmData);
}

void ScintillaEdit_clearRegisteredImages(ScintillaEdit* self) {
	self->clearRegisteredImages();
}

intptr_t ScintillaEdit_autoCTypeSeparator(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCTypeSeparator();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSetTypeSeparator(ScintillaEdit* self, intptr_t separatorCharacter) {
	self->autoCSetTypeSeparator(static_cast<sptr_t>(separatorCharacter));
}

void ScintillaEdit_autoCSetMaxWidth(ScintillaEdit* self, intptr_t characterCount) {
	self->autoCSetMaxWidth(static_cast<sptr_t>(characterCount));
}

intptr_t ScintillaEdit_autoCMaxWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCMaxWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSetMaxHeight(ScintillaEdit* self, intptr_t rowCount) {
	self->autoCSetMaxHeight(static_cast<sptr_t>(rowCount));
}

intptr_t ScintillaEdit_autoCMaxHeight(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCMaxHeight();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSetStyle(ScintillaEdit* self, intptr_t style) {
	self->autoCSetStyle(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_autoCStyle(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCStyle();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setIndent(ScintillaEdit* self, intptr_t indentSize) {
	self->setIndent(static_cast<sptr_t>(indentSize));
}

intptr_t ScintillaEdit_indent(const ScintillaEdit* self) {
	sptr_t _ret = self->indent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setUseTabs(ScintillaEdit* self, bool useTabs) {
	self->setUseTabs(useTabs);
}

bool ScintillaEdit_useTabs(const ScintillaEdit* self) {
	return self->useTabs();
}

void ScintillaEdit_setLineIndentation(ScintillaEdit* self, intptr_t line, intptr_t indentation) {
	self->setLineIndentation(static_cast<sptr_t>(line), static_cast<sptr_t>(indentation));
}

intptr_t ScintillaEdit_lineIndentation(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineIndentation(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_lineIndentPosition(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineIndentPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_column(const ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->column(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_countCharacters(ScintillaEdit* self, intptr_t start, intptr_t end) {
	sptr_t _ret = self->countCharacters(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_countCodeUnits(ScintillaEdit* self, intptr_t start, intptr_t end) {
	sptr_t _ret = self->countCodeUnits(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setHScrollBar(ScintillaEdit* self, bool visible) {
	self->setHScrollBar(visible);
}

bool ScintillaEdit_hScrollBar(const ScintillaEdit* self) {
	return self->hScrollBar();
}

void ScintillaEdit_setIndentationGuides(ScintillaEdit* self, intptr_t indentView) {
	self->setIndentationGuides(static_cast<sptr_t>(indentView));
}

intptr_t ScintillaEdit_indentationGuides(const ScintillaEdit* self) {
	sptr_t _ret = self->indentationGuides();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setHighlightGuide(ScintillaEdit* self, intptr_t column) {
	self->setHighlightGuide(static_cast<sptr_t>(column));
}

intptr_t ScintillaEdit_highlightGuide(const ScintillaEdit* self) {
	sptr_t _ret = self->highlightGuide();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_lineEndPosition(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineEndPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_codePage(const ScintillaEdit* self) {
	sptr_t _ret = self->codePage();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_caretFore(const ScintillaEdit* self) {
	sptr_t _ret = self->caretFore();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_readOnly(const ScintillaEdit* self) {
	return self->readOnly();
}

void ScintillaEdit_setCurrentPos(ScintillaEdit* self, intptr_t caret) {
	self->setCurrentPos(static_cast<sptr_t>(caret));
}

void ScintillaEdit_setSelectionStart(ScintillaEdit* self, intptr_t anchor) {
	self->setSelectionStart(static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_selectionStart(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionEnd(ScintillaEdit* self, intptr_t caret) {
	self->setSelectionEnd(static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_selectionEnd(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionEnd();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setEmptySelection(ScintillaEdit* self, intptr_t caret) {
	self->setEmptySelection(static_cast<sptr_t>(caret));
}

void ScintillaEdit_setPrintMagnification(ScintillaEdit* self, intptr_t magnification) {
	self->setPrintMagnification(static_cast<sptr_t>(magnification));
}

intptr_t ScintillaEdit_printMagnification(const ScintillaEdit* self) {
	sptr_t _ret = self->printMagnification();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setPrintColourMode(ScintillaEdit* self, intptr_t mode) {
	self->setPrintColourMode(static_cast<sptr_t>(mode));
}

intptr_t ScintillaEdit_printColourMode(const ScintillaEdit* self) {
	sptr_t _ret = self->printColourMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setChangeHistory(ScintillaEdit* self, intptr_t changeHistory) {
	self->setChangeHistory(static_cast<sptr_t>(changeHistory));
}

intptr_t ScintillaEdit_changeHistory(const ScintillaEdit* self) {
	sptr_t _ret = self->changeHistory();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_firstVisibleLine(const ScintillaEdit* self) {
	sptr_t _ret = self->firstVisibleLine();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_getLine(ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->getLine(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_lineCount(const ScintillaEdit* self) {
	sptr_t _ret = self->lineCount();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_allocateLines(ScintillaEdit* self, intptr_t lines) {
	self->allocateLines(static_cast<sptr_t>(lines));
}

void ScintillaEdit_setMarginLeft(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setMarginLeft(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_marginLeft(const ScintillaEdit* self) {
	sptr_t _ret = self->marginLeft();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMarginRight(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setMarginRight(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_marginRight(const ScintillaEdit* self) {
	sptr_t _ret = self->marginRight();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_modify(const ScintillaEdit* self) {
	return self->modify();
}

void ScintillaEdit_setSel(ScintillaEdit* self, intptr_t anchor, intptr_t caret) {
	self->setSel(static_cast<sptr_t>(anchor), static_cast<sptr_t>(caret));
}

struct miqt_string ScintillaEdit_getSelText(ScintillaEdit* self) {
	QByteArray _qb = self->getSelText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_hideSelection(ScintillaEdit* self, bool hide) {
	self->hideSelection(hide);
}

bool ScintillaEdit_selectionHidden(const ScintillaEdit* self) {
	return self->selectionHidden();
}

intptr_t ScintillaEdit_pointXFromPosition(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->pointXFromPosition(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_pointYFromPosition(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->pointYFromPosition(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_lineFromPosition(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->lineFromPosition(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_positionFromLine(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->positionFromLine(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_lineScroll(ScintillaEdit* self, intptr_t columns, intptr_t lines) {
	self->lineScroll(static_cast<sptr_t>(columns), static_cast<sptr_t>(lines));
}

void ScintillaEdit_scrollCaret(ScintillaEdit* self) {
	self->scrollCaret();
}

void ScintillaEdit_scrollRange(ScintillaEdit* self, intptr_t secondary, intptr_t primary) {
	self->scrollRange(static_cast<sptr_t>(secondary), static_cast<sptr_t>(primary));
}

void ScintillaEdit_replaceSel(ScintillaEdit* self, const char* text) {
	self->replaceSel(text);
}

void ScintillaEdit_setReadOnly(ScintillaEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

void ScintillaEdit_null(ScintillaEdit* self) {
	self->null();
}

bool ScintillaEdit_canPaste(ScintillaEdit* self) {
	return self->canPaste();
}

bool ScintillaEdit_canUndo(ScintillaEdit* self) {
	return self->canUndo();
}

void ScintillaEdit_emptyUndoBuffer(ScintillaEdit* self) {
	self->emptyUndoBuffer();
}

void ScintillaEdit_undo(ScintillaEdit* self) {
	self->undo();
}

void ScintillaEdit_cut(ScintillaEdit* self) {
	self->cut();
}

void ScintillaEdit_copy(ScintillaEdit* self) {
	self->copy();
}

void ScintillaEdit_paste(ScintillaEdit* self) {
	self->paste();
}

void ScintillaEdit_clear(ScintillaEdit* self) {
	self->clear();
}

void ScintillaEdit_setText(ScintillaEdit* self, const char* text) {
	self->setText(text);
}

struct miqt_string ScintillaEdit_getText(ScintillaEdit* self, intptr_t length) {
	QByteArray _qb = self->getText(static_cast<sptr_t>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_textLength(const ScintillaEdit* self) {
	sptr_t _ret = self->textLength();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_directFunction(const ScintillaEdit* self) {
	sptr_t _ret = self->directFunction();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_directStatusFunction(const ScintillaEdit* self) {
	sptr_t _ret = self->directStatusFunction();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_directPointer(const ScintillaEdit* self) {
	sptr_t _ret = self->directPointer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setOvertype(ScintillaEdit* self, bool overType) {
	self->setOvertype(overType);
}

bool ScintillaEdit_overtype(const ScintillaEdit* self) {
	return self->overtype();
}

void ScintillaEdit_setCaretWidth(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setCaretWidth(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_caretWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->caretWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTargetStart(ScintillaEdit* self, intptr_t start) {
	self->setTargetStart(static_cast<sptr_t>(start));
}

intptr_t ScintillaEdit_targetStart(const ScintillaEdit* self) {
	sptr_t _ret = self->targetStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTargetStartVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setTargetStartVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_targetStartVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->targetStartVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTargetEnd(ScintillaEdit* self, intptr_t end) {
	self->setTargetEnd(static_cast<sptr_t>(end));
}

intptr_t ScintillaEdit_targetEnd(const ScintillaEdit* self) {
	sptr_t _ret = self->targetEnd();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTargetEndVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setTargetEndVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_targetEndVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->targetEndVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setTargetRange(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->setTargetRange(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

struct miqt_string ScintillaEdit_targetText(const ScintillaEdit* self) {
	QByteArray _qb = self->targetText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_targetFromSelection(ScintillaEdit* self) {
	self->targetFromSelection();
}

void ScintillaEdit_targetWholeDocument(ScintillaEdit* self) {
	self->targetWholeDocument();
}

intptr_t ScintillaEdit_replaceTarget(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->replaceTarget(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_replaceTargetRE(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->replaceTargetRE(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_replaceTargetMinimal(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->replaceTargetMinimal(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_searchInTarget(ScintillaEdit* self, intptr_t length, const char* text) {
	sptr_t _ret = self->searchInTarget(static_cast<sptr_t>(length), text);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSearchFlags(ScintillaEdit* self, intptr_t searchFlags) {
	self->setSearchFlags(static_cast<sptr_t>(searchFlags));
}

intptr_t ScintillaEdit_searchFlags(const ScintillaEdit* self) {
	sptr_t _ret = self->searchFlags();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_callTipShow(ScintillaEdit* self, intptr_t pos, const char* definition) {
	self->callTipShow(static_cast<sptr_t>(pos), definition);
}

void ScintillaEdit_callTipCancel(ScintillaEdit* self) {
	self->callTipCancel();
}

bool ScintillaEdit_callTipActive(ScintillaEdit* self) {
	return self->callTipActive();
}

intptr_t ScintillaEdit_callTipPosStart(ScintillaEdit* self) {
	sptr_t _ret = self->callTipPosStart();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_callTipSetPosStart(ScintillaEdit* self, intptr_t posStart) {
	self->callTipSetPosStart(static_cast<sptr_t>(posStart));
}

void ScintillaEdit_callTipSetHlt(ScintillaEdit* self, intptr_t highlightStart, intptr_t highlightEnd) {
	self->callTipSetHlt(static_cast<sptr_t>(highlightStart), static_cast<sptr_t>(highlightEnd));
}

void ScintillaEdit_callTipSetBack(ScintillaEdit* self, intptr_t back) {
	self->callTipSetBack(static_cast<sptr_t>(back));
}

void ScintillaEdit_callTipSetFore(ScintillaEdit* self, intptr_t fore) {
	self->callTipSetFore(static_cast<sptr_t>(fore));
}

void ScintillaEdit_callTipSetForeHlt(ScintillaEdit* self, intptr_t fore) {
	self->callTipSetForeHlt(static_cast<sptr_t>(fore));
}

void ScintillaEdit_callTipUseStyle(ScintillaEdit* self, intptr_t tabSize) {
	self->callTipUseStyle(static_cast<sptr_t>(tabSize));
}

void ScintillaEdit_callTipSetPosition(ScintillaEdit* self, bool above) {
	self->callTipSetPosition(above);
}

intptr_t ScintillaEdit_visibleFromDocLine(ScintillaEdit* self, intptr_t docLine) {
	sptr_t _ret = self->visibleFromDocLine(static_cast<sptr_t>(docLine));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_docLineFromVisible(ScintillaEdit* self, intptr_t displayLine) {
	sptr_t _ret = self->docLineFromVisible(static_cast<sptr_t>(displayLine));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_wrapCount(ScintillaEdit* self, intptr_t docLine) {
	sptr_t _ret = self->wrapCount(static_cast<sptr_t>(docLine));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setFoldLevel(ScintillaEdit* self, intptr_t line, intptr_t level) {
	self->setFoldLevel(static_cast<sptr_t>(line), static_cast<sptr_t>(level));
}

intptr_t ScintillaEdit_foldLevel(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->foldLevel(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_lastChild(const ScintillaEdit* self, intptr_t line, intptr_t level) {
	sptr_t _ret = self->lastChild(static_cast<sptr_t>(line), static_cast<sptr_t>(level));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_foldParent(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->foldParent(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_showLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd) {
	self->showLines(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(lineEnd));
}

void ScintillaEdit_hideLines(ScintillaEdit* self, intptr_t lineStart, intptr_t lineEnd) {
	self->hideLines(static_cast<sptr_t>(lineStart), static_cast<sptr_t>(lineEnd));
}

bool ScintillaEdit_lineVisible(const ScintillaEdit* self, intptr_t line) {
	return self->lineVisible(static_cast<sptr_t>(line));
}

bool ScintillaEdit_allLinesVisible(const ScintillaEdit* self) {
	return self->allLinesVisible();
}

void ScintillaEdit_setFoldExpanded(ScintillaEdit* self, intptr_t line, bool expanded) {
	self->setFoldExpanded(static_cast<sptr_t>(line), expanded);
}

bool ScintillaEdit_foldExpanded(const ScintillaEdit* self, intptr_t line) {
	return self->foldExpanded(static_cast<sptr_t>(line));
}

void ScintillaEdit_toggleFold(ScintillaEdit* self, intptr_t line) {
	self->toggleFold(static_cast<sptr_t>(line));
}

void ScintillaEdit_toggleFoldShowText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->toggleFoldShowText(static_cast<sptr_t>(line), text);
}

void ScintillaEdit_foldDisplayTextSetStyle(ScintillaEdit* self, intptr_t style) {
	self->foldDisplayTextSetStyle(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_foldDisplayTextStyle(const ScintillaEdit* self) {
	sptr_t _ret = self->foldDisplayTextStyle();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setDefaultFoldDisplayText(ScintillaEdit* self, const char* text) {
	self->setDefaultFoldDisplayText(text);
}

struct miqt_string ScintillaEdit_getDefaultFoldDisplayText(ScintillaEdit* self) {
	QByteArray _qb = self->getDefaultFoldDisplayText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_foldLine(ScintillaEdit* self, intptr_t line, intptr_t action) {
	self->foldLine(static_cast<sptr_t>(line), static_cast<sptr_t>(action));
}

void ScintillaEdit_foldChildren(ScintillaEdit* self, intptr_t line, intptr_t action) {
	self->foldChildren(static_cast<sptr_t>(line), static_cast<sptr_t>(action));
}

void ScintillaEdit_expandChildren(ScintillaEdit* self, intptr_t line, intptr_t level) {
	self->expandChildren(static_cast<sptr_t>(line), static_cast<sptr_t>(level));
}

void ScintillaEdit_foldAll(ScintillaEdit* self, intptr_t action) {
	self->foldAll(static_cast<sptr_t>(action));
}

void ScintillaEdit_ensureVisible(ScintillaEdit* self, intptr_t line) {
	self->ensureVisible(static_cast<sptr_t>(line));
}

void ScintillaEdit_setAutomaticFold(ScintillaEdit* self, intptr_t automaticFold) {
	self->setAutomaticFold(static_cast<sptr_t>(automaticFold));
}

intptr_t ScintillaEdit_automaticFold(const ScintillaEdit* self) {
	sptr_t _ret = self->automaticFold();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setFoldFlags(ScintillaEdit* self, intptr_t flags) {
	self->setFoldFlags(static_cast<sptr_t>(flags));
}

void ScintillaEdit_ensureVisibleEnforcePolicy(ScintillaEdit* self, intptr_t line) {
	self->ensureVisibleEnforcePolicy(static_cast<sptr_t>(line));
}

void ScintillaEdit_setTabIndents(ScintillaEdit* self, bool tabIndents) {
	self->setTabIndents(tabIndents);
}

bool ScintillaEdit_tabIndents(const ScintillaEdit* self) {
	return self->tabIndents();
}

void ScintillaEdit_setBackSpaceUnIndents(ScintillaEdit* self, bool bsUnIndents) {
	self->setBackSpaceUnIndents(bsUnIndents);
}

bool ScintillaEdit_backSpaceUnIndents(const ScintillaEdit* self) {
	return self->backSpaceUnIndents();
}

void ScintillaEdit_setMouseDwellTime(ScintillaEdit* self, intptr_t periodMilliseconds) {
	self->setMouseDwellTime(static_cast<sptr_t>(periodMilliseconds));
}

intptr_t ScintillaEdit_mouseDwellTime(const ScintillaEdit* self) {
	sptr_t _ret = self->mouseDwellTime();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_wordStartPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters) {
	sptr_t _ret = self->wordStartPosition(static_cast<sptr_t>(pos), onlyWordCharacters);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_wordEndPosition(ScintillaEdit* self, intptr_t pos, bool onlyWordCharacters) {
	sptr_t _ret = self->wordEndPosition(static_cast<sptr_t>(pos), onlyWordCharacters);
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_isRangeWord(ScintillaEdit* self, intptr_t start, intptr_t end) {
	return self->isRangeWord(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_setIdleStyling(ScintillaEdit* self, intptr_t idleStyling) {
	self->setIdleStyling(static_cast<sptr_t>(idleStyling));
}

intptr_t ScintillaEdit_idleStyling(const ScintillaEdit* self) {
	sptr_t _ret = self->idleStyling();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setWrapMode(ScintillaEdit* self, intptr_t wrapMode) {
	self->setWrapMode(static_cast<sptr_t>(wrapMode));
}

intptr_t ScintillaEdit_wrapMode(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setWrapVisualFlags(ScintillaEdit* self, intptr_t wrapVisualFlags) {
	self->setWrapVisualFlags(static_cast<sptr_t>(wrapVisualFlags));
}

intptr_t ScintillaEdit_wrapVisualFlags(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapVisualFlags();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setWrapVisualFlagsLocation(ScintillaEdit* self, intptr_t wrapVisualFlagsLocation) {
	self->setWrapVisualFlagsLocation(static_cast<sptr_t>(wrapVisualFlagsLocation));
}

intptr_t ScintillaEdit_wrapVisualFlagsLocation(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapVisualFlagsLocation();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setWrapStartIndent(ScintillaEdit* self, intptr_t indent) {
	self->setWrapStartIndent(static_cast<sptr_t>(indent));
}

intptr_t ScintillaEdit_wrapStartIndent(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapStartIndent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setWrapIndentMode(ScintillaEdit* self, intptr_t wrapIndentMode) {
	self->setWrapIndentMode(static_cast<sptr_t>(wrapIndentMode));
}

intptr_t ScintillaEdit_wrapIndentMode(const ScintillaEdit* self) {
	sptr_t _ret = self->wrapIndentMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setLayoutCache(ScintillaEdit* self, intptr_t cacheMode) {
	self->setLayoutCache(static_cast<sptr_t>(cacheMode));
}

intptr_t ScintillaEdit_layoutCache(const ScintillaEdit* self) {
	sptr_t _ret = self->layoutCache();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setScrollWidth(ScintillaEdit* self, intptr_t pixelWidth) {
	self->setScrollWidth(static_cast<sptr_t>(pixelWidth));
}

intptr_t ScintillaEdit_scrollWidth(const ScintillaEdit* self) {
	sptr_t _ret = self->scrollWidth();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setScrollWidthTracking(ScintillaEdit* self, bool tracking) {
	self->setScrollWidthTracking(tracking);
}

bool ScintillaEdit_scrollWidthTracking(const ScintillaEdit* self) {
	return self->scrollWidthTracking();
}

intptr_t ScintillaEdit_textWidth(ScintillaEdit* self, intptr_t style, const char* text) {
	sptr_t _ret = self->textWidth(static_cast<sptr_t>(style), text);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setEndAtLastLine(ScintillaEdit* self, bool endAtLastLine) {
	self->setEndAtLastLine(endAtLastLine);
}

bool ScintillaEdit_endAtLastLine(const ScintillaEdit* self) {
	return self->endAtLastLine();
}

intptr_t ScintillaEdit_textHeight(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->textHeight(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setVScrollBar(ScintillaEdit* self, bool visible) {
	self->setVScrollBar(visible);
}

bool ScintillaEdit_vScrollBar(const ScintillaEdit* self) {
	return self->vScrollBar();
}

void ScintillaEdit_appendText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->appendText(static_cast<sptr_t>(length), text);
}

intptr_t ScintillaEdit_phasesDraw(const ScintillaEdit* self) {
	sptr_t _ret = self->phasesDraw();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setPhasesDraw(ScintillaEdit* self, intptr_t phases) {
	self->setPhasesDraw(static_cast<sptr_t>(phases));
}

void ScintillaEdit_setFontQuality(ScintillaEdit* self, intptr_t fontQuality) {
	self->setFontQuality(static_cast<sptr_t>(fontQuality));
}

intptr_t ScintillaEdit_fontQuality(const ScintillaEdit* self) {
	sptr_t _ret = self->fontQuality();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setFirstVisibleLine(ScintillaEdit* self, intptr_t displayLine) {
	self->setFirstVisibleLine(static_cast<sptr_t>(displayLine));
}

void ScintillaEdit_setMultiPaste(ScintillaEdit* self, intptr_t multiPaste) {
	self->setMultiPaste(static_cast<sptr_t>(multiPaste));
}

intptr_t ScintillaEdit_multiPaste(const ScintillaEdit* self) {
	sptr_t _ret = self->multiPaste();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_tag(const ScintillaEdit* self, intptr_t tagNumber) {
	QByteArray _qb = self->tag(static_cast<sptr_t>(tagNumber));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_linesJoin(ScintillaEdit* self) {
	self->linesJoin();
}

void ScintillaEdit_linesSplit(ScintillaEdit* self, intptr_t pixelWidth) {
	self->linesSplit(static_cast<sptr_t>(pixelWidth));
}

void ScintillaEdit_setFoldMarginColour(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setFoldMarginColour(useSetting, static_cast<sptr_t>(back));
}

void ScintillaEdit_setFoldMarginHiColour(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setFoldMarginHiColour(useSetting, static_cast<sptr_t>(fore));
}

void ScintillaEdit_setAccessibility(ScintillaEdit* self, intptr_t accessibility) {
	self->setAccessibility(static_cast<sptr_t>(accessibility));
}

intptr_t ScintillaEdit_accessibility(const ScintillaEdit* self) {
	sptr_t _ret = self->accessibility();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_lineDown(ScintillaEdit* self) {
	self->lineDown();
}

void ScintillaEdit_lineDownExtend(ScintillaEdit* self) {
	self->lineDownExtend();
}

void ScintillaEdit_lineUp(ScintillaEdit* self) {
	self->lineUp();
}

void ScintillaEdit_lineUpExtend(ScintillaEdit* self) {
	self->lineUpExtend();
}

void ScintillaEdit_charLeft(ScintillaEdit* self) {
	self->charLeft();
}

void ScintillaEdit_charLeftExtend(ScintillaEdit* self) {
	self->charLeftExtend();
}

void ScintillaEdit_charRight(ScintillaEdit* self) {
	self->charRight();
}

void ScintillaEdit_charRightExtend(ScintillaEdit* self) {
	self->charRightExtend();
}

void ScintillaEdit_wordLeft(ScintillaEdit* self) {
	self->wordLeft();
}

void ScintillaEdit_wordLeftExtend(ScintillaEdit* self) {
	self->wordLeftExtend();
}

void ScintillaEdit_wordRight(ScintillaEdit* self) {
	self->wordRight();
}

void ScintillaEdit_wordRightExtend(ScintillaEdit* self) {
	self->wordRightExtend();
}

void ScintillaEdit_home(ScintillaEdit* self) {
	self->home();
}

void ScintillaEdit_homeExtend(ScintillaEdit* self) {
	self->homeExtend();
}

void ScintillaEdit_lineEnd(ScintillaEdit* self) {
	self->lineEnd();
}

void ScintillaEdit_lineEndExtend(ScintillaEdit* self) {
	self->lineEndExtend();
}

void ScintillaEdit_documentStart(ScintillaEdit* self) {
	self->documentStart();
}

void ScintillaEdit_documentStartExtend(ScintillaEdit* self) {
	self->documentStartExtend();
}

void ScintillaEdit_documentEnd(ScintillaEdit* self) {
	self->documentEnd();
}

void ScintillaEdit_documentEndExtend(ScintillaEdit* self) {
	self->documentEndExtend();
}

void ScintillaEdit_pageUp(ScintillaEdit* self) {
	self->pageUp();
}

void ScintillaEdit_pageUpExtend(ScintillaEdit* self) {
	self->pageUpExtend();
}

void ScintillaEdit_pageDown(ScintillaEdit* self) {
	self->pageDown();
}

void ScintillaEdit_pageDownExtend(ScintillaEdit* self) {
	self->pageDownExtend();
}

void ScintillaEdit_editToggleOvertype(ScintillaEdit* self) {
	self->editToggleOvertype();
}

void ScintillaEdit_cancel(ScintillaEdit* self) {
	self->cancel();
}

void ScintillaEdit_deleteBack(ScintillaEdit* self) {
	self->deleteBack();
}

void ScintillaEdit_tab(ScintillaEdit* self) {
	self->tab();
}

void ScintillaEdit_lineIndent(ScintillaEdit* self) {
	self->lineIndent();
}

void ScintillaEdit_backTab(ScintillaEdit* self) {
	self->backTab();
}

void ScintillaEdit_lineDedent(ScintillaEdit* self) {
	self->lineDedent();
}

void ScintillaEdit_newLine(ScintillaEdit* self) {
	self->newLine();
}

void ScintillaEdit_formFeed(ScintillaEdit* self) {
	self->formFeed();
}

void ScintillaEdit_vCHome(ScintillaEdit* self) {
	self->vCHome();
}

void ScintillaEdit_vCHomeExtend(ScintillaEdit* self) {
	self->vCHomeExtend();
}

void ScintillaEdit_zoomIn(ScintillaEdit* self) {
	self->zoomIn();
}

void ScintillaEdit_zoomOut(ScintillaEdit* self) {
	self->zoomOut();
}

void ScintillaEdit_delWordLeft(ScintillaEdit* self) {
	self->delWordLeft();
}

void ScintillaEdit_delWordRight(ScintillaEdit* self) {
	self->delWordRight();
}

void ScintillaEdit_delWordRightEnd(ScintillaEdit* self) {
	self->delWordRightEnd();
}

void ScintillaEdit_lineCut(ScintillaEdit* self) {
	self->lineCut();
}

void ScintillaEdit_lineDelete(ScintillaEdit* self) {
	self->lineDelete();
}

void ScintillaEdit_lineTranspose(ScintillaEdit* self) {
	self->lineTranspose();
}

void ScintillaEdit_lineReverse(ScintillaEdit* self) {
	self->lineReverse();
}

void ScintillaEdit_lineDuplicate(ScintillaEdit* self) {
	self->lineDuplicate();
}

void ScintillaEdit_lowerCase(ScintillaEdit* self) {
	self->lowerCase();
}

void ScintillaEdit_upperCase(ScintillaEdit* self) {
	self->upperCase();
}

void ScintillaEdit_lineScrollDown(ScintillaEdit* self) {
	self->lineScrollDown();
}

void ScintillaEdit_lineScrollUp(ScintillaEdit* self) {
	self->lineScrollUp();
}

void ScintillaEdit_deleteBackNotLine(ScintillaEdit* self) {
	self->deleteBackNotLine();
}

void ScintillaEdit_homeDisplay(ScintillaEdit* self) {
	self->homeDisplay();
}

void ScintillaEdit_homeDisplayExtend(ScintillaEdit* self) {
	self->homeDisplayExtend();
}

void ScintillaEdit_lineEndDisplay(ScintillaEdit* self) {
	self->lineEndDisplay();
}

void ScintillaEdit_lineEndDisplayExtend(ScintillaEdit* self) {
	self->lineEndDisplayExtend();
}

void ScintillaEdit_homeWrap(ScintillaEdit* self) {
	self->homeWrap();
}

void ScintillaEdit_homeWrapExtend(ScintillaEdit* self) {
	self->homeWrapExtend();
}

void ScintillaEdit_lineEndWrap(ScintillaEdit* self) {
	self->lineEndWrap();
}

void ScintillaEdit_lineEndWrapExtend(ScintillaEdit* self) {
	self->lineEndWrapExtend();
}

void ScintillaEdit_vCHomeWrap(ScintillaEdit* self) {
	self->vCHomeWrap();
}

void ScintillaEdit_vCHomeWrapExtend(ScintillaEdit* self) {
	self->vCHomeWrapExtend();
}

void ScintillaEdit_lineCopy(ScintillaEdit* self) {
	self->lineCopy();
}

void ScintillaEdit_moveCaretInsideView(ScintillaEdit* self) {
	self->moveCaretInsideView();
}

intptr_t ScintillaEdit_lineLength(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->lineLength(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_braceHighlight(ScintillaEdit* self, intptr_t posA, intptr_t posB) {
	self->braceHighlight(static_cast<sptr_t>(posA), static_cast<sptr_t>(posB));
}

void ScintillaEdit_braceHighlightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator) {
	self->braceHighlightIndicator(useSetting, static_cast<sptr_t>(indicator));
}

void ScintillaEdit_braceBadLight(ScintillaEdit* self, intptr_t pos) {
	self->braceBadLight(static_cast<sptr_t>(pos));
}

void ScintillaEdit_braceBadLightIndicator(ScintillaEdit* self, bool useSetting, intptr_t indicator) {
	self->braceBadLightIndicator(useSetting, static_cast<sptr_t>(indicator));
}

intptr_t ScintillaEdit_braceMatch(ScintillaEdit* self, intptr_t pos, intptr_t maxReStyle) {
	sptr_t _ret = self->braceMatch(static_cast<sptr_t>(pos), static_cast<sptr_t>(maxReStyle));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_braceMatchNext(ScintillaEdit* self, intptr_t pos, intptr_t startPos) {
	sptr_t _ret = self->braceMatchNext(static_cast<sptr_t>(pos), static_cast<sptr_t>(startPos));
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_viewEOL(const ScintillaEdit* self) {
	return self->viewEOL();
}

void ScintillaEdit_setViewEOL(ScintillaEdit* self, bool visible) {
	self->setViewEOL(visible);
}

intptr_t ScintillaEdit_docPointer(const ScintillaEdit* self) {
	sptr_t _ret = self->docPointer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setDocPointer(ScintillaEdit* self, intptr_t doc) {
	self->setDocPointer(static_cast<sptr_t>(doc));
}

void ScintillaEdit_setModEventMask(ScintillaEdit* self, intptr_t eventMask) {
	self->setModEventMask(static_cast<sptr_t>(eventMask));
}

intptr_t ScintillaEdit_edgeColumn(const ScintillaEdit* self) {
	sptr_t _ret = self->edgeColumn();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setEdgeColumn(ScintillaEdit* self, intptr_t column) {
	self->setEdgeColumn(static_cast<sptr_t>(column));
}

intptr_t ScintillaEdit_edgeMode(const ScintillaEdit* self) {
	sptr_t _ret = self->edgeMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setEdgeMode(ScintillaEdit* self, intptr_t edgeMode) {
	self->setEdgeMode(static_cast<sptr_t>(edgeMode));
}

intptr_t ScintillaEdit_edgeColour(const ScintillaEdit* self) {
	sptr_t _ret = self->edgeColour();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setEdgeColour(ScintillaEdit* self, intptr_t edgeColour) {
	self->setEdgeColour(static_cast<sptr_t>(edgeColour));
}

void ScintillaEdit_multiEdgeAddLine(ScintillaEdit* self, intptr_t column, intptr_t edgeColour) {
	self->multiEdgeAddLine(static_cast<sptr_t>(column), static_cast<sptr_t>(edgeColour));
}

void ScintillaEdit_multiEdgeClearAll(ScintillaEdit* self) {
	self->multiEdgeClearAll();
}

intptr_t ScintillaEdit_multiEdgeColumn(const ScintillaEdit* self, intptr_t which) {
	sptr_t _ret = self->multiEdgeColumn(static_cast<sptr_t>(which));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_searchAnchor(ScintillaEdit* self) {
	self->searchAnchor();
}

intptr_t ScintillaEdit_searchNext(ScintillaEdit* self, intptr_t searchFlags, const char* text) {
	sptr_t _ret = self->searchNext(static_cast<sptr_t>(searchFlags), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_searchPrev(ScintillaEdit* self, intptr_t searchFlags, const char* text) {
	sptr_t _ret = self->searchPrev(static_cast<sptr_t>(searchFlags), text);
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_linesOnScreen(const ScintillaEdit* self) {
	sptr_t _ret = self->linesOnScreen();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_usePopUp(ScintillaEdit* self, intptr_t popUpMode) {
	self->usePopUp(static_cast<sptr_t>(popUpMode));
}

bool ScintillaEdit_selectionIsRectangle(const ScintillaEdit* self) {
	return self->selectionIsRectangle();
}

void ScintillaEdit_setZoom(ScintillaEdit* self, intptr_t zoomInPoints) {
	self->setZoom(static_cast<sptr_t>(zoomInPoints));
}

intptr_t ScintillaEdit_zoom(const ScintillaEdit* self) {
	sptr_t _ret = self->zoom();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_createDocument(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions) {
	sptr_t _ret = self->createDocument(static_cast<sptr_t>(bytes), static_cast<sptr_t>(documentOptions));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_addRefDocument(ScintillaEdit* self, intptr_t doc) {
	self->addRefDocument(static_cast<sptr_t>(doc));
}

void ScintillaEdit_releaseDocument(ScintillaEdit* self, intptr_t doc) {
	self->releaseDocument(static_cast<sptr_t>(doc));
}

intptr_t ScintillaEdit_documentOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->documentOptions();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_modEventMask(const ScintillaEdit* self) {
	sptr_t _ret = self->modEventMask();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCommandEvents(ScintillaEdit* self, bool commandEvents) {
	self->setCommandEvents(commandEvents);
}

bool ScintillaEdit_commandEvents(const ScintillaEdit* self) {
	return self->commandEvents();
}

void ScintillaEdit_setFocus(ScintillaEdit* self, bool focus) {
	self->setFocus(focus);
}

bool ScintillaEdit_focus(const ScintillaEdit* self) {
	return self->focus();
}

void ScintillaEdit_setStatus(ScintillaEdit* self, intptr_t status) {
	self->setStatus(static_cast<sptr_t>(status));
}

intptr_t ScintillaEdit_status(const ScintillaEdit* self) {
	sptr_t _ret = self->status();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMouseDownCaptures(ScintillaEdit* self, bool captures) {
	self->setMouseDownCaptures(captures);
}

bool ScintillaEdit_mouseDownCaptures(const ScintillaEdit* self) {
	return self->mouseDownCaptures();
}

void ScintillaEdit_setMouseWheelCaptures(ScintillaEdit* self, bool captures) {
	self->setMouseWheelCaptures(captures);
}

bool ScintillaEdit_mouseWheelCaptures(const ScintillaEdit* self) {
	return self->mouseWheelCaptures();
}

void ScintillaEdit_setCursor(ScintillaEdit* self, intptr_t cursorType) {
	self->setCursor(static_cast<sptr_t>(cursorType));
}

intptr_t ScintillaEdit_cursor(const ScintillaEdit* self) {
	sptr_t _ret = self->cursor();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setControlCharSymbol(ScintillaEdit* self, intptr_t symbol) {
	self->setControlCharSymbol(static_cast<sptr_t>(symbol));
}

intptr_t ScintillaEdit_controlCharSymbol(const ScintillaEdit* self) {
	sptr_t _ret = self->controlCharSymbol();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_wordPartLeft(ScintillaEdit* self) {
	self->wordPartLeft();
}

void ScintillaEdit_wordPartLeftExtend(ScintillaEdit* self) {
	self->wordPartLeftExtend();
}

void ScintillaEdit_wordPartRight(ScintillaEdit* self) {
	self->wordPartRight();
}

void ScintillaEdit_wordPartRightExtend(ScintillaEdit* self) {
	self->wordPartRightExtend();
}

void ScintillaEdit_setVisiblePolicy(ScintillaEdit* self, intptr_t visiblePolicy, intptr_t visibleSlop) {
	self->setVisiblePolicy(static_cast<sptr_t>(visiblePolicy), static_cast<sptr_t>(visibleSlop));
}

void ScintillaEdit_delLineLeft(ScintillaEdit* self) {
	self->delLineLeft();
}

void ScintillaEdit_delLineRight(ScintillaEdit* self) {
	self->delLineRight();
}

void ScintillaEdit_setXOffset(ScintillaEdit* self, intptr_t xOffset) {
	self->setXOffset(static_cast<sptr_t>(xOffset));
}

intptr_t ScintillaEdit_xOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->xOffset();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_chooseCaretX(ScintillaEdit* self) {
	self->chooseCaretX();
}

void ScintillaEdit_grabFocus(ScintillaEdit* self) {
	self->grabFocus();
}

void ScintillaEdit_setXCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop) {
	self->setXCaretPolicy(static_cast<sptr_t>(caretPolicy), static_cast<sptr_t>(caretSlop));
}

void ScintillaEdit_setYCaretPolicy(ScintillaEdit* self, intptr_t caretPolicy, intptr_t caretSlop) {
	self->setYCaretPolicy(static_cast<sptr_t>(caretPolicy), static_cast<sptr_t>(caretSlop));
}

void ScintillaEdit_setPrintWrapMode(ScintillaEdit* self, intptr_t wrapMode) {
	self->setPrintWrapMode(static_cast<sptr_t>(wrapMode));
}

intptr_t ScintillaEdit_printWrapMode(const ScintillaEdit* self) {
	sptr_t _ret = self->printWrapMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setHotspotActiveFore(ScintillaEdit* self, bool useSetting, intptr_t fore) {
	self->setHotspotActiveFore(useSetting, static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_hotspotActiveFore(const ScintillaEdit* self) {
	sptr_t _ret = self->hotspotActiveFore();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setHotspotActiveBack(ScintillaEdit* self, bool useSetting, intptr_t back) {
	self->setHotspotActiveBack(useSetting, static_cast<sptr_t>(back));
}

intptr_t ScintillaEdit_hotspotActiveBack(const ScintillaEdit* self) {
	sptr_t _ret = self->hotspotActiveBack();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setHotspotActiveUnderline(ScintillaEdit* self, bool underline) {
	self->setHotspotActiveUnderline(underline);
}

bool ScintillaEdit_hotspotActiveUnderline(const ScintillaEdit* self) {
	return self->hotspotActiveUnderline();
}

void ScintillaEdit_setHotspotSingleLine(ScintillaEdit* self, bool singleLine) {
	self->setHotspotSingleLine(singleLine);
}

bool ScintillaEdit_hotspotSingleLine(const ScintillaEdit* self) {
	return self->hotspotSingleLine();
}

void ScintillaEdit_paraDown(ScintillaEdit* self) {
	self->paraDown();
}

void ScintillaEdit_paraDownExtend(ScintillaEdit* self) {
	self->paraDownExtend();
}

void ScintillaEdit_paraUp(ScintillaEdit* self) {
	self->paraUp();
}

void ScintillaEdit_paraUpExtend(ScintillaEdit* self) {
	self->paraUpExtend();
}

intptr_t ScintillaEdit_positionBefore(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->positionBefore(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_positionAfter(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->positionAfter(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_positionRelative(ScintillaEdit* self, intptr_t pos, intptr_t relative) {
	sptr_t _ret = self->positionRelative(static_cast<sptr_t>(pos), static_cast<sptr_t>(relative));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_positionRelativeCodeUnits(ScintillaEdit* self, intptr_t pos, intptr_t relative) {
	sptr_t _ret = self->positionRelativeCodeUnits(static_cast<sptr_t>(pos), static_cast<sptr_t>(relative));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_copyRange(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->copyRange(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_copyText(ScintillaEdit* self, intptr_t length, const char* text) {
	self->copyText(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_setSelectionMode(ScintillaEdit* self, intptr_t selectionMode) {
	self->setSelectionMode(static_cast<sptr_t>(selectionMode));
}

void ScintillaEdit_changeSelectionMode(ScintillaEdit* self, intptr_t selectionMode) {
	self->changeSelectionMode(static_cast<sptr_t>(selectionMode));
}

intptr_t ScintillaEdit_selectionMode(const ScintillaEdit* self) {
	sptr_t _ret = self->selectionMode();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMoveExtendsSelection(ScintillaEdit* self, bool moveExtendsSelection) {
	self->setMoveExtendsSelection(moveExtendsSelection);
}

bool ScintillaEdit_moveExtendsSelection(const ScintillaEdit* self) {
	return self->moveExtendsSelection();
}

intptr_t ScintillaEdit_getLineSelStartPosition(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->getLineSelStartPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_getLineSelEndPosition(ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->getLineSelEndPosition(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_lineDownRectExtend(ScintillaEdit* self) {
	self->lineDownRectExtend();
}

void ScintillaEdit_lineUpRectExtend(ScintillaEdit* self) {
	self->lineUpRectExtend();
}

void ScintillaEdit_charLeftRectExtend(ScintillaEdit* self) {
	self->charLeftRectExtend();
}

void ScintillaEdit_charRightRectExtend(ScintillaEdit* self) {
	self->charRightRectExtend();
}

void ScintillaEdit_homeRectExtend(ScintillaEdit* self) {
	self->homeRectExtend();
}

void ScintillaEdit_vCHomeRectExtend(ScintillaEdit* self) {
	self->vCHomeRectExtend();
}

void ScintillaEdit_lineEndRectExtend(ScintillaEdit* self) {
	self->lineEndRectExtend();
}

void ScintillaEdit_pageUpRectExtend(ScintillaEdit* self) {
	self->pageUpRectExtend();
}

void ScintillaEdit_pageDownRectExtend(ScintillaEdit* self) {
	self->pageDownRectExtend();
}

void ScintillaEdit_stutteredPageUp(ScintillaEdit* self) {
	self->stutteredPageUp();
}

void ScintillaEdit_stutteredPageUpExtend(ScintillaEdit* self) {
	self->stutteredPageUpExtend();
}

void ScintillaEdit_stutteredPageDown(ScintillaEdit* self) {
	self->stutteredPageDown();
}

void ScintillaEdit_stutteredPageDownExtend(ScintillaEdit* self) {
	self->stutteredPageDownExtend();
}

void ScintillaEdit_wordLeftEnd(ScintillaEdit* self) {
	self->wordLeftEnd();
}

void ScintillaEdit_wordLeftEndExtend(ScintillaEdit* self) {
	self->wordLeftEndExtend();
}

void ScintillaEdit_wordRightEnd(ScintillaEdit* self) {
	self->wordRightEnd();
}

void ScintillaEdit_wordRightEndExtend(ScintillaEdit* self) {
	self->wordRightEndExtend();
}

void ScintillaEdit_setWhitespaceChars(ScintillaEdit* self, const char* characters) {
	self->setWhitespaceChars(characters);
}

struct miqt_string ScintillaEdit_whitespaceChars(const ScintillaEdit* self) {
	QByteArray _qb = self->whitespaceChars();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_setPunctuationChars(ScintillaEdit* self, const char* characters) {
	self->setPunctuationChars(characters);
}

struct miqt_string ScintillaEdit_punctuationChars(const ScintillaEdit* self) {
	QByteArray _qb = self->punctuationChars();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_setCharsDefault(ScintillaEdit* self) {
	self->setCharsDefault();
}

intptr_t ScintillaEdit_autoCCurrent(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCCurrent();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_autoCCurrentText(const ScintillaEdit* self) {
	QByteArray _qb = self->autoCCurrentText();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_autoCSetCaseInsensitiveBehaviour(ScintillaEdit* self, intptr_t behaviour) {
	self->autoCSetCaseInsensitiveBehaviour(static_cast<sptr_t>(behaviour));
}

intptr_t ScintillaEdit_autoCCaseInsensitiveBehaviour(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCCaseInsensitiveBehaviour();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSetMulti(ScintillaEdit* self, intptr_t multi) {
	self->autoCSetMulti(static_cast<sptr_t>(multi));
}

intptr_t ScintillaEdit_autoCMulti(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCMulti();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_autoCSetOrder(ScintillaEdit* self, intptr_t order) {
	self->autoCSetOrder(static_cast<sptr_t>(order));
}

intptr_t ScintillaEdit_autoCOrder(const ScintillaEdit* self) {
	sptr_t _ret = self->autoCOrder();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_allocate(ScintillaEdit* self, intptr_t bytes) {
	self->allocate(static_cast<sptr_t>(bytes));
}

struct miqt_string ScintillaEdit_targetAsUTF8(ScintillaEdit* self) {
	QByteArray _qb = self->targetAsUTF8();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_setLengthForEncode(ScintillaEdit* self, intptr_t bytes) {
	self->setLengthForEncode(static_cast<sptr_t>(bytes));
}

struct miqt_string ScintillaEdit_encodedFromUTF8(ScintillaEdit* self, const char* utf8) {
	QByteArray _qb = self->encodedFromUTF8(utf8);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_findColumn(ScintillaEdit* self, intptr_t line, intptr_t column) {
	sptr_t _ret = self->findColumn(static_cast<sptr_t>(line), static_cast<sptr_t>(column));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_caretSticky(const ScintillaEdit* self) {
	sptr_t _ret = self->caretSticky();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCaretSticky(ScintillaEdit* self, intptr_t useCaretStickyBehaviour) {
	self->setCaretSticky(static_cast<sptr_t>(useCaretStickyBehaviour));
}

void ScintillaEdit_toggleCaretSticky(ScintillaEdit* self) {
	self->toggleCaretSticky();
}

void ScintillaEdit_setPasteConvertEndings(ScintillaEdit* self, bool convert) {
	self->setPasteConvertEndings(convert);
}

bool ScintillaEdit_pasteConvertEndings(const ScintillaEdit* self) {
	return self->pasteConvertEndings();
}

void ScintillaEdit_replaceRectangular(ScintillaEdit* self, intptr_t length, const char* text) {
	self->replaceRectangular(static_cast<sptr_t>(length), text);
}

void ScintillaEdit_selectionDuplicate(ScintillaEdit* self) {
	self->selectionDuplicate();
}

void ScintillaEdit_setCaretLineBackAlpha(ScintillaEdit* self, intptr_t alpha) {
	self->setCaretLineBackAlpha(static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_caretLineBackAlpha(const ScintillaEdit* self) {
	sptr_t _ret = self->caretLineBackAlpha();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setCaretStyle(ScintillaEdit* self, intptr_t caretStyle) {
	self->setCaretStyle(static_cast<sptr_t>(caretStyle));
}

intptr_t ScintillaEdit_caretStyle(const ScintillaEdit* self) {
	sptr_t _ret = self->caretStyle();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setIndicatorCurrent(ScintillaEdit* self, intptr_t indicator) {
	self->setIndicatorCurrent(static_cast<sptr_t>(indicator));
}

intptr_t ScintillaEdit_indicatorCurrent(const ScintillaEdit* self) {
	sptr_t _ret = self->indicatorCurrent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setIndicatorValue(ScintillaEdit* self, intptr_t value) {
	self->setIndicatorValue(static_cast<sptr_t>(value));
}

intptr_t ScintillaEdit_indicatorValue(const ScintillaEdit* self) {
	sptr_t _ret = self->indicatorValue();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicatorFillRange(ScintillaEdit* self, intptr_t start, intptr_t lengthFill) {
	self->indicatorFillRange(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthFill));
}

void ScintillaEdit_indicatorClearRange(ScintillaEdit* self, intptr_t start, intptr_t lengthClear) {
	self->indicatorClearRange(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthClear));
}

intptr_t ScintillaEdit_indicatorAllOnFor(ScintillaEdit* self, intptr_t pos) {
	sptr_t _ret = self->indicatorAllOnFor(static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_indicatorValueAt(ScintillaEdit* self, intptr_t indicator, intptr_t pos) {
	sptr_t _ret = self->indicatorValueAt(static_cast<sptr_t>(indicator), static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_indicatorStart(ScintillaEdit* self, intptr_t indicator, intptr_t pos) {
	sptr_t _ret = self->indicatorStart(static_cast<sptr_t>(indicator), static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_indicatorEnd(ScintillaEdit* self, intptr_t indicator, intptr_t pos) {
	sptr_t _ret = self->indicatorEnd(static_cast<sptr_t>(indicator), static_cast<sptr_t>(pos));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setPositionCache(ScintillaEdit* self, intptr_t size) {
	self->setPositionCache(static_cast<sptr_t>(size));
}

intptr_t ScintillaEdit_positionCache(const ScintillaEdit* self) {
	sptr_t _ret = self->positionCache();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setLayoutThreads(ScintillaEdit* self, intptr_t threads) {
	self->setLayoutThreads(static_cast<sptr_t>(threads));
}

intptr_t ScintillaEdit_layoutThreads(const ScintillaEdit* self) {
	sptr_t _ret = self->layoutThreads();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_copyAllowLine(ScintillaEdit* self) {
	self->copyAllowLine();
}

void ScintillaEdit_cutAllowLine(ScintillaEdit* self) {
	self->cutAllowLine();
}

void ScintillaEdit_setCopySeparator(ScintillaEdit* self, const char* separator) {
	self->setCopySeparator(separator);
}

struct miqt_string ScintillaEdit_copySeparator(const ScintillaEdit* self) {
	QByteArray _qb = self->copySeparator();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_characterPointer(const ScintillaEdit* self) {
	sptr_t _ret = self->characterPointer();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_rangePointer(const ScintillaEdit* self, intptr_t start, intptr_t lengthRange) {
	sptr_t _ret = self->rangePointer(static_cast<sptr_t>(start), static_cast<sptr_t>(lengthRange));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_gapPosition(const ScintillaEdit* self) {
	sptr_t _ret = self->gapPosition();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha) {
	self->indicSetAlpha(static_cast<sptr_t>(indicator), static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_indicAlpha(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicAlpha(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_indicSetOutlineAlpha(ScintillaEdit* self, intptr_t indicator, intptr_t alpha) {
	self->indicSetOutlineAlpha(static_cast<sptr_t>(indicator), static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_indicOutlineAlpha(const ScintillaEdit* self, intptr_t indicator) {
	sptr_t _ret = self->indicOutlineAlpha(static_cast<sptr_t>(indicator));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setExtraAscent(ScintillaEdit* self, intptr_t extraAscent) {
	self->setExtraAscent(static_cast<sptr_t>(extraAscent));
}

intptr_t ScintillaEdit_extraAscent(const ScintillaEdit* self) {
	sptr_t _ret = self->extraAscent();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setExtraDescent(ScintillaEdit* self, intptr_t extraDescent) {
	self->setExtraDescent(static_cast<sptr_t>(extraDescent));
}

intptr_t ScintillaEdit_extraDescent(const ScintillaEdit* self) {
	sptr_t _ret = self->extraDescent();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_markerSymbolDefined(ScintillaEdit* self, intptr_t markerNumber) {
	sptr_t _ret = self->markerSymbolDefined(static_cast<sptr_t>(markerNumber));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_marginSetText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->marginSetText(static_cast<sptr_t>(line), text);
}

struct miqt_string ScintillaEdit_marginText(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->marginText(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_marginSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style) {
	self->marginSetStyle(static_cast<sptr_t>(line), static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_marginStyle(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->marginStyle(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_marginSetStyles(ScintillaEdit* self, intptr_t line, const char* styles) {
	self->marginSetStyles(static_cast<sptr_t>(line), styles);
}

struct miqt_string ScintillaEdit_marginStyles(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->marginStyles(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_marginTextClearAll(ScintillaEdit* self) {
	self->marginTextClearAll();
}

void ScintillaEdit_marginSetStyleOffset(ScintillaEdit* self, intptr_t style) {
	self->marginSetStyleOffset(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_marginStyleOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->marginStyleOffset();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMarginOptions(ScintillaEdit* self, intptr_t marginOptions) {
	self->setMarginOptions(static_cast<sptr_t>(marginOptions));
}

intptr_t ScintillaEdit_marginOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->marginOptions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_annotationSetText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->annotationSetText(static_cast<sptr_t>(line), text);
}

struct miqt_string ScintillaEdit_annotationText(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->annotationText(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_annotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style) {
	self->annotationSetStyle(static_cast<sptr_t>(line), static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_annotationStyle(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->annotationStyle(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_annotationSetStyles(ScintillaEdit* self, intptr_t line, const char* styles) {
	self->annotationSetStyles(static_cast<sptr_t>(line), styles);
}

struct miqt_string ScintillaEdit_annotationStyles(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->annotationStyles(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_annotationLines(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->annotationLines(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_annotationClearAll(ScintillaEdit* self) {
	self->annotationClearAll();
}

void ScintillaEdit_annotationSetVisible(ScintillaEdit* self, intptr_t visible) {
	self->annotationSetVisible(static_cast<sptr_t>(visible));
}

intptr_t ScintillaEdit_annotationVisible(const ScintillaEdit* self) {
	sptr_t _ret = self->annotationVisible();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_annotationSetStyleOffset(ScintillaEdit* self, intptr_t style) {
	self->annotationSetStyleOffset(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_annotationStyleOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->annotationStyleOffset();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_releaseAllExtendedStyles(ScintillaEdit* self) {
	self->releaseAllExtendedStyles();
}

intptr_t ScintillaEdit_allocateExtendedStyles(ScintillaEdit* self, intptr_t numberStyles) {
	sptr_t _ret = self->allocateExtendedStyles(static_cast<sptr_t>(numberStyles));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_addUndoAction(ScintillaEdit* self, intptr_t token, intptr_t flags) {
	self->addUndoAction(static_cast<sptr_t>(token), static_cast<sptr_t>(flags));
}

intptr_t ScintillaEdit_charPositionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->charPositionFromPoint(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_charPositionFromPointClose(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->charPositionFromPointClose(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setMouseSelectionRectangularSwitch(ScintillaEdit* self, bool mouseSelectionRectangularSwitch) {
	self->setMouseSelectionRectangularSwitch(mouseSelectionRectangularSwitch);
}

bool ScintillaEdit_mouseSelectionRectangularSwitch(const ScintillaEdit* self) {
	return self->mouseSelectionRectangularSwitch();
}

void ScintillaEdit_setMultipleSelection(ScintillaEdit* self, bool multipleSelection) {
	self->setMultipleSelection(multipleSelection);
}

bool ScintillaEdit_multipleSelection(const ScintillaEdit* self) {
	return self->multipleSelection();
}

void ScintillaEdit_setAdditionalSelectionTyping(ScintillaEdit* self, bool additionalSelectionTyping) {
	self->setAdditionalSelectionTyping(additionalSelectionTyping);
}

bool ScintillaEdit_additionalSelectionTyping(const ScintillaEdit* self) {
	return self->additionalSelectionTyping();
}

void ScintillaEdit_setAdditionalCaretsBlink(ScintillaEdit* self, bool additionalCaretsBlink) {
	self->setAdditionalCaretsBlink(additionalCaretsBlink);
}

bool ScintillaEdit_additionalCaretsBlink(const ScintillaEdit* self) {
	return self->additionalCaretsBlink();
}

void ScintillaEdit_setAdditionalCaretsVisible(ScintillaEdit* self, bool additionalCaretsVisible) {
	self->setAdditionalCaretsVisible(additionalCaretsVisible);
}

bool ScintillaEdit_additionalCaretsVisible(const ScintillaEdit* self) {
	return self->additionalCaretsVisible();
}

intptr_t ScintillaEdit_selections(const ScintillaEdit* self) {
	sptr_t _ret = self->selections();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_selectionEmpty(const ScintillaEdit* self) {
	return self->selectionEmpty();
}

void ScintillaEdit_clearSelections(ScintillaEdit* self) {
	self->clearSelections();
}

void ScintillaEdit_setSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor) {
	self->setSelection(static_cast<sptr_t>(caret), static_cast<sptr_t>(anchor));
}

void ScintillaEdit_addSelection(ScintillaEdit* self, intptr_t caret, intptr_t anchor) {
	self->addSelection(static_cast<sptr_t>(caret), static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_selectionFromPoint(ScintillaEdit* self, intptr_t x, intptr_t y) {
	sptr_t _ret = self->selectionFromPoint(static_cast<sptr_t>(x), static_cast<sptr_t>(y));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_dropSelectionN(ScintillaEdit* self, intptr_t selection) {
	self->dropSelectionN(static_cast<sptr_t>(selection));
}

void ScintillaEdit_setMainSelection(ScintillaEdit* self, intptr_t selection) {
	self->setMainSelection(static_cast<sptr_t>(selection));
}

intptr_t ScintillaEdit_mainSelection(const ScintillaEdit* self) {
	sptr_t _ret = self->mainSelection();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionNCaret(ScintillaEdit* self, intptr_t selection, intptr_t caret) {
	self->setSelectionNCaret(static_cast<sptr_t>(selection), static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_selectionNCaret(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNCaret(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionNAnchor(ScintillaEdit* self, intptr_t selection, intptr_t anchor) {
	self->setSelectionNAnchor(static_cast<sptr_t>(selection), static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_selectionNAnchor(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNAnchor(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionNCaretVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space) {
	self->setSelectionNCaretVirtualSpace(static_cast<sptr_t>(selection), static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_selectionNCaretVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNCaretVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionNAnchorVirtualSpace(ScintillaEdit* self, intptr_t selection, intptr_t space) {
	self->setSelectionNAnchorVirtualSpace(static_cast<sptr_t>(selection), static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_selectionNAnchorVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNAnchorVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionNStart(ScintillaEdit* self, intptr_t selection, intptr_t anchor) {
	self->setSelectionNStart(static_cast<sptr_t>(selection), static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_selectionNStart(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNStart(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_selectionNStartVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNStartVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setSelectionNEnd(ScintillaEdit* self, intptr_t selection, intptr_t caret) {
	self->setSelectionNEnd(static_cast<sptr_t>(selection), static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_selectionNEndVirtualSpace(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNEndVirtualSpace(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_selectionNEnd(const ScintillaEdit* self, intptr_t selection) {
	sptr_t _ret = self->selectionNEnd(static_cast<sptr_t>(selection));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRectangularSelectionCaret(ScintillaEdit* self, intptr_t caret) {
	self->setRectangularSelectionCaret(static_cast<sptr_t>(caret));
}

intptr_t ScintillaEdit_rectangularSelectionCaret(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionCaret();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRectangularSelectionAnchor(ScintillaEdit* self, intptr_t anchor) {
	self->setRectangularSelectionAnchor(static_cast<sptr_t>(anchor));
}

intptr_t ScintillaEdit_rectangularSelectionAnchor(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionAnchor();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRectangularSelectionCaretVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setRectangularSelectionCaretVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_rectangularSelectionCaretVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionCaretVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRectangularSelectionAnchorVirtualSpace(ScintillaEdit* self, intptr_t space) {
	self->setRectangularSelectionAnchorVirtualSpace(static_cast<sptr_t>(space));
}

intptr_t ScintillaEdit_rectangularSelectionAnchorVirtualSpace(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionAnchorVirtualSpace();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setVirtualSpaceOptions(ScintillaEdit* self, intptr_t virtualSpaceOptions) {
	self->setVirtualSpaceOptions(static_cast<sptr_t>(virtualSpaceOptions));
}

intptr_t ScintillaEdit_virtualSpaceOptions(const ScintillaEdit* self) {
	sptr_t _ret = self->virtualSpaceOptions();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRectangularSelectionModifier(ScintillaEdit* self, intptr_t modifier) {
	self->setRectangularSelectionModifier(static_cast<sptr_t>(modifier));
}

intptr_t ScintillaEdit_rectangularSelectionModifier(const ScintillaEdit* self) {
	sptr_t _ret = self->rectangularSelectionModifier();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setAdditionalSelFore(ScintillaEdit* self, intptr_t fore) {
	self->setAdditionalSelFore(static_cast<sptr_t>(fore));
}

void ScintillaEdit_setAdditionalSelBack(ScintillaEdit* self, intptr_t back) {
	self->setAdditionalSelBack(static_cast<sptr_t>(back));
}

void ScintillaEdit_setAdditionalSelAlpha(ScintillaEdit* self, intptr_t alpha) {
	self->setAdditionalSelAlpha(static_cast<sptr_t>(alpha));
}

intptr_t ScintillaEdit_additionalSelAlpha(const ScintillaEdit* self) {
	sptr_t _ret = self->additionalSelAlpha();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setAdditionalCaretFore(ScintillaEdit* self, intptr_t fore) {
	self->setAdditionalCaretFore(static_cast<sptr_t>(fore));
}

intptr_t ScintillaEdit_additionalCaretFore(const ScintillaEdit* self) {
	sptr_t _ret = self->additionalCaretFore();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_rotateSelection(ScintillaEdit* self) {
	self->rotateSelection();
}

void ScintillaEdit_swapMainAnchorCaret(ScintillaEdit* self) {
	self->swapMainAnchorCaret();
}

void ScintillaEdit_multipleSelectAddNext(ScintillaEdit* self) {
	self->multipleSelectAddNext();
}

void ScintillaEdit_multipleSelectAddEach(ScintillaEdit* self) {
	self->multipleSelectAddEach();
}

intptr_t ScintillaEdit_changeLexerState(ScintillaEdit* self, intptr_t start, intptr_t end) {
	sptr_t _ret = self->changeLexerState(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_contractedFoldNext(ScintillaEdit* self, intptr_t lineStart) {
	sptr_t _ret = self->contractedFoldNext(static_cast<sptr_t>(lineStart));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_verticalCentreCaret(ScintillaEdit* self) {
	self->verticalCentreCaret();
}

void ScintillaEdit_moveSelectedLinesUp(ScintillaEdit* self) {
	self->moveSelectedLinesUp();
}

void ScintillaEdit_moveSelectedLinesDown(ScintillaEdit* self) {
	self->moveSelectedLinesDown();
}

void ScintillaEdit_setIdentifier(ScintillaEdit* self, intptr_t identifier) {
	self->setIdentifier(static_cast<sptr_t>(identifier));
}

intptr_t ScintillaEdit_identifier(const ScintillaEdit* self) {
	sptr_t _ret = self->identifier();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_rGBAImageSetWidth(ScintillaEdit* self, intptr_t width) {
	self->rGBAImageSetWidth(static_cast<sptr_t>(width));
}

void ScintillaEdit_rGBAImageSetHeight(ScintillaEdit* self, intptr_t height) {
	self->rGBAImageSetHeight(static_cast<sptr_t>(height));
}

void ScintillaEdit_rGBAImageSetScale(ScintillaEdit* self, intptr_t scalePercent) {
	self->rGBAImageSetScale(static_cast<sptr_t>(scalePercent));
}

void ScintillaEdit_markerDefineRGBAImage(ScintillaEdit* self, intptr_t markerNumber, const char* pixels) {
	self->markerDefineRGBAImage(static_cast<sptr_t>(markerNumber), pixels);
}

void ScintillaEdit_registerRGBAImage(ScintillaEdit* self, intptr_t type, const char* pixels) {
	self->registerRGBAImage(static_cast<sptr_t>(type), pixels);
}

void ScintillaEdit_scrollToStart(ScintillaEdit* self) {
	self->scrollToStart();
}

void ScintillaEdit_scrollToEnd(ScintillaEdit* self) {
	self->scrollToEnd();
}

void ScintillaEdit_setTechnology(ScintillaEdit* self, intptr_t technology) {
	self->setTechnology(static_cast<sptr_t>(technology));
}

intptr_t ScintillaEdit_technology(const ScintillaEdit* self) {
	sptr_t _ret = self->technology();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_createLoader(ScintillaEdit* self, intptr_t bytes, intptr_t documentOptions) {
	sptr_t _ret = self->createLoader(static_cast<sptr_t>(bytes), static_cast<sptr_t>(documentOptions));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_findIndicatorShow(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->findIndicatorShow(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_findIndicatorFlash(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->findIndicatorFlash(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_findIndicatorHide(ScintillaEdit* self) {
	self->findIndicatorHide();
}

void ScintillaEdit_vCHomeDisplay(ScintillaEdit* self) {
	self->vCHomeDisplay();
}

void ScintillaEdit_vCHomeDisplayExtend(ScintillaEdit* self) {
	self->vCHomeDisplayExtend();
}

bool ScintillaEdit_caretLineVisibleAlways(const ScintillaEdit* self) {
	return self->caretLineVisibleAlways();
}

void ScintillaEdit_setCaretLineVisibleAlways(ScintillaEdit* self, bool alwaysVisible) {
	self->setCaretLineVisibleAlways(alwaysVisible);
}

void ScintillaEdit_setLineEndTypesAllowed(ScintillaEdit* self, intptr_t lineEndBitSet) {
	self->setLineEndTypesAllowed(static_cast<sptr_t>(lineEndBitSet));
}

intptr_t ScintillaEdit_lineEndTypesAllowed(const ScintillaEdit* self) {
	sptr_t _ret = self->lineEndTypesAllowed();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_lineEndTypesActive(const ScintillaEdit* self) {
	sptr_t _ret = self->lineEndTypesActive();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRepresentation(ScintillaEdit* self, const char* encodedCharacter, const char* representation) {
	self->setRepresentation(encodedCharacter, representation);
}

struct miqt_string ScintillaEdit_representation(const ScintillaEdit* self, const char* encodedCharacter) {
	QByteArray _qb = self->representation(encodedCharacter);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_clearRepresentation(ScintillaEdit* self, const char* encodedCharacter) {
	self->clearRepresentation(encodedCharacter);
}

void ScintillaEdit_clearAllRepresentations(ScintillaEdit* self) {
	self->clearAllRepresentations();
}

void ScintillaEdit_setRepresentationAppearance(ScintillaEdit* self, const char* encodedCharacter, intptr_t appearance) {
	self->setRepresentationAppearance(encodedCharacter, static_cast<sptr_t>(appearance));
}

intptr_t ScintillaEdit_representationAppearance(const ScintillaEdit* self, const char* encodedCharacter) {
	sptr_t _ret = self->representationAppearance(encodedCharacter);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setRepresentationColour(ScintillaEdit* self, const char* encodedCharacter, intptr_t colour) {
	self->setRepresentationColour(encodedCharacter, static_cast<sptr_t>(colour));
}

intptr_t ScintillaEdit_representationColour(const ScintillaEdit* self, const char* encodedCharacter) {
	sptr_t _ret = self->representationColour(encodedCharacter);
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_eOLAnnotationSetText(ScintillaEdit* self, intptr_t line, const char* text) {
	self->eOLAnnotationSetText(static_cast<sptr_t>(line), text);
}

struct miqt_string ScintillaEdit_eOLAnnotationText(const ScintillaEdit* self, intptr_t line) {
	QByteArray _qb = self->eOLAnnotationText(static_cast<sptr_t>(line));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_eOLAnnotationSetStyle(ScintillaEdit* self, intptr_t line, intptr_t style) {
	self->eOLAnnotationSetStyle(static_cast<sptr_t>(line), static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_eOLAnnotationStyle(const ScintillaEdit* self, intptr_t line) {
	sptr_t _ret = self->eOLAnnotationStyle(static_cast<sptr_t>(line));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_eOLAnnotationClearAll(ScintillaEdit* self) {
	self->eOLAnnotationClearAll();
}

void ScintillaEdit_eOLAnnotationSetVisible(ScintillaEdit* self, intptr_t visible) {
	self->eOLAnnotationSetVisible(static_cast<sptr_t>(visible));
}

intptr_t ScintillaEdit_eOLAnnotationVisible(const ScintillaEdit* self) {
	sptr_t _ret = self->eOLAnnotationVisible();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_eOLAnnotationSetStyleOffset(ScintillaEdit* self, intptr_t style) {
	self->eOLAnnotationSetStyleOffset(static_cast<sptr_t>(style));
}

intptr_t ScintillaEdit_eOLAnnotationStyleOffset(const ScintillaEdit* self) {
	sptr_t _ret = self->eOLAnnotationStyleOffset();
	return static_cast<intptr_t>(_ret);
}

bool ScintillaEdit_supportsFeature(const ScintillaEdit* self, intptr_t feature) {
	return self->supportsFeature(static_cast<sptr_t>(feature));
}

intptr_t ScintillaEdit_lineCharacterIndex(const ScintillaEdit* self) {
	sptr_t _ret = self->lineCharacterIndex();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_allocateLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex) {
	self->allocateLineCharacterIndex(static_cast<sptr_t>(lineCharacterIndex));
}

void ScintillaEdit_releaseLineCharacterIndex(ScintillaEdit* self, intptr_t lineCharacterIndex) {
	self->releaseLineCharacterIndex(static_cast<sptr_t>(lineCharacterIndex));
}

intptr_t ScintillaEdit_lineFromIndexPosition(ScintillaEdit* self, intptr_t pos, intptr_t lineCharacterIndex) {
	sptr_t _ret = self->lineFromIndexPosition(static_cast<sptr_t>(pos), static_cast<sptr_t>(lineCharacterIndex));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_indexPositionFromLine(ScintillaEdit* self, intptr_t line, intptr_t lineCharacterIndex) {
	sptr_t _ret = self->indexPositionFromLine(static_cast<sptr_t>(line), static_cast<sptr_t>(lineCharacterIndex));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_startRecord(ScintillaEdit* self) {
	self->startRecord();
}

void ScintillaEdit_stopRecord(ScintillaEdit* self) {
	self->stopRecord();
}

intptr_t ScintillaEdit_lexer(const ScintillaEdit* self) {
	sptr_t _ret = self->lexer();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_colourise(ScintillaEdit* self, intptr_t start, intptr_t end) {
	self->colourise(static_cast<sptr_t>(start), static_cast<sptr_t>(end));
}

void ScintillaEdit_setProperty(ScintillaEdit* self, const char* key, const char* value) {
	self->setProperty(key, value);
}

void ScintillaEdit_setKeyWords(ScintillaEdit* self, intptr_t keyWordSet, const char* keyWords) {
	self->setKeyWords(static_cast<sptr_t>(keyWordSet), keyWords);
}

struct miqt_string ScintillaEdit_property(const ScintillaEdit* self, const char* key) {
	QByteArray _qb = self->property(key);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_propertyExpanded(const ScintillaEdit* self, const char* key) {
	QByteArray _qb = self->propertyExpanded(key);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_propertyInt(const ScintillaEdit* self, const char* key, intptr_t defaultValue) {
	sptr_t _ret = self->propertyInt(key, static_cast<sptr_t>(defaultValue));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_lexerLanguage(const ScintillaEdit* self) {
	QByteArray _qb = self->lexerLanguage();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_privateLexerCall(ScintillaEdit* self, intptr_t operation, intptr_t pointer) {
	sptr_t _ret = self->privateLexerCall(static_cast<sptr_t>(operation), static_cast<sptr_t>(pointer));
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_propertyNames(ScintillaEdit* self) {
	QByteArray _qb = self->propertyNames();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_propertyType(ScintillaEdit* self, const char* name) {
	sptr_t _ret = self->propertyType(name);
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_describeProperty(ScintillaEdit* self, const char* name) {
	QByteArray _qb = self->describeProperty(name);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_describeKeyWordSets(ScintillaEdit* self) {
	QByteArray _qb = self->describeKeyWordSets();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_lineEndTypesSupported(const ScintillaEdit* self) {
	sptr_t _ret = self->lineEndTypesSupported();
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_allocateSubStyles(ScintillaEdit* self, intptr_t styleBase, intptr_t numberStyles) {
	sptr_t _ret = self->allocateSubStyles(static_cast<sptr_t>(styleBase), static_cast<sptr_t>(numberStyles));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_subStylesStart(const ScintillaEdit* self, intptr_t styleBase) {
	sptr_t _ret = self->subStylesStart(static_cast<sptr_t>(styleBase));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_subStylesLength(const ScintillaEdit* self, intptr_t styleBase) {
	sptr_t _ret = self->subStylesLength(static_cast<sptr_t>(styleBase));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_styleFromSubStyle(const ScintillaEdit* self, intptr_t subStyle) {
	sptr_t _ret = self->styleFromSubStyle(static_cast<sptr_t>(subStyle));
	return static_cast<intptr_t>(_ret);
}

intptr_t ScintillaEdit_primaryStyleFromStyle(const ScintillaEdit* self, intptr_t style) {
	sptr_t _ret = self->primaryStyleFromStyle(static_cast<sptr_t>(style));
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_freeSubStyles(ScintillaEdit* self) {
	self->freeSubStyles();
}

void ScintillaEdit_setIdentifiers(ScintillaEdit* self, intptr_t style, const char* identifiers) {
	self->setIdentifiers(static_cast<sptr_t>(style), identifiers);
}

intptr_t ScintillaEdit_distanceToSecondaryStyles(const ScintillaEdit* self) {
	sptr_t _ret = self->distanceToSecondaryStyles();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_subStyleBases(const ScintillaEdit* self) {
	QByteArray _qb = self->subStyleBases();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

intptr_t ScintillaEdit_namedStyles(const ScintillaEdit* self) {
	sptr_t _ret = self->namedStyles();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string ScintillaEdit_nameOfStyle(ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->nameOfStyle(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_tagsOfStyle(ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->tagsOfStyle(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_descriptionOfStyle(ScintillaEdit* self, intptr_t style) {
	QByteArray _qb = self->descriptionOfStyle(static_cast<sptr_t>(style));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void ScintillaEdit_setILexer(ScintillaEdit* self, intptr_t ilexer) {
	self->setILexer(static_cast<sptr_t>(ilexer));
}

intptr_t ScintillaEdit_bidirectional(const ScintillaEdit* self) {
	sptr_t _ret = self->bidirectional();
	return static_cast<intptr_t>(_ret);
}

void ScintillaEdit_setBidirectional(ScintillaEdit* self, intptr_t bidirectional) {
	self->setBidirectional(static_cast<sptr_t>(bidirectional));
}

struct miqt_string ScintillaEdit_tr2(const char* s, const char* c) {
	QString _ret = ScintillaEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = ScintillaEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_trUtf82(const char* s, const char* c) {
	QString _ret = ScintillaEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string ScintillaEdit_trUtf83(const char* s, const char* c, int n) {
	QString _ret = ScintillaEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool ScintillaEdit_override_virtual_send(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__send = slot;
	return true;
}

intptr_t ScintillaEdit_virtualbase_send(const void* self, unsigned int iMessage, uintptr_t wParam, intptr_t lParam) {

	sptr_t _ret = ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::send(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), static_cast<sptr_t>(lParam));
	return static_cast<intptr_t>(_ret);

}

bool ScintillaEdit_override_virtual_sends(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sends = slot;
	return true;
}

intptr_t ScintillaEdit_virtualbase_sends(const void* self, unsigned int iMessage, uintptr_t wParam, const char* s) {

	sptr_t _ret = ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::sends(static_cast<unsigned int>(iMessage), static_cast<uptr_t>(wParam), s);
	return static_cast<intptr_t>(_ret);

}

bool ScintillaEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool ScintillaEdit_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::event(event);

}

bool ScintillaEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::paintEvent(event);

}

bool ScintillaEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::wheelEvent(event);

}

bool ScintillaEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::focusInEvent(event);

}

bool ScintillaEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::focusOutEvent(event);

}

bool ScintillaEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::resizeEvent(event);

}

bool ScintillaEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::keyPressEvent(event);

}

bool ScintillaEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::mousePressEvent(event);

}

bool ScintillaEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::mouseReleaseEvent(event);

}

bool ScintillaEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::mouseDoubleClickEvent(event);

}

bool ScintillaEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::mouseMoveEvent(event);

}

bool ScintillaEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::contextMenuEvent(event);

}

bool ScintillaEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::dragEnterEvent(event);

}

bool ScintillaEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::dragLeaveEvent(event);

}

bool ScintillaEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::dragMoveEvent(event);

}

bool ScintillaEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::dropEvent(event);

}

bool ScintillaEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::inputMethodEvent(event);

}

bool ScintillaEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* ScintillaEdit_virtualbase_inputMethodQuery(const void* self, int query) {

	return new QVariant(( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

}

bool ScintillaEdit_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void ScintillaEdit_virtualbase_scrollContentsBy(void* self, int param1, int param2) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::scrollContentsBy(static_cast<int>(param1), static_cast<int>(param2));

}

bool ScintillaEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* ScintillaEdit_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::minimumSizeHint());

}

bool ScintillaEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* ScintillaEdit_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::sizeHint());

}

bool ScintillaEdit_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void ScintillaEdit_virtualbase_setupViewport(void* self, QWidget* viewport) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::setupViewport(viewport);

}

bool ScintillaEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool ScintillaEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {

	return ( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::eventFilter(param1, param2);

}

bool ScintillaEdit_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool ScintillaEdit_virtualbase_viewportEvent(void* self, QEvent* param1) {

	return ( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::viewportEvent(param1);

}

bool ScintillaEdit_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* ScintillaEdit_virtualbase_viewportSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::viewportSizeHint());

}

bool ScintillaEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_changeEvent(void* self, QEvent* param1) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::changeEvent(param1);

}

bool ScintillaEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int ScintillaEdit_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::devType();

}

bool ScintillaEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void ScintillaEdit_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::setVisible(visible);

}

bool ScintillaEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int ScintillaEdit_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::heightForWidth(static_cast<int>(param1));

}

bool ScintillaEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool ScintillaEdit_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::hasHeightForWidth();

}

bool ScintillaEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* ScintillaEdit_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::paintEngine();

}

bool ScintillaEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::keyReleaseEvent(event);

}

bool ScintillaEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_enterEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::enterEvent(event);

}

bool ScintillaEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::leaveEvent(event);

}

bool ScintillaEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::moveEvent(event);

}

bool ScintillaEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::closeEvent(event);

}

bool ScintillaEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::tabletEvent(event);

}

bool ScintillaEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::actionEvent(event);

}

bool ScintillaEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::showEvent(event);

}

bool ScintillaEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::hideEvent(event);

}

bool ScintillaEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool ScintillaEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

}

bool ScintillaEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int ScintillaEdit_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::metric(static_cast<MiqtVirtualScintillaEdit::PaintDeviceMetric>(param1));

}

bool ScintillaEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void ScintillaEdit_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::initPainter(painter);

}

bool ScintillaEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* ScintillaEdit_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::redirected(offset);

}

bool ScintillaEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* ScintillaEdit_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::sharedPainter();

}

bool ScintillaEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool ScintillaEdit_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::focusNextPrevChild(next);

}

bool ScintillaEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::timerEvent(event);

}

bool ScintillaEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::childEvent(event);

}

bool ScintillaEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void ScintillaEdit_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::customEvent(event);

}

bool ScintillaEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void ScintillaEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::connectNotify(*signal);

}

bool ScintillaEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void ScintillaEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualScintillaEdit*)(self) )->ScintillaEdit::disconnectNotify(*signal);

}

void ScintillaEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* ScintillaEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void ScintillaEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void ScintillaEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void ScintillaEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void ScintillaEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void ScintillaEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool ScintillaEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool ScintillaEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* ScintillaEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int ScintillaEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int ScintillaEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool ScintillaEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualScintillaEdit* self_cast = dynamic_cast<MiqtVirtualScintillaEdit*>( (ScintillaEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void ScintillaEdit_delete(ScintillaEdit* self) {
	delete self;
}

