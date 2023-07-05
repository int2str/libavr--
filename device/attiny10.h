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

#ifndef AVR_ATTINY10_H
#define AVR_ATTINY10_H

constexpr const uint16_t RAMEND = 0x5F;

[[maybe_unused]] static avr::memory::Register<0x00> PINB;
[[maybe_unused]] static avr::memory::Register<0x01> DDRB;
[[maybe_unused]] static avr::memory::Register<0x02> PORTB;
[[maybe_unused]] static avr::memory::Register<0x03> PUEB;

constexpr const uint8_t PB0 = 0;
constexpr const uint8_t PB1 = 1;
constexpr const uint8_t PB2 = 2;
constexpr const uint8_t PB3 = 3;

[[maybe_unused]] static avr::memory::Register<0x0C> PORTCR;

constexpr const uint8_t BBMB = 1;

[[maybe_unused]] static avr::memory::Register<0x10> PCMSK;

constexpr const uint8_t PCINT0 = 0;
constexpr const uint8_t PCINT1 = 1;
constexpr const uint8_t PCINT2 = 2;
constexpr const uint8_t PCINT3 = 3;

[[maybe_unused]] static avr::memory::Register<0x12> PCIFR;

constexpr const uint8_t PCIF0 = 0;

[[maybe_unused]] static avr::memory::Register<0x12> PCICR;

[[maybe_unused]] constexpr const uint8_t PCIE0 = 0;

[[maybe_unused]] static avr::memory::Register<0x27> OCR0AH;
[[maybe_unused]] static avr::memory::Register<0x26> OCR0AL;

[[maybe_unused]] static avr::memory::Register<0x2D> TCCR0B;

constexpr const uint8_t CS00 = 0;
constexpr const uint8_t CS01 = 1;
constexpr const uint8_t CS02 = 2;
constexpr const uint8_t WGM02 = 3;
constexpr const uint8_t WGM03 = 4;
constexpr const uint8_t ICES0 = 6;
constexpr const uint8_t ICNC0 = 7;

static avr::memory::Register<0x2E> TCCR0A;

constexpr const uint8_t WGM00 = 0;
constexpr const uint8_t WGM01 = 1;
constexpr const uint8_t COM0B0 = 4;
constexpr const uint8_t COM0B1 = 5;
constexpr const uint8_t COM0A0 = 6;
constexpr const uint8_t COM0A1 = 7;

[[maybe_unused]] static avr::memory::Register<0x31> WDTCSR;

constexpr const uint8_t WDP0 = 0;
constexpr const uint8_t WDP1 = 1;
constexpr const uint8_t WDP2 = 2;
constexpr const uint8_t WDE = 3;
constexpr const uint8_t WDP3 = 5;
constexpr const uint8_t WDIE = 6;
constexpr const uint8_t WDIF = 7;

[[maybe_unused]] static avr::memory::Register<0x35> PRR;

constexpr const uint8_t PRTIM0 = 0;
constexpr const uint8_t PRADC = 1;

[[maybe_unused]] static avr::memory::Register<0x36> CLKPSR;

constexpr const uint8_t CLKPS0 = 0;
constexpr const uint8_t CLKPS1 = 1;
constexpr const uint8_t CLKPS2 = 2;
constexpr const uint8_t CLKPS3 = 3;

[[maybe_unused]] static avr::memory::Register<0x37> CLKMSR;

constexpr const uint8_t CLKMS0 = 0;
constexpr const uint8_t CLKMS1 = 1;

[[maybe_unused]] static avr::memory::Register<0x3A> SMCR;

constexpr const uint8_t SE = 0;
constexpr const uint8_t SM0 = 1;
constexpr const uint8_t SM1 = 2;
constexpr const uint8_t SM2 = 3;

[[maybe_unused]] static avr::memory::Register<0x3B> RSTFLR;

constexpr const uint8_t PORF = 0;
constexpr const uint8_t EXTRF = 1;
constexpr const uint8_t WDRF = 3;

[[maybe_unused]] static avr::memory::Register<0x3C> CCP;

constexpr const uint8_t CCP_UNLOCK_PROTECTED_REGISTERS = 0xD8;

#endif  // AVR_ATTINY10_H
