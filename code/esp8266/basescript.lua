-- just some basic led blinking stuff
local WRITEPIN = 1
gpio.mode(WRITEPIN, gpio.OUTPUT)

gpio.serout(WRITEPIN, gpio.HIGH, {25000, 50000}, 10)
print('init end')