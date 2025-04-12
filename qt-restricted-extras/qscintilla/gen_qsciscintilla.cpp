#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIODevice>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMenu>
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
#include <QPixmap>
#include <QPoint>
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
#include <qsciscintilla.h>
#include "gen_qsciscintilla.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciScintilla_cursorPositionChanged(intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_copyAvailable(intptr_t, bool);
void miqt_exec_callback_QsciScintilla_indicatorClicked(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_indicatorReleased(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_linesChanged(intptr_t);
void miqt_exec_callback_QsciScintilla_marginClicked(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_marginRightClicked(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_modificationAttempted(intptr_t);
void miqt_exec_callback_QsciScintilla_modificationChanged(intptr_t, bool);
void miqt_exec_callback_QsciScintilla_selectionChanged(intptr_t);
void miqt_exec_callback_QsciScintilla_textChanged(intptr_t);
void miqt_exec_callback_QsciScintilla_userListActivated(intptr_t, int, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciScintilla_apiContext(QsciScintilla*, intptr_t, int, int*, int*);
bool miqt_exec_callback_QsciScintilla_findFirst(QsciScintilla*, intptr_t, struct miqt_string, bool, bool, bool, bool, bool, int, int, bool, bool, bool);
bool miqt_exec_callback_QsciScintilla_findFirstInSelection(QsciScintilla*, intptr_t, struct miqt_string, bool, bool, bool, bool, bool, bool, bool);
bool miqt_exec_callback_QsciScintilla_findNext(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_recolor(QsciScintilla*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_replace(QsciScintilla*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_append(QsciScintilla*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_autoCompleteFromAll(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_autoCompleteFromAPIs(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_autoCompleteFromDocument(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_callTip(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_clear(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_copy(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_cut(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_ensureCursorVisible(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_ensureLineVisible(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_foldAll(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_foldLine(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_indent(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_insert(QsciScintilla*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_insertAt(QsciScintilla*, intptr_t, struct miqt_string, int, int);
void miqt_exec_callback_QsciScintilla_moveToMatchingBrace(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_paste(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_redo(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_removeSelectedText(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_replaceSelectedText(QsciScintilla*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_resetSelectionBackgroundColor(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_resetSelectionForegroundColor(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_selectAll(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_selectToMatchingBrace(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_setAutoCompletionCaseSensitivity(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setAutoCompletionReplaceWord(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setAutoCompletionShowSingle(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setAutoCompletionSource(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setAutoCompletionThreshold(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setAutoCompletionUseSingle(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setAutoIndent(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setBraceMatching(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setBackspaceUnindents(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setCaretForegroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setCaretLineBackgroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setCaretLineFrameWidth(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setCaretLineVisible(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setCaretWidth(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setCursorPosition(QsciScintilla*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_setEolMode(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setEolVisibility(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setFolding(QsciScintilla*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_setIndentation(QsciScintilla*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_setIndentationGuides(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setIndentationGuidesBackgroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setIndentationGuidesForegroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setIndentationsUseTabs(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setIndentationWidth(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setLexer(QsciScintilla*, intptr_t, QsciLexer*);
void miqt_exec_callback_QsciScintilla_setMarginsBackgroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setMarginsFont(QsciScintilla*, intptr_t, QFont*);
void miqt_exec_callback_QsciScintilla_setMarginsForegroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setMarginLineNumbers(QsciScintilla*, intptr_t, int, bool);
void miqt_exec_callback_QsciScintilla_setMarginMarkerMask(QsciScintilla*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_setMarginSensitivity(QsciScintilla*, intptr_t, int, bool);
void miqt_exec_callback_QsciScintilla_setMarginWidth(QsciScintilla*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_setMarginWidth2(QsciScintilla*, intptr_t, int, struct miqt_string);
void miqt_exec_callback_QsciScintilla_setModified(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setPaper(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setReadOnly(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setSelection(QsciScintilla*, intptr_t, int, int, int, int);
void miqt_exec_callback_QsciScintilla_setSelectionBackgroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setSelectionForegroundColor(QsciScintilla*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_setTabIndents(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setTabWidth(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setText(QsciScintilla*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_setUtf8(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_setWhitespaceVisibility(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_setWrapMode(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_undo(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_unindent(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_zoomIn(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_zoomIn2(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_zoomOut(QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_zoomOut2(QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_zoomTo(QsciScintilla*, intptr_t, int);
bool miqt_exec_callback_QsciScintilla_event(QsciScintilla*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_changeEvent(QsciScintilla*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_contextMenuEvent(QsciScintilla*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QsciScintilla_wheelEvent(QsciScintilla*, intptr_t, QWheelEvent*);
bool miqt_exec_callback_QsciScintilla_canInsertFromMimeData(const QsciScintilla*, intptr_t, QMimeData*);
struct miqt_string miqt_exec_callback_QsciScintilla_fromMimeData(const QsciScintilla*, intptr_t, QMimeData*, bool*);
QMimeData* miqt_exec_callback_QsciScintilla_toMimeData(const QsciScintilla*, intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QsciScintilla_dragEnterEvent(QsciScintilla*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QsciScintilla_dragLeaveEvent(QsciScintilla*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QsciScintilla_dragMoveEvent(QsciScintilla*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QsciScintilla_dropEvent(QsciScintilla*, intptr_t, QDropEvent*);
void miqt_exec_callback_QsciScintilla_focusInEvent(QsciScintilla*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QsciScintilla_focusOutEvent(QsciScintilla*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QsciScintilla_focusNextPrevChild(QsciScintilla*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_keyPressEvent(QsciScintilla*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintilla_inputMethodEvent(QsciScintilla*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QsciScintilla_inputMethodQuery(const QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_mouseDoubleClickEvent(QsciScintilla*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_mouseMoveEvent(QsciScintilla*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_mousePressEvent(QsciScintilla*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_mouseReleaseEvent(QsciScintilla*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_paintEvent(QsciScintilla*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QsciScintilla_resizeEvent(QsciScintilla*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QsciScintilla_scrollContentsBy(QsciScintilla*, intptr_t, int, int);
QSize* miqt_exec_callback_QsciScintilla_minimumSizeHint(const QsciScintilla*, intptr_t);
QSize* miqt_exec_callback_QsciScintilla_sizeHint(const QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_setupViewport(QsciScintilla*, intptr_t, QWidget*);
bool miqt_exec_callback_QsciScintilla_eventFilter(QsciScintilla*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QsciScintilla_viewportEvent(QsciScintilla*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QsciScintilla_viewportSizeHint(const QsciScintilla*, intptr_t);
int miqt_exec_callback_QsciScintilla_devType(const QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_setVisible(QsciScintilla*, intptr_t, bool);
int miqt_exec_callback_QsciScintilla_heightForWidth(const QsciScintilla*, intptr_t, int);
bool miqt_exec_callback_QsciScintilla_hasHeightForWidth(const QsciScintilla*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciScintilla_paintEngine(const QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_keyReleaseEvent(QsciScintilla*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintilla_enterEvent(QsciScintilla*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_leaveEvent(QsciScintilla*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_moveEvent(QsciScintilla*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QsciScintilla_closeEvent(QsciScintilla*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QsciScintilla_tabletEvent(QsciScintilla*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QsciScintilla_actionEvent(QsciScintilla*, intptr_t, QActionEvent*);
void miqt_exec_callback_QsciScintilla_showEvent(QsciScintilla*, intptr_t, QShowEvent*);
void miqt_exec_callback_QsciScintilla_hideEvent(QsciScintilla*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QsciScintilla_nativeEvent(QsciScintilla*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QsciScintilla_metric(const QsciScintilla*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_initPainter(const QsciScintilla*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciScintilla_redirected(const QsciScintilla*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciScintilla_sharedPainter(const QsciScintilla*, intptr_t);
void miqt_exec_callback_QsciScintilla_timerEvent(QsciScintilla*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciScintilla_childEvent(QsciScintilla*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciScintilla_customEvent(QsciScintilla*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_connectNotify(QsciScintilla*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciScintilla_disconnectNotify(QsciScintilla*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciScintilla final : public QsciScintilla {
public:

	MiqtVirtualQsciScintilla(QWidget* parent): QsciScintilla(parent) {};
	MiqtVirtualQsciScintilla(): QsciScintilla() {};

	virtual ~MiqtVirtualQsciScintilla() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__apiContext = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList apiContext(int pos, int& context_start, int& last_word_start) override {
		if (handle__apiContext == 0) {
			return QsciScintilla::apiContext(pos, context_start, last_word_start);
		}
		
		int sigval1 = pos;
		int* sigval2 = &context_start;
		int* sigval3 = &last_word_start;

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciScintilla_apiContext(this, handle__apiContext, sigval1, sigval2, sigval3);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciScintilla_virtualbase_apiContext(void* self, int pos, int* context_start, int* last_word_start);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__findFirst = 0;

	// Subclass to allow providing a Go implementation
	virtual bool findFirst(const QString& expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) override {
		if (handle__findFirst == 0) {
			return QsciScintilla::findFirst(expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
		}
		
		const QString expr_ret = expr;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray expr_b = expr_ret.toUtf8();
		struct miqt_string expr_ms;
		expr_ms.len = expr_b.length();
		expr_ms.data = static_cast<char*>(malloc(expr_ms.len));
		memcpy(expr_ms.data, expr_b.data(), expr_ms.len);
		struct miqt_string sigval1 = expr_ms;
		bool sigval2 = re;
		bool sigval3 = cs;
		bool sigval4 = wo;
		bool sigval5 = wrap;
		bool sigval6 = forward;
		int sigval7 = line;
		int sigval8 = index;
		bool sigval9 = show;
		bool sigval10 = posix;
		bool sigval11 = cxx11;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_findFirst(this, handle__findFirst, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10, sigval11);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_findFirst(void* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__findFirstInSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual bool findFirstInSelection(const QString& expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) override {
		if (handle__findFirstInSelection == 0) {
			return QsciScintilla::findFirstInSelection(expr, re, cs, wo, forward, show, posix, cxx11);
		}
		
		const QString expr_ret = expr;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray expr_b = expr_ret.toUtf8();
		struct miqt_string expr_ms;
		expr_ms.len = expr_b.length();
		expr_ms.data = static_cast<char*>(malloc(expr_ms.len));
		memcpy(expr_ms.data, expr_b.data(), expr_ms.len);
		struct miqt_string sigval1 = expr_ms;
		bool sigval2 = re;
		bool sigval3 = cs;
		bool sigval4 = wo;
		bool sigval5 = forward;
		bool sigval6 = show;
		bool sigval7 = posix;
		bool sigval8 = cxx11;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_findFirstInSelection(this, handle__findFirstInSelection, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_findFirstInSelection(void* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__findNext = 0;

	// Subclass to allow providing a Go implementation
	virtual bool findNext() override {
		if (handle__findNext == 0) {
			return QsciScintilla::findNext();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciScintilla_findNext(this, handle__findNext);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_findNext(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__recolor = 0;

	// Subclass to allow providing a Go implementation
	virtual void recolor(int start, int end) override {
		if (handle__recolor == 0) {
			QsciScintilla::recolor(start, end);
			return;
		}
		
		int sigval1 = start;
		int sigval2 = end;

		miqt_exec_callback_QsciScintilla_recolor(this, handle__recolor, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_recolor(void* self, int start, int end);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__replace = 0;

	// Subclass to allow providing a Go implementation
	virtual void replace(const QString& replaceStr) override {
		if (handle__replace == 0) {
			QsciScintilla::replace(replaceStr);
			return;
		}
		
		const QString replaceStr_ret = replaceStr;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray replaceStr_b = replaceStr_ret.toUtf8();
		struct miqt_string replaceStr_ms;
		replaceStr_ms.len = replaceStr_b.length();
		replaceStr_ms.data = static_cast<char*>(malloc(replaceStr_ms.len));
		memcpy(replaceStr_ms.data, replaceStr_b.data(), replaceStr_ms.len);
		struct miqt_string sigval1 = replaceStr_ms;

		miqt_exec_callback_QsciScintilla_replace(this, handle__replace, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_replace(void* self, struct miqt_string replaceStr);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__append = 0;

	// Subclass to allow providing a Go implementation
	virtual void append(const QString& text) override {
		if (handle__append == 0) {
			QsciScintilla::append(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_append(this, handle__append, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_append(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompleteFromAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompleteFromAll() override {
		if (handle__autoCompleteFromAll == 0) {
			QsciScintilla::autoCompleteFromAll();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_autoCompleteFromAll(this, handle__autoCompleteFromAll);

		
	}

	friend void QsciScintilla_virtualbase_autoCompleteFromAll(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompleteFromAPIs = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompleteFromAPIs() override {
		if (handle__autoCompleteFromAPIs == 0) {
			QsciScintilla::autoCompleteFromAPIs();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_autoCompleteFromAPIs(this, handle__autoCompleteFromAPIs);

		
	}

	friend void QsciScintilla_virtualbase_autoCompleteFromAPIs(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompleteFromDocument = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompleteFromDocument() override {
		if (handle__autoCompleteFromDocument == 0) {
			QsciScintilla::autoCompleteFromDocument();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_autoCompleteFromDocument(this, handle__autoCompleteFromDocument);

		
	}

	friend void QsciScintilla_virtualbase_autoCompleteFromDocument(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__callTip = 0;

	// Subclass to allow providing a Go implementation
	virtual void callTip() override {
		if (handle__callTip == 0) {
			QsciScintilla::callTip();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_callTip(this, handle__callTip);

		
	}

	friend void QsciScintilla_virtualbase_callTip(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QsciScintilla::clear();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_clear(this, handle__clear);

		
	}

	friend void QsciScintilla_virtualbase_clear(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__copy = 0;

	// Subclass to allow providing a Go implementation
	virtual void copy() override {
		if (handle__copy == 0) {
			QsciScintilla::copy();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_copy(this, handle__copy);

		
	}

	friend void QsciScintilla_virtualbase_copy(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__cut = 0;

	// Subclass to allow providing a Go implementation
	virtual void cut() override {
		if (handle__cut == 0) {
			QsciScintilla::cut();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_cut(this, handle__cut);

		
	}

	friend void QsciScintilla_virtualbase_cut(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ensureCursorVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void ensureCursorVisible() override {
		if (handle__ensureCursorVisible == 0) {
			QsciScintilla::ensureCursorVisible();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_ensureCursorVisible(this, handle__ensureCursorVisible);

		
	}

	friend void QsciScintilla_virtualbase_ensureCursorVisible(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ensureLineVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void ensureLineVisible(int line) override {
		if (handle__ensureLineVisible == 0) {
			QsciScintilla::ensureLineVisible(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_ensureLineVisible(this, handle__ensureLineVisible, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_ensureLineVisible(void* self, int line);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__foldAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void foldAll(bool children) override {
		if (handle__foldAll == 0) {
			QsciScintilla::foldAll(children);
			return;
		}
		
		bool sigval1 = children;

		miqt_exec_callback_QsciScintilla_foldAll(this, handle__foldAll, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_foldAll(void* self, bool children);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__foldLine = 0;

	// Subclass to allow providing a Go implementation
	virtual void foldLine(int line) override {
		if (handle__foldLine == 0) {
			QsciScintilla::foldLine(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_foldLine(this, handle__foldLine, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_foldLine(void* self, int line);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indent = 0;

	// Subclass to allow providing a Go implementation
	virtual void indent(int line) override {
		if (handle__indent == 0) {
			QsciScintilla::indent(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_indent(this, handle__indent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_indent(void* self, int line);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insert = 0;

	// Subclass to allow providing a Go implementation
	virtual void insert(const QString& text) override {
		if (handle__insert == 0) {
			QsciScintilla::insert(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_insert(this, handle__insert, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_insert(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertAt(const QString& text, int line, int index) override {
		if (handle__insertAt == 0) {
			QsciScintilla::insertAt(text, line, index);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		int sigval2 = line;
		int sigval3 = index;

		miqt_exec_callback_QsciScintilla_insertAt(this, handle__insertAt, sigval1, sigval2, sigval3);

		
	}

	friend void QsciScintilla_virtualbase_insertAt(void* self, struct miqt_string text, int line, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveToMatchingBrace = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveToMatchingBrace() override {
		if (handle__moveToMatchingBrace == 0) {
			QsciScintilla::moveToMatchingBrace();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_moveToMatchingBrace(this, handle__moveToMatchingBrace);

		
	}

	friend void QsciScintilla_virtualbase_moveToMatchingBrace(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paste = 0;

	// Subclass to allow providing a Go implementation
	virtual void paste() override {
		if (handle__paste == 0) {
			QsciScintilla::paste();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_paste(this, handle__paste);

		
	}

	friend void QsciScintilla_virtualbase_paste(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redo = 0;

	// Subclass to allow providing a Go implementation
	virtual void redo() override {
		if (handle__redo == 0) {
			QsciScintilla::redo();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_redo(this, handle__redo);

		
	}

	friend void QsciScintilla_virtualbase_redo(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeSelectedText = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeSelectedText() override {
		if (handle__removeSelectedText == 0) {
			QsciScintilla::removeSelectedText();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_removeSelectedText(this, handle__removeSelectedText);

		
	}

	friend void QsciScintilla_virtualbase_removeSelectedText(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__replaceSelectedText = 0;

	// Subclass to allow providing a Go implementation
	virtual void replaceSelectedText(const QString& text) override {
		if (handle__replaceSelectedText == 0) {
			QsciScintilla::replaceSelectedText(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_replaceSelectedText(this, handle__replaceSelectedText, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_replaceSelectedText(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetSelectionBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetSelectionBackgroundColor() override {
		if (handle__resetSelectionBackgroundColor == 0) {
			QsciScintilla::resetSelectionBackgroundColor();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_resetSelectionBackgroundColor(this, handle__resetSelectionBackgroundColor);

		
	}

	friend void QsciScintilla_virtualbase_resetSelectionBackgroundColor(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetSelectionForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetSelectionForegroundColor() override {
		if (handle__resetSelectionForegroundColor == 0) {
			QsciScintilla::resetSelectionForegroundColor();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_resetSelectionForegroundColor(this, handle__resetSelectionForegroundColor);

		
	}

	friend void QsciScintilla_virtualbase_resetSelectionForegroundColor(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll(bool select) override {
		if (handle__selectAll == 0) {
			QsciScintilla::selectAll(select);
			return;
		}
		
		bool sigval1 = select;

		miqt_exec_callback_QsciScintilla_selectAll(this, handle__selectAll, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_selectAll(void* self, bool select);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectToMatchingBrace = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectToMatchingBrace() override {
		if (handle__selectToMatchingBrace == 0) {
			QsciScintilla::selectToMatchingBrace();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_selectToMatchingBrace(this, handle__selectToMatchingBrace);

		
	}

	friend void QsciScintilla_virtualbase_selectToMatchingBrace(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoCompletionCaseSensitivity = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionCaseSensitivity(bool cs) override {
		if (handle__setAutoCompletionCaseSensitivity == 0) {
			QsciScintilla::setAutoCompletionCaseSensitivity(cs);
			return;
		}
		
		bool sigval1 = cs;

		miqt_exec_callback_QsciScintilla_setAutoCompletionCaseSensitivity(this, handle__setAutoCompletionCaseSensitivity, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoCompletionCaseSensitivity(void* self, bool cs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoCompletionReplaceWord = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionReplaceWord(bool replace) override {
		if (handle__setAutoCompletionReplaceWord == 0) {
			QsciScintilla::setAutoCompletionReplaceWord(replace);
			return;
		}
		
		bool sigval1 = replace;

		miqt_exec_callback_QsciScintilla_setAutoCompletionReplaceWord(this, handle__setAutoCompletionReplaceWord, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoCompletionReplaceWord(void* self, bool replace);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoCompletionShowSingle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionShowSingle(bool single) override {
		if (handle__setAutoCompletionShowSingle == 0) {
			QsciScintilla::setAutoCompletionShowSingle(single);
			return;
		}
		
		bool sigval1 = single;

		miqt_exec_callback_QsciScintilla_setAutoCompletionShowSingle(this, handle__setAutoCompletionShowSingle, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoCompletionShowSingle(void* self, bool single);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoCompletionSource = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionSource(QsciScintilla::AutoCompletionSource source) override {
		if (handle__setAutoCompletionSource == 0) {
			QsciScintilla::setAutoCompletionSource(source);
			return;
		}
		
		QsciScintilla::AutoCompletionSource source_ret = source;
		int sigval1 = static_cast<int>(source_ret);

		miqt_exec_callback_QsciScintilla_setAutoCompletionSource(this, handle__setAutoCompletionSource, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoCompletionSource(void* self, int source);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoCompletionThreshold = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionThreshold(int thresh) override {
		if (handle__setAutoCompletionThreshold == 0) {
			QsciScintilla::setAutoCompletionThreshold(thresh);
			return;
		}
		
		int sigval1 = thresh;

		miqt_exec_callback_QsciScintilla_setAutoCompletionThreshold(this, handle__setAutoCompletionThreshold, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoCompletionThreshold(void* self, int thresh);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoCompletionUseSingle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionUseSingle(QsciScintilla::AutoCompletionUseSingle single) override {
		if (handle__setAutoCompletionUseSingle == 0) {
			QsciScintilla::setAutoCompletionUseSingle(single);
			return;
		}
		
		QsciScintilla::AutoCompletionUseSingle single_ret = single;
		int sigval1 = static_cast<int>(single_ret);

		miqt_exec_callback_QsciScintilla_setAutoCompletionUseSingle(this, handle__setAutoCompletionUseSingle, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoCompletionUseSingle(void* self, int single);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndent = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndent(bool autoindent) override {
		if (handle__setAutoIndent == 0) {
			QsciScintilla::setAutoIndent(autoindent);
			return;
		}
		
		bool sigval1 = autoindent;

		miqt_exec_callback_QsciScintilla_setAutoIndent(this, handle__setAutoIndent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setAutoIndent(void* self, bool autoindent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBraceMatching = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBraceMatching(QsciScintilla::BraceMatch bm) override {
		if (handle__setBraceMatching == 0) {
			QsciScintilla::setBraceMatching(bm);
			return;
		}
		
		QsciScintilla::BraceMatch bm_ret = bm;
		int sigval1 = static_cast<int>(bm_ret);

		miqt_exec_callback_QsciScintilla_setBraceMatching(this, handle__setBraceMatching, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setBraceMatching(void* self, int bm);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBackspaceUnindents = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBackspaceUnindents(bool unindent) override {
		if (handle__setBackspaceUnindents == 0) {
			QsciScintilla::setBackspaceUnindents(unindent);
			return;
		}
		
		bool sigval1 = unindent;

		miqt_exec_callback_QsciScintilla_setBackspaceUnindents(this, handle__setBackspaceUnindents, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setBackspaceUnindents(void* self, bool unindent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCaretForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretForegroundColor(const QColor& col) override {
		if (handle__setCaretForegroundColor == 0) {
			QsciScintilla::setCaretForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setCaretForegroundColor(this, handle__setCaretForegroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setCaretForegroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCaretLineBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretLineBackgroundColor(const QColor& col) override {
		if (handle__setCaretLineBackgroundColor == 0) {
			QsciScintilla::setCaretLineBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setCaretLineBackgroundColor(this, handle__setCaretLineBackgroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setCaretLineBackgroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCaretLineFrameWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretLineFrameWidth(int width) override {
		if (handle__setCaretLineFrameWidth == 0) {
			QsciScintilla::setCaretLineFrameWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_setCaretLineFrameWidth(this, handle__setCaretLineFrameWidth, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setCaretLineFrameWidth(void* self, int width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCaretLineVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretLineVisible(bool enable) override {
		if (handle__setCaretLineVisible == 0) {
			QsciScintilla::setCaretLineVisible(enable);
			return;
		}
		
		bool sigval1 = enable;

		miqt_exec_callback_QsciScintilla_setCaretLineVisible(this, handle__setCaretLineVisible, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setCaretLineVisible(void* self, bool enable);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCaretWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretWidth(int width) override {
		if (handle__setCaretWidth == 0) {
			QsciScintilla::setCaretWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_setCaretWidth(this, handle__setCaretWidth, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setCaretWidth(void* self, int width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c) override {
		if (handle__setColor == 0) {
			QsciScintilla::setColor(c);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);

		miqt_exec_callback_QsciScintilla_setColor(this, handle__setColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setColor(void* self, QColor* c);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCursorPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCursorPosition(int line, int index) override {
		if (handle__setCursorPosition == 0) {
			QsciScintilla::setCursorPosition(line, index);
			return;
		}
		
		int sigval1 = line;
		int sigval2 = index;

		miqt_exec_callback_QsciScintilla_setCursorPosition(this, handle__setCursorPosition, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setCursorPosition(void* self, int line, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolMode(QsciScintilla::EolMode mode) override {
		if (handle__setEolMode == 0) {
			QsciScintilla::setEolMode(mode);
			return;
		}
		
		QsciScintilla::EolMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		miqt_exec_callback_QsciScintilla_setEolMode(this, handle__setEolMode, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setEolMode(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolVisibility = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolVisibility(bool visible) override {
		if (handle__setEolVisibility == 0) {
			QsciScintilla::setEolVisibility(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QsciScintilla_setEolVisibility(this, handle__setEolVisibility, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setEolVisibility(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFolding = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFolding(QsciScintilla::FoldStyle fold, int margin) override {
		if (handle__setFolding == 0) {
			QsciScintilla::setFolding(fold, margin);
			return;
		}
		
		QsciScintilla::FoldStyle fold_ret = fold;
		int sigval1 = static_cast<int>(fold_ret);
		int sigval2 = margin;

		miqt_exec_callback_QsciScintilla_setFolding(this, handle__setFolding, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setFolding(void* self, int fold, int margin);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setIndentation = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentation(int line, int indentation) override {
		if (handle__setIndentation == 0) {
			QsciScintilla::setIndentation(line, indentation);
			return;
		}
		
		int sigval1 = line;
		int sigval2 = indentation;

		miqt_exec_callback_QsciScintilla_setIndentation(this, handle__setIndentation, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setIndentation(void* self, int line, int indentation);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setIndentationGuides = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationGuides(bool enable) override {
		if (handle__setIndentationGuides == 0) {
			QsciScintilla::setIndentationGuides(enable);
			return;
		}
		
		bool sigval1 = enable;

		miqt_exec_callback_QsciScintilla_setIndentationGuides(this, handle__setIndentationGuides, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setIndentationGuides(void* self, bool enable);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setIndentationGuidesBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationGuidesBackgroundColor(const QColor& col) override {
		if (handle__setIndentationGuidesBackgroundColor == 0) {
			QsciScintilla::setIndentationGuidesBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setIndentationGuidesBackgroundColor(this, handle__setIndentationGuidesBackgroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setIndentationGuidesBackgroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setIndentationGuidesForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationGuidesForegroundColor(const QColor& col) override {
		if (handle__setIndentationGuidesForegroundColor == 0) {
			QsciScintilla::setIndentationGuidesForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setIndentationGuidesForegroundColor(this, handle__setIndentationGuidesForegroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setIndentationGuidesForegroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setIndentationsUseTabs = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationsUseTabs(bool tabs) override {
		if (handle__setIndentationsUseTabs == 0) {
			QsciScintilla::setIndentationsUseTabs(tabs);
			return;
		}
		
		bool sigval1 = tabs;

		miqt_exec_callback_QsciScintilla_setIndentationsUseTabs(this, handle__setIndentationsUseTabs, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setIndentationsUseTabs(void* self, bool tabs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setIndentationWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationWidth(int width) override {
		if (handle__setIndentationWidth == 0) {
			QsciScintilla::setIndentationWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_setIndentationWidth(this, handle__setIndentationWidth, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setIndentationWidth(void* self, int width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setLexer = 0;

	// Subclass to allow providing a Go implementation
	virtual void setLexer(QsciLexer* lexer) override {
		if (handle__setLexer == 0) {
			QsciScintilla::setLexer(lexer);
			return;
		}
		
		QsciLexer* sigval1 = lexer;

		miqt_exec_callback_QsciScintilla_setLexer(this, handle__setLexer, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setLexer(void* self, QsciLexer* lexer);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginsBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginsBackgroundColor(const QColor& col) override {
		if (handle__setMarginsBackgroundColor == 0) {
			QsciScintilla::setMarginsBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setMarginsBackgroundColor(this, handle__setMarginsBackgroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setMarginsBackgroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginsFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginsFont(const QFont& f) override {
		if (handle__setMarginsFont == 0) {
			QsciScintilla::setMarginsFont(f);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);

		miqt_exec_callback_QsciScintilla_setMarginsFont(this, handle__setMarginsFont, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setMarginsFont(void* self, QFont* f);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginsForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginsForegroundColor(const QColor& col) override {
		if (handle__setMarginsForegroundColor == 0) {
			QsciScintilla::setMarginsForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setMarginsForegroundColor(this, handle__setMarginsForegroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setMarginsForegroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginLineNumbers = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginLineNumbers(int margin, bool lnrs) override {
		if (handle__setMarginLineNumbers == 0) {
			QsciScintilla::setMarginLineNumbers(margin, lnrs);
			return;
		}
		
		int sigval1 = margin;
		bool sigval2 = lnrs;

		miqt_exec_callback_QsciScintilla_setMarginLineNumbers(this, handle__setMarginLineNumbers, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setMarginLineNumbers(void* self, int margin, bool lnrs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginMarkerMask = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginMarkerMask(int margin, int mask) override {
		if (handle__setMarginMarkerMask == 0) {
			QsciScintilla::setMarginMarkerMask(margin, mask);
			return;
		}
		
		int sigval1 = margin;
		int sigval2 = mask;

		miqt_exec_callback_QsciScintilla_setMarginMarkerMask(this, handle__setMarginMarkerMask, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setMarginMarkerMask(void* self, int margin, int mask);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginSensitivity = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginSensitivity(int margin, bool sens) override {
		if (handle__setMarginSensitivity == 0) {
			QsciScintilla::setMarginSensitivity(margin, sens);
			return;
		}
		
		int sigval1 = margin;
		bool sigval2 = sens;

		miqt_exec_callback_QsciScintilla_setMarginSensitivity(this, handle__setMarginSensitivity, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setMarginSensitivity(void* self, int margin, bool sens);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginWidth(int margin, int width) override {
		if (handle__setMarginWidth == 0) {
			QsciScintilla::setMarginWidth(margin, width);
			return;
		}
		
		int sigval1 = margin;
		int sigval2 = width;

		miqt_exec_callback_QsciScintilla_setMarginWidth(this, handle__setMarginWidth, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setMarginWidth(void* self, int margin, int width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMarginWidth2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginWidth(int margin, const QString& s) override {
		if (handle__setMarginWidth2 == 0) {
			QsciScintilla::setMarginWidth(margin, s);
			return;
		}
		
		int sigval1 = margin;
		const QString s_ret = s;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray s_b = s_ret.toUtf8();
		struct miqt_string s_ms;
		s_ms.len = s_b.length();
		s_ms.data = static_cast<char*>(malloc(s_ms.len));
		memcpy(s_ms.data, s_b.data(), s_ms.len);
		struct miqt_string sigval2 = s_ms;

		miqt_exec_callback_QsciScintilla_setMarginWidth2(this, handle__setMarginWidth2, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_setMarginWidth2(void* self, int margin, struct miqt_string s);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setModified = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModified(bool m) override {
		if (handle__setModified == 0) {
			QsciScintilla::setModified(m);
			return;
		}
		
		bool sigval1 = m;

		miqt_exec_callback_QsciScintilla_setModified(this, handle__setModified, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setModified(void* self, bool m);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c) override {
		if (handle__setPaper == 0) {
			QsciScintilla::setPaper(c);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);

		miqt_exec_callback_QsciScintilla_setPaper(this, handle__setPaper, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setPaper(void* self, QColor* c);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setReadOnly = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadOnly(bool ro) override {
		if (handle__setReadOnly == 0) {
			QsciScintilla::setReadOnly(ro);
			return;
		}
		
		bool sigval1 = ro;

		miqt_exec_callback_QsciScintilla_setReadOnly(this, handle__setReadOnly, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setReadOnly(void* self, bool ro);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(int lineFrom, int indexFrom, int lineTo, int indexTo) override {
		if (handle__setSelection == 0) {
			QsciScintilla::setSelection(lineFrom, indexFrom, lineTo, indexTo);
			return;
		}
		
		int sigval1 = lineFrom;
		int sigval2 = indexFrom;
		int sigval3 = lineTo;
		int sigval4 = indexTo;

		miqt_exec_callback_QsciScintilla_setSelection(this, handle__setSelection, sigval1, sigval2, sigval3, sigval4);

		
	}

	friend void QsciScintilla_virtualbase_setSelection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionBackgroundColor(const QColor& col) override {
		if (handle__setSelectionBackgroundColor == 0) {
			QsciScintilla::setSelectionBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setSelectionBackgroundColor(this, handle__setSelectionBackgroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setSelectionBackgroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSelectionForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionForegroundColor(const QColor& col) override {
		if (handle__setSelectionForegroundColor == 0) {
			QsciScintilla::setSelectionForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_setSelectionForegroundColor(this, handle__setSelectionForegroundColor, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setSelectionForegroundColor(void* self, QColor* col);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTabIndents = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTabIndents(bool indent) override {
		if (handle__setTabIndents == 0) {
			QsciScintilla::setTabIndents(indent);
			return;
		}
		
		bool sigval1 = indent;

		miqt_exec_callback_QsciScintilla_setTabIndents(this, handle__setTabIndents, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setTabIndents(void* self, bool indent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTabWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTabWidth(int width) override {
		if (handle__setTabWidth == 0) {
			QsciScintilla::setTabWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_setTabWidth(this, handle__setTabWidth, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setTabWidth(void* self, int width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setText = 0;

	// Subclass to allow providing a Go implementation
	virtual void setText(const QString& text) override {
		if (handle__setText == 0) {
			QsciScintilla::setText(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_setText(this, handle__setText, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setText(void* self, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setUtf8 = 0;

	// Subclass to allow providing a Go implementation
	virtual void setUtf8(bool cp) override {
		if (handle__setUtf8 == 0) {
			QsciScintilla::setUtf8(cp);
			return;
		}
		
		bool sigval1 = cp;

		miqt_exec_callback_QsciScintilla_setUtf8(this, handle__setUtf8, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setUtf8(void* self, bool cp);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setWhitespaceVisibility = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWhitespaceVisibility(QsciScintilla::WhitespaceVisibility mode) override {
		if (handle__setWhitespaceVisibility == 0) {
			QsciScintilla::setWhitespaceVisibility(mode);
			return;
		}
		
		QsciScintilla::WhitespaceVisibility mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		miqt_exec_callback_QsciScintilla_setWhitespaceVisibility(this, handle__setWhitespaceVisibility, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setWhitespaceVisibility(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setWrapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWrapMode(QsciScintilla::WrapMode mode) override {
		if (handle__setWrapMode == 0) {
			QsciScintilla::setWrapMode(mode);
			return;
		}
		
		QsciScintilla::WrapMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		miqt_exec_callback_QsciScintilla_setWrapMode(this, handle__setWrapMode, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setWrapMode(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__undo = 0;

	// Subclass to allow providing a Go implementation
	virtual void undo() override {
		if (handle__undo == 0) {
			QsciScintilla::undo();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_undo(this, handle__undo);

		
	}

	friend void QsciScintilla_virtualbase_undo(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unindent = 0;

	// Subclass to allow providing a Go implementation
	virtual void unindent(int line) override {
		if (handle__unindent == 0) {
			QsciScintilla::unindent(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_unindent(this, handle__unindent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_unindent(void* self, int line);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__zoomIn = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomIn(int range) override {
		if (handle__zoomIn == 0) {
			QsciScintilla::zoomIn(range);
			return;
		}
		
		int sigval1 = range;

		miqt_exec_callback_QsciScintilla_zoomIn(this, handle__zoomIn, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_zoomIn(void* self, int range);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__zoomIn2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomIn() override {
		if (handle__zoomIn2 == 0) {
			QsciScintilla::zoomIn();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_zoomIn2(this, handle__zoomIn2);

		
	}

	friend void QsciScintilla_virtualbase_zoomIn2(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__zoomOut = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomOut(int range) override {
		if (handle__zoomOut == 0) {
			QsciScintilla::zoomOut(range);
			return;
		}
		
		int sigval1 = range;

		miqt_exec_callback_QsciScintilla_zoomOut(this, handle__zoomOut, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_zoomOut(void* self, int range);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__zoomOut2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomOut() override {
		if (handle__zoomOut2 == 0) {
			QsciScintilla::zoomOut();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_zoomOut2(this, handle__zoomOut2);

		
	}

	friend void QsciScintilla_virtualbase_zoomOut2(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__zoomTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomTo(int size) override {
		if (handle__zoomTo == 0) {
			QsciScintilla::zoomTo(size);
			return;
		}
		
		int sigval1 = size;

		miqt_exec_callback_QsciScintilla_zoomTo(this, handle__zoomTo, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_zoomTo(void* self, int size);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QsciScintilla::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QsciScintilla::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QsciScintilla::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QsciScintilla::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__canInsertFromMimeData == 0) {
			return QsciScintilla::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_canInsertFromMimeData(this, handle__canInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
		if (handle__fromMimeData == 0) {
			return QsciScintilla::fromMimeData(source, rectangular);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;
		bool* sigval2 = &rectangular;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciScintilla_fromMimeData(this, handle__fromMimeData, sigval1, sigval2);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	friend struct miqt_string QsciScintilla_virtualbase_fromMimeData(const void* self, QMimeData* source, bool* rectangular);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__toMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
		if (handle__toMimeData == 0) {
			return QsciScintilla::toMimeData(text, rectangular);
		}
		
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		bool sigval2 = rectangular;

		QMimeData* callback_return_value = miqt_exec_callback_QsciScintilla_toMimeData(this, handle__toMimeData, sigval1, sigval2);

		return callback_return_value;
	}

	friend QMimeData* QsciScintilla_virtualbase_toMimeData(const void* self, struct miqt_string text, bool rectangular);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__dragEnterEvent == 0) {
			QsciScintilla::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QsciScintilla::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QsciScintilla::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QsciScintilla::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_dropEvent(void* self, QDropEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QsciScintilla::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_focusInEvent(void* self, QFocusEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QsciScintilla::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_focusOutEvent(void* self, QFocusEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QsciScintilla::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QsciScintilla::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_keyPressEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QsciScintilla::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QsciScintilla::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QsciScintilla_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QsciScintilla_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QsciScintilla::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QsciScintilla::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QsciScintilla::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QsciScintilla::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QsciScintilla::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QsciScintilla::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QsciScintilla::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QsciScintilla_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	friend void QsciScintilla_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QsciScintilla::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintilla_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QsciScintilla_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QsciScintilla::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintilla_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QsciScintilla_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QsciScintilla::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QsciScintilla_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QsciScintilla::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QsciScintilla::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QsciScintilla::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintilla_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	friend QSize* QsciScintilla_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QsciScintilla::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QsciScintilla_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciScintilla_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QsciScintilla::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QsciScintilla_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QsciScintilla::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QsciScintilla_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciScintilla_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QsciScintilla::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciScintilla_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QsciScintilla::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QsciScintilla_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QsciScintilla_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QsciScintilla::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QsciScintilla::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QsciScintilla::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QsciScintilla::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QsciScintilla::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QsciScintilla::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QsciScintilla::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QsciScintilla::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QsciScintilla::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QsciScintilla::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QsciScintilla_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QsciScintilla::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QsciScintilla_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciScintilla_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QsciScintilla::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QsciScintilla_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QsciScintilla::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QsciScintilla_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QsciScintilla_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QsciScintilla::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QsciScintilla_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QsciScintilla_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciScintilla::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciScintilla::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciScintilla::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciScintilla::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintilla_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciScintilla::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintilla_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciScintilla_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QsciScintilla_protectedbase_setScrollBars(bool* _dynamic_cast_ok, void* self);
	friend struct miqt_string QsciScintilla_protectedbase_textAsBytes(bool* _dynamic_cast_ok, const void* self, struct miqt_string text);
	friend struct miqt_string QsciScintilla_protectedbase_bytesAsText(bool* _dynamic_cast_ok, const void* self, const char* bytes);
	friend bool QsciScintilla_protectedbase_contextMenuNeeded(bool* _dynamic_cast_ok, const void* self, int x, int y);
	friend void QsciScintilla_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QsciScintilla_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QsciScintilla_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QsciScintilla_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QsciScintilla_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QsciScintilla_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QsciScintilla_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QsciScintilla_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QsciScintilla_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QsciScintilla_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciScintilla_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciScintilla_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciScintilla_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciScintilla* QsciScintilla_new(QWidget* parent) {
	return new MiqtVirtualQsciScintilla(parent);
}

QsciScintilla* QsciScintilla_new2() {
	return new MiqtVirtualQsciScintilla();
}

void QsciScintilla_virtbase(QsciScintilla* src, QsciScintillaBase** outptr_QsciScintillaBase) {
	*outptr_QsciScintillaBase = static_cast<QsciScintillaBase*>(src);
}

QMetaObject* QsciScintilla_metaObject(const QsciScintilla* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintilla_metacast(QsciScintilla* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintilla_tr(const char* s) {
	QString _ret = QsciScintilla::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_trUtf8(const char* s) {
	QString _ret = QsciScintilla::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QsciScintilla_apiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
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
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QsciScintilla_annotate(QsciScintilla* self, int line, struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->annotate(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_annotate2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->annotate(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_annotate3(QsciScintilla* self, int line, QsciStyledText* text) {
	self->annotate(static_cast<int>(line), *text);
}

struct miqt_string QsciScintilla_annotation(const QsciScintilla* self, int line) {
	QString _ret = self->annotation(static_cast<int>(line));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciScintilla_annotationDisplay(const QsciScintilla* self) {
	QsciScintilla::AnnotationDisplay _ret = self->annotationDisplay();
	return static_cast<int>(_ret);
}

void QsciScintilla_clearAnnotations(QsciScintilla* self) {
	self->clearAnnotations();
}

bool QsciScintilla_autoCompletionCaseSensitivity(const QsciScintilla* self) {
	return self->autoCompletionCaseSensitivity();
}

bool QsciScintilla_autoCompletionFillupsEnabled(const QsciScintilla* self) {
	return self->autoCompletionFillupsEnabled();
}

bool QsciScintilla_autoCompletionReplaceWord(const QsciScintilla* self) {
	return self->autoCompletionReplaceWord();
}

bool QsciScintilla_autoCompletionShowSingle(const QsciScintilla* self) {
	return self->autoCompletionShowSingle();
}

int QsciScintilla_autoCompletionSource(const QsciScintilla* self) {
	QsciScintilla::AutoCompletionSource _ret = self->autoCompletionSource();
	return static_cast<int>(_ret);
}

int QsciScintilla_autoCompletionThreshold(const QsciScintilla* self) {
	return self->autoCompletionThreshold();
}

int QsciScintilla_autoCompletionUseSingle(const QsciScintilla* self) {
	QsciScintilla::AutoCompletionUseSingle _ret = self->autoCompletionUseSingle();
	return static_cast<int>(_ret);
}

bool QsciScintilla_autoIndent(const QsciScintilla* self) {
	return self->autoIndent();
}

bool QsciScintilla_backspaceUnindents(const QsciScintilla* self) {
	return self->backspaceUnindents();
}

void QsciScintilla_beginUndoAction(QsciScintilla* self) {
	self->beginUndoAction();
}

int QsciScintilla_braceMatching(const QsciScintilla* self) {
	QsciScintilla::BraceMatch _ret = self->braceMatching();
	return static_cast<int>(_ret);
}

struct miqt_string QsciScintilla_bytes(const QsciScintilla* self, int start, int end) {
	QByteArray _qb = self->bytes(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QsciScintilla_callTipsPosition(const QsciScintilla* self) {
	QsciScintilla::CallTipsPosition _ret = self->callTipsPosition();
	return static_cast<int>(_ret);
}

int QsciScintilla_callTipsStyle(const QsciScintilla* self) {
	QsciScintilla::CallTipsStyle _ret = self->callTipsStyle();
	return static_cast<int>(_ret);
}

int QsciScintilla_callTipsVisible(const QsciScintilla* self) {
	return self->callTipsVisible();
}

void QsciScintilla_cancelFind(QsciScintilla* self) {
	self->cancelFind();
}

void QsciScintilla_cancelList(QsciScintilla* self) {
	self->cancelList();
}

bool QsciScintilla_caseSensitive(const QsciScintilla* self) {
	return self->caseSensitive();
}

void QsciScintilla_clearFolds(QsciScintilla* self) {
	self->clearFolds();
}

void QsciScintilla_clearIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
	self->clearIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

void QsciScintilla_clearRegisteredImages(QsciScintilla* self) {
	self->clearRegisteredImages();
}

QColor* QsciScintilla_color(const QsciScintilla* self) {
	return new QColor(self->color());
}

struct miqt_array /* of int */  QsciScintilla_contractedFolds(const QsciScintilla* self) {
	QList<int> _ret = self->contractedFolds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QsciScintilla_convertEols(QsciScintilla* self, int mode) {
	self->convertEols(static_cast<QsciScintilla::EolMode>(mode));
}

QMenu* QsciScintilla_createStandardContextMenu(QsciScintilla* self) {
	return self->createStandardContextMenu();
}

QsciDocument* QsciScintilla_document(const QsciScintilla* self) {
	return new QsciDocument(self->document());
}

void QsciScintilla_endUndoAction(QsciScintilla* self) {
	self->endUndoAction();
}

QColor* QsciScintilla_edgeColor(const QsciScintilla* self) {
	return new QColor(self->edgeColor());
}

int QsciScintilla_edgeColumn(const QsciScintilla* self) {
	return self->edgeColumn();
}

int QsciScintilla_edgeMode(const QsciScintilla* self) {
	QsciScintilla::EdgeMode _ret = self->edgeMode();
	return static_cast<int>(_ret);
}

void QsciScintilla_setFont(QsciScintilla* self, QFont* f) {
	self->setFont(*f);
}

int QsciScintilla_eolMode(const QsciScintilla* self) {
	QsciScintilla::EolMode _ret = self->eolMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_eolVisibility(const QsciScintilla* self) {
	return self->eolVisibility();
}

int QsciScintilla_extraAscent(const QsciScintilla* self) {
	return self->extraAscent();
}

int QsciScintilla_extraDescent(const QsciScintilla* self) {
	return self->extraDescent();
}

void QsciScintilla_fillIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
	self->fillIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

bool QsciScintilla_findFirst(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
}

bool QsciScintilla_findFirstInSelection(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
}

bool QsciScintilla_findNext(QsciScintilla* self) {
	return self->findNext();
}

bool QsciScintilla_findMatchingBrace(QsciScintilla* self, long* brace, long* other, int mode) {
	return self->findMatchingBrace(static_cast<long&>(*brace), static_cast<long&>(*other), static_cast<QsciScintilla::BraceMatch>(mode));
}

int QsciScintilla_firstVisibleLine(const QsciScintilla* self) {
	return self->firstVisibleLine();
}

int QsciScintilla_folding(const QsciScintilla* self) {
	QsciScintilla::FoldStyle _ret = self->folding();
	return static_cast<int>(_ret);
}

void QsciScintilla_getCursorPosition(const QsciScintilla* self, int* line, int* index) {
	self->getCursorPosition(static_cast<int*>(line), static_cast<int*>(index));
}

void QsciScintilla_getSelection(const QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo) {
	self->getSelection(static_cast<int*>(lineFrom), static_cast<int*>(indexFrom), static_cast<int*>(lineTo), static_cast<int*>(indexTo));
}

bool QsciScintilla_hasSelectedText(const QsciScintilla* self) {
	return self->hasSelectedText();
}

int QsciScintilla_indentation(const QsciScintilla* self, int line) {
	return self->indentation(static_cast<int>(line));
}

bool QsciScintilla_indentationGuides(const QsciScintilla* self) {
	return self->indentationGuides();
}

bool QsciScintilla_indentationsUseTabs(const QsciScintilla* self) {
	return self->indentationsUseTabs();
}

int QsciScintilla_indentationWidth(const QsciScintilla* self) {
	return self->indentationWidth();
}

int QsciScintilla_indicatorDefine(QsciScintilla* self, int style) {
	return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style));
}

bool QsciScintilla_indicatorDrawUnder(const QsciScintilla* self, int indicatorNumber) {
	return self->indicatorDrawUnder(static_cast<int>(indicatorNumber));
}

bool QsciScintilla_isCallTipActive(const QsciScintilla* self) {
	return self->isCallTipActive();
}

bool QsciScintilla_isListActive(const QsciScintilla* self) {
	return self->isListActive();
}

bool QsciScintilla_isModified(const QsciScintilla* self) {
	return self->isModified();
}

bool QsciScintilla_isReadOnly(const QsciScintilla* self) {
	return self->isReadOnly();
}

bool QsciScintilla_isRedoAvailable(const QsciScintilla* self) {
	return self->isRedoAvailable();
}

bool QsciScintilla_isUndoAvailable(const QsciScintilla* self) {
	return self->isUndoAvailable();
}

bool QsciScintilla_isUtf8(const QsciScintilla* self) {
	return self->isUtf8();
}

bool QsciScintilla_isWordCharacter(const QsciScintilla* self, char ch) {
	return self->isWordCharacter(static_cast<char>(ch));
}

int QsciScintilla_lineAt(const QsciScintilla* self, QPoint* point) {
	return self->lineAt(*point);
}

void QsciScintilla_lineIndexFromPosition(const QsciScintilla* self, int position, int* line, int* index) {
	self->lineIndexFromPosition(static_cast<int>(position), static_cast<int*>(line), static_cast<int*>(index));
}

int QsciScintilla_lineLength(const QsciScintilla* self, int line) {
	return self->lineLength(static_cast<int>(line));
}

int QsciScintilla_lines(const QsciScintilla* self) {
	return self->lines();
}

int QsciScintilla_length(const QsciScintilla* self) {
	return self->length();
}

QsciLexer* QsciScintilla_lexer(const QsciScintilla* self) {
	return self->lexer();
}

QColor* QsciScintilla_marginBackgroundColor(const QsciScintilla* self, int margin) {
	return new QColor(self->marginBackgroundColor(static_cast<int>(margin)));
}

bool QsciScintilla_marginLineNumbers(const QsciScintilla* self, int margin) {
	return self->marginLineNumbers(static_cast<int>(margin));
}

int QsciScintilla_marginMarkerMask(const QsciScintilla* self, int margin) {
	return self->marginMarkerMask(static_cast<int>(margin));
}

int QsciScintilla_marginOptions(const QsciScintilla* self) {
	return self->marginOptions();
}

bool QsciScintilla_marginSensitivity(const QsciScintilla* self, int margin) {
	return self->marginSensitivity(static_cast<int>(margin));
}

int QsciScintilla_marginType(const QsciScintilla* self, int margin) {
	QsciScintilla::MarginType _ret = self->marginType(static_cast<int>(margin));
	return static_cast<int>(_ret);
}

int QsciScintilla_marginWidth(const QsciScintilla* self, int margin) {
	return self->marginWidth(static_cast<int>(margin));
}

int QsciScintilla_margins(const QsciScintilla* self) {
	return self->margins();
}

int QsciScintilla_markerDefine(QsciScintilla* self, int sym) {
	return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym));
}

int QsciScintilla_markerDefineWithCh(QsciScintilla* self, char ch) {
	return self->markerDefine(static_cast<char>(ch));
}

int QsciScintilla_markerDefineWithPm(QsciScintilla* self, QPixmap* pm) {
	return self->markerDefine(*pm);
}

int QsciScintilla_markerDefineWithIm(QsciScintilla* self, QImage* im) {
	return self->markerDefine(*im);
}

int QsciScintilla_markerAdd(QsciScintilla* self, int linenr, int markerNumber) {
	return self->markerAdd(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

unsigned int QsciScintilla_markersAtLine(const QsciScintilla* self, int linenr) {
	return self->markersAtLine(static_cast<int>(linenr));
}

void QsciScintilla_markerDelete(QsciScintilla* self, int linenr) {
	self->markerDelete(static_cast<int>(linenr));
}

void QsciScintilla_markerDeleteAll(QsciScintilla* self) {
	self->markerDeleteAll();
}

void QsciScintilla_markerDeleteHandle(QsciScintilla* self, int mhandle) {
	self->markerDeleteHandle(static_cast<int>(mhandle));
}

int QsciScintilla_markerLine(const QsciScintilla* self, int mhandle) {
	return self->markerLine(static_cast<int>(mhandle));
}

int QsciScintilla_markerFindNext(const QsciScintilla* self, int linenr, unsigned int mask) {
	return self->markerFindNext(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

int QsciScintilla_markerFindPrevious(const QsciScintilla* self, int linenr, unsigned int mask) {
	return self->markerFindPrevious(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

bool QsciScintilla_overwriteMode(const QsciScintilla* self) {
	return self->overwriteMode();
}

QColor* QsciScintilla_paper(const QsciScintilla* self) {
	return new QColor(self->paper());
}

int QsciScintilla_positionFromLineIndex(const QsciScintilla* self, int line, int index) {
	return self->positionFromLineIndex(static_cast<int>(line), static_cast<int>(index));
}

bool QsciScintilla_read(QsciScintilla* self, QIODevice* io) {
	return self->read(io);
}

void QsciScintilla_recolor(QsciScintilla* self, int start, int end) {
	self->recolor(static_cast<int>(start), static_cast<int>(end));
}

void QsciScintilla_registerImage(QsciScintilla* self, int id, QPixmap* pm) {
	self->registerImage(static_cast<int>(id), *pm);
}

void QsciScintilla_registerImage2(QsciScintilla* self, int id, QImage* im) {
	self->registerImage(static_cast<int>(id), *im);
}

void QsciScintilla_replace(QsciScintilla* self, struct miqt_string replaceStr) {
	QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
	self->replace(replaceStr_QString);
}

void QsciScintilla_resetFoldMarginColors(QsciScintilla* self) {
	self->resetFoldMarginColors();
}

void QsciScintilla_resetHotspotBackgroundColor(QsciScintilla* self) {
	self->resetHotspotBackgroundColor();
}

void QsciScintilla_resetHotspotForegroundColor(QsciScintilla* self) {
	self->resetHotspotForegroundColor();
}

int QsciScintilla_scrollWidth(const QsciScintilla* self) {
	return self->scrollWidth();
}

bool QsciScintilla_scrollWidthTracking(const QsciScintilla* self) {
	return self->scrollWidthTracking();
}

void QsciScintilla_setFoldMarginColors(QsciScintilla* self, QColor* fore, QColor* back) {
	self->setFoldMarginColors(*fore, *back);
}

void QsciScintilla_setAnnotationDisplay(QsciScintilla* self, int display) {
	self->setAnnotationDisplay(static_cast<QsciScintilla::AnnotationDisplay>(display));
}

void QsciScintilla_setAutoCompletionFillupsEnabled(QsciScintilla* self, bool enabled) {
	self->setAutoCompletionFillupsEnabled(enabled);
}

void QsciScintilla_setAutoCompletionFillups(QsciScintilla* self, const char* fillups) {
	self->setAutoCompletionFillups(fillups);
}

void QsciScintilla_setAutoCompletionWordSeparators(QsciScintilla* self, struct miqt_array /* of struct miqt_string */  separators) {
	QStringList separators_QList;
	separators_QList.reserve(separators.len);
	struct miqt_string* separators_arr = static_cast<struct miqt_string*>(separators.data);
	for(size_t i = 0; i < separators.len; ++i) {
		QString separators_arr_i_QString = QString::fromUtf8(separators_arr[i].data, separators_arr[i].len);
		separators_QList.push_back(separators_arr_i_QString);
	}
	self->setAutoCompletionWordSeparators(separators_QList);
}

void QsciScintilla_setCallTipsBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsBackgroundColor(*col);
}

void QsciScintilla_setCallTipsForegroundColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsForegroundColor(*col);
}

void QsciScintilla_setCallTipsHighlightColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsHighlightColor(*col);
}

void QsciScintilla_setCallTipsPosition(QsciScintilla* self, int position) {
	self->setCallTipsPosition(static_cast<QsciScintilla::CallTipsPosition>(position));
}

void QsciScintilla_setCallTipsStyle(QsciScintilla* self, int style) {
	self->setCallTipsStyle(static_cast<QsciScintilla::CallTipsStyle>(style));
}

void QsciScintilla_setCallTipsVisible(QsciScintilla* self, int nr) {
	self->setCallTipsVisible(static_cast<int>(nr));
}

void QsciScintilla_setContractedFolds(QsciScintilla* self, struct miqt_array /* of int */  folds) {
	QList<int> folds_QList;
	folds_QList.reserve(folds.len);
	int* folds_arr = static_cast<int*>(folds.data);
	for(size_t i = 0; i < folds.len; ++i) {
		folds_QList.push_back(static_cast<int>(folds_arr[i]));
	}
	self->setContractedFolds(folds_QList);
}

void QsciScintilla_setDocument(QsciScintilla* self, QsciDocument* document) {
	self->setDocument(*document);
}

void QsciScintilla_addEdgeColumn(QsciScintilla* self, int colnr, QColor* col) {
	self->addEdgeColumn(static_cast<int>(colnr), *col);
}

void QsciScintilla_clearEdgeColumns(QsciScintilla* self) {
	self->clearEdgeColumns();
}

void QsciScintilla_setEdgeColor(QsciScintilla* self, QColor* col) {
	self->setEdgeColor(*col);
}

void QsciScintilla_setEdgeColumn(QsciScintilla* self, int colnr) {
	self->setEdgeColumn(static_cast<int>(colnr));
}

void QsciScintilla_setEdgeMode(QsciScintilla* self, int mode) {
	self->setEdgeMode(static_cast<QsciScintilla::EdgeMode>(mode));
}

void QsciScintilla_setFirstVisibleLine(QsciScintilla* self, int linenr) {
	self->setFirstVisibleLine(static_cast<int>(linenr));
}

void QsciScintilla_setIndicatorDrawUnder(QsciScintilla* self, bool under) {
	self->setIndicatorDrawUnder(under);
}

void QsciScintilla_setIndicatorForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorForegroundColor(*col);
}

void QsciScintilla_setIndicatorHoverForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorHoverForegroundColor(*col);
}

void QsciScintilla_setIndicatorHoverStyle(QsciScintilla* self, int style) {
	self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style));
}

void QsciScintilla_setIndicatorOutlineColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorOutlineColor(*col);
}

void QsciScintilla_setMarginBackgroundColor(QsciScintilla* self, int margin, QColor* col) {
	self->setMarginBackgroundColor(static_cast<int>(margin), *col);
}

void QsciScintilla_setMarginOptions(QsciScintilla* self, int options) {
	self->setMarginOptions(static_cast<int>(options));
}

void QsciScintilla_setMarginText(QsciScintilla* self, int line, struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMarginText(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_setMarginText2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMarginText(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_setMarginText3(QsciScintilla* self, int line, QsciStyledText* text) {
	self->setMarginText(static_cast<int>(line), *text);
}

void QsciScintilla_setMarginType(QsciScintilla* self, int margin, int type) {
	self->setMarginType(static_cast<int>(margin), static_cast<QsciScintilla::MarginType>(type));
}

void QsciScintilla_clearMarginText(QsciScintilla* self) {
	self->clearMarginText();
}

void QsciScintilla_setMargins(QsciScintilla* self, int margins) {
	self->setMargins(static_cast<int>(margins));
}

void QsciScintilla_setMarkerBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMarkerBackgroundColor(*col);
}

void QsciScintilla_setMarkerForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMarkerForegroundColor(*col);
}

void QsciScintilla_setMatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMatchedBraceBackgroundColor(*col);
}

void QsciScintilla_setMatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMatchedBraceForegroundColor(*col);
}

void QsciScintilla_setMatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
	self->setMatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_resetMatchedBraceIndicator(QsciScintilla* self) {
	self->resetMatchedBraceIndicator();
}

void QsciScintilla_setScrollWidth(QsciScintilla* self, int pixelWidth) {
	self->setScrollWidth(static_cast<int>(pixelWidth));
}

void QsciScintilla_setScrollWidthTracking(QsciScintilla* self, bool enabled) {
	self->setScrollWidthTracking(enabled);
}

void QsciScintilla_setTabDrawMode(QsciScintilla* self, int mode) {
	self->setTabDrawMode(static_cast<QsciScintilla::TabDrawMode>(mode));
}

void QsciScintilla_setUnmatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setUnmatchedBraceBackgroundColor(*col);
}

void QsciScintilla_setUnmatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setUnmatchedBraceForegroundColor(*col);
}

void QsciScintilla_setUnmatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
	self->setUnmatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_resetUnmatchedBraceIndicator(QsciScintilla* self) {
	self->resetUnmatchedBraceIndicator();
}

void QsciScintilla_setWrapVisualFlags(QsciScintilla* self, int endFlag) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag));
}

struct miqt_string QsciScintilla_selectedText(const QsciScintilla* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciScintilla_selectionToEol(const QsciScintilla* self) {
	return self->selectionToEol();
}

void QsciScintilla_setHotspotBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setHotspotBackgroundColor(*col);
}

void QsciScintilla_setHotspotForegroundColor(QsciScintilla* self, QColor* col) {
	self->setHotspotForegroundColor(*col);
}

void QsciScintilla_setHotspotUnderline(QsciScintilla* self, bool enable) {
	self->setHotspotUnderline(enable);
}

void QsciScintilla_setHotspotWrap(QsciScintilla* self, bool enable) {
	self->setHotspotWrap(enable);
}

void QsciScintilla_setSelectionToEol(QsciScintilla* self, bool filled) {
	self->setSelectionToEol(filled);
}

void QsciScintilla_setExtraAscent(QsciScintilla* self, int extra) {
	self->setExtraAscent(static_cast<int>(extra));
}

void QsciScintilla_setExtraDescent(QsciScintilla* self, int extra) {
	self->setExtraDescent(static_cast<int>(extra));
}

void QsciScintilla_setOverwriteMode(QsciScintilla* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

void QsciScintilla_setWhitespaceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setWhitespaceBackgroundColor(*col);
}

void QsciScintilla_setWhitespaceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setWhitespaceForegroundColor(*col);
}

void QsciScintilla_setWhitespaceSize(QsciScintilla* self, int size) {
	self->setWhitespaceSize(static_cast<int>(size));
}

void QsciScintilla_setWrapIndentMode(QsciScintilla* self, int mode) {
	self->setWrapIndentMode(static_cast<QsciScintilla::WrapIndentMode>(mode));
}

void QsciScintilla_showUserList(QsciScintilla* self, int id, struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->showUserList(static_cast<int>(id), list_QList);
}

QsciCommandSet* QsciScintilla_standardCommands(const QsciScintilla* self) {
	return self->standardCommands();
}

int QsciScintilla_tabDrawMode(const QsciScintilla* self) {
	QsciScintilla::TabDrawMode _ret = self->tabDrawMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_tabIndents(const QsciScintilla* self) {
	return self->tabIndents();
}

int QsciScintilla_tabWidth(const QsciScintilla* self) {
	return self->tabWidth();
}

struct miqt_string QsciScintilla_text(const QsciScintilla* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_textWithLine(const QsciScintilla* self, int line) {
	QString _ret = self->text(static_cast<int>(line));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_text2(const QsciScintilla* self, int start, int end) {
	QString _ret = self->text(static_cast<int>(start), static_cast<int>(end));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciScintilla_textHeight(const QsciScintilla* self, int linenr) {
	return self->textHeight(static_cast<int>(linenr));
}

int QsciScintilla_whitespaceSize(const QsciScintilla* self) {
	return self->whitespaceSize();
}

int QsciScintilla_whitespaceVisibility(const QsciScintilla* self) {
	QsciScintilla::WhitespaceVisibility _ret = self->whitespaceVisibility();
	return static_cast<int>(_ret);
}

struct miqt_string QsciScintilla_wordAtLineIndex(const QsciScintilla* self, int line, int index) {
	QString _ret = self->wordAtLineIndex(static_cast<int>(line), static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_wordAtPoint(const QsciScintilla* self, QPoint* point) {
	QString _ret = self->wordAtPoint(*point);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciScintilla_wordCharacters(const QsciScintilla* self) {
	return (const char*) self->wordCharacters();
}

int QsciScintilla_wrapMode(const QsciScintilla* self) {
	QsciScintilla::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

int QsciScintilla_wrapIndentMode(const QsciScintilla* self) {
	QsciScintilla::WrapIndentMode _ret = self->wrapIndentMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_write(const QsciScintilla* self, QIODevice* io) {
	return self->write(io);
}

void QsciScintilla_append(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->append(text_QString);
}

void QsciScintilla_autoCompleteFromAll(QsciScintilla* self) {
	self->autoCompleteFromAll();
}

void QsciScintilla_autoCompleteFromAPIs(QsciScintilla* self) {
	self->autoCompleteFromAPIs();
}

void QsciScintilla_autoCompleteFromDocument(QsciScintilla* self) {
	self->autoCompleteFromDocument();
}

void QsciScintilla_callTip(QsciScintilla* self) {
	self->callTip();
}

void QsciScintilla_clear(QsciScintilla* self) {
	self->clear();
}

void QsciScintilla_copy(QsciScintilla* self) {
	self->copy();
}

void QsciScintilla_cut(QsciScintilla* self) {
	self->cut();
}

void QsciScintilla_ensureCursorVisible(QsciScintilla* self) {
	self->ensureCursorVisible();
}

void QsciScintilla_ensureLineVisible(QsciScintilla* self, int line) {
	self->ensureLineVisible(static_cast<int>(line));
}

void QsciScintilla_foldAll(QsciScintilla* self, bool children) {
	self->foldAll(children);
}

void QsciScintilla_foldLine(QsciScintilla* self, int line) {
	self->foldLine(static_cast<int>(line));
}

void QsciScintilla_indent(QsciScintilla* self, int line) {
	self->indent(static_cast<int>(line));
}

void QsciScintilla_insert(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insert(text_QString);
}

void QsciScintilla_insertAt(QsciScintilla* self, struct miqt_string text, int line, int index) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_moveToMatchingBrace(QsciScintilla* self) {
	self->moveToMatchingBrace();
}

void QsciScintilla_paste(QsciScintilla* self) {
	self->paste();
}

void QsciScintilla_redo(QsciScintilla* self) {
	self->redo();
}

void QsciScintilla_removeSelectedText(QsciScintilla* self) {
	self->removeSelectedText();
}

void QsciScintilla_replaceSelectedText(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->replaceSelectedText(text_QString);
}

void QsciScintilla_resetSelectionBackgroundColor(QsciScintilla* self) {
	self->resetSelectionBackgroundColor();
}

void QsciScintilla_resetSelectionForegroundColor(QsciScintilla* self) {
	self->resetSelectionForegroundColor();
}

void QsciScintilla_selectAll(QsciScintilla* self, bool select) {
	self->selectAll(select);
}

void QsciScintilla_selectToMatchingBrace(QsciScintilla* self) {
	self->selectToMatchingBrace();
}

void QsciScintilla_setAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
	self->setAutoCompletionCaseSensitivity(cs);
}

void QsciScintilla_setAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
	self->setAutoCompletionReplaceWord(replace);
}

void QsciScintilla_setAutoCompletionShowSingle(QsciScintilla* self, bool single) {
	self->setAutoCompletionShowSingle(single);
}

void QsciScintilla_setAutoCompletionSource(QsciScintilla* self, int source) {
	self->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
}

void QsciScintilla_setAutoCompletionThreshold(QsciScintilla* self, int thresh) {
	self->setAutoCompletionThreshold(static_cast<int>(thresh));
}

void QsciScintilla_setAutoCompletionUseSingle(QsciScintilla* self, int single) {
	self->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
}

void QsciScintilla_setAutoIndent(QsciScintilla* self, bool autoindent) {
	self->setAutoIndent(autoindent);
}

void QsciScintilla_setBraceMatching(QsciScintilla* self, int bm) {
	self->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
}

void QsciScintilla_setBackspaceUnindents(QsciScintilla* self, bool unindent) {
	self->setBackspaceUnindents(unindent);
}

void QsciScintilla_setCaretForegroundColor(QsciScintilla* self, QColor* col) {
	self->setCaretForegroundColor(*col);
}

void QsciScintilla_setCaretLineBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setCaretLineBackgroundColor(*col);
}

void QsciScintilla_setCaretLineFrameWidth(QsciScintilla* self, int width) {
	self->setCaretLineFrameWidth(static_cast<int>(width));
}

void QsciScintilla_setCaretLineVisible(QsciScintilla* self, bool enable) {
	self->setCaretLineVisible(enable);
}

void QsciScintilla_setCaretWidth(QsciScintilla* self, int width) {
	self->setCaretWidth(static_cast<int>(width));
}

void QsciScintilla_setColor(QsciScintilla* self, QColor* c) {
	self->setColor(*c);
}

void QsciScintilla_setCursorPosition(QsciScintilla* self, int line, int index) {
	self->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_setEolMode(QsciScintilla* self, int mode) {
	self->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
}

void QsciScintilla_setEolVisibility(QsciScintilla* self, bool visible) {
	self->setEolVisibility(visible);
}

void QsciScintilla_setFolding(QsciScintilla* self, int fold, int margin) {
	self->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
}

void QsciScintilla_setIndentation(QsciScintilla* self, int line, int indentation) {
	self->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
}

void QsciScintilla_setIndentationGuides(QsciScintilla* self, bool enable) {
	self->setIndentationGuides(enable);
}

void QsciScintilla_setIndentationGuidesBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setIndentationGuidesBackgroundColor(*col);
}

void QsciScintilla_setIndentationGuidesForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndentationGuidesForegroundColor(*col);
}

void QsciScintilla_setIndentationsUseTabs(QsciScintilla* self, bool tabs) {
	self->setIndentationsUseTabs(tabs);
}

void QsciScintilla_setIndentationWidth(QsciScintilla* self, int width) {
	self->setIndentationWidth(static_cast<int>(width));
}

void QsciScintilla_setLexer(QsciScintilla* self, QsciLexer* lexer) {
	self->setLexer(lexer);
}

void QsciScintilla_setMarginsBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMarginsBackgroundColor(*col);
}

void QsciScintilla_setMarginsFont(QsciScintilla* self, QFont* f) {
	self->setMarginsFont(*f);
}

void QsciScintilla_setMarginsForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMarginsForegroundColor(*col);
}

void QsciScintilla_setMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
	self->setMarginLineNumbers(static_cast<int>(margin), lnrs);
}

void QsciScintilla_setMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
	self->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
}

void QsciScintilla_setMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
	self->setMarginSensitivity(static_cast<int>(margin), sens);
}

void QsciScintilla_setMarginWidth(QsciScintilla* self, int margin, int width) {
	self->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
}

void QsciScintilla_setMarginWidth2(QsciScintilla* self, int margin, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->setMarginWidth(static_cast<int>(margin), s_QString);
}

void QsciScintilla_setModified(QsciScintilla* self, bool m) {
	self->setModified(m);
}

void QsciScintilla_setPaper(QsciScintilla* self, QColor* c) {
	self->setPaper(*c);
}

void QsciScintilla_setReadOnly(QsciScintilla* self, bool ro) {
	self->setReadOnly(ro);
}

void QsciScintilla_setSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
	self->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
}

void QsciScintilla_setSelectionBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setSelectionBackgroundColor(*col);
}

void QsciScintilla_setSelectionForegroundColor(QsciScintilla* self, QColor* col) {
	self->setSelectionForegroundColor(*col);
}

void QsciScintilla_setTabIndents(QsciScintilla* self, bool indent) {
	self->setTabIndents(indent);
}

void QsciScintilla_setTabWidth(QsciScintilla* self, int width) {
	self->setTabWidth(static_cast<int>(width));
}

void QsciScintilla_setText(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QsciScintilla_setUtf8(QsciScintilla* self, bool cp) {
	self->setUtf8(cp);
}

void QsciScintilla_setWhitespaceVisibility(QsciScintilla* self, int mode) {
	self->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
}

void QsciScintilla_setWrapMode(QsciScintilla* self, int mode) {
	self->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
}

void QsciScintilla_undo(QsciScintilla* self) {
	self->undo();
}

void QsciScintilla_unindent(QsciScintilla* self, int line) {
	self->unindent(static_cast<int>(line));
}

void QsciScintilla_zoomIn(QsciScintilla* self, int range) {
	self->zoomIn(static_cast<int>(range));
}

void QsciScintilla_zoomIn2(QsciScintilla* self) {
	self->zoomIn();
}

void QsciScintilla_zoomOut(QsciScintilla* self, int range) {
	self->zoomOut(static_cast<int>(range));
}

void QsciScintilla_zoomOut2(QsciScintilla* self) {
	self->zoomOut();
}

void QsciScintilla_zoomTo(QsciScintilla* self, int size) {
	self->zoomTo(static_cast<int>(size));
}

void QsciScintilla_cursorPositionChanged(QsciScintilla* self, int line, int index) {
	self->cursorPositionChanged(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_connect_cursorPositionChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int)>(&QsciScintilla::cursorPositionChanged), self, [=](int line, int index) {
		int sigval1 = line;
		int sigval2 = index;
		miqt_exec_callback_QsciScintilla_cursorPositionChanged(slot, sigval1, sigval2);
	});
}

void QsciScintilla_copyAvailable(QsciScintilla* self, bool yes) {
	self->copyAvailable(yes);
}

void QsciScintilla_connect_copyAvailable(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::copyAvailable), self, [=](bool yes) {
		bool sigval1 = yes;
		miqt_exec_callback_QsciScintilla_copyAvailable(slot, sigval1);
	});
}

void QsciScintilla_indicatorClicked(QsciScintilla* self, int line, int index, int state) {
	self->indicatorClicked(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_indicatorClicked(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorClicked), self, [=](int line, int index, Qt::KeyboardModifiers state) {
		int sigval1 = line;
		int sigval2 = index;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_indicatorClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_indicatorReleased(QsciScintilla* self, int line, int index, int state) {
	self->indicatorReleased(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_indicatorReleased(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorReleased), self, [=](int line, int index, Qt::KeyboardModifiers state) {
		int sigval1 = line;
		int sigval2 = index;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_indicatorReleased(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_linesChanged(QsciScintilla* self) {
	self->linesChanged();
}

void QsciScintilla_connect_linesChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::linesChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_linesChanged(slot);
	});
}

void QsciScintilla_marginClicked(QsciScintilla* self, int margin, int line, int state) {
	self->marginClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_marginClicked(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginClicked), self, [=](int margin, int line, Qt::KeyboardModifiers state) {
		int sigval1 = margin;
		int sigval2 = line;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_marginClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_marginRightClicked(QsciScintilla* self, int margin, int line, int state) {
	self->marginRightClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_marginRightClicked(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginRightClicked), self, [=](int margin, int line, Qt::KeyboardModifiers state) {
		int sigval1 = margin;
		int sigval2 = line;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_marginRightClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_modificationAttempted(QsciScintilla* self) {
	self->modificationAttempted();
}

void QsciScintilla_connect_modificationAttempted(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::modificationAttempted), self, [=]() {
		miqt_exec_callback_QsciScintilla_modificationAttempted(slot);
	});
}

void QsciScintilla_modificationChanged(QsciScintilla* self, bool m) {
	self->modificationChanged(m);
}

void QsciScintilla_connect_modificationChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::modificationChanged), self, [=](bool m) {
		bool sigval1 = m;
		miqt_exec_callback_QsciScintilla_modificationChanged(slot, sigval1);
	});
}

void QsciScintilla_selectionChanged(QsciScintilla* self) {
	self->selectionChanged();
}

void QsciScintilla_connect_selectionChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::selectionChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_selectionChanged(slot);
	});
}

void QsciScintilla_textChanged(QsciScintilla* self) {
	self->textChanged();
}

void QsciScintilla_connect_textChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::textChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_textChanged(slot);
	});
}

void QsciScintilla_userListActivated(QsciScintilla* self, int id, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	self->userListActivated(static_cast<int>(id), string_QString);
}

void QsciScintilla_connect_userListActivated(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, const QString&)>(&QsciScintilla::userListActivated), self, [=](int id, const QString& string) {
		int sigval1 = id;
		const QString string_ret = string;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray string_b = string_ret.toUtf8();
		struct miqt_string string_ms;
		string_ms.len = string_b.length();
		string_ms.data = static_cast<char*>(malloc(string_ms.len));
		memcpy(string_ms.data, string_b.data(), string_ms.len);
		struct miqt_string sigval2 = string_ms;
		miqt_exec_callback_QsciScintilla_userListActivated(slot, sigval1, sigval2);
	});
}

struct miqt_string QsciScintilla_tr2(const char* s, const char* c) {
	QString _ret = QsciScintilla::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciScintilla::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_trUtf82(const char* s, const char* c) {
	QString _ret = QsciScintilla::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciScintilla::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciScintilla_clearAnnotationsWithLine(QsciScintilla* self, int line) {
	self->clearAnnotations(static_cast<int>(line));
}

int QsciScintilla_indicatorDefine2(QsciScintilla* self, int style, int indicatorNumber) {
	return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

int QsciScintilla_markerDefine2(QsciScintilla* self, int sym, int markerNumber) {
	return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym), static_cast<int>(markerNumber));
}

int QsciScintilla_markerDefine3(QsciScintilla* self, char ch, int markerNumber) {
	return self->markerDefine(static_cast<char>(ch), static_cast<int>(markerNumber));
}

int QsciScintilla_markerDefine4(QsciScintilla* self, QPixmap* pm, int markerNumber) {
	return self->markerDefine(*pm, static_cast<int>(markerNumber));
}

int QsciScintilla_markerDefine5(QsciScintilla* self, QImage* im, int markerNumber) {
	return self->markerDefine(*im, static_cast<int>(markerNumber));
}

void QsciScintilla_markerDelete2(QsciScintilla* self, int linenr, int markerNumber) {
	self->markerDelete(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

void QsciScintilla_markerDeleteAllWithMarkerNumber(QsciScintilla* self, int markerNumber) {
	self->markerDeleteAll(static_cast<int>(markerNumber));
}

void QsciScintilla_setIndicatorDrawUnder2(QsciScintilla* self, bool under, int indicatorNumber) {
	self->setIndicatorDrawUnder(under, static_cast<int>(indicatorNumber));
}

void QsciScintilla_setIndicatorForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_setIndicatorHoverForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorHoverForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_setIndicatorHoverStyle2(QsciScintilla* self, int style, int indicatorNumber) {
	self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

void QsciScintilla_setIndicatorOutlineColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorOutlineColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_clearMarginTextWithLine(QsciScintilla* self, int line) {
	self->clearMarginText(static_cast<int>(line));
}

void QsciScintilla_setMarkerBackgroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
	self->setMarkerBackgroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_setMarkerForegroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
	self->setMarkerForegroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_setWrapVisualFlags2(QsciScintilla* self, int endFlag, int startFlag) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag));
}

void QsciScintilla_setWrapVisualFlags3(QsciScintilla* self, int endFlag, int startFlag, int indent) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag), static_cast<int>(indent));
}

bool QsciScintilla_override_virtual_apiContext(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__apiContext = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciScintilla_virtualbase_apiContext(void* self, int pos, int* context_start, int* last_word_start) {

	QStringList _ret = ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

bool QsciScintilla_override_virtual_findFirst(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__findFirst = slot;
	return true;
}

bool QsciScintilla_virtualbase_findFirst(void* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);

}

bool QsciScintilla_override_virtual_findFirstInSelection(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__findFirstInSelection = slot;
	return true;
}

bool QsciScintilla_virtualbase_findFirstInSelection(void* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);

}

bool QsciScintilla_override_virtual_findNext(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__findNext = slot;
	return true;
}

bool QsciScintilla_virtualbase_findNext(void* self) {

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::findNext();

}

bool QsciScintilla_override_virtual_recolor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__recolor = slot;
	return true;
}

void QsciScintilla_virtualbase_recolor(void* self, int start, int end) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::recolor(static_cast<int>(start), static_cast<int>(end));

}

bool QsciScintilla_override_virtual_replace(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__replace = slot;
	return true;
}

void QsciScintilla_virtualbase_replace(void* self, struct miqt_string replaceStr) {
	QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::replace(replaceStr_QString);

}

bool QsciScintilla_override_virtual_append(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__append = slot;
	return true;
}

void QsciScintilla_virtualbase_append(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::append(text_QString);

}

bool QsciScintilla_override_virtual_autoCompleteFromAll(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompleteFromAll = slot;
	return true;
}

void QsciScintilla_virtualbase_autoCompleteFromAll(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::autoCompleteFromAll();

}

bool QsciScintilla_override_virtual_autoCompleteFromAPIs(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompleteFromAPIs = slot;
	return true;
}

void QsciScintilla_virtualbase_autoCompleteFromAPIs(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::autoCompleteFromAPIs();

}

bool QsciScintilla_override_virtual_autoCompleteFromDocument(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompleteFromDocument = slot;
	return true;
}

void QsciScintilla_virtualbase_autoCompleteFromDocument(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::autoCompleteFromDocument();

}

bool QsciScintilla_override_virtual_callTip(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__callTip = slot;
	return true;
}

void QsciScintilla_virtualbase_callTip(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::callTip();

}

bool QsciScintilla_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QsciScintilla_virtualbase_clear(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::clear();

}

bool QsciScintilla_override_virtual_copy(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__copy = slot;
	return true;
}

void QsciScintilla_virtualbase_copy(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::copy();

}

bool QsciScintilla_override_virtual_cut(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__cut = slot;
	return true;
}

void QsciScintilla_virtualbase_cut(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::cut();

}

bool QsciScintilla_override_virtual_ensureCursorVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ensureCursorVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_ensureCursorVisible(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::ensureCursorVisible();

}

bool QsciScintilla_override_virtual_ensureLineVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ensureLineVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_ensureLineVisible(void* self, int line) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::ensureLineVisible(static_cast<int>(line));

}

bool QsciScintilla_override_virtual_foldAll(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__foldAll = slot;
	return true;
}

void QsciScintilla_virtualbase_foldAll(void* self, bool children) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::foldAll(children);

}

bool QsciScintilla_override_virtual_foldLine(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__foldLine = slot;
	return true;
}

void QsciScintilla_virtualbase_foldLine(void* self, int line) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::foldLine(static_cast<int>(line));

}

bool QsciScintilla_override_virtual_indent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indent = slot;
	return true;
}

void QsciScintilla_virtualbase_indent(void* self, int line) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::indent(static_cast<int>(line));

}

bool QsciScintilla_override_virtual_insert(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insert = slot;
	return true;
}

void QsciScintilla_virtualbase_insert(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::insert(text_QString);

}

bool QsciScintilla_override_virtual_insertAt(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertAt = slot;
	return true;
}

void QsciScintilla_virtualbase_insertAt(void* self, struct miqt_string text, int line, int index) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));

}

bool QsciScintilla_override_virtual_moveToMatchingBrace(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveToMatchingBrace = slot;
	return true;
}

void QsciScintilla_virtualbase_moveToMatchingBrace(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::moveToMatchingBrace();

}

bool QsciScintilla_override_virtual_paste(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paste = slot;
	return true;
}

void QsciScintilla_virtualbase_paste(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::paste();

}

bool QsciScintilla_override_virtual_redo(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redo = slot;
	return true;
}

void QsciScintilla_virtualbase_redo(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::redo();

}

bool QsciScintilla_override_virtual_removeSelectedText(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeSelectedText = slot;
	return true;
}

void QsciScintilla_virtualbase_removeSelectedText(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::removeSelectedText();

}

bool QsciScintilla_override_virtual_replaceSelectedText(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__replaceSelectedText = slot;
	return true;
}

void QsciScintilla_virtualbase_replaceSelectedText(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::replaceSelectedText(text_QString);

}

bool QsciScintilla_override_virtual_resetSelectionBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resetSelectionBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_resetSelectionBackgroundColor(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::resetSelectionBackgroundColor();

}

bool QsciScintilla_override_virtual_resetSelectionForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resetSelectionForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_resetSelectionForegroundColor(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::resetSelectionForegroundColor();

}

bool QsciScintilla_override_virtual_selectAll(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectAll = slot;
	return true;
}

void QsciScintilla_virtualbase_selectAll(void* self, bool select) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::selectAll(select);

}

bool QsciScintilla_override_virtual_selectToMatchingBrace(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__selectToMatchingBrace = slot;
	return true;
}

void QsciScintilla_virtualbase_selectToMatchingBrace(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::selectToMatchingBrace();

}

bool QsciScintilla_override_virtual_setAutoCompletionCaseSensitivity(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoCompletionCaseSensitivity = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoCompletionCaseSensitivity(void* self, bool cs) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoCompletionCaseSensitivity(cs);

}

bool QsciScintilla_override_virtual_setAutoCompletionReplaceWord(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoCompletionReplaceWord = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoCompletionReplaceWord(void* self, bool replace) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoCompletionReplaceWord(replace);

}

bool QsciScintilla_override_virtual_setAutoCompletionShowSingle(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoCompletionShowSingle = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoCompletionShowSingle(void* self, bool single) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoCompletionShowSingle(single);

}

bool QsciScintilla_override_virtual_setAutoCompletionSource(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoCompletionSource = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoCompletionSource(void* self, int source) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoCompletionSource(static_cast<MiqtVirtualQsciScintilla::AutoCompletionSource>(source));

}

bool QsciScintilla_override_virtual_setAutoCompletionThreshold(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoCompletionThreshold = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoCompletionThreshold(void* self, int thresh) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoCompletionThreshold(static_cast<int>(thresh));

}

bool QsciScintilla_override_virtual_setAutoCompletionUseSingle(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoCompletionUseSingle = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoCompletionUseSingle(void* self, int single) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoCompletionUseSingle(static_cast<MiqtVirtualQsciScintilla::AutoCompletionUseSingle>(single));

}

bool QsciScintilla_override_virtual_setAutoIndent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndent = slot;
	return true;
}

void QsciScintilla_virtualbase_setAutoIndent(void* self, bool autoindent) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setAutoIndent(autoindent);

}

bool QsciScintilla_override_virtual_setBraceMatching(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBraceMatching = slot;
	return true;
}

void QsciScintilla_virtualbase_setBraceMatching(void* self, int bm) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setBraceMatching(static_cast<MiqtVirtualQsciScintilla::BraceMatch>(bm));

}

bool QsciScintilla_override_virtual_setBackspaceUnindents(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBackspaceUnindents = slot;
	return true;
}

void QsciScintilla_virtualbase_setBackspaceUnindents(void* self, bool unindent) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setBackspaceUnindents(unindent);

}

bool QsciScintilla_override_virtual_setCaretForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCaretForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setCaretForegroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setCaretForegroundColor(*col);

}

bool QsciScintilla_override_virtual_setCaretLineBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCaretLineBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setCaretLineBackgroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setCaretLineBackgroundColor(*col);

}

bool QsciScintilla_override_virtual_setCaretLineFrameWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCaretLineFrameWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_setCaretLineFrameWidth(void* self, int width) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setCaretLineFrameWidth(static_cast<int>(width));

}

bool QsciScintilla_override_virtual_setCaretLineVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCaretLineVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_setCaretLineVisible(void* self, bool enable) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setCaretLineVisible(enable);

}

bool QsciScintilla_override_virtual_setCaretWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCaretWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_setCaretWidth(void* self, int width) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setCaretWidth(static_cast<int>(width));

}

bool QsciScintilla_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setColor(void* self, QColor* c) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setColor(*c);

}

bool QsciScintilla_override_virtual_setCursorPosition(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCursorPosition = slot;
	return true;
}

void QsciScintilla_virtualbase_setCursorPosition(void* self, int line, int index) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setCursorPosition(static_cast<int>(line), static_cast<int>(index));

}

bool QsciScintilla_override_virtual_setEolMode(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolMode = slot;
	return true;
}

void QsciScintilla_virtualbase_setEolMode(void* self, int mode) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setEolMode(static_cast<MiqtVirtualQsciScintilla::EolMode>(mode));

}

bool QsciScintilla_override_virtual_setEolVisibility(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolVisibility = slot;
	return true;
}

void QsciScintilla_virtualbase_setEolVisibility(void* self, bool visible) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setEolVisibility(visible);

}

bool QsciScintilla_override_virtual_setFolding(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFolding = slot;
	return true;
}

void QsciScintilla_virtualbase_setFolding(void* self, int fold, int margin) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setFolding(static_cast<MiqtVirtualQsciScintilla::FoldStyle>(fold), static_cast<int>(margin));

}

bool QsciScintilla_override_virtual_setIndentation(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setIndentation = slot;
	return true;
}

void QsciScintilla_virtualbase_setIndentation(void* self, int line, int indentation) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setIndentation(static_cast<int>(line), static_cast<int>(indentation));

}

bool QsciScintilla_override_virtual_setIndentationGuides(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setIndentationGuides = slot;
	return true;
}

void QsciScintilla_virtualbase_setIndentationGuides(void* self, bool enable) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setIndentationGuides(enable);

}

bool QsciScintilla_override_virtual_setIndentationGuidesBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setIndentationGuidesBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setIndentationGuidesBackgroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setIndentationGuidesBackgroundColor(*col);

}

bool QsciScintilla_override_virtual_setIndentationGuidesForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setIndentationGuidesForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setIndentationGuidesForegroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setIndentationGuidesForegroundColor(*col);

}

bool QsciScintilla_override_virtual_setIndentationsUseTabs(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setIndentationsUseTabs = slot;
	return true;
}

void QsciScintilla_virtualbase_setIndentationsUseTabs(void* self, bool tabs) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setIndentationsUseTabs(tabs);

}

bool QsciScintilla_override_virtual_setIndentationWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setIndentationWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_setIndentationWidth(void* self, int width) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setIndentationWidth(static_cast<int>(width));

}

bool QsciScintilla_override_virtual_setLexer(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setLexer = slot;
	return true;
}

void QsciScintilla_virtualbase_setLexer(void* self, QsciLexer* lexer) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setLexer(lexer);

}

bool QsciScintilla_override_virtual_setMarginsBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginsBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginsBackgroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginsBackgroundColor(*col);

}

bool QsciScintilla_override_virtual_setMarginsFont(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginsFont = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginsFont(void* self, QFont* f) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginsFont(*f);

}

bool QsciScintilla_override_virtual_setMarginsForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginsForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginsForegroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginsForegroundColor(*col);

}

bool QsciScintilla_override_virtual_setMarginLineNumbers(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginLineNumbers = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginLineNumbers(void* self, int margin, bool lnrs) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginLineNumbers(static_cast<int>(margin), lnrs);

}

bool QsciScintilla_override_virtual_setMarginMarkerMask(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginMarkerMask = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginMarkerMask(void* self, int margin, int mask) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));

}

bool QsciScintilla_override_virtual_setMarginSensitivity(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginSensitivity = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginSensitivity(void* self, int margin, bool sens) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginSensitivity(static_cast<int>(margin), sens);

}

bool QsciScintilla_override_virtual_setMarginWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginWidth(void* self, int margin, int width) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginWidth(static_cast<int>(margin), static_cast<int>(width));

}

bool QsciScintilla_override_virtual_setMarginWidth2(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMarginWidth2 = slot;
	return true;
}

void QsciScintilla_virtualbase_setMarginWidth2(void* self, int margin, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setMarginWidth(static_cast<int>(margin), s_QString);

}

bool QsciScintilla_override_virtual_setModified(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setModified = slot;
	return true;
}

void QsciScintilla_virtualbase_setModified(void* self, bool m) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setModified(m);

}

bool QsciScintilla_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciScintilla_virtualbase_setPaper(void* self, QColor* c) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setPaper(*c);

}

bool QsciScintilla_override_virtual_setReadOnly(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setReadOnly = slot;
	return true;
}

void QsciScintilla_virtualbase_setReadOnly(void* self, bool ro) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setReadOnly(ro);

}

bool QsciScintilla_override_virtual_setSelection(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelection = slot;
	return true;
}

void QsciScintilla_virtualbase_setSelection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));

}

bool QsciScintilla_override_virtual_setSelectionBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setSelectionBackgroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setSelectionBackgroundColor(*col);

}

bool QsciScintilla_override_virtual_setSelectionForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSelectionForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_setSelectionForegroundColor(void* self, QColor* col) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setSelectionForegroundColor(*col);

}

bool QsciScintilla_override_virtual_setTabIndents(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTabIndents = slot;
	return true;
}

void QsciScintilla_virtualbase_setTabIndents(void* self, bool indent) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setTabIndents(indent);

}

bool QsciScintilla_override_virtual_setTabWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setTabWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_setTabWidth(void* self, int width) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setTabWidth(static_cast<int>(width));

}

bool QsciScintilla_override_virtual_setText(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setText = slot;
	return true;
}

void QsciScintilla_virtualbase_setText(void* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setText(text_QString);

}

bool QsciScintilla_override_virtual_setUtf8(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setUtf8 = slot;
	return true;
}

void QsciScintilla_virtualbase_setUtf8(void* self, bool cp) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setUtf8(cp);

}

bool QsciScintilla_override_virtual_setWhitespaceVisibility(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setWhitespaceVisibility = slot;
	return true;
}

void QsciScintilla_virtualbase_setWhitespaceVisibility(void* self, int mode) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setWhitespaceVisibility(static_cast<MiqtVirtualQsciScintilla::WhitespaceVisibility>(mode));

}

bool QsciScintilla_override_virtual_setWrapMode(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setWrapMode = slot;
	return true;
}

void QsciScintilla_virtualbase_setWrapMode(void* self, int mode) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setWrapMode(static_cast<MiqtVirtualQsciScintilla::WrapMode>(mode));

}

bool QsciScintilla_override_virtual_undo(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__undo = slot;
	return true;
}

void QsciScintilla_virtualbase_undo(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::undo();

}

bool QsciScintilla_override_virtual_unindent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__unindent = slot;
	return true;
}

void QsciScintilla_virtualbase_unindent(void* self, int line) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::unindent(static_cast<int>(line));

}

bool QsciScintilla_override_virtual_zoomIn(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__zoomIn = slot;
	return true;
}

void QsciScintilla_virtualbase_zoomIn(void* self, int range) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::zoomIn(static_cast<int>(range));

}

bool QsciScintilla_override_virtual_zoomIn2(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__zoomIn2 = slot;
	return true;
}

void QsciScintilla_virtualbase_zoomIn2(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::zoomIn();

}

bool QsciScintilla_override_virtual_zoomOut(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__zoomOut = slot;
	return true;
}

void QsciScintilla_virtualbase_zoomOut(void* self, int range) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::zoomOut(static_cast<int>(range));

}

bool QsciScintilla_override_virtual_zoomOut2(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__zoomOut2 = slot;
	return true;
}

void QsciScintilla_virtualbase_zoomOut2(void* self) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::zoomOut();

}

bool QsciScintilla_override_virtual_zoomTo(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__zoomTo = slot;
	return true;
}

void QsciScintilla_virtualbase_zoomTo(void* self, int size) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::zoomTo(static_cast<int>(size));

}

bool QsciScintilla_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciScintilla_virtualbase_event(void* self, QEvent* e) {

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::event(e);

}

bool QsciScintilla_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_changeEvent(void* self, QEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::changeEvent(e);

}

bool QsciScintilla_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::contextMenuEvent(e);

}

bool QsciScintilla_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_wheelEvent(void* self, QWheelEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::wheelEvent(e);

}

bool QsciScintilla_override_virtual_canInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canInsertFromMimeData = slot;
	return true;
}

bool QsciScintilla_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::canInsertFromMimeData(source);

}

bool QsciScintilla_override_virtual_fromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fromMimeData = slot;
	return true;
}

struct miqt_string QsciScintilla_virtualbase_fromMimeData(const void* self, QMimeData* source, bool* rectangular) {

	QByteArray _qb = ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::fromMimeData(source, *rectangular);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;

}

bool QsciScintilla_override_virtual_toMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__toMimeData = slot;
	return true;
}

QMimeData* QsciScintilla_virtualbase_toMimeData(const void* self, struct miqt_string text, bool rectangular) {
	QByteArray text_QByteArray(text.data, text.len);

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::toMimeData(text_QByteArray, rectangular);

}

bool QsciScintilla_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::dragEnterEvent(e);

}

bool QsciScintilla_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::dragLeaveEvent(e);

}

bool QsciScintilla_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::dragMoveEvent(e);

}

bool QsciScintilla_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_dropEvent(void* self, QDropEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::dropEvent(e);

}

bool QsciScintilla_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_focusInEvent(void* self, QFocusEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::focusInEvent(e);

}

bool QsciScintilla_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::focusOutEvent(e);

}

bool QsciScintilla_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QsciScintilla_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::focusNextPrevChild(next);

}

bool QsciScintilla_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::keyPressEvent(e);

}

bool QsciScintilla_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::inputMethodEvent(event);

}

bool QsciScintilla_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QsciScintilla_virtualbase_inputMethodQuery(const void* self, int query) {

	return new QVariant(( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

}

bool QsciScintilla_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::mouseDoubleClickEvent(e);

}

bool QsciScintilla_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::mouseMoveEvent(e);

}

bool QsciScintilla_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::mousePressEvent(e);

}

bool QsciScintilla_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::mouseReleaseEvent(e);

}

bool QsciScintilla_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_paintEvent(void* self, QPaintEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::paintEvent(e);

}

bool QsciScintilla_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_resizeEvent(void* self, QResizeEvent* e) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::resizeEvent(e);

}

bool QsciScintilla_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QsciScintilla_virtualbase_scrollContentsBy(void* self, int dx, int dy) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

}

bool QsciScintilla_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QsciScintilla_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::minimumSizeHint());

}

bool QsciScintilla_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QsciScintilla_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::sizeHint());

}

bool QsciScintilla_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QsciScintilla_virtualbase_setupViewport(void* self, QWidget* viewport) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setupViewport(viewport);

}

bool QsciScintilla_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciScintilla_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::eventFilter(param1, param2);

}

bool QsciScintilla_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QsciScintilla_virtualbase_viewportEvent(void* self, QEvent* param1) {

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::viewportEvent(param1);

}

bool QsciScintilla_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QsciScintilla_virtualbase_viewportSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::viewportSizeHint());

}

bool QsciScintilla_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QsciScintilla_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::devType();

}

bool QsciScintilla_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::setVisible(visible);

}

bool QsciScintilla_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QsciScintilla_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::heightForWidth(static_cast<int>(param1));

}

bool QsciScintilla_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QsciScintilla_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::hasHeightForWidth();

}

bool QsciScintilla_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QsciScintilla_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::paintEngine();

}

bool QsciScintilla_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::keyReleaseEvent(event);

}

bool QsciScintilla_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_enterEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::enterEvent(event);

}

bool QsciScintilla_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::leaveEvent(event);

}

bool QsciScintilla_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::moveEvent(event);

}

bool QsciScintilla_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::closeEvent(event);

}

bool QsciScintilla_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::tabletEvent(event);

}

bool QsciScintilla_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::actionEvent(event);

}

bool QsciScintilla_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::showEvent(event);

}

bool QsciScintilla_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::hideEvent(event);

}

bool QsciScintilla_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QsciScintilla_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

}

bool QsciScintilla_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QsciScintilla_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::metric(static_cast<MiqtVirtualQsciScintilla::PaintDeviceMetric>(param1));

}

bool QsciScintilla_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QsciScintilla_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::initPainter(painter);

}

bool QsciScintilla_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QsciScintilla_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::redirected(offset);

}

bool QsciScintilla_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QsciScintilla_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::sharedPainter();

}

bool QsciScintilla_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::timerEvent(event);

}

bool QsciScintilla_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::childEvent(event);

}

bool QsciScintilla_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::customEvent(event);

}

bool QsciScintilla_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciScintilla_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::connectNotify(*signal);

}

bool QsciScintilla_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciScintilla_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciScintilla*)(self) )->QsciScintilla::disconnectNotify(*signal);

}

void QsciScintilla_protectedbase_setScrollBars(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setScrollBars();

}

struct miqt_string QsciScintilla_protectedbase_textAsBytes(bool* _dynamic_cast_ok, const void* self, struct miqt_string text) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
			QString text_QString = QString::fromUtf8(text.data, text.len);

	QByteArray _qb = self_cast->textAsBytes(text_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;

}

struct miqt_string QsciScintilla_protectedbase_bytesAsText(bool* _dynamic_cast_ok, const void* self, const char* bytes) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
	
	QString _ret = self_cast->bytesAsText(bytes);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QsciScintilla_protectedbase_contextMenuNeeded(bool* _dynamic_cast_ok, const void* self, int x, int y) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));

}

void QsciScintilla_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QsciScintilla_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QsciScintilla_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QsciScintilla_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QsciScintilla_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QsciScintilla_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QsciScintilla_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QsciScintilla_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QsciScintilla_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QsciScintilla_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciScintilla_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciScintilla_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciScintilla_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciScintilla_delete(QsciScintilla* self) {
	delete self;
}

