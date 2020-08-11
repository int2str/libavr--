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

#ifndef REGISTER_H
#define REGISTER_H

#include <stdint.h>

namespace avr {
namespace memory {

template<uint8_t ADDR>
struct Register {
  constexpr Register& operator= (const uint8_t& value) {
    *reinterpret_cast<volatile uint8_t*>(ADDR) = value;
    return *this;
  }

  constexpr uint8_t operator& (const uint8_t& ref) const {
    return *reinterpret_cast<volatile uint8_t*>(ADDR) & ref;
  }

  constexpr uint8_t operator| (const uint8_t& ref) const {
    return *reinterpret_cast<volatile uint8_t*>(ADDR) | ref;
  }

  constexpr Register& operator&= (const uint8_t& ref) {
    *reinterpret_cast<volatile uint8_t*>(ADDR) &= ref;
    return *this;
  }

  constexpr Register& operator|= (const uint8_t& ref) {
    *reinterpret_cast<volatile uint8_t*>(ADDR) |= ref;
    return *this;
  }
};

}  // namespace memory
}  // namespace avr

#endif  // REGISTER_H
