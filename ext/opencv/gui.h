/************************************************************

   gui.h -

   $Author: lsxi $

   Copyright (C) 2005-2006 Masakazu Yonekura

************************************************************/
#ifndef RUBY_OPENCV_GUI_H
#define RUBY_OPENCV_GUI_H

#define __NAMESPACE_BEGIN_GUI namespace mGUI {
#define __NAMESPACE_END_GUI }

#include "opencv.h"

__NAMESPACE_BEGIN_OPENCV
__NAMESPACE_BEGIN_GUI

VALUE rb_module_GUI();
void init_ruby_module();

VALUE rb_wait_key(int argc, VALUE *argv, VALUE self);

__NAMESPACE_END_GUI
__NAMESPACE_END_OPENCV

#endif // RUBY_OPENCV_GUI_H

