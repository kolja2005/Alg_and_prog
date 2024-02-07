package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	var result string

	for n > 0 {

		if n%26 == 0 {
			result = string(65+(n-1)%26) + result
			n /= 27
			continue

		}

		result = string(64+n%26) + result
		n /= 26

	}
	fmt.Print(result)
}
