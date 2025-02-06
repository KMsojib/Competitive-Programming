s = input()

index_AB = s.find("AB")
index_BA_after_AB = s.find("BA", index_AB + 2)

index_BA = s.find("BA")
index_AB_after_BA = s.find("AB", index_BA + 2)

if (index_AB != -1 and index_BA_after_AB != -1) or (index_BA != -1 and index_AB_after_BA != -1):
    print("YES")
else:
    print("NO")