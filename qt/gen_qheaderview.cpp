#include "gen_qheaderview.h"
#include "qheaderview.h"

#include <QAbstractItemModel>
#include <QByteArray>
#include <QHeaderView>
#include <QMetaObject>
#include <QPoint>
#include <QSize>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QHeaderView_MetaObject(QHeaderView* self) {
	return (QMetaObject*) self->metaObject();
}

void QHeaderView_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QHeaderView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHeaderView_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QHeaderView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

int QHeaderView_Offset(QHeaderView* self) {
	return self->offset();
}

int QHeaderView_Length(QHeaderView* self) {
	return self->length();
}

QSize* QHeaderView_SizeHint(QHeaderView* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QHeaderView_SetVisible(QHeaderView* self, bool v) {
	self->setVisible(v);
}

int QHeaderView_SectionSizeHint(QHeaderView* self, int logicalIndex) {
	return self->sectionSizeHint(static_cast<int>(logicalIndex));
}

int QHeaderView_VisualIndexAt(QHeaderView* self, int position) {
	return self->visualIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt(QHeaderView* self, int position) {
	return self->logicalIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt2(QHeaderView* self, int x, int y) {
	return self->logicalIndexAt(static_cast<int>(x), static_cast<int>(y));
}

int QHeaderView_LogicalIndexAtWithPos(QHeaderView* self, QPoint* pos) {
	return self->logicalIndexAt(*pos);
}

int QHeaderView_SectionSize(QHeaderView* self, int logicalIndex) {
	return self->sectionSize(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionPosition(QHeaderView* self, int logicalIndex) {
	return self->sectionPosition(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionViewportPosition(QHeaderView* self, int logicalIndex) {
	return self->sectionViewportPosition(static_cast<int>(logicalIndex));
}

void QHeaderView_MoveSection(QHeaderView* self, int from, int to) {
	self->moveSection(static_cast<int>(from), static_cast<int>(to));
}

void QHeaderView_SwapSections(QHeaderView* self, int first, int second) {
	self->swapSections(static_cast<int>(first), static_cast<int>(second));
}

void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size) {
	self->resizeSection(static_cast<int>(logicalIndex), static_cast<int>(size));
}

bool QHeaderView_IsSectionHidden(QHeaderView* self, int logicalIndex) {
	return self->isSectionHidden(static_cast<int>(logicalIndex));
}

void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide) {
	self->setSectionHidden(static_cast<int>(logicalIndex), hide);
}

int QHeaderView_HiddenSectionCount(QHeaderView* self) {
	return self->hiddenSectionCount();
}

void QHeaderView_HideSection(QHeaderView* self, int logicalIndex) {
	self->hideSection(static_cast<int>(logicalIndex));
}

void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex) {
	self->showSection(static_cast<int>(logicalIndex));
}

int QHeaderView_Count(QHeaderView* self) {
	return self->count();
}

int QHeaderView_VisualIndex(QHeaderView* self, int logicalIndex) {
	return self->visualIndex(static_cast<int>(logicalIndex));
}

int QHeaderView_LogicalIndex(QHeaderView* self, int visualIndex) {
	return self->logicalIndex(static_cast<int>(visualIndex));
}

void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable) {
	self->setSectionsMovable(movable);
}

bool QHeaderView_SectionsMovable(QHeaderView* self) {
	return self->sectionsMovable();
}

void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable) {
	self->setFirstSectionMovable(movable);
}

bool QHeaderView_IsFirstSectionMovable(QHeaderView* self) {
	return self->isFirstSectionMovable();
}

void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable) {
	self->setSectionsClickable(clickable);
}

bool QHeaderView_SectionsClickable(QHeaderView* self) {
	return self->sectionsClickable();
}

void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight) {
	self->setHighlightSections(highlight);
}

bool QHeaderView_HighlightSections(QHeaderView* self) {
	return self->highlightSections();
}

void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision) {
	self->setResizeContentsPrecision(static_cast<int>(precision));
}

int QHeaderView_ResizeContentsPrecision(QHeaderView* self) {
	return self->resizeContentsPrecision();
}

int QHeaderView_StretchSectionCount(QHeaderView* self) {
	return self->stretchSectionCount();
}

void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show) {
	self->setSortIndicatorShown(show);
}

bool QHeaderView_IsSortIndicatorShown(QHeaderView* self) {
	return self->isSortIndicatorShown();
}

int QHeaderView_SortIndicatorSection(QHeaderView* self) {
	return self->sortIndicatorSection();
}

bool QHeaderView_StretchLastSection(QHeaderView* self) {
	return self->stretchLastSection();
}

void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch) {
	self->setStretchLastSection(stretch);
}

bool QHeaderView_CascadingSectionResizes(QHeaderView* self) {
	return self->cascadingSectionResizes();
}

void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable) {
	self->setCascadingSectionResizes(enable);
}

int QHeaderView_DefaultSectionSize(QHeaderView* self) {
	return self->defaultSectionSize();
}

void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size) {
	self->setDefaultSectionSize(static_cast<int>(size));
}

void QHeaderView_ResetDefaultSectionSize(QHeaderView* self) {
	self->resetDefaultSectionSize();
}

int QHeaderView_MinimumSectionSize(QHeaderView* self) {
	return self->minimumSectionSize();
}

void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size) {
	self->setMinimumSectionSize(static_cast<int>(size));
}

int QHeaderView_MaximumSectionSize(QHeaderView* self) {
	return self->maximumSectionSize();
}

void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size) {
	self->setMaximumSectionSize(static_cast<int>(size));
}

void QHeaderView_DoItemsLayout(QHeaderView* self) {
	self->doItemsLayout();
}

bool QHeaderView_SectionsMoved(QHeaderView* self) {
	return self->sectionsMoved();
}

bool QHeaderView_SectionsHidden(QHeaderView* self) {
	return self->sectionsHidden();
}

QByteArray* QHeaderView_SaveState(QHeaderView* self) {
	QByteArray ret = self->saveState();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QHeaderView_RestoreState(QHeaderView* self, QByteArray* state) {
	return self->restoreState(*state);
}

void QHeaderView_Reset(QHeaderView* self) {
	self->reset();
}

void QHeaderView_SetOffset(QHeaderView* self, int offset) {
	self->setOffset(static_cast<int>(offset));
}

void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex) {
	self->setOffsetToSectionPosition(static_cast<int>(visualIndex));
}

void QHeaderView_SetOffsetToLastSection(QHeaderView* self) {
	self->setOffsetToLastSection();
}

void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
	self->sectionMoved(static_cast<int>(logicalIndex), static_cast<int>(oldVisualIndex), static_cast<int>(newVisualIndex));
}

void QHeaderView_connect_SectionMoved(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionMoved), self, [=](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize) {
	self->sectionResized(static_cast<int>(logicalIndex), static_cast<int>(oldSize), static_cast<int>(newSize));
}

void QHeaderView_connect_SectionResized(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int, int)>(&QHeaderView::sectionResized), self, [=](int logicalIndex, int oldSize, int newSize) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex) {
	self->sectionPressed(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionPressed(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionPressed), self, [=](int logicalIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex) {
	self->sectionClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionClicked(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionClicked), self, [=](int logicalIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex) {
	self->sectionEntered(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionEntered(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionEntered), self, [=](int logicalIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionDoubleClicked(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionDoubleClicked), self, [=](int logicalIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
	self->sectionCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QHeaderView_connect_SectionCountChanged(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int, int)>(&QHeaderView::sectionCountChanged), self, [=](int oldCount, int newCount) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex) {
	self->sectionHandleDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_connect_SectionHandleDoubleClicked(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)(int)>(&QHeaderView::sectionHandleDoubleClicked), self, [=](int logicalIndex) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_GeometriesChanged(QHeaderView* self) {
	self->geometriesChanged();
}

void QHeaderView_connect_GeometriesChanged(QHeaderView* self, void* slot) {
	QHeaderView::connect(self, static_cast<void (QHeaderView::*)()>(&QHeaderView::geometriesChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QHeaderView_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QHeaderView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHeaderView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHeaderView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHeaderView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QHeaderView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHeaderView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHeaderView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHeaderView_Delete(QHeaderView* self) {
	delete self;
}

