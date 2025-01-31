#include <QEvent>
#include <QGraphicsGridLayout>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicsgridlayout.h>
#include "gen_qgraphicsgridlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QGraphicsGridLayout_Count(const QGraphicsGridLayout*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsGridLayout_ItemAtWithIndex(const QGraphicsGridLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsGridLayout_Invalidate(QGraphicsGridLayout*, intptr_t);
void miqt_exec_callback_QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout*, intptr_t, QRectF*);
QSizeF* miqt_exec_callback_QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsGridLayout_GetContentsMargins(const QGraphicsGridLayout*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsGridLayout_UpdateGeometry(QGraphicsGridLayout*, intptr_t);
void miqt_exec_callback_QGraphicsGridLayout_WidgetEvent(QGraphicsGridLayout*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsGridLayout final : public QGraphicsGridLayout {
public:

	MiqtVirtualQGraphicsGridLayout(): QGraphicsGridLayout() {};
	MiqtVirtualQGraphicsGridLayout(QGraphicsLayoutItem* parent): QGraphicsGridLayout(parent) {};

	virtual ~MiqtVirtualQGraphicsGridLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QGraphicsGridLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsGridLayout_Count(this, handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QGraphicsGridLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAtWithIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (handle__ItemAtWithIndex == 0) {
			return QGraphicsGridLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsGridLayout_ItemAtWithIndex(this, handle__ItemAtWithIndex, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGraphicsLayoutItem* virtualbase_ItemAtWithIndex(int index) const {

		return QGraphicsGridLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__RemoveAt == 0) {
			QGraphicsGridLayout::removeAt(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsGridLayout_RemoveAt(this, handle__RemoveAt, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RemoveAt(int index) {

		QGraphicsGridLayout::removeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QGraphicsGridLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsGridLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QGraphicsGridLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__SetGeometry == 0) {
			QGraphicsGridLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsGridLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRectF* rect) {

		QGraphicsGridLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__SizeHint == 0) {
			return QGraphicsGridLayout::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsGridLayout_SizeHint(this, handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_SizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsGridLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__GetContentsMargins == 0) {
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

		miqt_exec_callback_QGraphicsGridLayout_GetContentsMargins(this, handle__GetContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GetContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsGridLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__UpdateGeometry == 0) {
			QGraphicsGridLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsGridLayout_UpdateGeometry(this, handle__UpdateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometry() {

		QGraphicsGridLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WidgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__WidgetEvent == 0) {
			QGraphicsGridLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsGridLayout_WidgetEvent(this, handle__WidgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WidgetEvent(QEvent* e) {

		QGraphicsGridLayout::widgetEvent(e);

	}

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

void QGraphicsGridLayout_AddItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGraphicsGridLayout_AddItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_HorizontalSpacing(const QGraphicsGridLayout* self) {
	qreal _ret = self->horizontalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setVerticalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_VerticalSpacing(const QGraphicsGridLayout* self) {
	qreal _ret = self->verticalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
	self->setRowSpacing(static_cast<int>(row), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_RowSpacing(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowSpacing(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
	self->setColumnSpacing(static_cast<int>(column), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_ColumnSpacing(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnSpacing(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
	self->setRowStretchFactor(static_cast<int>(row), static_cast<int>(stretch));
}

int QGraphicsGridLayout_RowStretchFactor(const QGraphicsGridLayout* self, int row) {
	return self->rowStretchFactor(static_cast<int>(row));
}

void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
	self->setColumnStretchFactor(static_cast<int>(column), static_cast<int>(stretch));
}

int QGraphicsGridLayout_ColumnStretchFactor(const QGraphicsGridLayout* self, int column) {
	return self->columnStretchFactor(static_cast<int>(column));
}

void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMinimumHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowMinimumHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowPreferredHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowPreferredHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowPreferredHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowMaximumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMaximumHeight(const QGraphicsGridLayout* self, int row) {
	qreal _ret = self->rowMaximumHeight(static_cast<int>(row));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
	self->setRowFixedHeight(static_cast<int>(row), static_cast<qreal>(height));
}

void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMinimumWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnMinimumWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnPreferredWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnPreferredWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnPreferredWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnMaximumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMaximumWidth(const QGraphicsGridLayout* self, int column) {
	qreal _ret = self->columnMaximumWidth(static_cast<int>(column));
	return static_cast<double>(_ret);
}

void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
	self->setColumnFixedWidth(static_cast<int>(column), static_cast<qreal>(width));
}

void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
	self->setRowAlignment(static_cast<int>(row), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_RowAlignment(const QGraphicsGridLayout* self, int row) {
	Qt::Alignment _ret = self->rowAlignment(static_cast<int>(row));
	return static_cast<int>(_ret);
}

void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
	self->setColumnAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_ColumnAlignment(const QGraphicsGridLayout* self, int column) {
	Qt::Alignment _ret = self->columnAlignment(static_cast<int>(column));
	return static_cast<int>(_ret);
}

void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_Alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment _ret = self->alignment(item);
	return static_cast<int>(_ret);
}

int QGraphicsGridLayout_RowCount(const QGraphicsGridLayout* self) {
	return self->rowCount();
}

int QGraphicsGridLayout_ColumnCount(const QGraphicsGridLayout* self) {
	return self->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(const QGraphicsGridLayout* self, int row, int column) {
	return self->itemAt(static_cast<int>(row), static_cast<int>(column));
}

int QGraphicsGridLayout_Count(const QGraphicsGridLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAtWithIndex(const QGraphicsGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self) {
	self->invalidate();
}

void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

bool QGraphicsGridLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QGraphicsGridLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_Count();
}

bool QGraphicsGridLayout_override_virtual_ItemAtWithIndex(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAtWithIndex = slot;
	return true;
}

QGraphicsLayoutItem* QGraphicsGridLayout_virtualbase_ItemAtWithIndex(const void* self, int index) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_ItemAtWithIndex(index);
}

bool QGraphicsGridLayout_override_virtual_RemoveAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveAt = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_RemoveAt(void* self, int index) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_RemoveAt(index);
}

bool QGraphicsGridLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_Invalidate();
}

bool QGraphicsGridLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_SetGeometry(rect);
}

bool QGraphicsGridLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSizeF* QGraphicsGridLayout_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_SizeHint(which, constraint);
}

bool QGraphicsGridLayout_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetContentsMargins = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

bool QGraphicsGridLayout_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometry = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_UpdateGeometry();
}

bool QGraphicsGridLayout_override_virtual_WidgetEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsGridLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsGridLayout*>( (QGraphicsGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WidgetEvent = slot;
	return true;
}

void QGraphicsGridLayout_virtualbase_WidgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsGridLayout*)(self) )->virtualbase_WidgetEvent(e);
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
	delete self;
}

