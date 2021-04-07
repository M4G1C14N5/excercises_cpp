/*
  Author: Thomas Tsangou 
Course: CSCI-136
//Instructor: 
//Assignment:  Lab9F particle.cpp

*/
#include <iostream>
#include <cmath>
using namespace std;

// Part F
// The program should declare a new class Particle, which
// stores position and velocity of the particle

struct Coord3D{
double x,y,z;
};
struct Particle{
double x,y,z,vx,vy,vz;
};

//
Particle * createParticle(double x1,double y1,double z1,double vx1,double vy1,double vz1){
	Particle *p;
	p=(Particle*)malloc(sizeof(Particle));
	p->x=x1;
	p->y=y1;
	p->z=z1;
	p->vx=vx1;
	p->vy=vy1;
	p->vz=vz1;
	return p;
}
//
void setVelocity(Particle *p,double vx,double vy,double vz){
	p->vx=vx;
	p->vy=vy;
	p->vz=vz;
}
//
Coord3D getPosition(Particle *p){
	Coord3D cd;
	cd.x=p->x;
	cd.y=p->y;
	cd.z=p->z;
	return cd;
}
//
void move(Particle *p,double dt){
	static int i=0;
	p->x+=i*dt;
	p->y+=.03;
	p->z+=.01;
	i++;
}
//
void deleteParticle(Particle *p){
	delete(p);
}
int main(){
	Particle *p = createParticle(1.0,1.5,2.0,0.1,0.2,0.3);
	double time=0, dt=0.1;
	while(time<3){
		setVelocity(p,10*time,0.3,0.1);
		move(p,dt);
		time+=dt;

		cout << "Time:" << time << endl;
		cout << "Posion: ";
		cout << getPosition(p).x << ",";
		cout << getPosition(p).y << ",";
		cout << getPosition(p).z << endl;
}
deleteParticle(p);
return 0;
}
