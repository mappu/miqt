#ifndef GEN_QTEXTOBJECT_H
#define GEN_QTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGlyphRun;
class QMetaObject;
class QTextBlock;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextBlock__iterator)
typedef QTextBlock::iterator QTextBlock__iterator;
#else
class QTextBlock__iterator;
#endif
class QTextBlockFormat;
class QTextBlockGroup;
class QTextBlockUserData;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
class QTextFormat;
class QTextFragment;
class QTextFrame;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator)
typedef QTextFrame::iterator QTextFrame__iterator;
#else
class QTextFrame__iterator;
#endif
class QTextFrameFormat;
class QTextFrameLayoutData;
class QTextLayout;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange)
typedef QTextLayout::FormatRange QTextLayout__FormatRange;
#else
class QTextLayout__FormatRange;
#endif
class QTextList;
class QTextObject;
#else
typedef struct QGlyphRun QGlyphRun;
typedef struct QMetaObject QMetaObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlock__iterator QTextBlock__iterator;
typedef struct QTextBlockFormat QTextBlockFormat;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFragment QTextFragment;
typedef struct QTextFrame QTextFrame;
typedef struct QTextFrame__iterator QTextFrame__iterator;
typedef struct QTextFrameFormat QTextFrameFormat;
typedef struct QTextFrameLayoutData QTextFrameLayoutData;
typedef struct QTextLayout QTextLayout;
typedef struct QTextLayout__FormatRange QTextLayout__FormatRange;
typedef struct QTextList QTextList;
typedef struct QTextObject QTextObject;
#endif

QMetaObject* QTextObject_MetaObject(QTextObject* self);
void QTextObject_Tr(const char* s, char** _out, int* _out_Strlen);
void QTextObject_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QTextFormat* QTextObject_Format(QTextObject* self);
int QTextObject_FormatIndex(QTextObject* self);
QTextDocument* QTextObject_Document(QTextObject* self);
int QTextObject_ObjectIndex(QTextObject* self);
void QTextObject_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextObject_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextObject_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextObject_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);

QMetaObject* QTextBlockGroup_MetaObject(QTextBlockGroup* self);
void QTextBlockGroup_Tr(const char* s, char** _out, int* _out_Strlen);
void QTextBlockGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QTextBlockGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextBlockGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextBlockGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextBlockGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);

void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, QTextFrameLayoutData* param1);
void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self);

QTextFrame* QTextFrame_new(QTextDocument* doc);
QMetaObject* QTextFrame_MetaObject(QTextFrame* self);
void QTextFrame_Tr(const char* s, char** _out, int* _out_Strlen);
void QTextFrame_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QTextFrame_SetFrameFormat(QTextFrame* self, QTextFrameFormat* format);
QTextFrameFormat* QTextFrame_FrameFormat(QTextFrame* self);
QTextCursor* QTextFrame_FirstCursorPosition(QTextFrame* self);
QTextCursor* QTextFrame_LastCursorPosition(QTextFrame* self);
int QTextFrame_FirstPosition(QTextFrame* self);
int QTextFrame_LastPosition(QTextFrame* self);
QTextFrameLayoutData* QTextFrame_LayoutData(QTextFrame* self);
void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data);
void QTextFrame_ChildFrames(QTextFrame* self, QTextFrame*** _out, size_t* _out_len);
QTextFrame* QTextFrame_ParentFrame(QTextFrame* self);
QTextFrame__iterator* QTextFrame_Begin(QTextFrame* self);
QTextFrame__iterator* QTextFrame_End(QTextFrame* self);
void QTextFrame_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextFrame_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextFrame_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextFrame_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextFrame_Delete(QTextFrame* self);

void QTextBlockUserData_OperatorAssign(QTextBlockUserData* self, QTextBlockUserData* param1);
void QTextBlockUserData_Delete(QTextBlockUserData* self);

QTextBlock* QTextBlock_new();
QTextBlock* QTextBlock_new2(QTextBlock* o);
void QTextBlock_OperatorAssign(QTextBlock* self, QTextBlock* o);
bool QTextBlock_IsValid(QTextBlock* self);
bool QTextBlock_OperatorEqual(QTextBlock* self, QTextBlock* o);
bool QTextBlock_OperatorNotEqual(QTextBlock* self, QTextBlock* o);
bool QTextBlock_OperatorLesser(QTextBlock* self, QTextBlock* o);
int QTextBlock_Position(QTextBlock* self);
int QTextBlock_Length(QTextBlock* self);
bool QTextBlock_Contains(QTextBlock* self, int position);
QTextLayout* QTextBlock_Layout(QTextBlock* self);
void QTextBlock_ClearLayout(QTextBlock* self);
QTextBlockFormat* QTextBlock_BlockFormat(QTextBlock* self);
int QTextBlock_BlockFormatIndex(QTextBlock* self);
QTextCharFormat* QTextBlock_CharFormat(QTextBlock* self);
int QTextBlock_CharFormatIndex(QTextBlock* self);
uintptr_t QTextBlock_TextDirection(QTextBlock* self);
void QTextBlock_Text(QTextBlock* self, char** _out, int* _out_Strlen);
void QTextBlock_TextFormats(QTextBlock* self, QTextLayout__FormatRange*** _out, size_t* _out_len);
QTextDocument* QTextBlock_Document(QTextBlock* self);
QTextList* QTextBlock_TextList(QTextBlock* self);
QTextBlockUserData* QTextBlock_UserData(QTextBlock* self);
void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data);
int QTextBlock_UserState(QTextBlock* self);
void QTextBlock_SetUserState(QTextBlock* self, int state);
int QTextBlock_Revision(QTextBlock* self);
void QTextBlock_SetRevision(QTextBlock* self, int rev);
bool QTextBlock_IsVisible(QTextBlock* self);
void QTextBlock_SetVisible(QTextBlock* self, bool visible);
int QTextBlock_BlockNumber(QTextBlock* self);
int QTextBlock_FirstLineNumber(QTextBlock* self);
void QTextBlock_SetLineCount(QTextBlock* self, int count);
int QTextBlock_LineCount(QTextBlock* self);
QTextBlock__iterator* QTextBlock_Begin(QTextBlock* self);
QTextBlock__iterator* QTextBlock_End(QTextBlock* self);
QTextBlock* QTextBlock_Next(QTextBlock* self);
QTextBlock* QTextBlock_Previous(QTextBlock* self);
int QTextBlock_FragmentIndex(QTextBlock* self);
void QTextBlock_Delete(QTextBlock* self);

QTextFragment* QTextFragment_new();
QTextFragment* QTextFragment_new2(QTextFragment* o);
void QTextFragment_OperatorAssign(QTextFragment* self, QTextFragment* o);
bool QTextFragment_IsValid(QTextFragment* self);
bool QTextFragment_OperatorEqual(QTextFragment* self, QTextFragment* o);
bool QTextFragment_OperatorNotEqual(QTextFragment* self, QTextFragment* o);
bool QTextFragment_OperatorLesser(QTextFragment* self, QTextFragment* o);
int QTextFragment_Position(QTextFragment* self);
int QTextFragment_Length(QTextFragment* self);
bool QTextFragment_Contains(QTextFragment* self, int position);
QTextCharFormat* QTextFragment_CharFormat(QTextFragment* self);
int QTextFragment_CharFormatIndex(QTextFragment* self);
void QTextFragment_Text(QTextFragment* self, char** _out, int* _out_Strlen);
void QTextFragment_GlyphRuns(QTextFragment* self, QGlyphRun*** _out, size_t* _out_len);
void QTextFragment_GlyphRuns1(QTextFragment* self, int from, QGlyphRun*** _out, size_t* _out_len);
void QTextFragment_GlyphRuns2(QTextFragment* self, int from, int length, QGlyphRun*** _out, size_t* _out_len);
void QTextFragment_Delete(QTextFragment* self);

QTextFrame__iterator* QTextFrame__iterator_new();
QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* o);
QTextFrame* QTextFrame__iterator_ParentFrame(QTextFrame__iterator* self);
QTextFrame* QTextFrame__iterator_CurrentFrame(QTextFrame__iterator* self);
QTextBlock* QTextFrame__iterator_CurrentBlock(QTextFrame__iterator* self);
bool QTextFrame__iterator_AtEnd(QTextFrame__iterator* self);
bool QTextFrame__iterator_OperatorEqual(QTextFrame__iterator* self, QTextFrame__iterator* o);
bool QTextFrame__iterator_OperatorNotEqual(QTextFrame__iterator* self, QTextFrame__iterator* o);
QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self, int param1);
QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self, int param1);
void QTextFrame__iterator_Delete(QTextFrame__iterator* self);

QTextBlock__iterator* QTextBlock__iterator_new();
QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* o);
QTextFragment* QTextBlock__iterator_Fragment(QTextBlock__iterator* self);
bool QTextBlock__iterator_AtEnd(QTextBlock__iterator* self);
bool QTextBlock__iterator_OperatorEqual(QTextBlock__iterator* self, QTextBlock__iterator* o);
bool QTextBlock__iterator_OperatorNotEqual(QTextBlock__iterator* self, QTextBlock__iterator* o);
QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self, int param1);
QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self, int param1);
void QTextBlock__iterator_Delete(QTextBlock__iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
