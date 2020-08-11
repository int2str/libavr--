# libavr--
Simple C++ library for AVR development. Because "libavr++" wasn't a valid git repository name... ;)

# Overview
libavr-- is a collection of header files that can be used to write AVR microcontroller applications. It is a C++ replacement for the standard <avr/*> includes.

# Why?
The standard AVR libraries are incredibly macro heavy and thus not type safe in any way. libavr-- attempts to recreate some of the vital register/instruction set access in a more modern C++ way.

# Experimental!
This is at best a small experiment. Non of the device (microcontroller) header implementation are complete. And currently device implementations only exist for chips at the authors disposal.