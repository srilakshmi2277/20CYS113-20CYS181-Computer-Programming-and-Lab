#include <stdio.h>

struct Shape {
	enum type { Circle = 1, Rectangle } t;
	union dimensions {
		float length[2];
		float radius;
	} d;
} s;

int main() {
	float area;

	// Read the shape type from the user
	scanf("%d", (int *)&s.t);

	if (s.t == 2) {
		// Calculate area for Rectangle
		scanf("%f", &s.d.length[0]);
		scanf("%f", &s.d.length[1]);
		area = s.d.length[0] * s.d.length[1];
		printf("Area of the rectangle: %.4f units\n", area);
	}
	else if (s.t == 1) {
		// Calculate area for Circle
		scanf("%f", &s.d.radius);
		area = 3.14 * s.d.radius * s.d.radius;
		printf("Area of the circle: %.4f units\n", area);
	}
	else {
		printf("Invalid choice!\n");
	}

	return 0;
}

