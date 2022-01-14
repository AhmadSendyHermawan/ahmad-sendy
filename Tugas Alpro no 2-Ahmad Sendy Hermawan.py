def menu():
    print("<><>MENU<><>")
    print("1. Baca Data")
    print("2. Cetak Data")
    print("3. Ubah Data")
    print("4. Hapus Data")
    print("5, Keluar Program")

menu()
print()
while True:
    i = int(input("Masukkan Pilihan Anda :"))
    if i == 1:
        print("Anda Memilih Menu Nomor", i)
        print("= Baca Data")
    elif i == 2:
        print("Anda Memilih Menu Nomor", i)
        print("= Cetak Data")
    elif i == 3:
        print("Anda Memilih Menu Nomor", i)
        print("= Ubah Data")
    elif i == 4:
        print("Anda Memilih Menu Nomor", i)
        print("= Hapus Data")
    elif i == 5:
        print("Anda Memilih Menu Nomor", i)
        print("= Keluar Program")
        break
    

