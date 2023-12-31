#pragma once

#include <GL/glew.h>

class GLObject {
public:
	GLObject();
	virtual ~GLObject();

	virtual void create() = 0;
	virtual void destroy() = 0;

	virtual void bind() const = 0;
	virtual void pushToGPU(bool deleteAfterPush = false) = 0;

	inline unsigned int getName() const { return textureID; };

protected:
	unsigned int textureID;
};