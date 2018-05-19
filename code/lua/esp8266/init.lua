print('init file, executing in 2000ms')

function init_job()
    dofile('wifi_off.lua')
    dofile('main.lua')
    -- dofile('ambient_read.lua')
    -- dofile('wifi.lua')
    -- dofile('server.lua')
end

tmr.create():alarm(2000, tmr.ALARM_SINGLE, init_job)
