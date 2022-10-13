def remove_chars(string, unwanted_characters):
    out = string
    for ch in unwanted_characters:
        out = out.replace(ch, '')
    return out
