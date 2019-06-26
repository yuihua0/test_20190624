/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 12:11:40 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteButton button1;
LRemoteButton button2;
LRemoteSlider slider1;
LRemoteLabel label3;

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

    label2.setPos(0, 1);
    label2.setText("未知");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);

    button1.setPos(0, 2);
    button1.setText("開");
    button1.setSize(2, 2);
    button1.setColor(RC_PINK);
    LRemote.addControl(button1);

    button2.setPos(3, 2);
    button2.setText("開");
    button2.setSize(2, 2);
    button2.setColor(RC_GREY);
    LRemote.addControl(button2);

    slider1.setPos(0, 4);
    slider1.setSize(5, 1);
    slider1.setText("");
    slider1.setValueRange(0, 255, 0);
    slider1.setColor(RC_GREEN);
    LRemote.addControl(slider1);

    label3.setPos(0, 5);
    label3.setText("曾玉華製作");
    label3.setSize(5, 1);
    label3.setColor(RC_ORANGE);
    LRemote.addControl(label3);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (button1.isValueChanged() || button2.isValueChanged()) {
    if (button1.getValue() == 1 && button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);
      label2.updateText(String("燈亮"));

    }

  }
  if (button2.isValueChanged()) {
    if (button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, LOW);
      label2.updateText(String("燈滅"));

    }

  }
  if (slider1.isValueChanged()) {
    analogWrite(7, slider1.getValue());

  }
  delay(100);
}