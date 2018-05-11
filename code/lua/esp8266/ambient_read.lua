print('reading ambient data')
local COMM_PIN = 1

local status, temperature, humidity, _, _ = dht.read(COMM_PIN)

print('done with ' .. status .. ' temp: ' .. temperature .. ' humidity: ' .. humidity)