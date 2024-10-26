#ifndef GEN_QSCISCINTILLABASE_H
#define GEN_QSCISCINTILLABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QImage;
class QMetaObject;
class QPainter;
class QPixmap;
class QRect;
class QScrollBar;
class QUrl;
class QWidget;
class QsciScintillaBase;
#else
typedef struct QColor QColor;
typedef struct QImage QImage;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QScrollBar QScrollBar;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
typedef struct QsciScintillaBase QsciScintillaBase;
#endif

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent);
QsciScintillaBase* QsciScintillaBase_new2();
QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self);
void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1);
struct miqt_string QsciScintillaBase_Tr(const char* s);
struct miqt_string QsciScintillaBase_TrUtf8(const char* s);
QsciScintillaBase* QsciScintillaBase_Pool();
void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar);
void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar);
long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg);
long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam);
long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam);
long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam);
long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam);
long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam);
long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam);
long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText);
long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col);
long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col);
long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax);
long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam);
long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam);
void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg);
int QsciScintillaBase_CommandKey(int qt_key, int* modifiers);
void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes);
void QsciScintillaBase_connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method);
void QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method);
void QsciScintillaBase_connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position);
void QsciScintillaBase_connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position);
void QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction);
void QsciScintillaBase_connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded);
void QsciScintillaBase_connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers);
void QsciScintillaBase_connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y);
void QsciScintillaBase_connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y);
void QsciScintillaBase_connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3);
void QsciScintillaBase_connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin);
void QsciScintillaBase_connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin);
void QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);
void QsciScintillaBase_connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2);
void QsciScintillaBase_connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position);
void QsciScintillaBase_connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url);
void QsciScintillaBase_connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated);
void QsciScintillaBase_connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot);
struct miqt_string QsciScintillaBase_Tr2(const char* s, const char* c);
struct miqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciScintillaBase_TrUtf82(const char* s, const char* c);
struct miqt_string QsciScintillaBase_TrUtf83(const char* s, const char* c, int n);
long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam);
long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam);
void QsciScintillaBase_Delete(QsciScintillaBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
