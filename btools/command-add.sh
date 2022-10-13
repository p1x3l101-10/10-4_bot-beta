#!/bin/bash
echo "" >> command_maker.py
echo "    if command == '${1}':" >> command_maker.py
echo "        await cod.${1}(command, arguments, channel, user, username, client, discord)" >> command_maker.py