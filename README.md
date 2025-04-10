# Task-2

AIM: to make an object counter, which uses  an IR sensor to count the number of passing objects and displays the count on the LCD screen

thought process and applications:
firstly i thought of connecting the ir sensor to the arduino through the arduino but after that the main problem pops out that i want to display the output in the lcd display, im not much aware about that i know somewhat about connecting lcd display to the arduino so i refer some of the websites and firstly i connected it with the normal lcd display and it was complicated one and after that i used i2c lcd display which was much easier.at the end after i know about all these details i started to do the project. the object counters are used in parking system to count the cars entry, it is used in the manufacturing company to count the no of products made and it was placed in the entry of big events to count the number of people attended the event.

process:
for the code i declared input for ir pin and i setup the lcd and input and in the loop i coded for the output for the object counter and for the circuit part for the ir sensor i connected power to 5v and and grounded the sensor through breadboard which is connected to the arduino and connect the another pin to the any digital pin. and for the lcd display part first connect the lcd display to the bread board and here we using the i2c led display so the final output pins are 4 and one were grounded and power was connected to the 5v and sda and scl is connected to the sda and scl to the ardunio respectively and after finishing the code and circuit part connect the arduino to the computer and the run the code to check whether the counter is working properly ,if any error comes out sort it out if not the circuit will work properly as any object moves through the sensor the lcd display will show the count as 1 and it increases as many objects goes through it.

reference:
https://www.youtube.com/watch?app=desktop&v=CKuweM0YKtQ
https://docs.arduino.cc/libraries/liquidcrystal-i2c/
https://projecthub.arduino.cc/arduino_uno_guy/i2c-liquid-crystal-displays-5eb615
https://www.instructables.com/How-to-Connect-I2C-Lcd-Display-to-Arduino-Uno/
