package main
import "fmt"


func main() {
    var x, i int
    
    fmt.Scan(&x)
    i = 0
    for {
        // fmt.Print(x) 
        // fmt.Print(" ")
        if x == 1 {
            break
        }
        if x % 2 == 0 {
            x = x / 2
        } else {
            x = 3 * x + 1
        }
        i++ 
    }
    fmt.Print(i)
    
    
    
    
}