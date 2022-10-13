def char_counter(string, character):
    count = 0
    for i in range(0, len(string)):
        if string[i] == character:
            count += 1
    return count
