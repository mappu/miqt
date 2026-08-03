#include <QPointF>
#include <QRectF>
#include <QVector>
#include <qwt_clipper.h>
#include "gen_qwt_clipper.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_array /* of QwtInterval* */  QwtClipper_clipCircle(QRectF* param1, QPointF* param2, double radius) {
	QVector<QwtInterval> _ret = QwtClipper::clipCircle(*param1, *param2, static_cast<double>(radius));
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtInterval** _arr = static_cast<QwtInterval**>(malloc(sizeof(QwtInterval*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtInterval(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtClipper_delete(QwtClipper* self) {
	delete self;
}

