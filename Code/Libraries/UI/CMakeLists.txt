cmake_minimum_required(VERSION 2.6)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(../Math/src)
include_directories(../Core/src)
include_directories(../2D/src)
include_directories(../3D/src)
include_directories(../Workbench/src)
include_directories(../Audio/src)
include_directories(../Audio/src)
include_directories(src)

set(ui_src
src/Actions/wbactionuipushscreen.cpp
src/Actions/wbactionuipushscreen.h
src/Actions/wbactionuisetwidgetimage.cpp
src/Actions/wbactionuisetwidgetimage.h
src/Actions/wbactionuishowhidewidget.cpp
src/Actions/wbactionuishowhidewidget.h
src/Actions/wbactionuishowyesnodialog.cpp
src/Actions/wbactionuishowyesnodialog.h
src/Common/uimanagercommon.cpp
src/Common/uimanagercommon.h
src/Screens/uiscreen-base.cpp
src/Screens/uiscreen-base.h
src/Screens/uiscreen-fade.cpp
src/Screens/uiscreen-fade.h
src/Screens/uiscreen-okdialog.cpp
src/Screens/uiscreen-okdialog.h
src/Screens/uiscreen-waitdialog.cpp
src/Screens/uiscreen-waitdialog.h
src/Screens/uiscreen-yesnodialog.cpp
src/Screens/uiscreen-yesnodialog.h
src/Widgets/uiwidget-composite.cpp
src/Widgets/uiwidget-composite.h
src/Widgets/uiwidget-frame.cpp
src/Widgets/uiwidget-frame.h
src/Widgets/uiwidget-image.cpp
src/Widgets/uiwidget-image.h
src/Widgets/uiwidget-slider.cpp
src/Widgets/uiwidget-slider.h
src/Widgets/uiwidget-spacer.cpp
src/Widgets/uiwidget-spacer.h
src/Widgets/uiwidget-text.cpp
src/Widgets/uiwidget-text.h
src/iuiinputmap.h
src/ui.h
src/uifactory.cpp
src/uifactory.h
src/uimanager.cpp
src/uimanager.h
src/uiscreen.cpp
src/uiscreen.h
src/uiscreens.h
src/uistack.cpp
src/uistack.h
src/uiwbactions.h
src/uiwidget.cpp
src/uiwidget.h
src/uiwidgets.h
)
 
add_library(UI ${ui_src})