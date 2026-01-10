package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/statemachine"
)

func main() {
	_ = qt.NewQApplication(os.Args)

	sm := statemachine.NewQStateMachine()
	state1 := statemachine.NewQState()
	state2 := statemachine.NewQState()
	sm.AddState(state1.QAbstractState)
	sm.AddState(state2.QAbstractState)
	sm.SetInitialState(state1.QAbstractState)
	state1.AddTransitionWithTarget(state2.QAbstractState)
	sm.Start()
	qt.QApplication_Exec()
}
