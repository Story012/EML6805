# EML6805
Projects for Advanced Design of Robots course

# For LineFollower project:

There are two main files, one for a static image and one for a video file/live camera.

To run the code:
```
git clone https://github.com/Story012/EML6805.git

```

Through the terminal:
```
cd LineFollower
mkdir build && cd build
cmake ..
make
```

From here, you can run the executables from within the build folder:
```
./lineFollower
```
or 
```
./lineFollower_live
 ```
 
Through vscode (make sure to have appropriate cmake tools extentions addded:
```
cd LineFollower
code .
```

After VSCode is opened, hit build and run either executable.
