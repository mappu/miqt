#include <QEvent>
#include <QGraphicsGridLayout>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicsgridlayout.h>
#include "gen_qgraphicsgridlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QGraphicsGridLayout_count(const QGraphicsGridLayout*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsGridLayout_itemAtWithIndex(const QGraphicsGridLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsGridLayout_removeAt(QGraphicsGridLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsGridLayout_invalidate(QGraphicsGridLayout*, intptr_t);
void miqt_exec_callback_QGraphicsGridLayout_setGeometry(QGraphicsGridLayout*, intptr_t, QRectF*);
QSizeF* miqt_exec_callback_QGraphicsGridLayout_sizeHint(const QGraphicsGridLayout*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsGridLayout_getContentsMargins(const QGraphicsGridLayout*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsGridLayout_updateGeometry(QGraphicsGridLayout*, intptr_t);
void miqt_exec_callback_QGraphicsGridLayout_widgetEvent(QGraphicsGridLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsGridLayout_isEmpty(const QGraphicsGridLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsGridLayout final : public QGraphicsGridLayout {
public:

	MiqtVirtualQGraphicsGridLayout(): QGraphicsGridLayout() {};
	MiqtVirtualQGraphicsGridLayout(QGraphicsLayoutItem* parent): QGraphicsGridLayout(parent) {};

	virtual ~MiqtVirtualQGraphicsGridLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QGraphicsGridLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsGridLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QGraphicsGridLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAtWithIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (handle__itemAtWithIndex == 0) {
			return QGraphicsGridLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsGridLayout_itemAtWithIndex(this, handle__itemAtWithIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGraphicsLayoutItem* virtualbase_itemAtWithIndex(int index) const {

		return QGraphicsGridLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__removeAt == 0) {
			QGraphicsGridLayout::removeAt(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsGridLayout_removeAt(this, handle__removeAt, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_removeAt(int index) {

		QGraphicsGridLayout::removeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QGraphicsGridLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsGridLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QGraphicsGridLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsGridLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsGridLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsGridLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QGraphicsGridLayout::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsGridLayout_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_sizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsGridLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
			QGraphicsGridLayout::getContentsMargins(left, top, right, bottom);
			return;
		}
		
		qreal* left_ret = left;
		double* sigval1 = static_cast<double*>(left_ret);
		qreal* top_ret = top;
		double* sigval2 = static_cast<double*>(top_ret);
		qreal* right_ret = right;
		double* sigval3 = static_cast<double*>(right_ret);
		qreal* bottom_ret = bottom;
		double* sigval4 = static_cast<double*>(bottom_ret);

		miqt_exec_callback_QGraphicsGridLayout_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsGridLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsGridLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsGridLayout_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsGridLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__widgetEvent == 0) {
			QGraphicsGridLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsGridLayout_widgetEvent(this, handle__widgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_widgetEvent(QEvent* e) {

		QGraphicsGridLayout::widgetEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QGraphicsGridLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGraphicsGridLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QGraphicsGridLayout::isEmpty();

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsGridLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem);
	friend void QGraphicsGridLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsGridLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsGridLayout* QGraphicsGridLayout_new() {
	return new MiqtVirtualQGraphicsGridLayout();
}

QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent) {
	return new MiqtVirtualQGraphicsGridLayout(parent);
}

void QGraphicsGridLayout_virtbase(QGraphicsGridLayout* src, QGraphicsLayout** outptr_QGraphicsLayout) {
	*outptr_QGraphicsLayout = static_cast<QGraphicsLayout*>(src);
}

void QGraphicsGridLayout_addItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGraphicsGridLayout_addItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGraphicsGridLayout_setHorizontalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_horizontalSpacing(const QGraphicsGridLayout* self) {
	qreal _ret = self->horizontalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setVerticalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_verticalSpacing(const QGraphicsGridLayout* self) {
	qreal _ret = self->verticalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsGridLayout_setRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
	self->setRowSpacing(static_cast<int>(row), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_rowSpacing(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowSpacing(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
	self->setColumnSpacing(static_cast<int>(column), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_columnSpacing(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnSpacing(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
	self->setRowStretchFactor(static_cast<int>(row), static_cast<int>(stretch));
}

int QGraphicsGridLayout_rowStretchFactor(const QGraphicsGridLayout* self, int row) {
	return self->rowStretchFactor(static_cast<int>(row));
}

void QGraphicsGridLayout_setColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
	self->setColumnStretchFactor(static_cast<int>(column), static_cast<int>(stretch));
}

int QGraphicsGridLayout_columnStretchFactor(const QGraphicsGridLayout* self, int column) {
	return self->columnStretchFactor(static_cast<int>(column));
}

void QGraphicsGridLayout_setRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_rowMinimumHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowMinimumHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowPreferredHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_rowPreferredHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowPreferredHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMaximumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_rowMaximumHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowMaximumHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowFixedHeight(static_cast<int>(row), static_cast<qreal>(height));
}

void QGraphicsGridLayout_setColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_columnMinimumWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnMinimumWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnPreferredWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_columnPreferredWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnPreferredWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMaximumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_columnMaximumWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnMaximumWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_setColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnFixedWidth(static_cast<int>(column), static_cast<qreal>(width));
}

void QGraphicsGridLayout_setRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
	self->setRowAlignment(static_cast<int>(row), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_rowAlignment(const QGraphicsGridLayout* self, int row) {
	Qt::Alignment _ret = self->rowAlignment(static_cast<int>(row));
	return static_cast<int>(_ret);
}

void QGraphicsGridLayout_setColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
	self->setColumnAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_columnAlignment(const QGraphicsGridLayout* self, int column) {
	Qt::Alignment _ret = self->columnAlignment(static_cast<int>(column));
	return static_cast<int>(_ret);
}

void QGraphicsGridLayout_setAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment _ret = self->alignment(item);
	return static_cast<int>(_ret);
}

int QGraphicsGridLayout_rowCount(const QGraphicsGridLayout* self) {
	return self->rowCount();
}

int QGraphicsGridLayout_columnCount(const QGraphicsGridLayout* self) {
	return self->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_itemAt(const QGraphicsGridLayout* self, int row, int column) {
	return self->itemAt(static_cast<int>(row), static_cast<int>(column));
}

int QGraphicsGridLayout_count(const QGraphicsGridLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsGridLayout_itemAtWithIndex(const QGraphicsGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsGridLayout_removeAt(QGraphicsGridLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsGridLayout_removeItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsGridLayout_invalidate(QGraphicsGridLayout* self) {
	self->invalidate();
}

void QGraphicsGridLayout_setGeometry(QGraphicsGridLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QSizeF* QGraphicsGridLayout_sizeHint(const QGraphicsGridLayout* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsGridLayout_addItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_addItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

bool QGraphicsGridLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QGraphicsGridLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_count();
}

bool QGraphicsGridLayout_override_virtual_itemAtWithIndex(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAtWithIndex = slot;
	return true;
}

QGraphicsLayoutItem* QGraphicsGridLayout_virtualbase_itemAtWithIndex(const void* self, int index) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_itemAtWithIndex(index);
}

bool QGraphicsGridLayout_override_virtual_removeAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeAt = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_removeAt(void* self, int index) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_removeAt(index);
}

bool QGraphicsGridLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_invalidate();
}

bool QGraphicsGridLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsGridLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QGraphicsGridLayout_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_sizeHint(which, constraint);
}

bool QGraphicsGridLayout_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsGridLayout_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsGridLayout_override_virtual_widgetEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widgetEvent = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_widgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_widgetEvent(e);
}

bool QGraphicsGridLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QGraphicsGridLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_isEmpty();
}

void QGraphicsGridLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayoutItem(layoutItem);

}

void QGraphicsGridLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsGridLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsGridLayout_delete(QGraphicsGridLayout* self) {
	delete self;
}

