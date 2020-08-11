// libavr-- | A C++ based AVR microcontroler framework
// Copyright (C) 2020 Andre Eisenbach
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

#ifndef ASM_H
#define ASM_H

namespace avr {

__attribute__((always_inline)) inline void sei() { asm volatile("sei"); }

__attribute__((always_inline)) inline void cli() { asm volatile("cli"); }

__attribute__((always_inline)) inline void wdr() { asm volatile("wdr"); }

__attribute__((always_inline)) inline void sleep() { asm volatile("sleep"); }

__attribute__((always_inline)) inline void nop() { asm volatile("nop"); }

}  // namespace avr

#endif  // ASM_H
