-- just some basic led blinking stuff
local WRITEPIN = 1
gpio.mode(WRITEPIN, gpio.OUTPUT)

function serout_2()
  gpio.mode(2, gpio.OUTPUT)
  gpio.serout(2, gpio.LOW, {250000}, 9)
end

gpio.serout(WRITEPIN, gpio.LOW, {250000, 15000}, 10, serout_2)

print('init end')