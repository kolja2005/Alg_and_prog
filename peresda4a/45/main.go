package main

import (
	"bufio"
	"encoding/csv"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

type Passenger struct {
	PassengerId string
	Survived    string
	Pclass      string
	Name        string
	Surname     string
	Sex         string
	Age         string
}

func funcLine(line string) string {
	for {
		flag := true
		for i := 0; i < len(line)-1; i++ {
			if line[i] == line[i+1] && line[i] == 34 {
				line = line[:i] + line[i+1:]
				flag = false
				break
			}
		}
		if flag == false {
			continue
		}
		break
	}
	return line
}

type info struct {
	Pclass int
	Name   string
	Sex    string
	Age    int
}
type Pass_info []info

func (a Pass_info) Less(i, j int) bool {
	if a[i].Age < a[j].Age {
		return true
	} else if a[i].Name < a[j].Name && a[i].Age == a[j].Age {
		return true
	}
	return false
}
func (a Pass_info) Len() int { return len(a) }

func (a Pass_info) Swap(i, j int) { a[i], a[j] = a[j], a[i] }
func main() {
	var age_, pclass_ int
	fmt.Scan(&pclass_)
	fmt.Scan(&age_)

	file, err := os.Open("train.csv")
	if err != nil {
		fmt.Println("Error opening file:", err)
		return
	}
	defer file.Close()

	reader := csv.NewReader(bufio.NewReader(file))
	reader.Comma = ','

	rf, err := reader.Read() // Skip header line
	if err != nil {
		fmt.Println("Error reading header line:", err)
		return
	}
	var new_slice []string
	var passengers []info
	for _, elem := range rf {
		if strings.Contains(elem, "\r") {
			new_slice = append(new_slice, strings.Split(elem, "\r")[0])
			if new_slice[0] != "PassengerId" {
				var pass info
				pass.Name = new_slice[3]
				pass.Sex = new_slice[4]
				pass.Age, _ = strconv.Atoi(new_slice[5])
				pass.Pclass, _ = strconv.Atoi(new_slice[2])
				if pass.Age > age_ && pass.Pclass == pclass_ && pass.Sex == "female" {
					passengers = append(passengers, pass)
				}
			}
			new_slice = new_slice[12:]
			new_slice = append(new_slice, strings.Split(elem, "\r")[1])
		} else {
			new_slice = append(new_slice, elem)
		}

	}

	sort.Sort(Pass_info(passengers))
	for _, e := range passengers {
		fmt.Println(e.Name)
	}

}
