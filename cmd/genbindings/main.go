package main

import (
	"context"
	"encoding/json"
	"flag"
	"io/ioutil"
	"log"
	"path/filepath"
	"strings"
)

func main() {
	ctx := context.Background()

	clang := flag.String("clang", "clang", "Custom path to clang")
	cflags := flag.String("cflags", `-DQT_WIDGETS_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtCore -DQT_GUI_LIB -I/usr/include/x86_64-linux-gnu/qt5/QtGui -DQT_CORE_LIB`, "Cflags to pass to clang (e.g. `pkg-config --cflags Qt5Widgets`)")
	outDir := flag.String("outdir", "../../qt", "Output directory for generated gen_** files")

	flag.Parse()

	includeFiles := []string{
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qobject.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qcoreevent.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qmetaobject.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qobjectdefs.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qbytearray.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qsize.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qrect.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qpoint.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qmargins.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qthread.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qdatastream.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qvariant.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qiodevice.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qline.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qchar.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qcoreapplication.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qtranslator.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qabstracteventdispatcher.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtCore/qabstractnativeeventfilter.h",

		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qicon.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qiconengine.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpixmap.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qbitmap.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qmatrix.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qimage.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qrgba64.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qkeysequence.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qtransform.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpaintengine.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qcolor.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qcolorspace.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qcolortransform.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpixelformat.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpainterpath.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qfont.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qfontmetrics.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qfontinfo.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qrawfont.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qglyphrun.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpainter.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpicture.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpen.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qstatictext.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qtextoption.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qbrush.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpaintdevice.h",
		// "/usr/include/x86_64-linux-gnu/qt5/QtGui/qpolygon.h", // Extends a QVector<QPoint> template class, too hard
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qregion.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qguiapplication.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qpalette.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qwindow.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qsurface.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtGui/qscreen.h",

		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qwidget.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qabstractbutton.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qpushbutton.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qbuttongroup.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qmenu.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qapplication.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qstyle.h",
		"/usr/include/x86_64-linux-gnu/qt5/QtWidgets/qdesktopwidget.h",
	}

	for _, inputHeader := range includeFiles {

		// If we have a cached clang AST, use that instead
		cacheFile := filepath.Join("cachedir", strings.Replace(inputHeader, `/`, `__`, -1)+".json")
		astJson, err := ioutil.ReadFile(cacheFile)
		var astInner []interface{} = nil
		if err != nil {

			// Nonexistent cache file, regenerate from clang
			log.Printf("No AST cache for file %q, running clang...", filepath.Base(inputHeader))

			// Parse the file
			astInner, err = clangExec(ctx, *clang, inputHeader, strings.Fields(*cflags))
			if err != nil {
				panic(err)
			}

			// Write to cache
			jb, err := json.MarshalIndent(astInner, "", "\t")
			if err != nil {
				panic(err)
			}

			err = ioutil.WriteFile(cacheFile, jb, 0644)
			if err != nil {
				panic(err)
			}

		} else {
			log.Printf("Reused cache AST for file %q", filepath.Base(inputHeader))

			// Json decode
			err = json.Unmarshal(astJson, &astInner)
			if err != nil {
				panic(err)
			}

		}

		// Convert it to our intermediate format
		parsed, err := parseHeader(astInner)
		if err != nil {
			panic(err)
		}

		// AST transforms on our IL
		astTransformBlacklist(parsed)
		astTransformOptional(parsed)
		astTransformOverloads(parsed)

		{
			// Save the IL file for debug inspection
			jb, err := json.MarshalIndent(parsed, "", "\t")
			if err != nil {
				panic(err)
			}

			err = ioutil.WriteFile(cacheFile+".ours.json", jb, 0644)
			if err != nil {
				panic(err)
			}
		}

		// Emit 3 code files from the intermediate format
		outputName := filepath.Join(*outDir, "gen_"+strings.TrimSuffix(filepath.Base(inputHeader), `.h`))

		goSrc, err := emitGo(parsed, filepath.Base(inputHeader))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".go", []byte(goSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(inputHeader))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHSrc, err := emitBindingHeader(parsed, filepath.Base(inputHeader))
		if err != nil {
			panic(err)
		}

		err = ioutil.WriteFile(outputName+".h", []byte(bindingHSrc), 0644)
		if err != nil {
			panic(err)
		}

		// Done

		log.Printf("Processing %q completed", inputHeader)

	}

	log.Printf("Processing %d file(s) completed", len(includeFiles))
}
