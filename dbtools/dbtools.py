import json


def cmdqueryloop (command, data):
    for i in data[command]:
        return i

def cmdquery(command, cmdfile):
    # Open JSON file
    f = open(cmdfile)
    # Return JSON object as a dictionary
    data = json.load(f)
    cmdinfo = cmdqueryloop(command, data)
    return cmdinfo