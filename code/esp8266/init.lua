print('init file, executing in 1000ms')

function init_job()
    dofile("basescript.lua")
    dofile("server.lua")
end

tmr.create():alarm(1000, tmr.ALARM_SINGLE, init_job)
