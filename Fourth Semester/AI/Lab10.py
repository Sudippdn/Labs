from nltk.tokenize import word_tokenize

import nltk
nltk.download('punkt')
sentence = input("Enter a sentence: ")

print(word_tokenize(sentence))
