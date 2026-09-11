def tepok_nyamuk(jumlah):
    for i in range(1, jumlah + 1):
        if i % 3 == 0:
            print("TEPOK")
        else:
            print(i)

tepok_nyamuk(5)
