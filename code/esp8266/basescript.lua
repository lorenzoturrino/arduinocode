-- just some basic led blinking stuff and wifi off
local WRITEPIN = 1
gpio.mode(WRITEPIN, gpio.OUTPUT)

wifi.setmode(wifi.NULLMODE)
gpio.serout(WRITEPIN, gpio.HIGH, {25000, 50000}, 10)

print('init end')