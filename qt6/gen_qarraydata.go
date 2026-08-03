package qt6

/*

#include "gen_qarraydata.h"
#include <stdlib.h>

*/
import "C"

type QArrayData__AllocationOption int

const (
	QArrayData__Grow     QArrayData__AllocationOption = 0
	QArrayData__KeepSize QArrayData__AllocationOption = 1
)

type QArrayData__GrowthPosition int

const (
	QArrayData__GrowsAtEnd       QArrayData__GrowthPosition = 0
	QArrayData__GrowsAtBeginning QArrayData__GrowthPosition = 1
)

type QArrayData__ArrayOption int

const (
	QArrayData__ArrayOptionDefault QArrayData__ArrayOption = 0
	QArrayData__CapacityReserved   QArrayData__ArrayOption = 1
)

type QtPrivate__QContainerImplHelper__CutResult int

const (
	QtPrivate__QContainerImplHelper__Null   QtPrivate__QContainerImplHelper__CutResult = 0
	QtPrivate__QContainerImplHelper__Empty  QtPrivate__QContainerImplHelper__CutResult = 1
	QtPrivate__QContainerImplHelper__Full   QtPrivate__QContainerImplHelper__CutResult = 2
	QtPrivate__QContainerImplHelper__Subset QtPrivate__QContainerImplHelper__CutResult = 3
)
