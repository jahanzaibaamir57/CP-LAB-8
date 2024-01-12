#include <iostream>
#include <string>

using namespace std;

void sendMessage(const string& message) {
    cout << "Sending message: " << message << endl;
}


void receiveMessage(const string& message) {
    cout << "Received message: " << message << endl;
}


void makePhoneCall(const string& receiver) {
    cout << "Calling " << receiver << "..." << endl;
}


void ringUntilPickedUp(const string& receiver) {
    cout << "Ringing " << receiver << "..." << endl;
    cout << "Waiting for " << receiver << " to pick up the call..." << endl;

    bool isPickedUp = false;
    while (!isPickedUp) {

        for (int i = 0; i < 3; ++i) {
            cout << "Ring..." << endl;
            for (int j = 0; j < 100000000; ++j) {}
        }

        cout << receiver << " picked up the call!" << endl;
        isPickedUp = true;
    }
}

int main() {

    string sentMessage = "How are you doing?";
    sendMessage(sentMessage);

    string receivedMessage = "I am doing pretty great.";
    receiveMessage(receivedMessage);


    string receiverName = "Mr. Imran Khan";
    makePhoneCall(receiverName);
    ringUntilPickedUp(receiverName);

    return 0;
}
