package main

import (
	"math"
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/charts"
)

func main() {

	qt.NewQApplication(os.Args)

	series := charts.NewQLineSeries()
	series.SetName("Sine Wave")

	var x, y float64

	for i := -500; i <= 500; i++ {
		x = float64(i) / 10000
		y = math.Sin(1/x) * x
		if math.IsNaN(y) {
			y = 0
		}
		series.Append(x, y)
	}

	chart := charts.NewQChart()
	chart.AddSeries(series.QAbstractSeries)
	chart.CreateDefaultAxes()

	chartView := charts.NewQChartView3(chart)
	chartView.SetWindowTitle("Qt 6 Charts Example")
	chartView.Resize(650, 400)
	chartView.SetRenderHint(qt.QPainter__Antialiasing)
	chartView.Show()

	qt.QApplication_Exec()
}
