# Overview

Pet project which uses GStreamer, OpenCV and Qt

# Build

Dependencies:
- Desktop Qt 6.9.0 MSVC2022 64 bit,
- OpenCV 4.11.0,
- GStreamer 1.0 msvc x86-64.

To compile:
1. Install Qt with the help of *Qt Online Installer* (choose MSVC 2022 64 bit for 6.9.0) and download binaries of OpenCV and GStreamer built with msvc.
2. Set OpenCV_DIR (/path/to/downloaded/OpenCV/opencv/build) and GStreamer_DIR (/path/to/downloaded/GStreamer/gstreamer/1.0/msvc_x86_64/build) cmake variables.

If you use Qt Creator then add cmake string variables with mentioned values in *Projects tab* -> *Initial Configuration*. In another case you can add **set(libname_DIR path/to/built/lib)** right after **set(CMAKE_CXX_STANDARD_REQUIRED ON)** in *CMakeLists.txt* for both OpenCV and GStreamer or use any other possible way in your IDE (or set system varibales with mentioned names and values but that didn't work for me).
