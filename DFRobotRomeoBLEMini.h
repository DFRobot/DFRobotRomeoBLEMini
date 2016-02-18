/*!
 * @file DFRobotRomeoBLEMini.h
 * @brief DFRobot's Romeo BLE mini - Arduino with Motor Driver and Bluetooth 4.0 (SKU:DFR0351)
 * @n Header file for DFRobot's Romeo BLE mini
 * @n [Schematics](https://raw.githubusercontent.com/CainZ/Romeo-BLE-mini/master/Romeo%20BLE%20mini%20V1.1%20Schematics%20.pdf)
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [Angelo](Angelo.qiao@dfrobot.com)
 * @version  V1.0
 * @date  2016-01-27
 */

#include "Arduino.h"

#ifndef DFRobotRomeoBLEMini_cpp
  #define DFRobotRomeoBLEMini_cpp

class DFRobotRomeoBLEMini {

  int pinMA1;
  int pinMA2;
  int pinMB1;
  int pinMB2;

  bool reverseMA;
  bool reverseMB;

public:

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
  DFRobotRomeoBLEMini(bool theReverseMA = false, bool theReverseMB = false, int thePinMA1=3, int thePinMA2=5, int thePinMB1=9, int thePinMB2=6);

  /*!
   *  @brief set the speed and dirction of the motors, from -255 to 255.
   *
   *  @param motorMA speed and dirction of motorMA
   *  @param motorMB speed and dirction of motorMB
   */
  void speed(int motorMA, int motorMB);
};


#endif
