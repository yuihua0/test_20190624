/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 24 Jun 2019 11:52:46 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteCircleButton circle1;
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

    circle1.setPos(1, 1);
    circle1.setSize(3, 3);
    circle1.setText("開/關");
    circle1.setColor(RC_PINK);
    LRemote.addControl(circle1);

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
  if (circle1.isValueChanged()) {
    if (circle1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);

    } else {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
  delay(100);
}