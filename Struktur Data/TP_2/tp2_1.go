package main
import ("fmt")

func hitungLuasKelilinglingkaran(r float64, luasL, kelilingL *float64){
	var PI = 3.14

	*luasL = PI * r * r
	*kelilingL = 2 * PI * r
}

func hitungLuasKelilingpersegi(s float64, luasP, kelilingP *float64){
	*luasP = s * s
	*kelilingP = 4 * s
}

func hitungTotal(luasL, luasP, kelilingL, kelilingP float64, totLuas, totKel *float64){
	*totLuas = luasL + luasP
	*totKel = kelilingL + kelilingP
}

func main(){
	var radiusLingkaran, sisiPersegi []float64
	var luasL, luasP, kelilingL, kelilingP float64
	var totLuas, totKel float64
	
	for {
		var input1, input2 float64
		fmt.Scan(&input1, &input2)

		if input1 != 0 && input2 != 0 {
			radiusLingkaran = append(radiusLingkaran,input1)
			sisiPersegi = append(sisiPersegi,input2)
		} else {
			break
		}
	}
		if len(radiusLingkaran) != 0 {
			fmt.Printf("%7s %7s %7s %7s %7s %7s %7s %7s \n", "R", "S", "LL", "LP", "KL", "KP","TL","TP")
		}
	
	for i:=0; i<len(radiusLingkaran); i++ {
		hitungLuasKelilinglingkaran(radiusLingkaran[i], &luasL, &kelilingL)
		hitungLuasKelilingpersegi(sisiPersegi[i], &luasP, &kelilingP)
		hitungTotal(luasL, luasP, kelilingL, kelilingP, &totLuas, &totKel)

		fmt.Printf("%7.2f %7.2f %7.2f %7.2f %7.2f %7.2f %7.2f %7.2f \n", radiusLingkaran[i], sisiPersegi[i], luasL, luasP, kelilingL, kelilingP, totLuas,totKel)
	}
}