# Learn OpenGL

## install

### GLUT/FreeGLUT

Follow this [video tutorials](https://www.youtube.com/watch?v=AUFZnA3lW_Q):

1. download [freeglut](http://freeglut.sourceforge.net/) and merge `bin` `include` `lib` into MingGW directory
2. change `CMakeLists.txt`, add the following:
   ```cmake
   target_link_libraries(learn_opengl -lOpenGL32 -lfreeGLUT)
   ```
3. execute the [hello world](https://www.ntu.edu.sg/home/ehchua/programming/opengl/HowTo_OpenGL_C.html) program.

If everything goes well, a window will be created correctly.

### GLEW/GLTools



## TODO

- menu view: chapter & demo selection
- read & write config files
- restore last view

## References

- <https://www.gamedev.net/blogs/entry/2255576-preparing-to-learn-opengl-toolchain-setup/>
- <http://www.code-by.org/viewtopic.php?f=47&t=122&sid=d6aa4aecccc713b5288514322ad68775>
- <https://blog.csdn.net/foreverzili/article/details/83794301>
- <https://learnopengl.com/Getting-started/OpenGL>