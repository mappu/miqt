#pragma once
#ifndef MIQT_QT6_GEN_QTEXTOBJECT_H
#define MIQT_QT6_GEN_QTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QGlyphRun;
class QMetaMethod;
class QMetaObject;
class QObject;
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
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGlyphRun QGlyphRun;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
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
typedef struct QTimerEvent QTimerEvent;
#endif

void QTextObject_virtbase(QTextObject* src, QObject** outptr_QObject);
QMetaObject* QTextObject_metaObject(const QTextObject* self);
void* QTextObject_metacast(QTextObject* self, const char* param1);
struct miqt_string QTextObject_tr(const char* s);
QTextFormat* QTextObject_format(const QTextObject* self);
int QTextObject_formatIndex(const QTextObject* self);
QTextDocument* QTextObject_document(const QTextObject* self);
int QTextObject_objectIndex(const QTextObject* self);
struct miqt_string QTextObject_tr2(const char* s, const char* c);
struct miqt_string QTextObject_tr3(const char* s, const char* c, int n);

void QTextBlockGroup_virtbase(QTextBlockGroup* src, QTextObject** outptr_QTextObject);
QMetaObject* QTextBlockGroup_metaObject(const QTextBlockGroup* self);
void* QTextBlockGroup_metacast(QTextBlockGroup* self, const char* param1);
struct miqt_string QTextBlockGroup_tr(const char* s);
void QTextBlockGroup_blockInserted(QTextBlockGroup* self, QTextBlock* block);
void QTextBlockGroup_blockRemoved(QTextBlockGroup* self, QTextBlock* block);
void QTextBlockGroup_blockFormatChanged(QTextBlockGroup* self, QTextBlock* block);
struct miqt_string QTextBlockGroup_tr2(const char* s, const char* c);
struct miqt_string QTextBlockGroup_tr3(const char* s, const char* c, int n);

void QTextFrameLayoutData_operatorAssign(QTextFrameLayoutData* self, QTextFrameLayoutData* param1);
void QTextFrameLayoutData_delete(QTextFrameLayoutData* self);

QTextFrame* QTextFrame_new(QTextDocument* doc);
void QTextFrame_virtbase(QTextFrame* src, QTextObject** outptr_QTextObject);
QMetaObject* QTextFrame_metaObject(const QTextFrame* self);
void* QTextFrame_metacast(QTextFrame* self, const char* param1);
struct miqt_string QTextFrame_tr(const char* s);
void QTextFrame_setFrameFormat(QTextFrame* self, QTextFrameFormat* format);
QTextFrameFormat* QTextFrame_frameFormat(const QTextFrame* self);
QTextCursor* QTextFrame_firstCursorPosition(const QTextFrame* self);
QTextCursor* QTextFrame_lastCursorPosition(const QTextFrame* self);
int QTextFrame_firstPosition(const QTextFrame* self);
int QTextFrame_lastPosition(const QTextFrame* self);
QTextFrameLayoutData* QTextFrame_layoutData(const QTextFrame* self);
void QTextFrame_setLayoutData(QTextFrame* self, QTextFrameLayoutData* data);
struct miqt_array /* of QTextFrame* */  QTextFrame_childFrames(const QTextFrame* self);
QTextFrame* QTextFrame_parentFrame(const QTextFrame* self);
QTextFrame__iterator* QTextFrame_begin(const QTextFrame* self);
QTextFrame__iterator* QTextFrame_end(const QTextFrame* self);
struct miqt_string QTextFrame_tr2(const char* s, const char* c);
struct miqt_string QTextFrame_tr3(const char* s, const char* c, int n);
bool QTextFrame_override_virtual_event(void* self, intptr_t slot);
bool QTextFrame_virtualbase_event(void* self, QEvent* event);
bool QTextFrame_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTextFrame_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTextFrame_override_virtual_timerEvent(void* self, intptr_t slot);
void QTextFrame_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTextFrame_override_virtual_childEvent(void* self, intptr_t slot);
void QTextFrame_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTextFrame_override_virtual_customEvent(void* self, intptr_t slot);
void QTextFrame_virtualbase_customEvent(void* self, QEvent* event);
bool QTextFrame_override_virtual_connectNotify(void* self, intptr_t slot);
void QTextFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTextFrame_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTextFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTextFrame_delete(QTextFrame* self);

void QTextBlockUserData_operatorAssign(QTextBlockUserData* self, QTextBlockUserData* param1);
void QTextBlockUserData_delete(QTextBlockUserData* self);

QTextBlock* QTextBlock_new();
QTextBlock* QTextBlock_new2(QTextBlock* o);
void QTextBlock_operatorAssign(QTextBlock* self, QTextBlock* o);
bool QTextBlock_isValid(const QTextBlock* self);
bool QTextBlock_operatorEqual(const QTextBlock* self, QTextBlock* o);
bool QTextBlock_operatorNotEqual(const QTextBlock* self, QTextBlock* o);
bool QTextBlock_operatorLesser(const QTextBlock* self, QTextBlock* o);
int QTextBlock_position(const QTextBlock* self);
int QTextBlock_length(const QTextBlock* self);
bool QTextBlock_contains(const QTextBlock* self, int position);
QTextLayout* QTextBlock_layout(const QTextBlock* self);
void QTextBlock_clearLayout(QTextBlock* self);
QTextBlockFormat* QTextBlock_blockFormat(const QTextBlock* self);
int QTextBlock_blockFormatIndex(const QTextBlock* self);
QTextCharFormat* QTextBlock_charFormat(const QTextBlock* self);
int QTextBlock_charFormatIndex(const QTextBlock* self);
int QTextBlock_textDirection(const QTextBlock* self);
struct miqt_string QTextBlock_text(const QTextBlock* self);
struct miqt_array /* of QTextLayout__FormatRange* */  QTextBlock_textFormats(const QTextBlock* self);
QTextDocument* QTextBlock_document(const QTextBlock* self);
QTextList* QTextBlock_textList(const QTextBlock* self);
QTextBlockUserData* QTextBlock_userData(const QTextBlock* self);
void QTextBlock_setUserData(QTextBlock* self, QTextBlockUserData* data);
int QTextBlock_userState(const QTextBlock* self);
void QTextBlock_setUserState(QTextBlock* self, int state);
int QTextBlock_revision(const QTextBlock* self);
void QTextBlock_setRevision(QTextBlock* self, int rev);
bool QTextBlock_isVisible(const QTextBlock* self);
void QTextBlock_setVisible(QTextBlock* self, bool visible);
int QTextBlock_blockNumber(const QTextBlock* self);
int QTextBlock_firstLineNumber(const QTextBlock* self);
void QTextBlock_setLineCount(QTextBlock* self, int count);
int QTextBlock_lineCount(const QTextBlock* self);
QTextBlock__iterator* QTextBlock_begin(const QTextBlock* self);
QTextBlock__iterator* QTextBlock_end(const QTextBlock* self);
QTextBlock* QTextBlock_next(const QTextBlock* self);
QTextBlock* QTextBlock_previous(const QTextBlock* self);
int QTextBlock_fragmentIndex(const QTextBlock* self);
void QTextBlock_delete(QTextBlock* self);

QTextFragment* QTextFragment_new();
QTextFragment* QTextFragment_new2(QTextFragment* o);
void QTextFragment_operatorAssign(QTextFragment* self, QTextFragment* o);
bool QTextFragment_isValid(const QTextFragment* self);
bool QTextFragment_operatorEqual(const QTextFragment* self, QTextFragment* o);
bool QTextFragment_operatorNotEqual(const QTextFragment* self, QTextFragment* o);
bool QTextFragment_operatorLesser(const QTextFragment* self, QTextFragment* o);
int QTextFragment_position(const QTextFragment* self);
int QTextFragment_length(const QTextFragment* self);
bool QTextFragment_contains(const QTextFragment* self, int position);
QTextCharFormat* QTextFragment_charFormat(const QTextFragment* self);
int QTextFragment_charFormatIndex(const QTextFragment* self);
struct miqt_string QTextFragment_text(const QTextFragment* self);
struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns(const QTextFragment* self);
struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns1(const QTextFragment* self, int from);
struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns2(const QTextFragment* self, int from, int length);
void QTextFragment_delete(QTextFragment* self);

QTextFrame__iterator* QTextFrame__iterator_new();
QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* param1);
QTextFrame* QTextFrame__iterator_parentFrame(const QTextFrame__iterator* self);
QTextFrame* QTextFrame__iterator_currentFrame(const QTextFrame__iterator* self);
QTextBlock* QTextFrame__iterator_currentBlock(const QTextFrame__iterator* self);
bool QTextFrame__iterator_atEnd(const QTextFrame__iterator* self);
bool QTextFrame__iterator_operatorEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o);
bool QTextFrame__iterator_operatorNotEqual(const QTextFrame__iterator* self, QTextFrame__iterator* o);
QTextFrame__iterator* QTextFrame__iterator_operatorPlusPlus(QTextFrame__iterator* self);
QTextFrame__iterator* QTextFrame__iterator_operatorPlusPlusWithInt(QTextFrame__iterator* self, int param1);
QTextFrame__iterator* QTextFrame__iterator_operatorMinusMinus(QTextFrame__iterator* self);
QTextFrame__iterator* QTextFrame__iterator_operatorMinusMinusWithInt(QTextFrame__iterator* self, int param1);
void QTextFrame__iterator_delete(QTextFrame__iterator* self);

QTextBlock__iterator* QTextBlock__iterator_new();
QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* param1);
QTextFragment* QTextBlock__iterator_fragment(const QTextBlock__iterator* self);
bool QTextBlock__iterator_atEnd(const QTextBlock__iterator* self);
bool QTextBlock__iterator_operatorEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o);
bool QTextBlock__iterator_operatorNotEqual(const QTextBlock__iterator* self, QTextBlock__iterator* o);
QTextBlock__iterator* QTextBlock__iterator_operatorPlusPlus(QTextBlock__iterator* self);
QTextBlock__iterator* QTextBlock__iterator_operatorPlusPlusWithInt(QTextBlock__iterator* self, int param1);
QTextBlock__iterator* QTextBlock__iterator_operatorMinusMinus(QTextBlock__iterator* self);
QTextBlock__iterator* QTextBlock__iterator_operatorMinusMinusWithInt(QTextBlock__iterator* self, int param1);
void QTextBlock__iterator_delete(QTextBlock__iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
