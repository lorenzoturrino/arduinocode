require('ambient_read')

local temp, hum = ambient_read(1)
print('temp: ' .. temp .. ' humidity: ' .. hum)

print('now sleeping 10 seconds')
node.dsleep(10 * 1000000, 4)
