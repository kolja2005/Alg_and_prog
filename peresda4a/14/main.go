package main

import "fmt"

func main() {

	var row, col int
	fmt.Scan(&row, &col)
	fmt.Print("    |")

	for i := 1; i <= col; i++ {
		fmt.Print("  ")
		if i < 10 {
			fmt.Print(" ")
		}
		fmt.Print(i)
	}

	fmt.Print("\n" + "   --")

	for i := 1; i <= col; i++ {
		fmt.Print("----")
	}

	for r := 1; r <= row; r++ {
		index := 1
		fmt.Print("\n")
		if r >= 100 {
			index = 1
		} else if r >= 10 {
			index = 2
		} else {
			index = 3
		}
		for i := 1; i <= index; i++ {
			fmt.Print(" ")
		}

		fmt.Print(r, "|")
		for c := 1; c <= col; c++ {
			index := 3
			res := r * c
			if res >= 100 {
				index = 1
			} else if res >= 10 {
				index = 2
			} else {
				index = 3
			}
			for i := 1; i <= index; i++ {
				fmt.Print(" ")
			}
			fmt.Print(r * c)

		}

	}

}