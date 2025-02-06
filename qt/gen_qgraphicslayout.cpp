#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslayout.h>
#include "gen_qgraphicslayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsLayout_getContentsMargins(const QGraphicsLayout*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsLayout_invalidate(QGraphicsLayout*, intptr_t);
void miqt_exec_callback_QGraphicsLayout_updateGeometry(QGraphicsLayout*, intptr_t);
void miqt_exec_callback_QGraphicsLayout_widgetEvent(QGraphicsLayout*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsLayout_count(const QGraphicsLayout*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsLayout_itemAt(const QGraphicsLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsLayout_removeAt(QGraphicsLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsLayout_setGeometry(QGraphicsLayout*, intptr_t, QRectF*);
QSizeF* miqt_exec_callback_QGraphicsLayout_sizeHint(const QGraphicsLayout*, intptr_t, int, QSizeF*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsLayout final : public QGraphicsLayout {
public:

	MiqtVirtualQGraphicsLayout(): QGraphicsLayout() {};
	MiqtVirtualQGraphicsLayout(QGraphicsLayoutItem* parent): QGraphicsLayout(parent) {};

	virtual ~MiqtVirtualQGraphicsLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
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

		miqt_exec_callback_QGraphicsLayout_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QGraphicsLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QGraphicsLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsLayout_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__widgetEvent == 0) {
			QGraphicsLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsLayout_widgetEvent(this, handle__widgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_widgetEvent(QEvent* e) {

		QGraphicsLayout::widgetEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int i) const override {
		if (handle__itemAt == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = i;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__removeAt == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsLayout_removeAt(this, handle__removeAt, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsLayout_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem);
	friend void QGraphicsLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsLayout* QGraphicsLayout_new() {
	return new MiqtVirtualQGraphicsLayout();
}

QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent) {
	return new MiqtVirtualQGraphicsLayout(parent);
}

void QGraphicsLayout_virtbase(QGraphicsLayout* src, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(src);
}

void QGraphicsLayout_setContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsLayout_getContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsLayout_activate(QGraphicsLayout* self) {
	self->activate();
}

bool QGraphicsLayout_isActivated(const QGraphicsLayout* self) {
	return self->isActivated();
}

void QGraphicsLayout_invalidate(QGraphicsLayout* self) {
	self->invalidate();
}

void QGraphicsLayout_updateGeometry(QGraphicsLayout* self) {
	self->updateGeometry();
}

void QGraphicsLayout_widgetEvent(QGraphicsLayout* self, QEvent* e) {
	self->widgetEvent(e);
}

int QGraphicsLayout_count(const QGraphicsLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLayout_itemAt(const QGraphicsLayout* self, int i) {
	return self->itemAt(static_cast<int>(i));
}

void QGraphicsLayout_removeAt(QGraphicsLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLayout_setInstantInvalidatePropagation(bool enable) {
	QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_instantInvalidatePropagation() {
	return QGraphicsLayout::instantInvalidatePropagation();
}

bool QGraphicsLayout_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QGraphicsLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_invalidate();
}

bool QGraphicsLayout_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsLayout_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsLayout_override_virtual_widgetEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widgetEvent = slot;
	return true;
}

void QGraphicsLayout_virtualbase_widgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_widgetEvent(e);
}

bool QGraphicsLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

bool QGraphicsLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

bool QGraphicsLayout_override_virtual_removeAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeAt = slot;
	return true;
}

bool QGraphicsLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsLayout_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsLayout*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

void QGraphicsLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayoutItem(layoutItem);

}

void QGraphicsLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsLayout_delete(QGraphicsLayout* self) {
	delete self;
}

