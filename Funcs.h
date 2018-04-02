#ifndef FUNCS_H
#define FUNCS_H
#define _USE_MATH_DEFINES
#define earthRadiusKm 6371.0

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Graph.h"

void InvalidInput(int n_op, int &op);
int extractID(string line);
Graph* addVertexes(string f1);
void addEdges(Graph *g, string f2, string f3);
double calcDistance(GPSCoord gps1, GPSCoord gps2);
void showPath(vector<Vertex*> v);

#endif


