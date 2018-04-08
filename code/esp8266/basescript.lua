-- just some basic led blinking stuff
print('init begin')
local WRITEPIN = 1

function blink()
  print('ping')
  gpio.write(WRITEPIN, gpio.HIGH)
  trm.create():alarm(500, tmr.ALARM_SINGLE, function() gpio.write(WRITEPIN, gpio.LOW) end)
end

print('init postfunction')
gpio.mode(0, gpio.OUTPUT)
tmr.create():alarm(3000, tmr.ALARM_AUTO, blink)
print('init end')