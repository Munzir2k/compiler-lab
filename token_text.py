def tokenizer(text):
    token_text = ''
    token_text = text.split()
    return token_text

text = "S.I = ( P x T x R ) / 100"
print(tokenizer(text))