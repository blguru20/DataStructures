################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DetectLoop.cpp \
../src/InterSection.cpp \
../src/LinkedList.cpp \
../src/MidOfLinkedList.cpp \
../src/NthFromEnd.cpp \
../src/OddEvenSegregation.cpp \
../src/PairWiseSwap.cpp 

OBJS += \
./src/DetectLoop.o \
./src/InterSection.o \
./src/LinkedList.o \
./src/MidOfLinkedList.o \
./src/NthFromEnd.o \
./src/OddEvenSegregation.o \
./src/PairWiseSwap.o 

CPP_DEPS += \
./src/DetectLoop.d \
./src/InterSection.d \
./src/LinkedList.d \
./src/MidOfLinkedList.d \
./src/NthFromEnd.d \
./src/OddEvenSegregation.d \
./src/PairWiseSwap.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


