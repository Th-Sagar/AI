clauses:
start.
male(ram).
male(shyam).
male(gopal).
male(hari).
male(ramesh).
male(bijay).
male(raju).
female(asmita).
female(gita).
female(sita).
female(simram).
parent(ram,gita).
parent(ram,simran).
parent(asmita,gita).
parent(asmita,simran).
parent(shyam,ramesh).
parent(sita,ramesh).
parent(gita,raju).
parent(hari,raju).
parent(hari,gopal).
parent(simran,bijay).
parent(ramesh,bijay).

father(X,Y):- male(X),parent(X,Y).
mother(X,Y):- female(X),parent(X,Y).

grandfather(X,Y):- male(X),parent(X,Z),parent(Z,Y).
grandmother(X,Y):- female(X),parent(X,Z),parent(Z,Y).
sister(X,Y):- female(X),father(F,Y),father(F,X).
sister(X,Y):- female(X),mother(F,Y),mother(F,X).
aunt(X,Y):-female(X),parent(Z,Y),parent(Z,X).
