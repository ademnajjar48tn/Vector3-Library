#include <iostream>
#include <cmath>

class Vector3 {
	public:
		int x;
		int y;
		int z;
		Vector3 () {
			x = 0;
			y = 0;
			z = 0;
		}
		Vector3 (const Vector3& other) { 
			this->x = other.x;
			this->y = other.y;
			this->z = other.z;
		}
		Vector3 (int x, int y, int z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}
		int magnitude() { 
			return std::sqrt(pow(this->x ,2) + pow(this->y ,2) + pow(this->z ,2);
		}
		static Vector3 up() {
			return Vector3(0, 1, 0);
		}
		static Vector3 down() {
			return Vector3(0, -1, 0);
		}
		static Vector3 right() {
			return Vector3(1, 0, 0);
		}
		static Vector3 left() {
			return Vector3(-1, 0, 0);
		}
		static Vector3 forward() {
			return Vector3(0, 0, 1);
		}
		static Vector3 backward() {
			return Vector3(0, 0, -1);
		}
		void operator=(const Vector3& other) {
			this->x = other.x;
			this->y = other.y;
			this->z = other.z;
		}
		bool operator==(const Vector3& other) {
			return (this->x == other.x && this->y == other.y && this->);
		}
		void operator++() {
			this->x++;
			this->y++;
			this->z++;
		}
		void operator+=(const Vector3& other) {
			this->x += other.x;
			this->y += other.y;
			this->z += other.z;
		}
		Vector3 operator+(const Vector3& other) {
			return Vector3(this->x + other.x, this->y + other.y, this->z + other.z);
		}
		void operator--() {
			this->x--;
			this->y--;
			this->z--;
		}
		void operator-=(const Vector3& other) {
			this->x -= other.x;
			this->y -= other.y;
			this->z -= other.z;
		}
		Vector3 operator-(const Vector3& other) {
			return Vector3(this->x - other.x, this->y - other.y, this->z - other.z);
		}
		void operator*=(int x) {
			this->x *= x;
			this->y *= x;
			this->z *= x;
		}
		void operator*=(const Vector3& other) {
			this->x *= other.x;
			this->y *= other.y;
			this->z *= other.z;
		}
		Vector3 operator*(int x) {
			return Vector3(this->x * x, this->y * x, this->z * x);
		}
		Vector3 operator*(const Vector3& other) {
			return Vector3(this->x * other.x, this->y * other.y, this->z * other.z);
		}
		void operator/=(int x) {
			this->x /= x;
			this->y /= x;
			this->z /= x;
		}
		void operator/=(const Vector3& other) {
			this->x /= other.x;
			this->y /= other.y;
			this->z /= other.z;
		}
		Vector3 operator/(int x) {
			return Vector3(this->x / x, this->y / x, this->z / x);
		}
		Vector3 operator/(const Vector3& other) {
			return Vector3(this->x / other.x, this->y / other.y, this->z / other.z);
		}
		Vector3 sqrt() {
			return Vector3(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z));
		}
		Vector3 pow(int x) {
			return Vector3(std::pow(this->x, x), std::pow(this->y, x), std::pow(this->z, x);
		}
}
Vector3 sqrt(const Vector3& Vector3) {
	return Vector3(std::sqrt(Vector3.x), std::sqrt(Vector3.y), std::sqrt(Vector3.z));
}
Vector3 pow(const Vector3& Vector3, int x) {
	return Vector3(std::pow(Vector3.x ,x), std::pow(Vector3.y, x), std::pow(Vector3.z, x))
}
