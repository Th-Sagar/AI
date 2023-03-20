clauses:
start.
hcf(X,Y,Z):- X=Y ,Z is Y.
hcf(X,Y,Z):- X>Y ,R is X mod Y, D is X - R, hcf(Y,D,Z).
hcf(X,Y,Z):- X<Y ,R is X mod Y, D is Y - R, hcf(X,D,Z).
lcm(X,Y,L):- hcf(X,Y,Z) ,L is X*Y/Z.
fibo(0,0) .
fibo(1,1) .
fibo(N,F) :-
   N > 1,
   N1 is N-1,
   N2 is N-2,
   fibo(N1,F1),
   fibo(N2,F2),
   F is F1+F2,
   write(F),nl.
