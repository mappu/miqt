package main

func CheckComplexity(p CppParameter) error {

	if p.QMapOf() {
		return ErrTooComplex // Example???
	}
	if p.ParameterType == "QList<QVariant>" {
		return ErrTooComplex // e.g. QVariant constructor - this has a deleted copy-constructor so we can't get it over the CABI boundary by value
	}
	if p.ParameterType == "QPolygon" || p.ParameterType == "QPolygonF" {
		return ErrTooComplex // QPolygon extends a template type
	}
	if p.ParameterType == "void **" {
		return ErrTooComplex // e.g. qobjectdefs.h QMetaObject->Activate()
	}
	if p.ParameterType == "void" && p.Pointer {
		return ErrTooComplex // e.g. qobjectdefs.h QMetaObject->InvokeOnGadget()
	}
	if p.ParameterType == "char *&" {
		return ErrTooComplex // e.g. QDataStream.operator<<()
	}
	if p.ParameterType == "qfloat16" {
		return ErrTooComplex // e.g. QDataStream - there is no such half-float type in C or Go
	}

	// Should be OK
	return nil
}
