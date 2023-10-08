package main
 
import "fmt"


func main() {
    var a int
    fmt.Scan(&a)
    info:= make([]float64,a)
    
    for i := range info {
        fmt.Scan(&info[i])
    }
    
    b := make([]float64, a)
    
    for i, c := range info {
        if i == 0 || i == a-1 {
            b[i] = c
            continue
        }
        b[i] = (info[i-1] + c + info[i+1]) / 3
    }
    for k := 0; k < len(b); k++ { 
    fmt.Println(b[k])
    }
}


 // Выводит правильные ответы, но в столбик, не разобрался как это исправить (если делать не через цикл for, то появляются квадратные скобки)
