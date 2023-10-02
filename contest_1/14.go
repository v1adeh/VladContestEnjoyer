package main
 
import "fmt"
import "strings"


func main() {
    var mrow int 
    var mcol int
    fmt.Scan(&mrow, &mcol)
    board := "    |"
    
    for col := 1; col <= mcol; col++ {
        board = board + fmt.Sprintf("%4d", col)
    }
    fmt.Println(board)
    fmt.Println("   " + strings.Repeat("-", 4*mcol+2))
    
    
    for row := 1; row <= mrow; row++ {
        board = fmt.Sprintf("%4d", row) + "|"
        for col := 1; col <=mcol; col++ {
            board = board + fmt.Sprintf("%4d", row*col)
        }
        fmt.Println(board)
    }
}


 
