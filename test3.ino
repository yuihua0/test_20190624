/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:01:26 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteSwitch switch1;
LRemoteLabel label3;

void setup()
{
  LRemote.setName("yuihua");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("手機搖控");
    label1.setSize(5, 1);
    label1.setColor(RC_BLUE);
    LRemote.addControl(label1);

    label2.setPos(0, 1);
    label2.setText("曾玉華製作");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);

    switch1.setPos(1, 2);
    switch1.setSize(3, 3);
    switch1.setText("開關");
    switch1.setColor(RC_ORANGE);
    LRemote.addControl(switch1);

    label3.setPos(0, 5);
    label3.setText("曾玉華製作");
    label3.setSize(5, 1);
    label3.setColor(RC_ORANGE);
    LRemote.addControl(label3);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (switch1.isValueChanged()) {
    if (switch1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);

    } else {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
  delay(100);
}