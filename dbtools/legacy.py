import os.path
import os
from .dbtools import cmddbquery


def legcommandfinder(command):
    # Append file extension to command
    cmdfile = command + '.py'
    # Test if file exists
    file_exists = os.path.exists(cmdfile)
    # Send back if the file exists or not
    return file_exists
