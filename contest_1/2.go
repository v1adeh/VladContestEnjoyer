package main
import "fmt"

func main() {
  oxy := 0.5 * 365
  dub := int (oxy / 20 + 1)
  topol := int (oxy / 32 + 1)
  
  fmt.Println(oxy, topol, dub)
}
