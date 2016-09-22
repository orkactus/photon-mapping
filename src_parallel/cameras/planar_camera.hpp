#ifndef PLANAR_CAMERA_HPP_
#define PLANAR_CAMERA_HPP_

/**
 * \file planar_camera.hpp
 * \brief Description of class PlanarCamera
 * \author B.BORGOBELLO / T.FEIGLER
 */

#include "camera.hpp"

/**
 * \class PlanarCamera
 * \brief Class representing a planar camera
 *
 * Class ConicCamera describes the projection method used
 * to render a scene into space. All pixels have the same normal
 */
class PlanarCamera : public Camera {
public :
    PlanarCamera(Point3D position, Vector3D vector_x, Vector3D vector_y, float param_x, float param_y) : ///< Constructor calls Camera 's constructor
        Camera(position, vector_x, vector_y, param_x, param_y)
    {}
    Ray get_ray(float, float) const; ///< Ray construction method
    std::pair<double, double> can_see(const Point3D&) const;	///< Returns which pixel sees the given point
};

#endif
