#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginTKProject1 : public WorldPlugin
  {
    public: WorldPluginTKProject1() : WorldPlugin()
            {
              printf("Welcome to Tolga's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginTKProject1)
}

