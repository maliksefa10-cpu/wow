def cek_tilang(plat, tanggal):
    if plat % 2 == tanggal % 2:
        print("AMAN")
    else:
        print("TILANG")

cek_tilang(24, 12)  
cek_tilang(13, 20)  