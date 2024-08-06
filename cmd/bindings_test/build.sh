#!/bin/bash

set -eux

g++ -g -fPIC ../binding.cpp testapp.cpp $(pkg-config --cflags --libs Qt5Widgets) -o testapp

g++ -g -fPIC direct.cpp $(pkg-config --cflags --libs Qt5Widgets) -o direct
