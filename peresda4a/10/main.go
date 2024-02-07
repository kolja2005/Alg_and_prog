package main
import "fmt"


func main() {
    var plav, kryl, longsh string
    
    fmt.Scan(&plav, &kryl, &longsh)
    
    if plav == "Нет" {
        if kryl == "Нет" {
            if longsh == "Нет" {
                fmt.Print("Кот")
            } else {
                fmt.Print("Жираф")
            }
        } else {
            if longsh == "Нет" {
                fmt.Print("Курица")
            } else {
                fmt.Print("Страус")
            }
        }
    } else {
        if kryl == "Нет" {
            if longsh == "Нет" {
                fmt.Print("Дельфин")
            } else {
                fmt.Print("Плезиозавры")
            }
        } else {
            if longsh == "Нет" {
                fmt.Print("Пингвин")
            } else {
                fmt.Print("Утка")
            }
        }
    }
    
    
}