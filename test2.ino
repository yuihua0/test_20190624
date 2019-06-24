/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 24 Jun 2019 12:17:06 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteButton button1;
LRemoteButton button2;
LRemoteLabel label2;

void setup()
{
  LRemote.setName("yuihua");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("藍牙遙控測試");
    label1.setSize(5, 1);
    label1.setColor(RC_BLUE);
    LRemote.addControl(label1);

    button1.setPos(0, 1);
    button1.setText("開");
    button1.setSize(2, 2);
    button1.setColor(RC_PINK);
    LRemote.addControl(button1);

    button2.setPos(3, 1);
    button2.setText("開");
    button2.setSize(2, 2);
    button2.setColor(RC_GREY);
    LRemote.addControl(button2);

    label2.setPos(0, 5);
    label2.setText("曾玉華製作");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (button1.isValueChanged()) {
    if (button1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);

    }

  }
  if (button2.isValueChanged()) {
    if (button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
  delay(100);
}