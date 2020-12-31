# InfestationZ 
![GameImage](https://raw.githubusercontent.com/Moltenfuzzy/InfestationZ/master/content/game_thumbnail.PNG)

Top down zombie shooter created by [Alan](https://github.com/achau6), [Jimmy](https://github.com/Burniee), and [Kent](https://github.com/Moltenfuzzy)

# Installation/Usage
To run this game you will need a C++ compiler and cmake. I used MSVC - amd64
To install the dependencies you will need to use VCPKG.  
Please follow the installation instructions for VCPKG [here](https://github.com/Microsoft/vcpkg/).
After building the CMakeLists.txt, you should be able to run the executable in the steps below. 

# How to build
To build the game you need to build a cmake executable.  
I used the cmake tools extension for vscode to build my project.  
To build using cmake tools, press F5 and select build, or press the build button at the bottom of vscode.  

![image](https://user-images.githubusercontent.com/46156230/103430544-19731d80-4b7a-11eb-9d31-66a9abf7c3c0.png)  

Then press on the triangle to run the project. 

If you are not using vscode or visual studio, you will need to figure out how to build using cmake in your environment.  
Visual studio should have documentation readily available to build project with cmake. 

# Dependencies 
 * SFML

## Commands to install via vcpkg (FOR A WINDOWS64 COMPILER)

```.\lib\vcpkg\bootstrap-vcpkg.bat```  
```.\lib\vcpkg\vcpkg integrate install```  
```.\lib\vcpkg\vcpkg install sfml --triplet=x64-windows```  

# Demo
![image](https://user-images.githubusercontent.com/46156230/103430657-29d7c800-4b7b-11eb-8f5a-f7c2416068b3.png)
![image](https://user-images.githubusercontent.com/46156230/103430664-407e1f00-4b7b-11eb-8e67-eacdd7847d72.png)
![image](https://user-images.githubusercontent.com/46156230/103430666-42e07900-4b7b-11eb-83c7-c7e75f40710b.png)
![image](https://user-images.githubusercontent.com/46156230/103430663-3e1bc500-4b7b-11eb-85e5-bb4a7ea85777.png)
