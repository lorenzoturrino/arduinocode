function connect_wifi(ssid, pass)
    print('Connecting with credentials: ' .. ssid .. ' ' .. pass)
    wifi.setmode(wifi.STATION)
    wifi.sta.config({
        ssid=ssid,
        pwd=pass,
        save=false
    })
end

function credential_reader()
    if file.open('wifi_credentials.txt') then
        return file.readline(), file.readline()
    end
end



function connection_success_handler(event)
    print('Connected to AP! ' .. event.SSID)
    disconnect_ct = nil
end

function ip_acquired_handler(event)
    print('Ip received! ' .. event.IP)
end

function disconnection_handler(event)
    print('WIFI disconnected! ' .. event.reason)
    if T.reason == wifi.eventmon.reason.ASSOC_LEAVE then return end --the station has disassociated from a previously connected AP
end


wifi.eventmon.register(wifi.eventmon.STA_CONNECTED, connection_success_handler)
wifi.eventmon.register(wifi.eventmon.STA_GOT_IP, ip_acquired_handler)
wifi.eventmon.register(wifi.eventmon.STA_DISCONNECTED, disconnection_handler)

connect_wifi(credential_reader())
print('wifi configured')
