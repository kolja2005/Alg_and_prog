package main

import (
	"fmt"
)

func Read(n int) []int {
	var ar []int
	num := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&num)
		ar = append(ar, num)
	}
	return ar
}
func LoneNumber(numbers []int) int {
	count := make(map[int]int, 1)
	for _, element := range numbers {
		count[element]++
		if count[element] == 2 {
			count[element] = 0
		}
	}
	for _, element := range numbers {
		if count[element] == 1 {
			return element
		}
	}
	return 0

}

func main() {
	var n int

	fmt.Scan(&n)
	numbers := Read(n)
	fmt.Println(LoneNumber(numbers))

}