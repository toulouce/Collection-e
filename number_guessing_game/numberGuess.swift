//Number Guessing game
import Foundation
let number = Int.random(in: 1...100)
print("Guess the number in between 1 to 100")
var guessCount = 0
var guess: Int = 0
repeat {
  guessCount += 1
  print("Guess \(guessCount): ", terminator:"")
  if let input = readLine(), let inputnum = Int(input) {
      guess = inputnum
  } else {
      print("Please enter a valid number.")
      continue
  }
  if guess < number {
    print("Guess is too LOW!")
  } else if guess == number {
    print("Your guess was right!!!")
  } else {
    print("Guess is too HIGH!")
  }
} while number != guess
print("It took you \(guessCount) guess(es)!")
