# STM32 Arduino Lua

This Arduino library provides the [lua](https://www.lua.org/) 5.3.2 ( [release](https://www.lua.org/ftp/lua-5.3.2.tar.gz) ) scripting engine for STM32 sketches. This allows dynamic execution of Lua code on the Arduino without having to compile and flash a new firmware. 

Along with the Lua 5.3.2 Core the following Lua standard libraries are included:

- base (print(), tostring(), tonumber(), etc.)
- math
- table (insert(), sort(), remove(), ...)
- string (len(), match(), ...)

## Arduino IDE Library example: HelloWorld.ino
``` 
#include <LuaWrapper.h>

LuaWrapper lua;

void Lua_output(const char *s)
{
  Serial.print(s);
}

void setup() {
  Serial.begin(115200);
  delay(300);
  String script = String("print('Hello world!')");
  Serial.println(lua.Lua_dostring(&script));
}

void loop() {

}
```
## Resources Used (HelloWorld.ino)

**STM32H743ZI2:**
Sketch uses 120672 bytes (5%) of program storage space. Maximum is 2097152 bytes.
Global variables use 1896 bytes (0%) of dynamic memory, leaving 522392 bytes for local variables. Maximum is 524288 bytes.

## The Lua Language:
[Lua 5.3 Reference Manual](https://www.lua.org/manual/5.3/)

## Board Compatiliby

The library shall be compatible will all STM32 that features enough memory.
This library is a concept of proof; it is intended for demo purpose and lack an Arduino wrapper with common functions such as `digitalWrite`.

## References:

https://github.com/sfranzyshen/ESP-Arduino-Lua, https://github.com/FASTSHIFT/Lua-For-STM32


