CC = g++
CFLAGS = -std=c++11 -Wall
OBJS = main.o Student.o Course.o Registration.o CourseArray.o StuArray.o RegList.o School.o Control.o View.o
TARGET = StudentManager

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cc Student.h defs.h
	$(CC) $(CFLAGS) -c main.cc

Student.o: Student.cc Student.h defs.h
	$(CC) $(CFLAGS) -c Student.cc

Course.o: Course.cc Course.h defs.h
	$(CC) $(CFLAGS) -c Course.cc

Registration.o: Registration.cc Registration.h defs.h
	$(CC) $(CFLAGS) -c Registration.cc

CourseArray.o: CourseArray.cc CourseArray.h defs.h
	$(CC) $(CFLAGS) -c CourseArray.cc

StuArray.o: StuArray.cc StuArray.h defs.h
	$(CC) $(CFLAGS) -c StuArray.cc
	
RegList.o: RegList.cc RegList.h defs.h
	$(CC) $(CFLAGS) -c RegList.cc

School.o: School.cc School.h defs.h
	$(CC) $(CFLAGS) -c School.cc

Control.o: Control.cc Control.h defs.h
	$(CC) $(CFLAGS) -c Control.cc

View.o: View.cc View.h
	$(CC) $(CFLAGS) -c View.cc

clean:
	rm -f $(OBJS) $(TARGET)
