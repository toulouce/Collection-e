import Foundation
func dailyRateFrom(hourlyRate: Int) -> Double {
  let buf = Double(hourlyRate)
  return buf * 8.0;
}

func monthlyRateFrom(hourlyRate: Int, withDiscount discount: Double) -> Double {
    let dailyRate = Double(hourlyRate) * 8.0
    let monthlyRate = dailyRate * 22.0
    let discountedRate = monthlyRate * ((100.0 - discount) / 100.0)
    return discountedRate.rounded()
}



func workdaysIn(budget: Double, hourlyRate: Int, withDiscount discount: Double) -> Double {
    let dailyRate = Double(hourlyRate) * 8.0
    let discountedRate = dailyRate * ((100.0 - discount) / 100.0)
    let workdays = budget / discountedRate
    return floor(workdays)
}

