let expectedMinutesInOven: Int = 40

func remainingMinutesInOven(elapsedMinutes timePassed: Int) -> Int {
  return expectedMinutesInOven - timePassed;
}

func preparationTimeInMinutes(layers : Int) -> Int {
  return layers * 2;
}

func totalTimeInMinutes(layers: Int, elapsedMinutes: Int) -> Int {
  return preparationTimeInMinutes(layers: layers) + elapsedMinutes;
}