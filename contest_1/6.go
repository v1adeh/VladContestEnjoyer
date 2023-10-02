package main
import "fmt"

var mass [5]int = [5]int{5000,1000,500,200,100}


func main() {
    var chislo int
    fmt.Scan(&chislo)
    var mass2 [5] int
    
    for i, ryad := range mass {
        mass2[i] = chislo / ryad
        chislo %= ryad;
    }
    
    fmt.Println(mass2[0], mass2[1], mass2[2], mass2[3], mass2[4])

}
