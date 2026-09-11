def hitung_kopi(jumlah_gelas):
    total = jumlah_gelas * 5000
    if jumlah_gelas > 3:
        total -= 2000
    return total

print(hitung_kopi(2))  
print(hitung_kopi(4))  