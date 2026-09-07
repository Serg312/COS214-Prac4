#get latest g++
FROM gcc:latest

# set working directory
WORKDIR /usr/src/app

# copy everyhtin from the wsl to the working directory
COPY . .

# compile C++ code 
RUN make all

# execute the compiled program when the container runs
CMD ["./taskforge"]