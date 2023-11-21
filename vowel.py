with open('text.txt','r') as file:
    content = file.read()
    vowel=0
    consonant=0

    for line in content:
        if line in 'aeiouAEIOU':
            vowel+=1
        elif line.isalpha():
            consonant+=1
print(f"Vowel: {vowel}")
print(f"Consonant: {consonant}")