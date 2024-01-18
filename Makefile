# Derleme hedefleri
OBJECTS = Vector.o Matrix.o SquareMatrix.o TriangleMatrix.o Complex.o Imaginary.o IdentityMatrix.o main.o

# Çalıştırılabilir dosya adı
EXECUTABLE = Project2

# Tüm kaynak dosyalarını derleyip çalıştırılabilir dosyayı oluştur
all: $(OBJECTS)
	g++ -o $(EXECUTABLE) $(OBJECTS)

# Kaynak dosyaları obje dosyalarına derle
Vector.o: Vector.cpp
	g++ -c Vector.cpp

Matrix.o: Matrix.cpp
	g++ -c Matrix.cpp

SquareMatrix.o: SquareMatrix.cpp
	g++ -c SquareMatrix.cpp

TriangleMatrix.o: TriangleMatrix.cpp
	g++ -c TriangleMatrix.cpp

Complex.o: Complex.cpp
	g++ -c Complex.cpp

Imaginary.o: Imaginary.cpp
	g++ -c Imaginary.cpp

IdentityMatrix.o: IdentityMatrix.cpp
	g++ -c IdentityMatrix.cpp

main.o: main.cpp
	g++ -c main.cpp

# Temizleme işlemi
clean:
	del $(EXECUTABLE) $(OBJECTS)