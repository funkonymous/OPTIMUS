# include <math.h>
# include <interval.h>
# include <vector>
# include <stdio.h>
# include <iostream>
# include <QJsonObject>
# include <QFile>
# include <QTextStream>
using namespace std;


/*	Bohachevsky 2 Problem
 *
 * */
extern "C"
{

int	getdimension()
{
	return 2;
}

void 	getmargins(vector<Interval> &x)
{
    for(int i=0;i<x.size();i++)
        x[i]=Interval(-50*1.0,50*1.0);
}


double	funmin(vector<double> &x)
{
	return x[0]*x[0]+2.0*x[1]*x[1]-0.3*cos(3.0*M_PI*x[0])*cos(4.0*M_PI*x[1])+0.3;
}

void    granal(vector<double> &x,vector<double> &g)
{
	g[0]=2.0*x[0]+0.3*3.0*M_PI*sin(3.0*M_PI*x[0])*cos(4.0*M_PI*x[1]);
	g[1]=4.0*x[1]+0.3*4.0*M_PI*sin(4.0*M_PI*x[1])*cos(3.0*M_PI*x[0]);
}
QJsonObject    done(vector<double> &x)
{
    return QJsonObject();
}
}
