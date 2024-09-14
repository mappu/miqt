#ifndef MIQT_BINDING_H
#define MIQT_BINDING_H

#ifdef __cplusplus
extern "C" {
#endif

// miqt_exec_callback calls a Go function pointer for a connect() slot.
// The function is defined in Go.
void miqt_exec_callback(void* cb, int argc, void* argv);

struct miqt_string {
    size_t len;
    char data; // Data continues after this element, all in the same allocation
};

struct miqt_array {
    size_t len;
    void* data; // Separate, second allocation
};

// miqt_strdup allocates a miqt_string and copies C data into it.
// The function is defined in C++.
struct miqt_string* miqt_strdup(const char* src, size_t len);

#ifdef __cplusplus
}
#endif

#endif
