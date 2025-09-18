package main
import ("fmt")

func hitungMenang(m, k int, jm *int){
	if m > k {
		*jm += 1
	}
}

func hitungDraw(m, k int, jd *int){
	if m == k {
		*jd += 1
	} 
}

func hitungKalah(m, k int, jm *int){
	if m < k {
		*jm += 1
	}
}

func hitungGolKalahSelisih(m, k int, jg, jk, js *int){
	*jg += m
	*jk += k
	*js = *jg - *jk
}

func hitungJumPoint(jumlahK, jumlahD int, jp *int){
	*jp = jumlahK * 3 + jumlahD * 1
}

func main(){
	var banyakGame, menang, kalah int
	var n int
	var pointMenang, pointDraw, pointKalah, jG, jK, jS, jP int

	fmt.Scan(&banyakGame)

	for n = 0; n < banyakGame; n++{
		fmt.Scan(&menang, &kalah)
		hitungMenang(menang, kalah, &pointMenang)
		hitungDraw(menang, kalah, &pointDraw)
		hitungKalah(menang, kalah, &pointKalah)
		hitungGolKalahSelisih(menang, kalah, &jG, &jK, &jS)
		hitungJumPoint(pointMenang, pointDraw, &jP)
	}


	fmt.Print(banyakGame ," ", pointMenang, " ", pointDraw, " ", pointKalah, " ", jG, " ", jK, " ", jS, " ",jP)
}