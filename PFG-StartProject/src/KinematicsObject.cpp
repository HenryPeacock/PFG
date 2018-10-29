#include "KinematicsObject.h"

#include "Mesh.h"

KinematicsObject::KinematicsObject()
{

	// Initialise the velocity
	_velocity = glm::vec3(0.0, 0.0, 0.0);
	// Initialise the position
	_position = glm::vec3(0.0, 0.0, 0.0);
	// Initialise the scale
	_scale = glm::vec3(1.0f, 1.0f, 1.0f);
	// Initialise the orientation
	_orientation = glm::mat4(
			0.0, 0.0, 0.0, 0.0,
			0.0, 0.0, 0.0, 0.0,
			0.0, 0.0, 0.0, 0.0,
			0.0, 0.0, 0.0, 0.0);
	// Initialise the start
	bool _start = false;


}

KinematicsObject::~KinematicsObject()
{
}

void KinematicsObject::Update(float deltaTs)
{
	_position += (((_velocity.y + (_velocity.y + (9.81*deltaTs))) / 2)*deltaTs);
	_velocity.y += (9.81*deltaTs);
}

void KinematicsObject::UpdateModelMatrix()
{
}
