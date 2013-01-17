
// Copyright (c) <2011> Daniel Peterson
// This file is part of Mini3D <www.mini3d.org>
// It is distributed under the MIT Software License <www.mini3d.org/license.php>


#ifndef MINI3D_ITEXTURE_H
#define MINI3D_ITEXTURE_H

namespace mini3d {
namespace graphics {

struct IGraphicsService;

struct ITexture
{
    virtual const char* GetType() const = 0;

    enum MipMapMode { MIPMAP_NONE, MIPMAP_MANUAL, MIPMAP_AUTOGENERATE};

	struct SamplerSettings
	{
		enum WrapMode { WRAP_CLAMP, WRAP_TILE };
		enum SampleMode { SAMPLE_NEAREST, SAMPLE_LINEAR };

		WrapMode wrapMode;
		SampleMode sampleMode;
	};

	virtual ~ITexture(void) {};

	virtual unsigned int GetWidth() const = 0;
	virtual unsigned int GetHeight() const = 0;

	virtual MipMapMode GetMipMapMode() const = 0;

	virtual SamplerSettings GetSamplerSettings() const = 0;
};

}
}

#endif
