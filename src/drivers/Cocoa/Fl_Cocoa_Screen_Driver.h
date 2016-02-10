//
// "$Id: quartz.H 11017 2016-01-20 21:40:12Z matt $"
//
// Definition of Apple Cocoa Screen interface
// for the Fast Light Tool Kit (FLTK).
//
// Copyright 2010-2016 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

/**
 \file Fl_Cocoa_Screen_Driver.h
 \brief Definition of Apple Cocoa Screen interface.
 */

#ifndef FL_COCOA_SCREEN_DRIVER_H
#define FL_COCOA_SCREEN_DRIVER_H

#include <FL/Fl_Screen_Driver.H>

/*
 Move everything here that manages the native screen interface.
 
 There is exactly one screen driver in the system.
 
 - screen configuration and sizes
 - multiple screens
 - native dialog boxes
*/


class FL_EXPORT Fl_Cocoa_Screen_Driver : public Fl_Screen_Driver {
public:
  virtual void init();
  virtual int x();
  virtual int y();
  virtual int w();
  virtual int h();
  virtual void screen_xywh(int &X, int &Y, int &W, int &H, int n);
  virtual void screen_dpi(float &h, float &v, int n=0);
  virtual void screen_work_area(int &X, int &Y, int &W, int &H, int n);
};


#endif // FL_COCOA_SCREEN_DRIVER_H

//
// End of "$Id: quartz.H 11017 2016-01-20 21:40:12Z matt $".
//