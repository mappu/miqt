#include <QEvent>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslinearlayout.h>
#include "gen_qgraphicslinearlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsLinearLayout_RemoveAt(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsLinearLayout_SetGeometry(void*, intptr_t, QRectF*);
int miqt_exec_callback_QGraphicsLinearLayout_Count(void*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsLinearLayout_ItemAt(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsLinearLayout_Invalidate(void*, intptr_t);
QSizeF* miqt_exec_callback_QGraphicsLinearLayout_SizeHint(void*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsLinearLayout_GetContentsMargins(void*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsLinearLayout_UpdateGeometry(void*, intptr_t);
void miqt_exec_callback_QGraphicsLinearLayout_WidgetEvent(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsLinearLayout final : public QGraphicsLinearLayout {
public:

	MiqtVirtualQGraphicsLinearLayout(): QGraphicsLinearLayout() {};
	MiqtVirtualQGraphicsLinearLayout(Qt::Orientation orientation): QGraphicsLinearLayout(orientation) {};
	MiqtVirtualQGraphicsLinearLayout(QGraphicsLayoutItem* parent): QGraphicsLinearLayout(parent) {};
	MiqtVirtualQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem* parent): QGraphicsLinearLayout(orientation, parent) {};

	virtual ~MiqtVirtualQGraphicsLinearLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__RemoveAt == 0) {
			QGraphicsLinearLayout::removeAt(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsLinearLayout_RemoveAt(this, handle__RemoveAt, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RemoveAt(int index) {

		QGraphicsLinearLayout::removeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__SetGeometry == 0) {
			QGraphicsLinearLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsLinearLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRectF* rect) {

		QGraphicsLinearLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return QGraphicsLinearLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_Count(const_cast<MiqtVirtualQGraphicsLinearLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Count() const {

		return QGraphicsLinearLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (handle__ItemAt == 0) {
			return QGraphicsLinearLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_ItemAt(const_cast<MiqtVirtualQGraphicsLinearLayout*>(this), handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGraphicsLayoutItem* virtualbase_ItemAt(int index) const {

		return QGraphicsLinearLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QGraphicsLinearLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsLinearLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QGraphicsLinearLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__SizeHint == 0) {
			return QGraphicsLinearLayout::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_SizeHint(const_cast<MiqtVirtualQGraphicsLinearLayout*>(this), handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_SizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsLinearLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__GetContentsMargins == 0) {
			QGraphicsLinearLayout::getContentsMargins(left, top, right, bottom);
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

		miqt_exec_callback_QGraphicsLinearLayout_GetContentsMargins(const_cast<MiqtVirtualQGraphicsLinearLayout*>(this), handle__GetContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GetContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsLinearLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__UpdateGeometry == 0) {
			QGraphicsLinearLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsLinearLayout_UpdateGeometry(this, handle__UpdateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometry() {

		QGraphicsLinearLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WidgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__WidgetEvent == 0) {
			QGraphicsLinearLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsLinearLayout_WidgetEvent(this, handle__WidgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WidgetEvent(QEvent* e) {

		QGraphicsLinearLayout::widgetEvent(e);

	}

};

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
	return new MiqtVirtualQGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation) {
	return new MiqtVirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation));
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent) {
	return new MiqtVirtualQGraphicsLinearLayout(parent);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent) {
	return new MiqtVirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation), parent);
}

void QGraphicsLinearLayout_virtbase(QGraphicsLinearLayout* src, QGraphicsLayout** outptr_QGraphicsLayout) {
	*outptr_QGraphicsLayout = static_cast<QGraphicsLayout*>(src);
}

void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->addItem(item);
}

void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self) {
	self->addStretch();
}

void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
	self->insertItem(static_cast<int>(index), item);
}

void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self) {
	qreal _ret = self->spacing();
	return static_cast<double>(_ret);
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
	self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index) {
	qreal _ret = self->itemSpacing(static_cast<int>(index));
	return static_cast<double>(_ret);
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
	self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return self->stretchFactor(item);
}

void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment _ret = self->alignment(item);
	return static_cast<int>(_ret);
}

void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
	self->invalidate();
}

QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self) {
	self->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent) {
	self->dump(static_cast<int>(indent));
}

bool QGraphicsLinearLayout_override_virtual_RemoveAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveAt = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_RemoveAt(void* self, int index) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_RemoveAt(index);
}

bool QGraphicsLinearLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_SetGeometry(rect);
}

bool QGraphicsLinearLayout_override_virtual_Count(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Count = slot;
	return true;
}

int QGraphicsLinearLayout_virtualbase_Count(const void* self) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_Count();
}

bool QGraphicsLinearLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemAt = slot;
	return true;
}

QGraphicsLayoutItem* QGraphicsLinearLayout_virtualbase_ItemAt(const void* self, int index) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_ItemAt(index);
}

bool QGraphicsLinearLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Invalidate = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_Invalidate();
}

bool QGraphicsLinearLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSizeF* QGraphicsLinearLayout_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_SizeHint(which, constraint);
}

bool QGraphicsLinearLayout_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetContentsMargins = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

bool QGraphicsLinearLayout_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometry = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_UpdateGeometry();
}

bool QGraphicsLinearLayout_override_virtual_WidgetEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WidgetEvent = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_WidgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_WidgetEvent(e);
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
	delete self;
}

