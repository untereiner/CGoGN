/*******************************************************************************
* CGoGN: Combinatorial and Geometric modeling with Generic N-dimensional Maps  *
* version 0.1                                                                  *
* Copyright (C) 2009-2011, IGG Team, LSIIT, University of Strasbourg           *
*                                                                              *
* This library is free software; you can redistribute it and/or modify it      *
* under the terms of the GNU Lesser General Public License as published by the *
* Free Software Foundation; either version 2.1 of the License, or (at your     *
* option) any later version.                                                   *
*                                                                              *
* This library is distributed in the hope that it will be useful, but WITHOUT  *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  *
* for more details.                                                            *
*                                                                              *
* You should have received a copy of the GNU Lesser General Public License     *
* along with this library; if not, write to the Free Software Foundation,      *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.           *
*                                                                              *
* Web site: http://cgogn.u-strasbg.fr/                                         *
* Contact information: cgogn@unistra.fr                                        *
*                                                                              *
*******************************************************************************/

#ifndef __CGOGN_SHADER_EXPLODE_VOLUMES__
#define __CGOGN_SHADER_EXPLODE_VOLUMES__

#include "Utils/GLSLShader.h"
#include "Geometry/vector_gen.h"

namespace CGoGN
{

namespace Utils
{

class ShaderExplodeVolumes : public GLSLShader
{
protected:
	// shader sources
    static std::string vertexShaderText;
    static std::string fragmentShaderText;
    static std::string geometryShaderText;

    // uniform locations
	GLuint m_unif_ambiant;
	GLuint m_unif_diffuse;
	GLuint m_unif_lightPos;
	GLuint m_unif_explodeV;
	GLuint m_unif_plane;

	float m_explodeV;
	Geom::Vec4f m_ambiant;
	Geom::Vec4f m_diffuse;
	Geom::Vec3f m_light_pos;
	Geom::Vec4f m_plane;

	VBO* m_vboPos;

	void getLocations();

	void restoreUniformsAttribs();

public:
	ShaderExplodeVolumes(bool withColorPerFace=false);

	void setExplodeVolumes(float explode);

	void setAmbiant(const Geom::Vec4f& ambiant);

	void setDiffuse(const Geom::Vec4f& diffuse);

	void setLightPosition(const Geom::Vec3f& lp);

	void setClippingPlane(const Geom::Vec4f& plane);

	void setParams(float explodeV, const Geom::Vec4f& ambiant, const Geom::Vec4f& diffuse, const Geom::Vec3f& lightPos, const Geom::Vec4f& plane);

	void setAttributePosition(VBO* vbo);
};

} // namespace Utils

} // namespace CGoGN

#endif