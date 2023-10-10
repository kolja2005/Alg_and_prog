package main
import "fmt"


func main() {
    var a, b, c, D int 
    
    fmt.Scan(&a,&b,&c)
    
    if a > b {
        D = a
    } else {
        D = b
    }
    
    if D > c {
        fmt.Print(D)
    } else {
        fmt.Print(c)
    }
    
    
    
    
}
