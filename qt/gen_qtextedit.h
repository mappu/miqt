#ifndef GEN_QTEXTEDIT_H
#define GEN_QTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
class QTextEdit;
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
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit QTextEdit;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTextEdit* QTextEdit_new();
QTextEdit* QTextEdit_new2(const char* text, size_t text_Strlen);
QTextEdit* QTextEdit_new3(QWidget* parent);
QTextEdit* QTextEdit_new4(const char* text, size_t text_Strlen, QWidget* parent);
QMetaObject* QTextEdit_MetaObject(QTextEdit* self);
void QTextEdit_Tr(char* s, char** _out, int* _out_Strlen);
void QTextEdit_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document);
QTextDocument* QTextEdit_Document(QTextEdit* self);
void QTextEdit_SetPlaceholderText(QTextEdit* self, const char* placeholderText, size_t placeholderText_Strlen);
void QTextEdit_PlaceholderText(QTextEdit* self, char** _out, int* _out_Strlen);
void QTextEdit_SetTextCursor(QTextEdit* self, QTextCursor* cursor);
QTextCursor* QTextEdit_TextCursor(QTextEdit* self);
bool QTextEdit_IsReadOnly(QTextEdit* self);
void QTextEdit_SetReadOnly(QTextEdit* self, bool ro);
double QTextEdit_FontPointSize(QTextEdit* self);
void QTextEdit_FontFamily(QTextEdit* self, char** _out, int* _out_Strlen);
int QTextEdit_FontWeight(QTextEdit* self);
bool QTextEdit_FontUnderline(QTextEdit* self);
bool QTextEdit_FontItalic(QTextEdit* self);
QColor* QTextEdit_TextColor(QTextEdit* self);
QColor* QTextEdit_TextBackgroundColor(QTextEdit* self);
QFont* QTextEdit_CurrentFont(QTextEdit* self);
void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, QTextCharFormat* modifier);
void QTextEdit_SetCurrentCharFormat(QTextEdit* self, QTextCharFormat* format);
QTextCharFormat* QTextEdit_CurrentCharFormat(QTextEdit* self);
bool QTextEdit_TabChangesFocus(QTextEdit* self);
void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b);
void QTextEdit_SetDocumentTitle(QTextEdit* self, const char* title, size_t title_Strlen);
void QTextEdit_DocumentTitle(QTextEdit* self, char** _out, int* _out_Strlen);
bool QTextEdit_IsUndoRedoEnabled(QTextEdit* self);
void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable);
int QTextEdit_LineWrapColumnOrWidth(QTextEdit* self);
void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w);
void QTextEdit_ToPlainText(QTextEdit* self, char** _out, int* _out_Strlen);
void QTextEdit_ToHtml(QTextEdit* self, char** _out, int* _out_Strlen);
void QTextEdit_EnsureCursorVisible(QTextEdit* self);
QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, QUrl* name);
QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self);
QMenu* QTextEdit_CreateStandardContextMenuWithPosition(QTextEdit* self, QPoint* position);
QTextCursor* QTextEdit_CursorForPosition(QTextEdit* self, QPoint* pos);
QRect* QTextEdit_CursorRect(QTextEdit* self, QTextCursor* cursor);
QRect* QTextEdit_CursorRect2(QTextEdit* self);
void QTextEdit_AnchorAt(QTextEdit* self, QPoint* pos, char** _out, int* _out_Strlen);
bool QTextEdit_OverwriteMode(QTextEdit* self);
void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite);
int QTextEdit_TabStopWidth(QTextEdit* self);
void QTextEdit_SetTabStopWidth(QTextEdit* self, int width);
double QTextEdit_TabStopDistance(QTextEdit* self);
void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance);
int QTextEdit_CursorWidth(QTextEdit* self);
void QTextEdit_SetCursorWidth(QTextEdit* self, int width);
bool QTextEdit_AcceptRichText(QTextEdit* self);
void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept);
bool QTextEdit_CanPaste(QTextEdit* self);
void QTextEdit_Print(QTextEdit* self, QPagedPaintDevice* printer);
void QTextEdit_SetFontPointSize(QTextEdit* self, double s);
void QTextEdit_SetFontFamily(QTextEdit* self, const char* fontFamily, size_t fontFamily_Strlen);
void QTextEdit_SetFontWeight(QTextEdit* self, int w);
void QTextEdit_SetFontUnderline(QTextEdit* self, bool b);
void QTextEdit_SetFontItalic(QTextEdit* self, bool b);
void QTextEdit_SetTextColor(QTextEdit* self, QColor* c);
void QTextEdit_SetTextBackgroundColor(QTextEdit* self, QColor* c);
void QTextEdit_SetCurrentFont(QTextEdit* self, QFont* f);
void QTextEdit_SetPlainText(QTextEdit* self, const char* text, size_t text_Strlen);
void QTextEdit_SetHtml(QTextEdit* self, const char* text, size_t text_Strlen);
void QTextEdit_SetMarkdown(QTextEdit* self, const char* markdown, size_t markdown_Strlen);
void QTextEdit_SetText(QTextEdit* self, const char* text, size_t text_Strlen);
void QTextEdit_Cut(QTextEdit* self);
void QTextEdit_Copy(QTextEdit* self);
void QTextEdit_Paste(QTextEdit* self);
void QTextEdit_Undo(QTextEdit* self);
void QTextEdit_Redo(QTextEdit* self);
void QTextEdit_Clear(QTextEdit* self);
void QTextEdit_SelectAll(QTextEdit* self);
void QTextEdit_InsertPlainText(QTextEdit* self, const char* text, size_t text_Strlen);
void QTextEdit_InsertHtml(QTextEdit* self, const char* text, size_t text_Strlen);
void QTextEdit_Append(QTextEdit* self, const char* text, size_t text_Strlen);
void QTextEdit_ScrollToAnchor(QTextEdit* self, const char* name, size_t name_Strlen);
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
void QTextEdit_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTextEdit_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTextEdit_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTextEdit_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTextEdit_ZoomIn1(QTextEdit* self, int rangeVal);
void QTextEdit_ZoomOut1(QTextEdit* self, int rangeVal);
void QTextEdit_Delete(QTextEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
