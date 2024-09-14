#ifndef GEN_QTEXTEDIT_H
#define GEN_QTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QColor;
class QFont;
class QMenu;
class QMetaObject;
class QPagedPaintDevice;
class QPoint;
class QRect;
class QRegExp;
class QRegularExpression;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
class QTextEdit;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection)
typedef QTextEdit::ExtraSelection QTextEdit__ExtraSelection;
#else
class QTextEdit__ExtraSelection;
#endif
class QUrl;
class QVariant;
class QWidget;
#else
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegExp QRegExp;
typedef struct QRegularExpression QRegularExpression;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit QTextEdit;
typedef struct QTextEdit__ExtraSelection QTextEdit__ExtraSelection;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTextEdit* QTextEdit_new();
QTextEdit* QTextEdit_new2(struct miqt_string* text);
QTextEdit* QTextEdit_new3(QWidget* parent);
QTextEdit* QTextEdit_new4(struct miqt_string* text, QWidget* parent);
QMetaObject* QTextEdit_MetaObject(const QTextEdit* self);
struct miqt_string* QTextEdit_Tr(const char* s);
struct miqt_string* QTextEdit_TrUtf8(const char* s);
void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document);
QTextDocument* QTextEdit_Document(const QTextEdit* self);
void QTextEdit_SetPlaceholderText(QTextEdit* self, struct miqt_string* placeholderText);
struct miqt_string* QTextEdit_PlaceholderText(const QTextEdit* self);
void QTextEdit_SetTextCursor(QTextEdit* self, QTextCursor* cursor);
QTextCursor* QTextEdit_TextCursor(const QTextEdit* self);
bool QTextEdit_IsReadOnly(const QTextEdit* self);
void QTextEdit_SetReadOnly(QTextEdit* self, bool ro);
void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags);
int QTextEdit_TextInteractionFlags(const QTextEdit* self);
double QTextEdit_FontPointSize(const QTextEdit* self);
struct miqt_string* QTextEdit_FontFamily(const QTextEdit* self);
int QTextEdit_FontWeight(const QTextEdit* self);
bool QTextEdit_FontUnderline(const QTextEdit* self);
bool QTextEdit_FontItalic(const QTextEdit* self);
QColor* QTextEdit_TextColor(const QTextEdit* self);
QColor* QTextEdit_TextBackgroundColor(const QTextEdit* self);
QFont* QTextEdit_CurrentFont(const QTextEdit* self);
int QTextEdit_Alignment(const QTextEdit* self);
void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, QTextCharFormat* modifier);
void QTextEdit_SetCurrentCharFormat(QTextEdit* self, QTextCharFormat* format);
QTextCharFormat* QTextEdit_CurrentCharFormat(const QTextEdit* self);
int QTextEdit_AutoFormatting(const QTextEdit* self);
void QTextEdit_SetAutoFormatting(QTextEdit* self, int features);
bool QTextEdit_TabChangesFocus(const QTextEdit* self);
void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b);
void QTextEdit_SetDocumentTitle(QTextEdit* self, struct miqt_string* title);
struct miqt_string* QTextEdit_DocumentTitle(const QTextEdit* self);
bool QTextEdit_IsUndoRedoEnabled(const QTextEdit* self);
void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable);
uintptr_t QTextEdit_LineWrapMode(const QTextEdit* self);
void QTextEdit_SetLineWrapMode(QTextEdit* self, uintptr_t mode);
int QTextEdit_LineWrapColumnOrWidth(const QTextEdit* self);
void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w);
uintptr_t QTextEdit_WordWrapMode(const QTextEdit* self);
void QTextEdit_SetWordWrapMode(QTextEdit* self, uintptr_t policy);
bool QTextEdit_Find(QTextEdit* self, struct miqt_string* exp);
bool QTextEdit_FindWithExp(QTextEdit* self, QRegExp* exp);
bool QTextEdit_Find2(QTextEdit* self, QRegularExpression* exp);
struct miqt_string* QTextEdit_ToPlainText(const QTextEdit* self);
struct miqt_string* QTextEdit_ToHtml(const QTextEdit* self);
struct miqt_string* QTextEdit_ToMarkdown(const QTextEdit* self);
void QTextEdit_EnsureCursorVisible(QTextEdit* self);
QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, QUrl* name);
QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self);
QMenu* QTextEdit_CreateStandardContextMenuWithPosition(QTextEdit* self, QPoint* position);
QTextCursor* QTextEdit_CursorForPosition(const QTextEdit* self, QPoint* pos);
QRect* QTextEdit_CursorRect(const QTextEdit* self, QTextCursor* cursor);
QRect* QTextEdit_CursorRect2(const QTextEdit* self);
struct miqt_string* QTextEdit_AnchorAt(const QTextEdit* self, QPoint* pos);
bool QTextEdit_OverwriteMode(const QTextEdit* self);
void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite);
int QTextEdit_TabStopWidth(const QTextEdit* self);
void QTextEdit_SetTabStopWidth(QTextEdit* self, int width);
double QTextEdit_TabStopDistance(const QTextEdit* self);
void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance);
int QTextEdit_CursorWidth(const QTextEdit* self);
void QTextEdit_SetCursorWidth(QTextEdit* self, int width);
bool QTextEdit_AcceptRichText(const QTextEdit* self);
void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept);
void QTextEdit_SetExtraSelections(QTextEdit* self, struct miqt_array* /* of QTextEdit__ExtraSelection */ selections);
struct miqt_array* QTextEdit_ExtraSelections(const QTextEdit* self);
void QTextEdit_MoveCursor(QTextEdit* self, uintptr_t operation);
bool QTextEdit_CanPaste(const QTextEdit* self);
void QTextEdit_Print(const QTextEdit* self, QPagedPaintDevice* printer);
QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, uintptr_t property);
QVariant* QTextEdit_InputMethodQuery2(const QTextEdit* self, uintptr_t query, QVariant* argument);
void QTextEdit_SetFontPointSize(QTextEdit* self, double s);
void QTextEdit_SetFontFamily(QTextEdit* self, struct miqt_string* fontFamily);
void QTextEdit_SetFontWeight(QTextEdit* self, int w);
void QTextEdit_SetFontUnderline(QTextEdit* self, bool b);
void QTextEdit_SetFontItalic(QTextEdit* self, bool b);
void QTextEdit_SetTextColor(QTextEdit* self, QColor* c);
void QTextEdit_SetTextBackgroundColor(QTextEdit* self, QColor* c);
void QTextEdit_SetCurrentFont(QTextEdit* self, QFont* f);
void QTextEdit_SetAlignment(QTextEdit* self, int a);
void QTextEdit_SetPlainText(QTextEdit* self, struct miqt_string* text);
void QTextEdit_SetHtml(QTextEdit* self, struct miqt_string* text);
void QTextEdit_SetMarkdown(QTextEdit* self, struct miqt_string* markdown);
void QTextEdit_SetText(QTextEdit* self, struct miqt_string* text);
void QTextEdit_Cut(QTextEdit* self);
void QTextEdit_Copy(QTextEdit* self);
void QTextEdit_Paste(QTextEdit* self);
void QTextEdit_Undo(QTextEdit* self);
void QTextEdit_Redo(QTextEdit* self);
void QTextEdit_Clear(QTextEdit* self);
void QTextEdit_SelectAll(QTextEdit* self);
void QTextEdit_InsertPlainText(QTextEdit* self, struct miqt_string* text);
void QTextEdit_InsertHtml(QTextEdit* self, struct miqt_string* text);
void QTextEdit_Append(QTextEdit* self, struct miqt_string* text);
void QTextEdit_ScrollToAnchor(QTextEdit* self, struct miqt_string* name);
void QTextEdit_ZoomIn(QTextEdit* self);
void QTextEdit_ZoomOut(QTextEdit* self);
void QTextEdit_TextChanged(QTextEdit* self);
void QTextEdit_connect_TextChanged(QTextEdit* self, void* slot);
void QTextEdit_UndoAvailable(QTextEdit* self, bool b);
void QTextEdit_connect_UndoAvailable(QTextEdit* self, void* slot);
void QTextEdit_RedoAvailable(QTextEdit* self, bool b);
void QTextEdit_connect_RedoAvailable(QTextEdit* self, void* slot);
void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, QTextCharFormat* format);
void QTextEdit_connect_CurrentCharFormatChanged(QTextEdit* self, void* slot);
void QTextEdit_CopyAvailable(QTextEdit* self, bool b);
void QTextEdit_connect_CopyAvailable(QTextEdit* self, void* slot);
void QTextEdit_SelectionChanged(QTextEdit* self);
void QTextEdit_connect_SelectionChanged(QTextEdit* self, void* slot);
void QTextEdit_CursorPositionChanged(QTextEdit* self);
void QTextEdit_connect_CursorPositionChanged(QTextEdit* self, void* slot);
struct miqt_string* QTextEdit_Tr2(const char* s, const char* c);
struct miqt_string* QTextEdit_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTextEdit_TrUtf82(const char* s, const char* c);
struct miqt_string* QTextEdit_TrUtf83(const char* s, const char* c, int n);
bool QTextEdit_Find22(QTextEdit* self, struct miqt_string* exp, int options);
bool QTextEdit_Find23(QTextEdit* self, QRegExp* exp, int options);
bool QTextEdit_Find24(QTextEdit* self, QRegularExpression* exp, int options);
struct miqt_string* QTextEdit_ToMarkdown1(const QTextEdit* self, int features);
void QTextEdit_MoveCursor2(QTextEdit* self, uintptr_t operation, uintptr_t mode);
void QTextEdit_ZoomIn1(QTextEdit* self, int rangeVal);
void QTextEdit_ZoomOut1(QTextEdit* self, int rangeVal);
void QTextEdit_Delete(QTextEdit* self);

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(QTextEdit__ExtraSelection* param1);
void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
