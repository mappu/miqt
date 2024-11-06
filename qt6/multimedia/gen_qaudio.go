package multimedia

/*

#include "gen_qaudio.h"
#include <stdlib.h>

*/
import "C"

type QAudio__Error int

const (
	QAudio__NoError       QAudio__Error = 0
	QAudio__OpenError     QAudio__Error = 1
	QAudio__IOError       QAudio__Error = 2
	QAudio__UnderrunError QAudio__Error = 3
	QAudio__FatalError    QAudio__Error = 4
)

type QAudio__State int

const (
	QAudio__ActiveState    QAudio__State = 0
	QAudio__SuspendedState QAudio__State = 1
	QAudio__StoppedState   QAudio__State = 2
	QAudio__IdleState      QAudio__State = 3
)

type QAudio__VolumeScale int

const (
	QAudio__LinearVolumeScale      QAudio__VolumeScale = 0
	QAudio__CubicVolumeScale       QAudio__VolumeScale = 1
	QAudio__LogarithmicVolumeScale QAudio__VolumeScale = 2
	QAudio__DecibelVolumeScale     QAudio__VolumeScale = 3
)
