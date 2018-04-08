print('init file, executing in 1000ms')

function init_job()
    dofile('basescript.lua')
    dofile('wifi_init.lua')
    dofile('server.lua')
end

tmr.create():alarm(2000, tmr.ALARM_SINGLE, init_job)
