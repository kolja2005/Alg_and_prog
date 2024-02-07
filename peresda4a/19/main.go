package main

import (
	"fmt"
	"sort"
)

func main() {
	n := 1
	var str string

	ar := make(map[string]int)
	dub := make([]string, 0)

	for n > 0 {
		fmt.Scan(&str)
		if str == "end" {
			break
		}
		ar[str] += 1
		if ar[str] == 2 {
			dub = append(dub, str)
		}
	}
	sort.Strings(dub)
	for _, v := range dub {
		fmt.Print(v, " ")
	}

}