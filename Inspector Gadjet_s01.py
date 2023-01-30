F = input()
K = input()
X = input()

F = F[3:]
K = K[3:]
X = X[3:]

if F=="?":
  print(str(round(-1*float(K)*float(X),2)))
elif K=="?":
  print(str(round(-1*float(F)/float(K),2)))
else:
  print(str(round(-1*float(F)/float(K),2)))
