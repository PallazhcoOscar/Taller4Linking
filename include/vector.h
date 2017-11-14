/* vector.h */

typedef struct Vector{
	int x, y;
}Vector;

void addvec(Vector *vect1, Vector *vect2, Vector *vectf){
	vectf->x = vect1->x + vect2->x;
	vectf->y = vect1->y + vect2->y;
}

void multvec(Vector *vect1, Vector *vect2, Vector *vectf){
	vectf->x = vect1->x * vect2->x;
	vectf->y = vect1->y * vect2->y;
}
