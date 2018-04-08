-- just some basic led blinking stuff
local WRITEPIN = 1
gpio.mode(WRITEPIN, gpio.OUTPUT)

gpio.serout(WRITEPIN, gpio.LOW, {250000, 15000}, 10)

print('init end')