#include <QByteArray>
#include <QColor>
#include <QFont>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qsciscintilla.h>
#include "gen_qsciscintilla.h"
#include "_cgo_export.h"

QsciScintilla* QsciScintilla_new() {
	return new QsciScintilla();
}

QsciScintilla* QsciScintilla_new2(QWidget* parent) {
	return new QsciScintilla(parent);
}

QMetaObject* QsciScintilla_MetaObject(const QsciScintilla* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintilla_Metacast(QsciScintilla* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintilla_Tr(const char* s) {
	QString _ret = QsciScintilla::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_TrUtf8(const char* s) {
	QString _ret = QsciScintilla::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array* QsciScintilla_ApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
	QStringList _ret = self->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QsciScintilla_Annotate(QsciScintilla* self, int line, struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->annotate(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_Annotate2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->annotate(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_Annotate3(QsciScintilla* self, int line, QsciStyledText* text) {
	self->annotate(static_cast<int>(line), *text);
}

struct miqt_string QsciScintilla_Annotation(const QsciScintilla* self, int line) {
	QString _ret = self->annotation(static_cast<int>(line));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciScintilla_AnnotationDisplay(const QsciScintilla* self) {
	QsciScintilla::AnnotationDisplay _ret = self->annotationDisplay();
	return static_cast<int>(_ret);
}

void QsciScintilla_ClearAnnotations(QsciScintilla* self) {
	self->clearAnnotations();
}

bool QsciScintilla_AutoCompletionCaseSensitivity(const QsciScintilla* self) {
	return self->autoCompletionCaseSensitivity();
}

bool QsciScintilla_AutoCompletionFillupsEnabled(const QsciScintilla* self) {
	return self->autoCompletionFillupsEnabled();
}

bool QsciScintilla_AutoCompletionReplaceWord(const QsciScintilla* self) {
	return self->autoCompletionReplaceWord();
}

bool QsciScintilla_AutoCompletionShowSingle(const QsciScintilla* self) {
	return self->autoCompletionShowSingle();
}

int QsciScintilla_AutoCompletionSource(const QsciScintilla* self) {
	QsciScintilla::AutoCompletionSource _ret = self->autoCompletionSource();
	return static_cast<int>(_ret);
}

int QsciScintilla_AutoCompletionThreshold(const QsciScintilla* self) {
	return self->autoCompletionThreshold();
}

int QsciScintilla_AutoCompletionUseSingle(const QsciScintilla* self) {
	QsciScintilla::AutoCompletionUseSingle _ret = self->autoCompletionUseSingle();
	return static_cast<int>(_ret);
}

bool QsciScintilla_AutoIndent(const QsciScintilla* self) {
	return self->autoIndent();
}

bool QsciScintilla_BackspaceUnindents(const QsciScintilla* self) {
	return self->backspaceUnindents();
}

void QsciScintilla_BeginUndoAction(QsciScintilla* self) {
	self->beginUndoAction();
}

int QsciScintilla_BraceMatching(const QsciScintilla* self) {
	QsciScintilla::BraceMatch _ret = self->braceMatching();
	return static_cast<int>(_ret);
}

struct miqt_string QsciScintilla_Bytes(const QsciScintilla* self, int start, int end) {
	QByteArray _qb = self->bytes(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QsciScintilla_CallTipsPosition(const QsciScintilla* self) {
	QsciScintilla::CallTipsPosition _ret = self->callTipsPosition();
	return static_cast<int>(_ret);
}

int QsciScintilla_CallTipsStyle(const QsciScintilla* self) {
	QsciScintilla::CallTipsStyle _ret = self->callTipsStyle();
	return static_cast<int>(_ret);
}

int QsciScintilla_CallTipsVisible(const QsciScintilla* self) {
	return self->callTipsVisible();
}

void QsciScintilla_CancelFind(QsciScintilla* self) {
	self->cancelFind();
}

void QsciScintilla_CancelList(QsciScintilla* self) {
	self->cancelList();
}

bool QsciScintilla_CaseSensitive(const QsciScintilla* self) {
	return self->caseSensitive();
}

void QsciScintilla_ClearFolds(QsciScintilla* self) {
	self->clearFolds();
}

void QsciScintilla_ClearIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
	self->clearIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearRegisteredImages(QsciScintilla* self) {
	self->clearRegisteredImages();
}

QColor* QsciScintilla_Color(const QsciScintilla* self) {
	return new QColor(self->color());
}

struct miqt_array* QsciScintilla_ContractedFolds(const QsciScintilla* self) {
	QList<int> _ret = self->contractedFolds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QsciScintilla_ConvertEols(QsciScintilla* self, int mode) {
	self->convertEols(static_cast<QsciScintilla::EolMode>(mode));
}

QMenu* QsciScintilla_CreateStandardContextMenu(QsciScintilla* self) {
	return self->createStandardContextMenu();
}

QsciDocument* QsciScintilla_Document(const QsciScintilla* self) {
	return new QsciDocument(self->document());
}

void QsciScintilla_EndUndoAction(QsciScintilla* self) {
	self->endUndoAction();
}

QColor* QsciScintilla_EdgeColor(const QsciScintilla* self) {
	return new QColor(self->edgeColor());
}

int QsciScintilla_EdgeColumn(const QsciScintilla* self) {
	return self->edgeColumn();
}

int QsciScintilla_EdgeMode(const QsciScintilla* self) {
	QsciScintilla::EdgeMode _ret = self->edgeMode();
	return static_cast<int>(_ret);
}

void QsciScintilla_SetFont(QsciScintilla* self, QFont* f) {
	self->setFont(*f);
}

int QsciScintilla_EolMode(const QsciScintilla* self) {
	QsciScintilla::EolMode _ret = self->eolMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_EolVisibility(const QsciScintilla* self) {
	return self->eolVisibility();
}

int QsciScintilla_ExtraAscent(const QsciScintilla* self) {
	return self->extraAscent();
}

int QsciScintilla_ExtraDescent(const QsciScintilla* self) {
	return self->extraDescent();
}

void QsciScintilla_FillIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
	self->fillIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

bool QsciScintilla_FindFirst(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap);
}

bool QsciScintilla_FindFirstInSelection(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo);
}

bool QsciScintilla_FindNext(QsciScintilla* self) {
	return self->findNext();
}

bool QsciScintilla_FindMatchingBrace(QsciScintilla* self, long* brace, long* other, int mode) {
	return self->findMatchingBrace(static_cast<long&>(*brace), static_cast<long&>(*other), static_cast<QsciScintilla::BraceMatch>(mode));
}

int QsciScintilla_FirstVisibleLine(const QsciScintilla* self) {
	return self->firstVisibleLine();
}

int QsciScintilla_Folding(const QsciScintilla* self) {
	QsciScintilla::FoldStyle _ret = self->folding();
	return static_cast<int>(_ret);
}

void QsciScintilla_GetCursorPosition(const QsciScintilla* self, int* line, int* index) {
	self->getCursorPosition(static_cast<int*>(line), static_cast<int*>(index));
}

void QsciScintilla_GetSelection(const QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo) {
	self->getSelection(static_cast<int*>(lineFrom), static_cast<int*>(indexFrom), static_cast<int*>(lineTo), static_cast<int*>(indexTo));
}

bool QsciScintilla_HasSelectedText(const QsciScintilla* self) {
	return self->hasSelectedText();
}

int QsciScintilla_Indentation(const QsciScintilla* self, int line) {
	return self->indentation(static_cast<int>(line));
}

bool QsciScintilla_IndentationGuides(const QsciScintilla* self) {
	return self->indentationGuides();
}

bool QsciScintilla_IndentationsUseTabs(const QsciScintilla* self) {
	return self->indentationsUseTabs();
}

int QsciScintilla_IndentationWidth(const QsciScintilla* self) {
	return self->indentationWidth();
}

int QsciScintilla_IndicatorDefine(QsciScintilla* self, int style) {
	return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style));
}

bool QsciScintilla_IndicatorDrawUnder(const QsciScintilla* self, int indicatorNumber) {
	return self->indicatorDrawUnder(static_cast<int>(indicatorNumber));
}

bool QsciScintilla_IsCallTipActive(const QsciScintilla* self) {
	return self->isCallTipActive();
}

bool QsciScintilla_IsListActive(const QsciScintilla* self) {
	return self->isListActive();
}

bool QsciScintilla_IsModified(const QsciScintilla* self) {
	return self->isModified();
}

bool QsciScintilla_IsReadOnly(const QsciScintilla* self) {
	return self->isReadOnly();
}

bool QsciScintilla_IsRedoAvailable(const QsciScintilla* self) {
	return self->isRedoAvailable();
}

bool QsciScintilla_IsUndoAvailable(const QsciScintilla* self) {
	return self->isUndoAvailable();
}

bool QsciScintilla_IsUtf8(const QsciScintilla* self) {
	return self->isUtf8();
}

bool QsciScintilla_IsWordCharacter(const QsciScintilla* self, char ch) {
	return self->isWordCharacter(static_cast<char>(ch));
}

int QsciScintilla_LineAt(const QsciScintilla* self, QPoint* point) {
	return self->lineAt(*point);
}

void QsciScintilla_LineIndexFromPosition(const QsciScintilla* self, int position, int* line, int* index) {
	self->lineIndexFromPosition(static_cast<int>(position), static_cast<int*>(line), static_cast<int*>(index));
}

int QsciScintilla_LineLength(const QsciScintilla* self, int line) {
	return self->lineLength(static_cast<int>(line));
}

int QsciScintilla_Lines(const QsciScintilla* self) {
	return self->lines();
}

int QsciScintilla_Length(const QsciScintilla* self) {
	return self->length();
}

QsciLexer* QsciScintilla_Lexer(const QsciScintilla* self) {
	return self->lexer();
}

QColor* QsciScintilla_MarginBackgroundColor(const QsciScintilla* self, int margin) {
	return new QColor(self->marginBackgroundColor(static_cast<int>(margin)));
}

bool QsciScintilla_MarginLineNumbers(const QsciScintilla* self, int margin) {
	return self->marginLineNumbers(static_cast<int>(margin));
}

int QsciScintilla_MarginMarkerMask(const QsciScintilla* self, int margin) {
	return self->marginMarkerMask(static_cast<int>(margin));
}

int QsciScintilla_MarginOptions(const QsciScintilla* self) {
	return self->marginOptions();
}

bool QsciScintilla_MarginSensitivity(const QsciScintilla* self, int margin) {
	return self->marginSensitivity(static_cast<int>(margin));
}

int QsciScintilla_MarginType(const QsciScintilla* self, int margin) {
	QsciScintilla::MarginType _ret = self->marginType(static_cast<int>(margin));
	return static_cast<int>(_ret);
}

int QsciScintilla_MarginWidth(const QsciScintilla* self, int margin) {
	return self->marginWidth(static_cast<int>(margin));
}

int QsciScintilla_Margins(const QsciScintilla* self) {
	return self->margins();
}

int QsciScintilla_MarkerDefine(QsciScintilla* self, int sym) {
	return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym));
}

int QsciScintilla_MarkerDefineWithCh(QsciScintilla* self, char ch) {
	return self->markerDefine(static_cast<char>(ch));
}

int QsciScintilla_MarkerDefineWithPm(QsciScintilla* self, QPixmap* pm) {
	return self->markerDefine(*pm);
}

int QsciScintilla_MarkerDefineWithIm(QsciScintilla* self, QImage* im) {
	return self->markerDefine(*im);
}

int QsciScintilla_MarkerAdd(QsciScintilla* self, int linenr, int markerNumber) {
	return self->markerAdd(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

unsigned int QsciScintilla_MarkersAtLine(const QsciScintilla* self, int linenr) {
	return self->markersAtLine(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDelete(QsciScintilla* self, int linenr) {
	self->markerDelete(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDeleteAll(QsciScintilla* self) {
	self->markerDeleteAll();
}

void QsciScintilla_MarkerDeleteHandle(QsciScintilla* self, int mhandle) {
	self->markerDeleteHandle(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerLine(const QsciScintilla* self, int mhandle) {
	return self->markerLine(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerFindNext(const QsciScintilla* self, int linenr, unsigned int mask) {
	return self->markerFindNext(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

int QsciScintilla_MarkerFindPrevious(const QsciScintilla* self, int linenr, unsigned int mask) {
	return self->markerFindPrevious(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

bool QsciScintilla_OverwriteMode(const QsciScintilla* self) {
	return self->overwriteMode();
}

QColor* QsciScintilla_Paper(const QsciScintilla* self) {
	return new QColor(self->paper());
}

int QsciScintilla_PositionFromLineIndex(const QsciScintilla* self, int line, int index) {
	return self->positionFromLineIndex(static_cast<int>(line), static_cast<int>(index));
}

bool QsciScintilla_Read(QsciScintilla* self, QIODevice* io) {
	return self->read(io);
}

void QsciScintilla_Recolor(QsciScintilla* self) {
	self->recolor();
}

void QsciScintilla_RegisterImage(QsciScintilla* self, int id, QPixmap* pm) {
	self->registerImage(static_cast<int>(id), *pm);
}

void QsciScintilla_RegisterImage2(QsciScintilla* self, int id, QImage* im) {
	self->registerImage(static_cast<int>(id), *im);
}

void QsciScintilla_Replace(QsciScintilla* self, struct miqt_string replaceStr) {
	QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
	self->replace(replaceStr_QString);
}

void QsciScintilla_ResetFoldMarginColors(QsciScintilla* self) {
	self->resetFoldMarginColors();
}

void QsciScintilla_ResetHotspotBackgroundColor(QsciScintilla* self) {
	self->resetHotspotBackgroundColor();
}

void QsciScintilla_ResetHotspotForegroundColor(QsciScintilla* self) {
	self->resetHotspotForegroundColor();
}

int QsciScintilla_ScrollWidth(const QsciScintilla* self) {
	return self->scrollWidth();
}

bool QsciScintilla_ScrollWidthTracking(const QsciScintilla* self) {
	return self->scrollWidthTracking();
}

void QsciScintilla_SetFoldMarginColors(QsciScintilla* self, QColor* fore, QColor* back) {
	self->setFoldMarginColors(*fore, *back);
}

void QsciScintilla_SetAnnotationDisplay(QsciScintilla* self, int display) {
	self->setAnnotationDisplay(static_cast<QsciScintilla::AnnotationDisplay>(display));
}

void QsciScintilla_SetAutoCompletionFillupsEnabled(QsciScintilla* self, bool enabled) {
	self->setAutoCompletionFillupsEnabled(enabled);
}

void QsciScintilla_SetAutoCompletionFillups(QsciScintilla* self, const char* fillups) {
	self->setAutoCompletionFillups(fillups);
}

void QsciScintilla_SetAutoCompletionWordSeparators(QsciScintilla* self, struct miqt_array* /* of struct miqt_string */ separators) {
	QStringList separators_QList;
	separators_QList.reserve(separators->len);
	struct miqt_string* separators_arr = static_cast<struct miqt_string*>(separators->data);
	for(size_t i = 0; i < separators->len; ++i) {
		QString separators_arr_i_QString = QString::fromUtf8(separators_arr[i].data, separators_arr[i].len);
		separators_QList.push_back(separators_arr_i_QString);
	}
	self->setAutoCompletionWordSeparators(separators_QList);
}

void QsciScintilla_SetCallTipsBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsBackgroundColor(*col);
}

void QsciScintilla_SetCallTipsForegroundColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsForegroundColor(*col);
}

void QsciScintilla_SetCallTipsHighlightColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsHighlightColor(*col);
}

void QsciScintilla_SetCallTipsPosition(QsciScintilla* self, int position) {
	self->setCallTipsPosition(static_cast<QsciScintilla::CallTipsPosition>(position));
}

void QsciScintilla_SetCallTipsStyle(QsciScintilla* self, int style) {
	self->setCallTipsStyle(static_cast<QsciScintilla::CallTipsStyle>(style));
}

void QsciScintilla_SetCallTipsVisible(QsciScintilla* self, int nr) {
	self->setCallTipsVisible(static_cast<int>(nr));
}

void QsciScintilla_SetContractedFolds(QsciScintilla* self, struct miqt_array* /* of int */ folds) {
	QList<int> folds_QList;
	folds_QList.reserve(folds->len);
	int* folds_arr = static_cast<int*>(folds->data);
	for(size_t i = 0; i < folds->len; ++i) {
		folds_QList.push_back(static_cast<int>(folds_arr[i]));
	}
	self->setContractedFolds(folds_QList);
}

void QsciScintilla_SetDocument(QsciScintilla* self, QsciDocument* document) {
	self->setDocument(*document);
}

void QsciScintilla_AddEdgeColumn(QsciScintilla* self, int colnr, QColor* col) {
	self->addEdgeColumn(static_cast<int>(colnr), *col);
}

void QsciScintilla_ClearEdgeColumns(QsciScintilla* self) {
	self->clearEdgeColumns();
}

void QsciScintilla_SetEdgeColor(QsciScintilla* self, QColor* col) {
	self->setEdgeColor(*col);
}

void QsciScintilla_SetEdgeColumn(QsciScintilla* self, int colnr) {
	self->setEdgeColumn(static_cast<int>(colnr));
}

void QsciScintilla_SetEdgeMode(QsciScintilla* self, int mode) {
	self->setEdgeMode(static_cast<QsciScintilla::EdgeMode>(mode));
}

void QsciScintilla_SetFirstVisibleLine(QsciScintilla* self, int linenr) {
	self->setFirstVisibleLine(static_cast<int>(linenr));
}

void QsciScintilla_SetIndicatorDrawUnder(QsciScintilla* self, bool under) {
	self->setIndicatorDrawUnder(under);
}

void QsciScintilla_SetIndicatorForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorHoverForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverStyle(QsciScintilla* self, int style) {
	self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style));
}

void QsciScintilla_SetIndicatorOutlineColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorOutlineColor(*col);
}

void QsciScintilla_SetMarginBackgroundColor(QsciScintilla* self, int margin, QColor* col) {
	self->setMarginBackgroundColor(static_cast<int>(margin), *col);
}

void QsciScintilla_SetMarginOptions(QsciScintilla* self, int options) {
	self->setMarginOptions(static_cast<int>(options));
}

void QsciScintilla_SetMarginText(QsciScintilla* self, int line, struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMarginText(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_SetMarginText2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMarginText(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_SetMarginText3(QsciScintilla* self, int line, QsciStyledText* text) {
	self->setMarginText(static_cast<int>(line), *text);
}

void QsciScintilla_SetMarginType(QsciScintilla* self, int margin, int typeVal) {
	self->setMarginType(static_cast<int>(margin), static_cast<QsciScintilla::MarginType>(typeVal));
}

void QsciScintilla_ClearMarginText(QsciScintilla* self) {
	self->clearMarginText();
}

void QsciScintilla_SetMargins(QsciScintilla* self, int margins) {
	self->setMargins(static_cast<int>(margins));
}

void QsciScintilla_SetMarkerBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMarkerBackgroundColor(*col);
}

void QsciScintilla_SetMarkerForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMarkerForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetMatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
	self->setMatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetMatchedBraceIndicator(QsciScintilla* self) {
	self->resetMatchedBraceIndicator();
}

void QsciScintilla_SetScrollWidth(QsciScintilla* self, int pixelWidth) {
	self->setScrollWidth(static_cast<int>(pixelWidth));
}

void QsciScintilla_SetScrollWidthTracking(QsciScintilla* self, bool enabled) {
	self->setScrollWidthTracking(enabled);
}

void QsciScintilla_SetTabDrawMode(QsciScintilla* self, int mode) {
	self->setTabDrawMode(static_cast<QsciScintilla::TabDrawMode>(mode));
}

void QsciScintilla_SetUnmatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setUnmatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setUnmatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
	self->setUnmatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetUnmatchedBraceIndicator(QsciScintilla* self) {
	self->resetUnmatchedBraceIndicator();
}

void QsciScintilla_SetWrapVisualFlags(QsciScintilla* self, int endFlag) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag));
}

struct miqt_string QsciScintilla_SelectedText(const QsciScintilla* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciScintilla_SelectionToEol(const QsciScintilla* self) {
	return self->selectionToEol();
}

void QsciScintilla_SetHotspotBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setHotspotBackgroundColor(*col);
}

void QsciScintilla_SetHotspotForegroundColor(QsciScintilla* self, QColor* col) {
	self->setHotspotForegroundColor(*col);
}

void QsciScintilla_SetHotspotUnderline(QsciScintilla* self, bool enable) {
	self->setHotspotUnderline(enable);
}

void QsciScintilla_SetHotspotWrap(QsciScintilla* self, bool enable) {
	self->setHotspotWrap(enable);
}

void QsciScintilla_SetSelectionToEol(QsciScintilla* self, bool filled) {
	self->setSelectionToEol(filled);
}

void QsciScintilla_SetExtraAscent(QsciScintilla* self, int extra) {
	self->setExtraAscent(static_cast<int>(extra));
}

void QsciScintilla_SetExtraDescent(QsciScintilla* self, int extra) {
	self->setExtraDescent(static_cast<int>(extra));
}

void QsciScintilla_SetOverwriteMode(QsciScintilla* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

void QsciScintilla_SetWhitespaceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setWhitespaceBackgroundColor(*col);
}

void QsciScintilla_SetWhitespaceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setWhitespaceForegroundColor(*col);
}

void QsciScintilla_SetWhitespaceSize(QsciScintilla* self, int size) {
	self->setWhitespaceSize(static_cast<int>(size));
}

void QsciScintilla_SetWrapIndentMode(QsciScintilla* self, int mode) {
	self->setWrapIndentMode(static_cast<QsciScintilla::WrapIndentMode>(mode));
}

void QsciScintilla_ShowUserList(QsciScintilla* self, int id, struct miqt_array* /* of struct miqt_string */ list) {
	QStringList list_QList;
	list_QList.reserve(list->len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list->data);
	for(size_t i = 0; i < list->len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->showUserList(static_cast<int>(id), list_QList);
}

QsciCommandSet* QsciScintilla_StandardCommands(const QsciScintilla* self) {
	return self->standardCommands();
}

int QsciScintilla_TabDrawMode(const QsciScintilla* self) {
	QsciScintilla::TabDrawMode _ret = self->tabDrawMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_TabIndents(const QsciScintilla* self) {
	return self->tabIndents();
}

int QsciScintilla_TabWidth(const QsciScintilla* self) {
	return self->tabWidth();
}

struct miqt_string QsciScintilla_Text(const QsciScintilla* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_TextWithLine(const QsciScintilla* self, int line) {
	QString _ret = self->text(static_cast<int>(line));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_Text2(const QsciScintilla* self, int start, int end) {
	QString _ret = self->text(static_cast<int>(start), static_cast<int>(end));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciScintilla_TextHeight(const QsciScintilla* self, int linenr) {
	return self->textHeight(static_cast<int>(linenr));
}

int QsciScintilla_WhitespaceSize(const QsciScintilla* self) {
	return self->whitespaceSize();
}

int QsciScintilla_WhitespaceVisibility(const QsciScintilla* self) {
	QsciScintilla::WhitespaceVisibility _ret = self->whitespaceVisibility();
	return static_cast<int>(_ret);
}

struct miqt_string QsciScintilla_WordAtLineIndex(const QsciScintilla* self, int line, int index) {
	QString _ret = self->wordAtLineIndex(static_cast<int>(line), static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_WordAtPoint(const QsciScintilla* self, QPoint* point) {
	QString _ret = self->wordAtPoint(*point);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciScintilla_WordCharacters(const QsciScintilla* self) {
	return (const char*) self->wordCharacters();
}

int QsciScintilla_WrapMode(const QsciScintilla* self) {
	QsciScintilla::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

int QsciScintilla_WrapIndentMode(const QsciScintilla* self) {
	QsciScintilla::WrapIndentMode _ret = self->wrapIndentMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_Write(const QsciScintilla* self, QIODevice* io) {
	return self->write(io);
}

void QsciScintilla_Append(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->append(text_QString);
}

void QsciScintilla_AutoCompleteFromAll(QsciScintilla* self) {
	self->autoCompleteFromAll();
}

void QsciScintilla_AutoCompleteFromAPIs(QsciScintilla* self) {
	self->autoCompleteFromAPIs();
}

void QsciScintilla_AutoCompleteFromDocument(QsciScintilla* self) {
	self->autoCompleteFromDocument();
}

void QsciScintilla_CallTip(QsciScintilla* self) {
	self->callTip();
}

void QsciScintilla_Clear(QsciScintilla* self) {
	self->clear();
}

void QsciScintilla_Copy(QsciScintilla* self) {
	self->copy();
}

void QsciScintilla_Cut(QsciScintilla* self) {
	self->cut();
}

void QsciScintilla_EnsureCursorVisible(QsciScintilla* self) {
	self->ensureCursorVisible();
}

void QsciScintilla_EnsureLineVisible(QsciScintilla* self, int line) {
	self->ensureLineVisible(static_cast<int>(line));
}

void QsciScintilla_FoldAll(QsciScintilla* self) {
	self->foldAll();
}

void QsciScintilla_FoldLine(QsciScintilla* self, int line) {
	self->foldLine(static_cast<int>(line));
}

void QsciScintilla_Indent(QsciScintilla* self, int line) {
	self->indent(static_cast<int>(line));
}

void QsciScintilla_Insert(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insert(text_QString);
}

void QsciScintilla_InsertAt(QsciScintilla* self, struct miqt_string text, int line, int index) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_MoveToMatchingBrace(QsciScintilla* self) {
	self->moveToMatchingBrace();
}

void QsciScintilla_Paste(QsciScintilla* self) {
	self->paste();
}

void QsciScintilla_Redo(QsciScintilla* self) {
	self->redo();
}

void QsciScintilla_RemoveSelectedText(QsciScintilla* self) {
	self->removeSelectedText();
}

void QsciScintilla_ReplaceSelectedText(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->replaceSelectedText(text_QString);
}

void QsciScintilla_ResetSelectionBackgroundColor(QsciScintilla* self) {
	self->resetSelectionBackgroundColor();
}

void QsciScintilla_ResetSelectionForegroundColor(QsciScintilla* self) {
	self->resetSelectionForegroundColor();
}

void QsciScintilla_SelectAll(QsciScintilla* self) {
	self->selectAll();
}

void QsciScintilla_SelectToMatchingBrace(QsciScintilla* self) {
	self->selectToMatchingBrace();
}

void QsciScintilla_SetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
	self->setAutoCompletionCaseSensitivity(cs);
}

void QsciScintilla_SetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
	self->setAutoCompletionReplaceWord(replace);
}

void QsciScintilla_SetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
	self->setAutoCompletionShowSingle(single);
}

void QsciScintilla_SetAutoCompletionSource(QsciScintilla* self, int source) {
	self->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
}

void QsciScintilla_SetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
	self->setAutoCompletionThreshold(static_cast<int>(thresh));
}

void QsciScintilla_SetAutoCompletionUseSingle(QsciScintilla* self, int single) {
	self->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
}

void QsciScintilla_SetAutoIndent(QsciScintilla* self, bool autoindent) {
	self->setAutoIndent(autoindent);
}

void QsciScintilla_SetBraceMatching(QsciScintilla* self, int bm) {
	self->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
}

void QsciScintilla_SetBackspaceUnindents(QsciScintilla* self, bool unindent) {
	self->setBackspaceUnindents(unindent);
}

void QsciScintilla_SetCaretForegroundColor(QsciScintilla* self, QColor* col) {
	self->setCaretForegroundColor(*col);
}

void QsciScintilla_SetCaretLineBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setCaretLineBackgroundColor(*col);
}

void QsciScintilla_SetCaretLineFrameWidth(QsciScintilla* self, int width) {
	self->setCaretLineFrameWidth(static_cast<int>(width));
}

void QsciScintilla_SetCaretLineVisible(QsciScintilla* self, bool enable) {
	self->setCaretLineVisible(enable);
}

void QsciScintilla_SetCaretWidth(QsciScintilla* self, int width) {
	self->setCaretWidth(static_cast<int>(width));
}

void QsciScintilla_SetColor(QsciScintilla* self, QColor* c) {
	self->setColor(*c);
}

void QsciScintilla_SetCursorPosition(QsciScintilla* self, int line, int index) {
	self->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_SetEolMode(QsciScintilla* self, int mode) {
	self->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
}

void QsciScintilla_SetEolVisibility(QsciScintilla* self, bool visible) {
	self->setEolVisibility(visible);
}

void QsciScintilla_SetFolding(QsciScintilla* self, int fold) {
	self->setFolding(static_cast<QsciScintilla::FoldStyle>(fold));
}

void QsciScintilla_SetIndentation(QsciScintilla* self, int line, int indentation) {
	self->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
}

void QsciScintilla_SetIndentationGuides(QsciScintilla* self, bool enable) {
	self->setIndentationGuides(enable);
}

void QsciScintilla_SetIndentationGuidesBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setIndentationGuidesBackgroundColor(*col);
}

void QsciScintilla_SetIndentationGuidesForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndentationGuidesForegroundColor(*col);
}

void QsciScintilla_SetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
	self->setIndentationsUseTabs(tabs);
}

void QsciScintilla_SetIndentationWidth(QsciScintilla* self, int width) {
	self->setIndentationWidth(static_cast<int>(width));
}

void QsciScintilla_SetLexer(QsciScintilla* self) {
	self->setLexer();
}

void QsciScintilla_SetMarginsBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMarginsBackgroundColor(*col);
}

void QsciScintilla_SetMarginsFont(QsciScintilla* self, QFont* f) {
	self->setMarginsFont(*f);
}

void QsciScintilla_SetMarginsForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMarginsForegroundColor(*col);
}

void QsciScintilla_SetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
	self->setMarginLineNumbers(static_cast<int>(margin), lnrs);
}

void QsciScintilla_SetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
	self->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
}

void QsciScintilla_SetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
	self->setMarginSensitivity(static_cast<int>(margin), sens);
}

void QsciScintilla_SetMarginWidth(QsciScintilla* self, int margin, int width) {
	self->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
}

void QsciScintilla_SetMarginWidth2(QsciScintilla* self, int margin, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->setMarginWidth(static_cast<int>(margin), s_QString);
}

void QsciScintilla_SetModified(QsciScintilla* self, bool m) {
	self->setModified(m);
}

void QsciScintilla_SetPaper(QsciScintilla* self, QColor* c) {
	self->setPaper(*c);
}

void QsciScintilla_SetReadOnly(QsciScintilla* self, bool ro) {
	self->setReadOnly(ro);
}

void QsciScintilla_SetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
	self->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
}

void QsciScintilla_SetSelectionBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setSelectionBackgroundColor(*col);
}

void QsciScintilla_SetSelectionForegroundColor(QsciScintilla* self, QColor* col) {
	self->setSelectionForegroundColor(*col);
}

void QsciScintilla_SetTabIndents(QsciScintilla* self, bool indent) {
	self->setTabIndents(indent);
}

void QsciScintilla_SetTabWidth(QsciScintilla* self, int width) {
	self->setTabWidth(static_cast<int>(width));
}

void QsciScintilla_SetText(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QsciScintilla_SetUtf8(QsciScintilla* self, bool cp) {
	self->setUtf8(cp);
}

void QsciScintilla_SetWhitespaceVisibility(QsciScintilla* self, int mode) {
	self->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
}

void QsciScintilla_SetWrapMode(QsciScintilla* self, int mode) {
	self->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
}

void QsciScintilla_Undo(QsciScintilla* self) {
	self->undo();
}

void QsciScintilla_Unindent(QsciScintilla* self, int line) {
	self->unindent(static_cast<int>(line));
}

void QsciScintilla_ZoomIn(QsciScintilla* self, int rangeVal) {
	self->zoomIn(static_cast<int>(rangeVal));
}

void QsciScintilla_ZoomIn2(QsciScintilla* self) {
	self->zoomIn();
}

void QsciScintilla_ZoomOut(QsciScintilla* self, int rangeVal) {
	self->zoomOut(static_cast<int>(rangeVal));
}

void QsciScintilla_ZoomOut2(QsciScintilla* self) {
	self->zoomOut();
}

void QsciScintilla_ZoomTo(QsciScintilla* self, int size) {
	self->zoomTo(static_cast<int>(size));
}

void QsciScintilla_CursorPositionChanged(QsciScintilla* self, int line, int index) {
	self->cursorPositionChanged(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_connect_CursorPositionChanged(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int)>(&QsciScintilla::cursorPositionChanged), self, [=](int line, int index) {
		int sigval1 = line;
		int sigval2 = index;
		miqt_exec_callback_QsciScintilla_CursorPositionChanged(slot, sigval1, sigval2);
	});
}

void QsciScintilla_CopyAvailable(QsciScintilla* self, bool yes) {
	self->copyAvailable(yes);
}

void QsciScintilla_connect_CopyAvailable(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::copyAvailable), self, [=](bool yes) {
		bool sigval1 = yes;
		miqt_exec_callback_QsciScintilla_CopyAvailable(slot, sigval1);
	});
}

void QsciScintilla_IndicatorClicked(QsciScintilla* self, int line, int index, int state) {
	self->indicatorClicked(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_IndicatorClicked(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorClicked), self, [=](int line, int index, Qt::KeyboardModifiers state) {
		int sigval1 = line;
		int sigval2 = index;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_IndicatorClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_IndicatorReleased(QsciScintilla* self, int line, int index, int state) {
	self->indicatorReleased(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_IndicatorReleased(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorReleased), self, [=](int line, int index, Qt::KeyboardModifiers state) {
		int sigval1 = line;
		int sigval2 = index;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_IndicatorReleased(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_LinesChanged(QsciScintilla* self) {
	self->linesChanged();
}

void QsciScintilla_connect_LinesChanged(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::linesChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_LinesChanged(slot);
	});
}

void QsciScintilla_MarginClicked(QsciScintilla* self, int margin, int line, int state) {
	self->marginClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_MarginClicked(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginClicked), self, [=](int margin, int line, Qt::KeyboardModifiers state) {
		int sigval1 = margin;
		int sigval2 = line;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_MarginClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_MarginRightClicked(QsciScintilla* self, int margin, int line, int state) {
	self->marginRightClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_MarginRightClicked(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginRightClicked), self, [=](int margin, int line, Qt::KeyboardModifiers state) {
		int sigval1 = margin;
		int sigval2 = line;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_MarginRightClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_ModificationAttempted(QsciScintilla* self) {
	self->modificationAttempted();
}

void QsciScintilla_connect_ModificationAttempted(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::modificationAttempted), self, [=]() {
		miqt_exec_callback_QsciScintilla_ModificationAttempted(slot);
	});
}

void QsciScintilla_ModificationChanged(QsciScintilla* self, bool m) {
	self->modificationChanged(m);
}

void QsciScintilla_connect_ModificationChanged(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::modificationChanged), self, [=](bool m) {
		bool sigval1 = m;
		miqt_exec_callback_QsciScintilla_ModificationChanged(slot, sigval1);
	});
}

void QsciScintilla_SelectionChanged(QsciScintilla* self) {
	self->selectionChanged();
}

void QsciScintilla_connect_SelectionChanged(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::selectionChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_SelectionChanged(slot);
	});
}

void QsciScintilla_TextChanged(QsciScintilla* self) {
	self->textChanged();
}

void QsciScintilla_connect_TextChanged(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::textChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_TextChanged(slot);
	});
}

void QsciScintilla_UserListActivated(QsciScintilla* self, int id, struct miqt_string stringVal) {
	QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
	self->userListActivated(static_cast<int>(id), stringVal_QString);
}

void QsciScintilla_connect_UserListActivated(QsciScintilla* self, intptr_t slot) {
	QsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, const QString&)>(&QsciScintilla::userListActivated), self, [=](int id, const QString& stringVal) {
		int sigval1 = id;
		const QString stringVal_ret = stringVal;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stringVal_b = stringVal_ret.toUtf8();
		struct miqt_string stringVal_ms;
		stringVal_ms.len = stringVal_b.length();
		stringVal_ms.data = static_cast<char*>(malloc(stringVal_ms.len));
		memcpy(stringVal_ms.data, stringVal_b.data(), stringVal_ms.len);
		struct miqt_string sigval2 = stringVal_ms;
		miqt_exec_callback_QsciScintilla_UserListActivated(slot, sigval1, sigval2);
	});
}

struct miqt_string QsciScintilla_Tr2(const char* s, const char* c) {
	QString _ret = QsciScintilla::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciScintilla::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciScintilla::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciScintilla::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciScintilla_ClearAnnotations1(QsciScintilla* self, int line) {
	self->clearAnnotations(static_cast<int>(line));
}

bool QsciScintilla_FindFirst6(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward);
}

bool QsciScintilla_FindFirst7(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line));
}

bool QsciScintilla_FindFirst8(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index));
}

bool QsciScintilla_FindFirst9(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show);
}

bool QsciScintilla_FindFirst10(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix);
}

bool QsciScintilla_FindFirst11(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
}

bool QsciScintilla_FindFirstInSelection5(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo, forward);
}

bool QsciScintilla_FindFirstInSelection6(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show);
}

bool QsciScintilla_FindFirstInSelection7(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix);
}

bool QsciScintilla_FindFirstInSelection8(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
}

int QsciScintilla_IndicatorDefine2(QsciScintilla* self, int style, int indicatorNumber) {
	return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

int QsciScintilla_MarkerDefine2(QsciScintilla* self, int sym, int markerNumber) {
	return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine22(QsciScintilla* self, char ch, int markerNumber) {
	return self->markerDefine(static_cast<char>(ch), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine23(QsciScintilla* self, QPixmap* pm, int markerNumber) {
	return self->markerDefine(*pm, static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine24(QsciScintilla* self, QImage* im, int markerNumber) {
	return self->markerDefine(*im, static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDelete2(QsciScintilla* self, int linenr, int markerNumber) {
	self->markerDelete(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDeleteAll1(QsciScintilla* self, int markerNumber) {
	self->markerDeleteAll(static_cast<int>(markerNumber));
}

void QsciScintilla_Recolor1(QsciScintilla* self, int start) {
	self->recolor(static_cast<int>(start));
}

void QsciScintilla_Recolor2(QsciScintilla* self, int start, int end) {
	self->recolor(static_cast<int>(start), static_cast<int>(end));
}

void QsciScintilla_SetIndicatorDrawUnder2(QsciScintilla* self, bool under, int indicatorNumber) {
	self->setIndicatorDrawUnder(under, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorHoverForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverStyle2(QsciScintilla* self, int style, int indicatorNumber) {
	self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorOutlineColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorOutlineColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearMarginText1(QsciScintilla* self, int line) {
	self->clearMarginText(static_cast<int>(line));
}

void QsciScintilla_SetMarkerBackgroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
	self->setMarkerBackgroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetMarkerForegroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
	self->setMarkerForegroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetWrapVisualFlags2(QsciScintilla* self, int endFlag, int startFlag) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag));
}

void QsciScintilla_SetWrapVisualFlags3(QsciScintilla* self, int endFlag, int startFlag, int indent) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag), static_cast<int>(indent));
}

void QsciScintilla_FoldAll1(QsciScintilla* self, bool children) {
	self->foldAll(children);
}

void QsciScintilla_SelectAll1(QsciScintilla* self, bool selectVal) {
	self->selectAll(selectVal);
}

void QsciScintilla_SetFolding2(QsciScintilla* self, int fold, int margin) {
	self->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
}

void QsciScintilla_SetLexer1(QsciScintilla* self, QsciLexer* lexer) {
	self->setLexer(lexer);
}

void QsciScintilla_Delete(QsciScintilla* self) {
	delete self;
}

