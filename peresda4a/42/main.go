package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type User struct {
	User_id   int
	Id        int
	Title     string
	Completed bool
}

func main() {
	var n, count int
	fmt.Scan(&n)
	var data []map[string]interface{}
	file, err := os.ReadFile("data.json")

	if err != nil {
		fmt.Println(err)
	}
	err = json.Unmarshal(file, &data)
	if err != nil {
		fmt.Println(err)
	}

	for _, value := range data {
		TaskList := value["tasks"].([]interface{})
		for _, elem := range TaskList {
			TaskMap := elem.(map[string]interface{})
			user_id := int(TaskMap["user_id"].(float64))
			flag := TaskMap["completed"].(bool)
			if user_id == n && flag {
				count++
			}

		}
	}
	fmt.Println(count)

}
