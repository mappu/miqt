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
	QAudio__ActiveState      QAudio__State = 0
	QAudio__SuspendedState   QAudio__State = 1
	QAudio__StoppedState     QAudio__State = 2
	QAudio__IdleState        QAudio__State = 3
	QAudio__InterruptedState QAudio__State = 4
)

type QAudio__Mode int

const (
	QAudio__AudioInput  QAudio__Mode = 0
	QAudio__AudioOutput QAudio__Mode = 1
)

type QAudio__Role int

const (
	QAudio__UnknownRole            QAudio__Role = 0
	QAudio__MusicRole              QAudio__Role = 1
	QAudio__VideoRole              QAudio__Role = 2
	QAudio__VoiceCommunicationRole QAudio__Role = 3
	QAudio__AlarmRole              QAudio__Role = 4
	QAudio__NotificationRole       QAudio__Role = 5
	QAudio__RingtoneRole           QAudio__Role = 6
	QAudio__AccessibilityRole      QAudio__Role = 7
	QAudio__SonificationRole       QAudio__Role = 8
	QAudio__GameRole               QAudio__Role = 9
	QAudio__CustomRole             QAudio__Role = 10
)

type QAudio__VolumeScale int

const (
	QAudio__LinearVolumeScale      QAudio__VolumeScale = 0
	QAudio__CubicVolumeScale       QAudio__VolumeScale = 1
	QAudio__LogarithmicVolumeScale QAudio__VolumeScale = 2
	QAudio__DecibelVolumeScale     QAudio__VolumeScale = 3
)
