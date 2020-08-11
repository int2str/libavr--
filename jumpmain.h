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

// This function allows linking of AVR applications with the
// "-nostartfiles" linker option. This will remove all interrupt
// vectors. Thus, this saves memory at the expense of things like
// well, interrupts at least.

#ifndef JUMPMAIN_H
#define JUMPMAIN_H

__attribute__((naked)) void __jumpMain() {
  asm volatile ( ".set __stack, %0" :: "i" (avr::io::RAMEND) );
  asm volatile ( "rjmp main");
}

#endif  // JUMPMAIN_H
