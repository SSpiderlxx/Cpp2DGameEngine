#pragma once

#include "Components.h"
#include "../Vector2D.h"

class TransformComponent : public Component {
public:

	Vector2D position;
	Vector2D velocity;

	int height = 32;
	int width = 32;
	float scale = 1;

	int speed = 3;

	TransformComponent(int x, int y) {
		position = Vector2D(x, y);
	}
	
	TransformComponent(float x, float y, int height, int width, float scale) {
		position = Vector2D(x, y);
		this->height = height;
		this->width = width;
		this->scale = scale;
	}

	TransformComponent() {
		position;
	}

	TransformComponent(float scale) {
		position = Vector2D(400, 300);
		this->scale = scale;
	}

	void init() override {
		velocity.Zero();
	}

	void update() override {
	}
};