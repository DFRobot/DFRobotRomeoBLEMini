/*!
 * @file DFRobotRomeoBLEMini.h
 * @brief DFRobot's Romeo BLE mini - Arduino with Motor Driver and Bluetooth 4.0 (SKU:DFR0351)
 * @n CPP file for DFRobot's Romeo BLE mini
 * @n [Schematics](https://raw.githubusercontent.com/CainZ/Romeo-BLE-mini/master/Romeo%20BLE%20mini%20V1.1%20Schematics%20.pdf)
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [Angelo](Angelo.qiao@dfrobot.com)
 * @version  V1.0
 * @date  2016-01-27
 */

#include "DFRobotRomeoBLEMini.h"

/*!
 *  @brief DFRobotRomeoBLEMini Constractor
 *
 *  @param theReverseMA If set true, the direction of MA motor will be reverse.
 *  @param theReverseMB If set true, the direction of MB motor will be reverse.
 *  @param thePinMA1    MA1 pin number
 *  @param thePinMA2    MA2 pin number
 *  @param thePinMB1    MB1 pin number
 *  @param thePinMB2    MB2 pin number
 */
DFRobotRomeoBLEMini::DFRobotRomeoBLEMini(bool theReverseMA, bool theReverseMB, int thePinMA1, int thePinMA2, int thePinMB1, int thePinMB2)
{
  reverseMA=theReverseMA;
  reverseMB=theReverseMB;
  pinMA1=thePinMA1;
  pinMA2=thePinMA2;
  pinMB1=thePinMB1;
  pinMB2=thePinMB2;
}

/*!
 *  @brief set the speed and dirction of the motors, from -255 to 255.
 *
 *  @param motorMA speed and dirction of motorMA
 *  @param motorMB speed and dirction of motorMB
 */
void DFRobotRomeoBLEMini::speed(int motorMA, int motorMB)
{
  if (reverseMA) {
    motorMA=-motorMA;
  }
  if (reverseMB) {
    motorMB=-motorMB;
  }

  motorMA=constrain(motorMA, -255, 255);
  motorMB=constrain(motorMB, -255, 255);

  if (motorMA>0) {
    analogWrite(pinMA1, motorMA);
    digitalWrite(pinMA2, LOW);
  }
  else{
    analogWrite(pinMA1, 255+motorMA);
    digitalWrite(pinMA2, HIGH);
  }

  if (motorMB>0) {
    analogWrite(pinMB1, motorMB);
    digitalWrite(pinMB2, LOW);
  }
  else{
    analogWrite(pinMB1, 255+motorMB);
    digitalWrite(pinMB2, HIGH);
  }
}