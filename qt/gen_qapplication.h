#ifndef GEN_QAPPLICATION_H
#define GEN_QAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QApplication;
class QDesktopWidget;
class QEvent;
class QFont;
class QFontMetrics;
class QIcon;
class QMetaObject;
class QObject;
class QPalette;
class QPoint;
class QSize;
class QStyle;
class QWidget;
#else
typedef struct QApplication QApplication;
typedef struct QDesktopWidget QDesktopWidget;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStyle QStyle;
typedef struct QWidget QWidget;
#endif

QApplication* QApplication_new(int* argc, char** argv);
QApplication* QApplication_new2(int* argc, char** argv, int param3);
QMetaObject* QApplication_MetaObject(const QApplication* self);
void QApplication_Tr(const char* s, char** _out, int* _out_Strlen);
void QApplication_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QStyle* QApplication_Style();
void QApplication_SetStyle(QStyle* style);
QStyle* QApplication_SetStyleWithStyle(const char* style, size_t style_Strlen);
int QApplication_ColorSpec();
void QApplication_SetColorSpec(int colorSpec);
QPalette* QApplication_Palette(QWidget* param1);
QPalette* QApplication_PaletteWithClassName(const char* className);
void QApplication_SetPalette(QPalette* param1);
QFont* QApplication_Font();
QFont* QApplication_FontWithQWidget(QWidget* param1);
QFont* QApplication_FontWithClassName(const char* className);
void QApplication_SetFont(QFont* param1);
QFontMetrics* QApplication_FontMetrics();
void QApplication_SetWindowIcon(QIcon* icon);
QIcon* QApplication_WindowIcon();
void QApplication_AllWidgets(QWidget*** _out, size_t* _out_len);
void QApplication_TopLevelWidgets(QWidget*** _out, size_t* _out_len);
QDesktopWidget* QApplication_Desktop();
QWidget* QApplication_ActivePopupWidget();
QWidget* QApplication_ActiveModalWidget();
QWidget* QApplication_FocusWidget();
QWidget* QApplication_ActiveWindow();
void QApplication_SetActiveWindow(QWidget* act);
QWidget* QApplication_WidgetAt(QPoint* p);
QWidget* QApplication_WidgetAt2(int x, int y);
QWidget* QApplication_TopLevelAt(QPoint* p);
QWidget* QApplication_TopLevelAt2(int x, int y);
void QApplication_Beep();
void QApplication_Alert(QWidget* widget);
void QApplication_SetCursorFlashTime(int cursorFlashTime);
int QApplication_CursorFlashTime();
void QApplication_SetDoubleClickInterval(int doubleClickInterval);
int QApplication_DoubleClickInterval();
void QApplication_SetKeyboardInputInterval(int keyboardInputInterval);
int QApplication_KeyboardInputInterval();
void QApplication_SetWheelScrollLines(int wheelScrollLines);
int QApplication_WheelScrollLines();
void QApplication_SetGlobalStrut(QSize* globalStrut);
QSize* QApplication_GlobalStrut();
void QApplication_SetStartDragTime(int ms);
int QApplication_StartDragTime();
void QApplication_SetStartDragDistance(int l);
int QApplication_StartDragDistance();
bool QApplication_IsEffectEnabled(uintptr_t param1);
void QApplication_SetEffectEnabled(uintptr_t param1);
int QApplication_Exec();
bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now);
void QApplication_connect_FocusChanged(QApplication* self, void* slot);
void QApplication_StyleSheet(const QApplication* self, char** _out, int* _out_Strlen);
void QApplication_SetStyleSheet(QApplication* self, const char* sheet, size_t sheet_Strlen);
void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled);
bool QApplication_AutoSipEnabled(const QApplication* self);
void QApplication_CloseAllWindows();
void QApplication_AboutQt();
void QApplication_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QApplication_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QApplication_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QApplication_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QApplication_SetPalette2(QPalette* param1, const char* className);
void QApplication_SetFont2(QFont* param1, const char* className);
void QApplication_Alert2(QWidget* widget, int duration);
void QApplication_SetEffectEnabled2(uintptr_t param1, bool enable);
void QApplication_Delete(QApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
