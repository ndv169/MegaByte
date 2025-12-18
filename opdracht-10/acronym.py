acronyms = {
    "tbh": "to be honest",
    "brb": "be right back",
    "lol": "laughing out loud",
    "idk": "I don't know",
    "irl": "in real life",
    "afk": "away from keyboard",
    "cya": "see you",
    "fyi": "for your information",
    "omg": "oh my god"
}

print("beschikbare acroniemen:")
for short_form in acronyms:
    print(short_form)

user_input = input("typ 1 van de beschikbare acroniemen in:\n")

if user_input in acronyms:
    print(acronyms[user_input])
