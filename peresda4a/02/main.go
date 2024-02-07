package main
import (
    "fmt"
    "math")


func main() {
    fmt.Println(fmt.Sprint(365.0*0.5) + " " + fmt.Sprint(math.Ceil((365.0*0.5)/32.0)) + " " + fmt.Sprint(math.Ceil((365.0*0.5)/20.0)))
}

