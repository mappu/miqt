#include <QEvent>
#include <QGraphicsItem>
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

void miqt_exec_callback_QGraphicsLinearLayout_removeAt(QGraphicsLinearLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsLinearLayout_setGeometry(QGraphicsLinearLayout*, intptr_t, QRectF*);
int miqt_exec_callback_QGraphicsLinearLayout_count(const QGraphicsLinearLayout*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsLinearLayout_itemAt(const QGraphicsLinearLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsLinearLayout_invalidate(QGraphicsLinearLayout*, intptr_t);
QSizeF* miqt_exec_callback_QGraphicsLinearLayout_sizeHint(const QGraphicsLinearLayout*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsLinearLayout_getContentsMargins(const QGraphicsLinearLayout*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsLinearLayout_updateGeometry(QGraphicsLinearLayout*, intptr_t);
void miqt_exec_callback_QGraphicsLinearLayout_widgetEvent(QGraphicsLinearLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsLinearLayout_isEmpty(const QGraphicsLinearLayout*, intptr_t);
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
	intptr_t handle__removeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__removeAt == 0) {
			QGraphicsLinearLayout::removeAt(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsLinearLayout_removeAt(this, handle__removeAt, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_removeAt(int index) {

		QGraphicsLinearLayout::removeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsLinearLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsLinearLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsLinearLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QGraphicsLinearLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QGraphicsLinearLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (handle__itemAt == 0) {
			return QGraphicsLinearLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGraphicsLayoutItem* virtualbase_itemAt(int index) const {

		return QGraphicsLinearLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QGraphicsLinearLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsLinearLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QGraphicsLinearLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QGraphicsLinearLayout::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_sizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsLinearLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
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

		miqt_exec_callback_QGraphicsLinearLayout_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsLinearLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsLinearLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsLinearLayout_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsLinearLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__widgetEvent == 0) {
			QGraphicsLinearLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsLinearLayout_widgetEvent(this, handle__widgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_widgetEvent(QEvent* e) {

		QGraphicsLinearLayout::widgetEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QGraphicsLinearLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGraphicsLinearLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QGraphicsLinearLayout::isEmpty();

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsLinearLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem);
	friend void QGraphicsLinearLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsLinearLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
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

void QGraphicsLinearLayout_setOrientation(QGraphicsLinearLayout* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsLinearLayout_orientation(const QGraphicsLinearLayout* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QGraphicsLinearLayout_addItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->addItem(item);
}

void QGraphicsLinearLayout_addStretch(QGraphicsLinearLayout* self) {
	self->addStretch();
}

void QGraphicsLinearLayout_insertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
	self->insertItem(static_cast<int>(index), item);
}

void QGraphicsLinearLayout_insertStretch(QGraphicsLinearLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QGraphicsLinearLayout_removeItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsLinearLayout_removeAt(QGraphicsLinearLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_setSpacing(QGraphicsLinearLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_spacing(const QGraphicsLinearLayout* self) {
	qreal _ret = self->spacing();
	return static_cast<double>(_ret);
}

void QGraphicsLinearLayout_setItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
	self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_itemSpacing(const QGraphicsLinearLayout* self, int index) {
	qreal _ret = self->itemSpacing(static_cast<int>(index));
	return static_cast<double>(_ret);
}

void QGraphicsLinearLayout_setStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
	self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_stretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return self->stretchFactor(item);
}

void QGraphicsLinearLayout_setAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsLinearLayout_alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment _ret = self->alignment(item);
	return static_cast<int>(_ret);
}

void QGraphicsLinearLayout_setGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsLinearLayout_count(const QGraphicsLinearLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_itemAt(const QGraphicsLinearLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_invalidate(QGraphicsLinearLayout* self) {
	self->invalidate();
}

QSizeF* QGraphicsLinearLayout_sizeHint(const QGraphicsLinearLayout* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsLinearLayout_dump(const QGraphicsLinearLayout* self) {
	self->dump();
}

void QGraphicsLinearLayout_addStretch1(QGraphicsLinearLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_insertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QGraphicsLinearLayout_dump1(const QGraphicsLinearLayout* self, int indent) {
	self->dump(static_cast<int>(indent));
}

bool QGraphicsLinearLayout_override_virtual_removeAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeAt = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_removeAt(void* self, int index) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_removeAt(index);
}

bool QGraphicsLinearLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsLinearLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QGraphicsLinearLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_count();
}

bool QGraphicsLinearLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QGraphicsLayoutItem* QGraphicsLinearLayout_virtualbase_itemAt(const void* self, int index) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_itemAt(index);
}

bool QGraphicsLinearLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_invalidate();
}

bool QGraphicsLinearLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QGraphicsLinearLayout_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_sizeHint(which, constraint);
}

bool QGraphicsLinearLayout_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsLinearLayout_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsLinearLayout_override_virtual_widgetEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widgetEvent = slot;
	return true;
}

void QGraphicsLinearLayout_virtualbase_widgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_widgetEvent(e);
}

bool QGraphicsLinearLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QGraphicsLinearLayout_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQGraphicsLinearLayout*)(self) )->virtualbase_isEmpty();
}

void QGraphicsLinearLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayoutItem(layoutItem);

}

void QGraphicsLinearLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsLinearLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsLinearLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLinearLayout*>( (QGraphicsLinearLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsLinearLayout_delete(QGraphicsLinearLayout* self) {
	delete self;
}

