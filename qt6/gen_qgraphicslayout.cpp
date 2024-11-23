#include <QEvent>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslayout.h>
#include "gen_qgraphicslayout.h"
#include "_cgo_export.h"

class MiqtVirtualQGraphicsLayout : public virtual QGraphicsLayout {
public:

	MiqtVirtualQGraphicsLayout(): QGraphicsLayout() {};
	MiqtVirtualQGraphicsLayout(QGraphicsLayoutItem* parent): QGraphicsLayout(parent) {};

	virtual ~MiqtVirtualQGraphicsLayout() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__GetContentsMargins == 0) {
			QGraphicsLayout::getContentsMargins(left, top, right, bottom);
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

		miqt_exec_callback_QGraphicsLayout_GetContentsMargins(const_cast<MiqtVirtualQGraphicsLayout*>(this), handle__GetContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GetContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__Invalidate == 0) {
			QGraphicsLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsLayout_Invalidate(this, handle__Invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Invalidate() {

		QGraphicsLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__UpdateGeometry == 0) {
			QGraphicsLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsLayout_UpdateGeometry(this, handle__UpdateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometry() {

		QGraphicsLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WidgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__WidgetEvent == 0) {
			QGraphicsLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsLayout_WidgetEvent(this, handle__WidgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WidgetEvent(QEvent* e) {

		QGraphicsLayout::widgetEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__Count == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLayout_Count(const_cast<MiqtVirtualQGraphicsLayout*>(this), handle__Count);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int i) const override {
		if (handle__ItemAt == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = i;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsLayout_ItemAt(const_cast<MiqtVirtualQGraphicsLayout*>(this), handle__ItemAt, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__RemoveAt == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsLayout_RemoveAt(this, handle__RemoveAt, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__SetGeometry == 0) {
			QGraphicsLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsLayout_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRectF* rect) {

		QGraphicsLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QGraphicsLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGraphicsLayout_IsEmpty(const_cast<MiqtVirtualQGraphicsLayout*>(this), handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QGraphicsLayout::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__SizeHint == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsLayout_SizeHint(const_cast<MiqtVirtualQGraphicsLayout*>(this), handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

};

void QGraphicsLayout_new(QGraphicsLayout** outptr_QGraphicsLayout, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	MiqtVirtualQGraphicsLayout* ret = new MiqtVirtualQGraphicsLayout();
	*outptr_QGraphicsLayout = ret;
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(ret);
}

void QGraphicsLayout_new2(QGraphicsLayoutItem* parent, QGraphicsLayout** outptr_QGraphicsLayout, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	MiqtVirtualQGraphicsLayout* ret = new MiqtVirtualQGraphicsLayout(parent);
	*outptr_QGraphicsLayout = ret;
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(ret);
}

void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsLayout_Activate(QGraphicsLayout* self) {
	self->activate();
}

bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self) {
	return self->isActivated();
}

void QGraphicsLayout_Invalidate(QGraphicsLayout* self) {
	self->invalidate();
}

void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self) {
	self->updateGeometry();
}

void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e) {
	self->widgetEvent(e);
}

int QGraphicsLayout_Count(const QGraphicsLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i) {
	return self->itemAt(static_cast<int>(i));
}

void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable) {
	QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_InstantInvalidatePropagation() {
	return QGraphicsLayout::instantInvalidatePropagation();
}

void QGraphicsLayout_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__GetContentsMargins = slot;
}

void QGraphicsLayout_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

void QGraphicsLayout_override_virtual_Invalidate(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__Invalidate = slot;
}

void QGraphicsLayout_virtualbase_Invalidate(void* self) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_Invalidate();
}

void QGraphicsLayout_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__UpdateGeometry = slot;
}

void QGraphicsLayout_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_UpdateGeometry();
}

void QGraphicsLayout_override_virtual_WidgetEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__WidgetEvent = slot;
}

void QGraphicsLayout_virtualbase_WidgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_WidgetEvent(e);
}

void QGraphicsLayout_override_virtual_Count(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__Count = slot;
}

void QGraphicsLayout_override_virtual_ItemAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__ItemAt = slot;
}

void QGraphicsLayout_override_virtual_RemoveAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__RemoveAt = slot;
}

void QGraphicsLayout_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__SetGeometry = slot;
}

void QGraphicsLayout_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_SetGeometry(rect);
}

void QGraphicsLayout_override_virtual_IsEmpty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__IsEmpty = slot;
}

bool QGraphicsLayout_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_IsEmpty();
}

void QGraphicsLayout_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) )->handle__SizeHint = slot;
}

void QGraphicsLayout_Delete(QGraphicsLayout* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsLayout*>( self );
	} else {
		delete self;
	}
}

