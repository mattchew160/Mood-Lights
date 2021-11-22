# Mood-Lights
My Mood Lights project

I'm am using this git repo to store what I'm working on and will update this repo as I make progress.
I am using a Ardunio nano, and the IDE that Ardunio uses to program this.

One thing that I decided to limit myself on is only using nanos. This is because Nanos do not have any PWM ports and this projects does not need any PWM ports to function.
I did this simply because I have 5 extra nanos at home that are begging for prupose. 

As for what LEDS I am using, I am using RGB LEDS from amazon this is the product title, EDGELEC 100pcs 5mm RGB Tri-Color (Red Green Blue Multicolor) 4Pin LED Diodes Common Cathode 
Diffused Round Lens 29mm Long Lead +300pcs Resistors (for DC 6-12V) Included,Light Emitting Diodes.

From the Mood Lights file, you can set the pin numbers for each red green and blue. I do haave plans to just have linked shift registars to control more than 4 LEDS (12 pins), 
But that is for another time. At the moment I only have two LEDs in the file.


What a majority of my time I spent on this was the many many void functions that do specific transitions, like hold_red or fade_in_blue or blue_to_green. This is because I wanted 
to make the function programing as easy as it can be by creating all of the transitions I could possibly do. From my working example, there are still bugs as how it looks IRL, 
but I did this such that I can explore as many concepts for creating functions.  



I added two buttons to change the speed and pause of the fadeing and holding phases, I want to make them dials instead of buttons. Also it is sluggish to change on the fly.

Please feel free to download and modify as you see fit, I really like to see intresting lighting functions that can be made from this. I will update this README as I add more features.

EDIT 1 7/22/21


It's been two months or so, and I spent more time on this project! I created the function called all_one_color() function to control all lights and fade all lights into a new color one light at a time. I'm really happy with this one. It is an recursive function that uses the last color as it's input and a if statment to make sure it's two different colors. 

I also added a function called all_on_color_fade() which will fade out the colors and then fade in the new color instead of a smooth fade.

I have a lot of work to do to make this program more efficent, the all_one_color() function almost can run with any amount of lights. there are a few statments I need to address. There is a lot of code that is dependent on declareing the number of led lights there are, and I want to slowly phase that out.

-Matt
