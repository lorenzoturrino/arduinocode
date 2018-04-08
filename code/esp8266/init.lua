print('init file, executing in 500ms')

function init_job()
    dofile("basescript.lua")
end

tmr.create():alarm(500, tmr.ALARM_SINGLE, init_job)
