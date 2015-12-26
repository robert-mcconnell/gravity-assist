<h3 align="center">
Gravity Assist

</h3>
<p align="center">
A <a href="https://en.wikipedia.org/wiki/Gravity_assist">gravitational assist</a> simulator that simulates the motion of objects as they enter and exit gravitational fields. The program is written using C++ and OpenGL and uses 'real physics' applying <a href="https://en.wikipedia.org/wiki/Kepler's_laws_of_planetary_motion">Kepler's Laws</a> and <a href="https://en.wikipedia.org/wiki/Newton's_law_of_universal_gravitation">Newtonian Gravitation</a> to simulate the gravitational slingshots.
</p>
------------ 
#####Gravity Assist
A gravity assist is the act of getting close to a large gravitational body (like a planet) in order to speed up. In this process, the planet loses some of its orbital energy (conservation of energy) but the amount the planet loses is proportionately very small.
<p align="center">
<img src="https://raw.githubusercontent.com/AlbertFaust/gravity-assist/master/output2.gif">
</p>
#####Development

This is a project that I plan on investing a lot of time in. I am very interested in Celestial Mechanics and want to work on a large Computer Graphics project. Some parts of the project I need to implement:

* Fully working Solar System with textured planets and stars.
* Ability to control camera and 'time'. 
* Accurate orbital physics using Kepler's Laws and Newtonian Gravitation.
* Ability to generate 'planets' and see how a body reacts in the field.

#####Usage
To compile:  
`g++ orbit.cpp -lGL -lGLU -lGLEW -lglut -o orbit`

To run:  
`./orbit`
