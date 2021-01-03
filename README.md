# CVE
Welcome to my CHAdeMO emulator for the vehicle side of a DC Fast Charger.

This is a test implementation, written in C for the Raspberry Pi.  It is not intended
to be a real battery management system, just one that can be used to verify charger
functionality.  For example, the plan is to use a non-isolated A/D to read some of the
12V signals from the charger - I want to know that the voltages are within nominal, not
that the signal meets a threshold set in the spec.

Given this situation, I expect to create several branches that will be used as test 
configurations.  One setup that is intended to be used with resistive loads, one that 
will work with a battery emulator, maybe one that works with real batteries even.  In
the end there will never be a formal "release"; just a collection of tools that I find
handy and you may too.

This repo is made avaialable under GPL 3.  That means you are free to use this for 
your own purposes as you see fit; but, if you ever pass it along to another person
or entity you have to publish what you built on this base.  If you have some problem
with GPL 3 please feel free to contact me to see if there is something we can agree
is OK.
