package main
 
import "fmt"


func main() {
    var a , b , c string
    fmt.Scan(&a, &b, &c)

    swim := a == "Да"
    wings := b == "Да"
    neck := c == "Да"
    
    if swim {
        if wings {
            if neck {
             fmt.Println("Утка")   
            } else {
                fmt.Println("Пингвин")
            }
        } else {
            if neck {
                fmt.Println("Плезиозавры")
            } else {
                fmt.Println("Дельфин")
            }
        }
        
    } else {
		if wings {
			if neck {
				fmt.Println("Страус")
			} else {
				fmt.Println("Курица")
			}
		} else {
			if neck {
				fmt.Println("Жираф")
			} else {
				fmt.Println("Кот")
			}
		}
	}
}


 
