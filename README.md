# Arduino-Thermometer-with-switchbutton
A project including the design of a thermometer using arduino and DHT11 temperature sensor  

This is a class project which involved several requirements which include:  

-The thermometer must have a range of -10 to 150 degrees Fahrenheit  
-should be accurate to +/- 2 degrees Celsius  
-be able to measure normal room temperatures  
-be relatively small  
-must use a microcontroller (Arduino)  
-have some visual display of the temperature  
-a minimum of 4 LEDs will be used in the circuit design  
-visually display temperature in both Fahrenheit and Celsius  
-utilize a switch in some manner  
-the switch must be integrated into the software of the arduino  

![image](https://user-images.githubusercontent.com/72291395/226680656-e4e1d861-7c8e-41f2-8360-3378c7dd9a8f.png)  

  Above is the labelled circuit schematic that I designed. The red blue and black wires coordinate with the power and ground connected to the Arduino, every color of wire is connected to the data pins of the arduino. The arduino communicates with the circuit, to meet the specified requirements the circuit utilizes the pushbutton as a mode switch, which shifts between Celsius as mode 0 and Fahrenheit as mode 1.  
  Holding the button will switch the display to show the temperature in Fahrenheit. The LEDs are utilized as another sign that the modes are switched, the pair of red LEDs are on if the circuit is in mode0 and the pair of blue LEDs will turn on if the circuit is in mode1. The pushbutton requires the 5k ohm pull-down resistor, the switch will not function without it.  
  The 16 by 2 LCD display uses a potentiometer which when adjusted will adjust the contrast of the LCD display.  
  
 Below is a photo of an initial build of the circuit:  
 
 ![image](https://user-images.githubusercontent.com/72291395/226684113-ccd7e17a-186d-4ded-af68-2f4635fabfe2.png)  
 
 This circuit is not identical to the final design shown in my schematic but demonstrates the DHT11 functioning, integrated with the arduino, and displaying room temperature on the 16 by 2 LCD display. This photo was before my final design which included the switch button, LEDs, and switching modes.  
   
 There are several improvements that can be made for this design, and functionality, obviously the wires must be more organized so that the physical circuit does not look like a rat's nest, an additional change to meeting the requirements could be changing the functionality of the LEDS, instead of the buttons symbolizing change in modes, they could instead symbolize temperature levels, ranging from the blue LED turning on for cold temperatures and the red LED turning on for hot temperatures, with two LEDs in between symbolizing warm and cool temperatures. 
