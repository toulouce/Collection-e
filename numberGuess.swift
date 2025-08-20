//Number Guessing game

let number = Int.random(in: 1...100)
print("Guess the number in between 1 to 100")
var guessCount = 0
var guess: Int
repeat {
  guessCount += 1
  print("Guess\(guessCount): ", terminator:"")
  var input = readline(); guess = Int(input)
  if guess < number {
    print("Guess is too LOW!")
  } else if guess == number {
    print("Your guess was right!!!")
  } else {
    print("Guess is too HIGH!")
  }
} while number != guess
print("It took you \(guessCount) guess(es)!")
