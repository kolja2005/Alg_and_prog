package main

import (
	"fmt"
	"sort"
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

func main() {
	var n, x int

	fmt.Scan(&n)
	fmt.Scan(&x)

	numbers := Read(n)
	sort.Ints(numbers)

	flag := false
	for i := 0; i < len(numbers)-1; i++ {
		for j := i + 1; j < len(numbers); j++ {
			if numbers[i] > x {
				break
			}
			if numbers[i]+numbers[j] == x {
				if numbers[i] > numbers[j] {
					fmt.Print(numbers[j], numbers[i])
				} else {
					fmt.Print(numbers[i], numbers[j])
				}
				flag = true
				break
			}
		}
		if flag {
			break

		}
	}
	if !flag {
		fmt.Print("0 0")
	}
}
