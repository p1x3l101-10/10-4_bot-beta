from . import *

def picker(command, arguments):
    if command == 'channel':
        msg = channel(arguments)

    if command == 'changechannel':
        msg = changechannel(arguments)

    if command == 'shrug':
        msg = shrug(arguments)

    if command == 'tableflip':
        msg = tableflip(arguments)

    if command == 'unflip':
        msg = unflip(arguments)

    if command == 'spoiler':
        msg = spoiler(arguments)
    return msg
