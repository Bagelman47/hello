#pragma once

#include <istream>
#include <string>

// Reads a single line (the user's name) from the given stream.
// Returns an empty string if the stream is at EOF or in a failed state.
inline std::string read_name(std::istream& in) {
    std::string name;
    std::getline(in, name);
    return name;
}

// Builds the greeting line shown to the user.
// An empty name produces a plain "Hello!".
inline std::string make_greeting(const std::string& name) {
    if (name.empty()) {
        return "Hello!\n";
    }
    return "Hello, " + name + "!\n";
}
