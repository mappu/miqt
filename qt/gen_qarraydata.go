package qt

/*

#include "gen_qarraydata.h"
#include <stdlib.h>

*/
import "C"

type QArrayData__AllocationOption int

const (
	QArrayData__CapacityReserved QArrayData__AllocationOption = 1
	QArrayData__Unsharable       QArrayData__AllocationOption = 2
	QArrayData__RawData          QArrayData__AllocationOption = 4
	QArrayData__Grow             QArrayData__AllocationOption = 8
	QArrayData__Default          QArrayData__AllocationOption = 0
)

type QtPrivate__QContainerImplHelper__CutResult int

const (
	QtPrivate__QContainerImplHelper__Null   QtPrivate__QContainerImplHelper__CutResult = 0
	QtPrivate__QContainerImplHelper__Empty  QtPrivate__QContainerImplHelper__CutResult = 1
	QtPrivate__QContainerImplHelper__Full   QtPrivate__QContainerImplHelper__CutResult = 2
	QtPrivate__QContainerImplHelper__Subset QtPrivate__QContainerImplHelper__CutResult = 3
)
