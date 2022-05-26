# Smart-bin

Module-1: Opening the lid when sensing human

To start with you will first have to wire and attach all the devices and set up to  the Smart  Dustbin. After  connection  set  up  now  next  step  is  to submit/upload code in Arduino and supply power to the circuit.  When  system  is  powered  ON,  Arduino  keeps monitoring  for  any  things  that  come  near  the sensor at give range. When  Ultrasonic  sensor  detect  any  object  for example  like  hand  or  others,  here  Arduino calculates its  distance and  if it  less  than 40com, then the servo  motor  get  activate first and with the  support  of the  extended arm of the lid. Lid  will  open  for  a  given  time  than  it  will automatically closes back.

Module-2: Detecting the Garbage level

This Model works like 
UltraSonic Sensor will detect the garbage level and  it calculates distance and 
If the distance is greater than or equal to 50,one LEDs glow
If the distance is greater than or equal to 40 and less than 50, two LEDs glow
If the distance is greater than or equal to 30 and less than 40, three LEDs glow
If the distance is greater than or equal to 20 and less than 30, four LEDs glow
If the distance is less than 20, all five LEDs glow

Module-3: Sending Indication message using GSM
 This Module,Send message to the specified number when all Five Leds glows.
