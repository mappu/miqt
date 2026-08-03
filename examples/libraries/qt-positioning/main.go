package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/positioning"
)

var (
	lat   *qt.QDoubleSpinBox
	lon   *qt.QDoubleSpinBox
	coord *positioning.QGeoCoordinate
	label *qt.QLabel
)

func main() {

	qt.NewQApplication(os.Args)

	window := qt.NewQMainWindow2()
	window.SetWindowTitle("Qt 5 Positioning Example")
	window.Resize(300, 120)

	widget := qt.NewQWidget2()

	lat = qt.NewQDoubleSpinBox2()
	lat.SetRange(-90.0, 90.0)
	lat.SetDecimals(5)
	lat.SetValue(0.0)
	lat.OnValueChanged(onValueChanged)

	lon = qt.NewQDoubleSpinBox2()
	lon.SetRange(-180.0, 180.0)
	lon.SetDecimals(5)
	lon.SetValue(0.0)
	lon.OnValueChanged(onValueChanged)

	coord = positioning.NewQGeoCoordinate2(lat.Value(), lon.Value())
	defer coord.Delete()

	geotext := coord.ToStringWithFormat(positioning.QGeoCoordinate__DegreesWithHemisphere)

	label = qt.NewQLabel3("### " + geotext)
	label.SetTextFormat(qt.MarkdownText)

	layout := qt.NewQFormLayout2()
	layout.SetFormAlignment(qt.AlignHCenter)
	layout.SetSpacing(10)
	layout.AddRow3("Latitude:", lat.QWidget)
	layout.AddRow3("Longitude:", lon.QWidget)
	layout.AddWidget(label.QWidget)

	widget.SetLayout(layout.QLayout)
	window.SetCentralWidget(widget)
	window.Show()

	qt.QApplication_Exec()
}

func onValueChanged(value float64) {
	coord.SetLatitude(lat.Value())
	coord.SetLongitude(lon.Value())

	geotext := coord.ToStringWithFormat(positioning.QGeoCoordinate__DegreesWithHemisphere)
	label.SetText("### " + geotext)
}
