print('test main')

require('ambient_read')

local status, temp, hum = ambient_read()

print('outer done with ' .. status .. ' temp: ' .. temp .. ' humidity: ' .. hum)