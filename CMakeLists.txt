cmake_minimum_required(VERSION 3.20)
project(untitled52)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled52 main.cpp Vehicle.cpp Vehicle.h Car.cpp Car.h Truck.cpp Truck.h Dynamicroaditem.cpp Dynamicroaditem.h Trafficlight.cpp Trafficlight.h Staticroaditem.cpp Staticroaditem.h Roaditem.cpp Roaditem.h Stopsign.cpp Stopsign.h Intersection.cpp Intersection.h Speedlimit.cpp Speedlimit.h Yield.cpp Yield.h Road.cpp Road.h Map.cpp Map.h Simulation.cpp Simulation.h GUI.cpp GUI.h Timer.cpp Timer.h Constants.h ISimOutput.cpp ISimOutput.h ImperialGUI.cpp ImperialGUI.h MetricGUI.cpp MetricGUI.h Constants.cpp ISimInput.cpp ISimInput.h)
