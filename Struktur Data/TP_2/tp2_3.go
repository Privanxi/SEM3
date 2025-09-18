package main
import ("fmt")

func hitungJumlah(x, y int, z *int){
  *z = x + y
}

func hitungKali(x, y int, z *int){
  *z = x * y
}

func hitungBagi(x, y float64, z *float64){
  *z = x / y
}

func main(){
  var bil1, bil2 int //Variabel operasi
  var pilihan int //Variabel penentu 
  var hasil int //Variabel hasil
  var hasilBagi float64 //Variabel pembagian

  for {
    fmt.Println("-----------------------")
    fmt.Printf("\tMENU\n")
    fmt.Println("-----------------------")
    fmt.Println("1. Hitung Penjumlahan")
    fmt.Println("2. Hitung Perkalian")
    fmt.Println("3. Hitung Pembagian")
    fmt.Println("4. EXIT")
    fmt.Println("-----------------------")
  
    fmt.Print("Pilih (1/2/3/4)?", " ")
    fmt.Scan(&pilihan)

    if pilihan == 1 {
      fmt.Print("Masukkan dua bilangan yang akan dijumlahkan: ")
      fmt.Scan(&bil1, &bil2)
      hitungJumlah(bil1, bil2, &hasil)

      fmt.Print("Hasil Penjumlahan: ", hasil, "\n\n")
    } else if pilihan == 2 {
      fmt.Print("Masukkan dua bilangan yang akan dikalikan: ")
      fmt.Scan(&bil1, &bil2)
      hitungKali(bil1, bil2, &hasil)

      fmt.Print("Hasil Perkalian: ", hasil, "\n\n")
    } else if pilihan == 3 {
      fmt.Print("Masukkan dua bilangan yang akan dibagikan: ")
      fmt.Scan(&bil1, &bil2)
      hitungBagi(float64(bil1), float64(bil2), &hasilBagi)

      fmt.Print("Hasil Pembagian: ", hasilBagi, "\n\n")
    } else if pilihan == 4{
      break
    }
  }
}