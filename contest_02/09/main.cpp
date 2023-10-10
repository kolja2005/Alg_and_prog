import "strconv"

func isLucky(number string) bool {
	sum1 := 0
	sum2 := 0
	for i := 0; i < 6; i++ {
		digit, _ := strconv.Atoi(string(number[i]))
		if i < 3 {
			sum1 += digit
		} else {
			sum2 += digit
		}
	}
	return sum1 == sum2
}
