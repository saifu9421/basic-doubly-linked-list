// #include <iostream>
// #include <thread>
// #include <chrono>
// #include<bits/stdc++.h>
// // Function to simulate AOD
// void showAOD() {
//     while (true) {
//         // Simulate displaying essential information like time and notifications
//         std::cout << "AOD: Time - " << __TIME__ << ", Notification - No new messages" << std::endl;

//         // Pause for a few seconds to mimic display refresh without draining CPU (as real AOD does)
//         std::this_thread::sleep_for(std::chrono::seconds(5));

//         // Clear screen for next update (optional, just to simulate a fresh display)
// #ifdef _WIN32
//         system("CLS");
// #else
//         system("clear");
// #endif
//     }
// }

// int main() {
//     std::cout << "Starting Always-On Display (AOD) simulation...\n";
//     std::thread aodThread(showAOD);

//     // Keeping the main thread running
//     aodThread.join();

//     return 0;
// }

#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Attempting to shut down the device..." << std::endl;
    int result = system("su -c 'reboot -p'");

    if (result == 0) {
        std::cout << "Shutdown command executed successfully." << std::endl;
    } else {
        std::cerr << "Failed to execute shutdown command. Make sure the device is rooted and has the necessary permissions." << std::endl;
    }

    return 0;
}
