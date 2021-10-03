/**
 * unisim_ros2_control_api
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.0.1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.22.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * DefaultApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_DefaultApi_H_
#define IO_SWAGGER_CLIENT_API_DefaultApi_H_


#include "../ApiClient.h"

#include "Body.h"
#include "Posts.h"

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  DefaultApi
{
public:
    DefaultApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~DefaultApi();
    /// <summary>
    /// spawn robot from URDF
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body"></param>
    pplx::task<std::vector<std::shared_ptr<Posts>>> spawnPost(
        std::shared_ptr<Body> body
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_DefaultApi_H_ */

