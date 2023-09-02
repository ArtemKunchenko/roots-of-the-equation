#pragma once
#include<iostream>
#include<math.h>
using namespace std;

class RootsEquation
{
public:
	virtual void Roots() = 0;
};

class LinearEquation :public RootsEquation
{
public:
	void Roots() override;
};
class QuadraticEquation :public RootsEquation
{
public:
	void Roots() override;
};
