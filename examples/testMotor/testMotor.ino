/*!
 * @file testMotor.ino
 * @brief DFRobot's Romeo BLE mini - Arduino with Motor Driver and Bluetooth 4.0 (SKU:DFR0351)
 * @n [Get the module here](http://www.dfrobot.com/index.php?route=product/product&product_id=1367)
 * @n This example is used to test the two motor drivers.
 * @n [Connection and Diagram](https://www.dfrobot.com/wiki/index.php?title=Romeo_BLE_mini_SKU:DFR0351#Connection_Diagram)
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [Angelo](Angelo.qiao@dfrobot.com)
 * @version  V1.0
 * @date  2016-01-27
 */

#include "Arduino.h"

/*!
 * @brief Library for DFRobot's Romeo BLE mini
 * @author [Angelo](Angelo.qiao@dfrobot.com)
 */
#include "DFRobotRomeoBLEMini.h"

DFRobotRomeoBLEMini myDFRobotRomeoBLEMini;

void setup()
{

}

void loop()
{
  /*!
   *  @brief Change speed and dirction of motor, ranging from -255 to 255.
   */
  myDFRobotRomeoBLEMini.speed(255, 255);
  delay(1000);
  myDFRobotRomeoBLEMini.speed(-255, -255);
  delay(1000);
  myDFRobotRomeoBLEMini.speed(255, -255);
  delay(1000);
  myDFRobotRomeoBLEMini.speed(-255, 255);
  delay(1000);
  myDFRobotRomeoBLEMini.speed(0, 0);
  delay(1000);
}
