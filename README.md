# udacity-project1
### Udacity's nano degree program: Robotics Software Engineering  
**Project Title**: Build My World  
**Project Goal**: 
- Design an office world in Gazebo.
- ![myoffice](https://github.com/tolgakarakurt/udacity-project1/blob/develop/project1-world.png)
### Setup and pull
```
mkdir -p $HOME/<user_workspace>/src
cd $HOME/<user_workspace>/src
git clone git@github.com:tolgakarakurt/udacity-project1.git
catkin_make
cd udacity-project1/TKProject1/world
gazebo myoffice
```