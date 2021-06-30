
#include "Arduino.h"
#include "LuaWrapper.h"

void Lua_output(const char *s)
{
    Serial.print(s);
}


#define LED (LED_BUILTIN)


LuaWrapper lua;
void setup() {

    pinMode(LED, OUTPUT);

    Serial.begin(115200);
    delay(500);
    String script1 = String( \
                             "i = 0\n" \
                             "while (i < 10)\n" \
                             "do\n" \
                             "    print (i)\n" \
                             "    i = i+1\n" \
                             "end\n" \
                           );

    Serial.println(micros());
    lua.Lua_dostring(&script1);
    Serial.println(micros());
    Serial.flush();
}

void loop() {
    // check no crash
    digitalWrite(LED, HIGH); // sets the digital pin 13 on
    delay(500);            // waits for a second
    digitalWrite(LED, LOW);  // sets the digital pin 13 off
    delay(500);            // waits for a second
}
