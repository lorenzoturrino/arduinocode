local server = net.createServer(net.TCP, 10)

function handler(conn)
    conn:on('receive', function(socket, data)
        print(data) 
        socket:close() 
    end)
    conn:send('hello world')
end

if server then
    server:listen(80, handler)
    print('server listening on 80')
else
    print('server failed to start')
end