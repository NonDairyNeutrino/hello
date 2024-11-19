package main
import (
	"fmt"
	"os"
)

func main(){
	if len(os.Args) > 1 {
		name := os.Args[1] // assign the first command line argument to name
		fmt.Println("Hello", name, "!")
	} else {

	}
}
