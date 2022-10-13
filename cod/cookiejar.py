import time


async def cookiejar(command, arguments, channel, user, username, client, discord):
    if arguments == (user.mention):
        await channel.send('Why would you gift yourself? That ruins the fun!')
        channel.typing()
        time.sleep(2)
        await channel.send('Fine, have it your way.')
        time.sleep(1)
    try:
        if arguments != 'here'.lower():
            mention = arguments.replace("<", "")
            mention = mention.replace(">", "")
            mention = mention.replace("@", "")
            mention = mention.replace("!", "")

            user = await client.fetch_user(mention)
            username = str(user.name).split('#')[0]
            await channel.send(f'Sending cookies to {username}.')
            for i in range(49):
                await user.send(':cookie:')
            await user.send(':jar:')
            await channel.send(f'{username} has been gifted cookies.')
        else:
            for i in range(49):
                await user.send(':cookie:')
            await user.send(':jar:')
    except discord.errors.Forbidden:
        await channel.send('This user has an allergy')
    except discord.errors.HTTPException:
        await channel.send("I don't feel like it")
