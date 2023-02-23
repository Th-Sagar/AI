clauses:
start.

input:-write("enter first number:"),
    read(X), write("enter second number :"),read(Y), Z is(X+Y),write("The sum is :"),write(Z).

hcf(A,B):-
     A = B,write(A).


hcf(A,B):-
     A > B ,Z is A mod B ,Z is 0 ,write(B).
hcf(A,B):-
     A>B ,Z is A mod B,W is A-Z,hcf(W,B).

hcf(A,B):-
     A < B ,Z is A mod B ,W is B-Z ,hcf(A,W).
