# COS214 Prac 4


### What have we built?
# We have built taskforge. 
Taskforge a manufacturing management system that allows manaufactures to track and see the state of their production as well as get updates on estimated times.

### Running

#### Taskforge runs on c++ specifically gcc through wsl.
**To run the code:**
- make all
  - Runs the creation commands to make the .o files and the executable
- ./taskforge
  - Runs the created files

### Docker
**To run docker:**
- cd into the COS214-Prac4 folder (the highest level with the docker file)
- Make the build
  - in cmd: docker build -t taskforge .
- To run simply
  - docker run taskforge