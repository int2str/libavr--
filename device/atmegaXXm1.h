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

#ifndef AVR_ATMEGAXXM1_H
#define AVR_ATMEGAXXM1_H

#include "memory/register.h"

__attribute__((unused)) static avr::memory::Register<0x23> PINB;
__attribute__((unused)) static avr::memory::Register<0x24> DDRB;
__attribute__((unused)) static avr::memory::Register<0x25> PORTB;

constexpr const uint8_t PB0 = 0;
constexpr const uint8_t PB1 = 1;
constexpr const uint8_t PB2 = 2;
constexpr const uint8_t PB3 = 3;
constexpr const uint8_t PB4 = 4;
constexpr const uint8_t PB5 = 5;
constexpr const uint8_t PB6 = 6;
constexpr const uint8_t PB7 = 7;

__attribute__((unused)) static avr::memory::Register<0x26> PINC;
__attribute__((unused)) static avr::memory::Register<0x27> DDRC;
__attribute__((unused)) static avr::memory::Register<0x28> PORTC;

constexpr const uint8_t PC0 = 0;
constexpr const uint8_t PC1 = 1;
constexpr const uint8_t PC2 = 2;
constexpr const uint8_t PC3 = 3;
constexpr const uint8_t PC4 = 4;
constexpr const uint8_t PC5 = 5;
constexpr const uint8_t PC6 = 6;
constexpr const uint8_t PC7 = 7;

__attribute__((unused)) static avr::memory::Register<0x29> PIND;
__attribute__((unused)) static avr::memory::Register<0x2A> DDRD;
__attribute__((unused)) static avr::memory::Register<0x2B> PORTD;

constexpr const uint8_t PD0 = 0;
constexpr const uint8_t PD1 = 1;
constexpr const uint8_t PD2 = 2;
constexpr const uint8_t PD3 = 3;
constexpr const uint8_t PD4 = 4;
constexpr const uint8_t PD5 = 5;
constexpr const uint8_t PD6 = 6;
constexpr const uint8_t PD7 = 7;

__attribute__((unused)) static avr::memory::Register<0x2C> PINE;
__attribute__((unused)) static avr::memory::Register<0x2D> DDRE;
__attribute__((unused)) static avr::memory::Register<0x2E> PORTE;

constexpr const uint8_t PE0 = 0;
constexpr const uint8_t PE1 = 1;
constexpr const uint8_t PE2 = 2;

__attribute__((unused)) static avr::memory::Register<0x53> SMCR;

constexpr const uint8_t SE = 0;
constexpr const uint8_t SM0 = 1;
constexpr const uint8_t SM1 = 2;
constexpr const uint8_t SM2 = 3;

__attribute__((unused)) static avr::memory::Register<0x54> MCUSR;

constexpr const uint8_t PORF = 0;
constexpr const uint8_t EXTRF = 1;
constexpr const uint8_t BORF = 2;
constexpr const uint8_t WDRF = 3;

__attribute__((unused)) static avr::memory::Register<0x60> WDTCSR;

constexpr const uint8_t WDP0 = 0;
constexpr const uint8_t WDP1 = 1;
constexpr const uint8_t WDP2 = 2;
constexpr const uint8_t WDE = 3;
constexpr const uint8_t WDCE = 4;
constexpr const uint8_t WDP3 = 5;
constexpr const uint8_t WDIE = 6;
constexpr const uint8_t WDIF = 7;

__attribute__((unused)) static avr::memory::Register<0x64> PRR;

constexpr const uint8_t PRADC = 0;
constexpr const uint8_t PRLIN = 1;
constexpr const uint8_t PRSPI = 2;
constexpr const uint8_t PRTIM0 = 3;
constexpr const uint8_t PRTIM1 = 4;
constexpr const uint8_t PRPSC = 5;
constexpr const uint8_t PRCAN = 6;

__attribute__((unused)) static avr::memory::Register<0x68> PCICR;

constexpr const uint8_t PCIE0 = 0;
constexpr const uint8_t PCIE1 = 1;
constexpr const uint8_t PCIE2 = 2;
constexpr const uint8_t PCIE3 = 3;

__attribute__((unused)) static avr::memory::Register<0x6A> PCMSK0;

constexpr const uint8_t PCINT0 = 0;
constexpr const uint8_t PCINT1 = 1;
constexpr const uint8_t PCINT2 = 2;
constexpr const uint8_t PCINT3 = 3;
constexpr const uint8_t PCINT4 = 4;
constexpr const uint8_t PCINT5 = 5;
constexpr const uint8_t PCINT6 = 6;
constexpr const uint8_t PCINT7 = 7;

#endif  // AVR_ATMEGAXXM1_H
