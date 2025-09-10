package main
import ("fmt")

func reamur(c float64) float64{
	return 0.8 * c
}

func fahrenheit(c float64) float64{
	return 1.8 * c + 32
}

func kelvin(c float64) float64{
	return c + 273
}

func main(){
	var cAwal, cAkhir, step float64
	var c, r, f, k float64

	fmt.Scan(&cAwal, &cAkhir, &step)
	
	fmt.Printf("Celcius\tReamur\tFahrenheit\tKelvin\n")

	c = cAwal
	for c <= cAkhir {
		r = reamur(c)
		f = fahrenheit(c)
		k = kelvin(c)
		
		fmt.Printf("%.2f \t", c) 
		fmt.Printf("%.2f \t", r)
		fmt.Printf("%.2f \t", f)
		fmt.Printf("\t%.2f \n", k)
		c += step
	}
}