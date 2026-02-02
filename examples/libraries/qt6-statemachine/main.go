package main

import (
	"math"
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/statemachine"
)

type LightWidget struct {
	color  qt.GlobalColor
	on     bool
	widget *qt.QWidget
}

type TrafficWidget struct {
	red    *LightWidget
	yellow *LightWidget
	green  *LightWidget
	widget *qt.QWidget
}

func NewLightWidget(color qt.GlobalColor) *LightWidget {
	var self LightWidget

	self.color = color
	self.on = false
	self.widget = qt.NewQWidget2()

	self.widget.OnPaintEvent(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent) {
		if !self.on {
			return
		}

		painter := qt.NewQPainter2(self.widget.QPaintDevice)
		defer painter.Delete()

		brush := qt.NewQBrush4(self.color)
		defer brush.Delete()

		painter.SetRenderHint(qt.QPainter__Antialiasing)
		painter.SetBrush(brush)

		height := self.widget.Height()
		width := self.widget.Width()
		minVal := int(math.Min(float64(height), float64(width)))
		size := (minVal * 2) / 3
		x := (width - size) / 2
		y := (height - size) / 2

		painter.DrawEllipse2(x, y, size, size)
	})

	return &self
}

func (this *LightWidget) IsOn() bool {
	return this.on
}

func (this *LightWidget) SetOn(on bool) {
	if this.on == on {
		return
	}

	this.on = on

	this.widget.Update()
}

func (this *LightWidget) TurnOff() {
	this.SetOn(false)
}

func (this *LightWidget) TurnOn() {
	this.SetOn(true)
}

func NewTrafficWidget() *TrafficWidget {
	var self TrafficWidget

	self.red = NewLightWidget(qt.Red)
	self.yellow = NewLightWidget(qt.Yellow)
	self.green = NewLightWidget(qt.Green)

	self.widget = qt.NewQWidget2()

	layout := qt.NewQVBoxLayout(self.widget)
	layout.AddWidget(self.red.widget)
	layout.AddWidget(self.yellow.widget)
	layout.AddWidget(self.green.widget)

	palette := qt.NewQPalette()
	defer palette.Delete()

	color := qt.NewQColor2(qt.Black)
	defer color.Delete()

	palette.SetColor2(qt.QPalette__Window, color)
	self.widget.SetPalette(palette)
	self.widget.SetAutoFillBackground(true)

	return &self
}

func (this *TrafficWidget) RedLight() *LightWidget {
	return this.red
}

func (this *TrafficWidget) YellowLight() *LightWidget {
	return this.yellow
}

func (this *TrafficWidget) GreenLight() *LightWidget {
	return this.green
}

func CreateLightState(light *LightWidget, duration int) *statemachine.QState {
	lightState := statemachine.NewQState()
	timing := statemachine.NewQState3(lightState)

	timer := qt.NewQTimer2(lightState.QObject)
	timer.SetInterval(duration)
	timer.SetSingleShot(true)

	timing.OnEntered(func() {
		light.TurnOn()
		timer.Start2()
	})

	timing.OnExited(func() {
		light.TurnOff()
	})

	done := statemachine.NewQFinalState2(lightState)
	timing.AddTransition2(timer.QObject, "timeout()", done.QAbstractState)

	lightState.SetInitialState(timing.QAbstractState)

	return lightState
}

func main() {
	qt.NewQApplication(os.Args)

	trafficLight := qt.NewQWidget2()
	defer trafficLight.Delete()

	trafficLight.SetWindowTitle("Qt 6 State Machine Example")
	trafficLight.Resize(300, 800)
	trafficLight.SetMinimumHeight(450)
	trafficLight.SetMinimumWidth(200)

	layout := qt.NewQVBoxLayout(trafficLight)
	trafficWidget := NewTrafficWidget()

	layout.AddWidget(trafficWidget.widget)
	layout.SetContentsMargins(0, 0, 0, 0)

	redGoingGreen := CreateLightState(trafficWidget.RedLight(), 3000)
	greenGoingYellow := CreateLightState(trafficWidget.GreenLight(), 3000)
	yellowGoingRed := CreateLightState(trafficWidget.YellowLight(), 1000)

	redGoingGreen.AddTransition2(redGoingGreen.QObject, "finished()", greenGoingYellow.QAbstractState)
	greenGoingYellow.AddTransition2(greenGoingYellow.QObject, "finished()", yellowGoingRed.QAbstractState)
	yellowGoingRed.AddTransition2(yellowGoingRed.QObject, "finished()", redGoingGreen.QAbstractState)

	machine := statemachine.NewQStateMachine3(trafficLight.QObject)
	machine.AddState(redGoingGreen.QAbstractState)
	machine.AddState(greenGoingYellow.QAbstractState)
	machine.AddState(yellowGoingRed.QAbstractState)
	machine.SetInitialState(redGoingGreen.QAbstractState)
	machine.Start()

	trafficLight.Show()

	qt.QApplication_Exec()
}
