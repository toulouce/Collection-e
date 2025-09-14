//Swift Madlib

@main
print("*** Swift Madlib ***")
var continue: String
print("Do you wish to proceed(Y/N): ", terminator:""); let input = readLine(); continue = input.uppercased()
while continue == "Y" {
    print("Enter a name: ", terminator:""); var nom = readLine()
    print("Enter a colour: ", terminator:""); var couleur = readLine()
    print("Enter a beverage: ", terminator:""); var beverage = readLine()
    print("\(nom) spilled \(beverage) on their \(couleur) jacket and now they're furious.")
    print("Do you wish to continue(Y/N): ", terminator:""); let input1 = readLine(); continue = input.uppercased()
    if continue == "N" {
        break
    } else {
        continue
    }
}
print("Bye!")