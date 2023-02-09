from random import randint

print("Hello! What is your name?")
name = input()
print("Well, {name}, I am thinking of a number between 1 and 20.")
print("Take a guess.")

guessedNumber = randint(1, 20)

steps = int(0)
guess = int()
while (guess != guessedNumber):
    guess = int(input())
    if (guess < guessedNumber):
        print("Your guess is too low.")
        steps += 1
        continue
    elif (guess > guessedNumber):
        print("Your guess is too high.")
        steps += 1
        continue

print ("Good job, {0}! You guessed my number in {1} guesses!".format(name, steps))