// NoSpark - OpenEVSE charger firmware
// Copyright (C) 2015 Andre Eisenbach
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// See LICENSE for a copy of the GNU General Public License or see
// it online at <http://www.gnu.org/licenses/>.

#ifndef AVR_IO_H
#define AVR_IO_H

namespace avr {
namespace io {

#if defined __AVR_ATmega16M1__
  #include "device/atmega16m1.h"
#elif defined __AVR_ATmega32M1__
  #include "device/atmega32m1.h"
#elif defined __AVR_ATmega64M1__
  #include "device/atmega64m1.h"
#elif defined __AVR_ATtiny10__
  #include "device/attiny10.h"
#else
  #error "Device type not defined/unknownn device type"
#endif

}  // namespace io
}  // namespace avr

#endif  // AVR_IO_H