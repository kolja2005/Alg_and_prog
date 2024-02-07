package main
import "fmt"


func main() {
    var N, col int
   
    fmt.Scan(&N)
    cup := [5]int{5000,1000,500,200,100}
    
    for x := 0; x < 5; x++{
        col = N / cup[x]
        N = N - col*cup[x]
        fmt.Print(col)
        fmt.Print(" ")
    }
    
    
    
    
}
