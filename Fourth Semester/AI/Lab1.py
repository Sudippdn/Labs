import random

listOfWords = ["People","He","Glad","Fun","Rose"]

def getRandomWord():
    chosenWord = random.choice(listOfWords)
    return chosenWord.upper()

def play(chosenWord):
    completionOfWords = "#" * len(chosenWord)
    guessed = False
    guessedLetters = []
    guessedWords = []
    tries = 3

    print("The hangman game")
    print(f"Remaining tries ={tries}")
    print(completionOfWords)

    while not guessed and tries > 0:
        guess = input("Please guess a word ").upper()
        if len(guess) == 1 and guess.isalpha():
            if guess in guessedLetters:
                print("This letter is already guessed", guess)
            elif guess not in chosenWord:
                print(guess, "is not contained by word")
                tries -= 1
                guessedLetters.append(guess)
            else:
                print(guess, "is contained by word")
                guessedLetters.append(guess)
                word_as_list = list(completionOfWords)
                indices = [i for i, letter in enumerate(chosenWord) if letter == guess]
                for index in indices:
                    word_as_list[index] = guess
                completionOfWords = "".join(word_as_list)
                if "#" not in completionOfWords:
                    guessed = True
        else:
            print("Not a valid guess.")
        print(f"You have {tries} tries remaining.")
        print(completionOfWords)
        print("\n")

    if guessed:
        print("You guessed it right")
    else:
        print("Game failed. The word was " + chosenWord)

word = getRandomWord()
play(word)
print("(Lab Report by Sudip Pradhan")