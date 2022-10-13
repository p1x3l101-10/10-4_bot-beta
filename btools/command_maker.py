import cod

async def command_maker(command, arguments, channel, user, username, client, discord):
    if command == 'ping':
        await cod.ping(command, arguments, channel, user, username, client, discord)

    if command == 'cookiejar':
        await cod.cookiejar(command, arguments, channel, user, username, client, discord)
