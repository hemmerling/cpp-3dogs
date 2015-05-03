#ifndef ZLIGHTING_H
#define ZLIGHTING_H

/**
 *  @package   3dogs
 *  @file      ZLighting.h
 *  @brief     Repraesentation einer OpenGL Lichtquelle
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZLighting.h - 
 *             Repraesentation einer OpenGL Lichtquelle
 *
 *  Copyright 2004-2015 Rolf Hemmerling
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 *  either express or implied.
 *  See the License for the specific language governing permissions
 *  and limitations under the License.
 *
 *  Haupt-Entwicklungszeit: 2004-03-01 - 2004-06-17
 */

#include "zcmd.h"

/** 
  *  @class    ZLighting
  *  @brief    Repraesentation einer OpenGL Lichtquelle
  */
class ZLighting: public ZCmd {

  public:

    /**
      *   @fn       ZLighting
      *   @brief    Konstruktur
      */
    ZLighting(void);

    /**
      *   @fn       ~ZLighting
      *   @brief    Dekonstruktur
      */    
    ~ZLighting(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getLightPosition
      *   @brief    Licht-Position holen
      *   @return   GLfloat*
      */
    GLfloat *getLightPosition();

    /**
      *   @fn       setLightPosition(LPosition<GLfloat> lightPosition)
      *   @brief    Licht-Position setzen
      *   @param    lightPosition
      */
    void setLightPosition(LPosition<GLfloat> lightPosition);

    /**
      *   @fn       setLightPosition(Coordinates *coordinates, GLfloat w)
      *   @brief    Licht-Position setzen
      *   @param    coordinates Koordinaten
      *   @param    w - W-Parameter
      */
    void setLightPosition(Coordinates *coordinates, GLfloat w);

    /** 
      *   @fn       getSpotlightDirection
      *   @brief    Spotlight-Richtung holen
      *   @return   Coordinates*
      */
    Coordinates *getSpotlightDirection(void); 
 
     /**
      *   @fn       setSpotlightDirection(Coordinates coordinates)
      *   @brief    Spotlight-Richtung setzen
      *   @param    coordinates Koordinaten
      */
    void setSpotlightDirection(Coordinates coordinates);

    /** 
      *   @fn       getSpotlightExponent
      *   @brief    Spotlight-Exponent holen
      *   @return   GLfloat*
      */
    GLfloat *getSpotlightExponent(void); 
 
     /**
      *   @fn       setSpotlightExponent(GLfloat spotlightExponent)
      *   @brief    Spotlight-Exponent setzen
      *   @param    spotlightExponent
      */
    void setSpotlightExponent(GLfloat spotlightExponent);

    /** 
      *   @fn       getSpotlightCutoffAngle
      *   @brief    Spotlight-Cutoff-Winkel holen
      *   @return   GLfloat*
      */
    GLfloat *getSpotlightCutoffAngle(void); 
 
     /**
      *   @fn       setSpotlightCutoffAngle(GLfloat spotlightCutoffAngle)
      *   @brief    Spotlight-Cutoff-Winkel setzen
      *   @param    spotlightCutoffAngle
      */
    void setSpotlightCutoffAngle(GLfloat spotlightCutoffAngle);

    /** 
      *   @fn       getLightRGBA
      *   @brief    Licht RGBA Parameterfeld holen
      *             nur f
      *   @return   GLfloat*
      */
    GLfloat *getLightRGBA(void); 
 
     /**
      *   @fn       setLightRGBA(Light<GLfloat> lightRGBA)
      *   @brief    Licht RGBA Parameterfeld setzen
      *   @param    lightRGBA
      */
    void setLightRGBA(Light<GLfloat> lightRGBA);

    /** 
      *   @fn       getAmbientRGBA
      *   @brief    Ambient RGBA Parameterfeld holen
      *             nur f
      *   @return   GLfloat*
      */
    GLfloat *getAmbientRGBA(void); 
 
     /**
      *   @fn       setAmbientRGBA(Light<GLfloat> ambientRGBA)
      *   @brief    Ambient RGBA Parameterfeld setzen
      *   @param    ambientRGBA
      */
    void setAmbientRGBA(Light<GLfloat> ambientRGBA);

    /** 
      *   @fn       getDiffuseRGBA
      *   @brief    Diffuse RGBA Parameterfeld holen
      *             nur f
      *   @return   GLfloat*
      */
    GLfloat *getDiffuseRGBA(void); 
 
     /**
      *   @fn       setDiffuseRGBA(Light<GLfloat> diffuseRGBA)
      *   @brief    Diffuse RGBA Parameterfeld setzen
      *   @param    diffuseRGBA
      */
    void setDiffuseRGBA(Light<GLfloat> diffuseRGBA);

    /** 
      *   @fn       getSpecularRGBA
      *   @brief    Specular RGBA Parameterfeld holen
      *             nur f
      *   @return   GLfloat*
      */
    GLfloat *getSpecularRGBA(void); 
 
     /**
      *   @fn       setSpecularRGBA(Light<GLfloat> specularRGBA)
      *   @brief    Specular RGBA Parameterfeld setzen
      *   @param    specularRGBA
      */
    void setSpecularRGBA(Light<GLfloat> specularRGBA);

    /**
      *   @fn       isViewDirectionZ
      *   @brief    Holen: Ist die View Direction == -z ?
      *   @return   bool
      */
 	bool isViewDirectionZ(void);					

    /**
      *   @fn       setViewDirectionZ(bool aViewDirectionZ)
      *   @brief    Setzen: View Direction
      *   @param    aViewDirectionZ
      */
 	void setViewDirectionZ(bool aViewDirectionZ);					

    /**
      *   @fn       getNumber
      *   @brief    Licht-Nummer holen
      *   @return   GLuint&
      */
	virtual GLuint &getNumber(void);	

	/**
      *   @fn       setNumber(GLuint number)
      *   @brief    Licht-Nummer setzen
      *   @param    number
      */
	virtual void setNumber(GLuint number); 					

protected:

    /**
      *   @var      lightPosition
      *   @brief    Licht-Position Parameterfeld
      */
    LPosition<GLfloat> lightPosition;

    /** 
      *   @var      spotlightDirection
      *   @brief    Spotlight-Richtung 
      */
    Coordinates spotlightDirection;

    /** 
      *   @var      spotlightExponent
      *   @brief    Spotlight-Exponent 
      */
    GLfloat spotlightExponent;

    /** 
      *   @var      spotlightCutoffAngle
      *   @brief    Spotlight-Cutoff-Winkel
      */
    GLfloat spotlightCutoffAngle;
    
    /**
      *   @var      lightRGBA
      *   @brief    Licht RGBA Parameterfeld
      */
    Light<GLfloat> lightRGBA;

    /**
      *   @var      ambientRGBA
      *   @brief    Ambient RGBA Parameterfeld
      */
    Light<GLfloat> ambientRGBA;

    /**
      *   @var      diffuseRGBA
      *   @brief    Diffuse RGBA Parameterfeld
      */
    Light<GLfloat> diffuseRGBA;

    /**
      *   @var      specularRGBA
      *   @brief    Specular RGBA Parameterfeld
      */
    Light<GLfloat> specularRGBA;

    /**   
      *   @var      viewDirectionZ
      *   @brief    View Direction
      *             true = -z
      *             false = view from origin of eye 
      *                     coordinate system ( default )
      */
 	bool viewDirectionZ;					

    /**
      *   @var      number
      *   @brief    Licht-Nummer 0..7
      */
  	GLuint number;
  
};
#endif // ZLIGHTING_H

