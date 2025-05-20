// multiplatform window header

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;

Window* window_create(const char* title, int width, int height);
void window_destroy(Window* window);
void window_poll_events();
void window_draw_rect(Window* window, int x, int y, int w, int h, uint32_t color);
void window_present(Window* window);

#ifdef __cplusplus
}
#endif