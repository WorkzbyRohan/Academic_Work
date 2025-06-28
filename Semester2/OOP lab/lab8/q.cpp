//
//#include <iostream>
//#include <string>
//using namespace std;
//
//const int MAX_DEVICES = 10;
//
//class Device {
//private:
//    int deviceId;
//    string deviceType;
//    bool status;
//
//public:
//    Device(int id = 0, const string& type = "", bool initialStatus = false)
//        : deviceId(id), deviceType(type), status(initialStatus) {}
//
//    int getDeviceId() const { return deviceId; }
//    string getDeviceType() const { return deviceType; }
//    bool getStatus() const {
//        cout << status << " ";
//        return status;
//    }
//
//    void toggleStatus() {
//        cout << status << endl << endl;
//        status = !status;
//        cout << status << endl << endl;
//
//    }
//};
//
//class SmartHome {
//private:
//    Device devices[MAX_DEVICES];
//    int numDevices;
//
//public:
//    SmartHome() : numDevices(0) {}
//
//    void addDevice(const Device& device) {
//        if (numDevices < MAX_DEVICES) {
//            devices[numDevices++] = device;
//        }
//        else {
//            cout << "Smart home system is full. Cannot add more devices.\n";
//        }
//    }
//
//    void removeDevice(int deviceId) {
//        for (int i = 0; i < numDevices; ++i) {
//            if (devices[i].getDeviceId() == deviceId) {
//                for (int j = i; j < numDevices - 1; ++j) {
//                    devices[j] = devices[j + 1];
//                }
//                --numDevices;
//                break;
//            }
//        }
//    }
//
//    void displayDevices() {
//        cout << "Smart Home Devices:\n";
//        for (int i = 0; i < numDevices; ++i) {
//            cout << "Device ID: " << devices[i].getDeviceId()
//                << ", Type: " << devices[i].getDeviceType()
//                << ", Status: " << (devices[i].getStatus() ? "On" : "Off")
//                << "\n";
//        }
//    }
//};
//
//int main() {
//    Device light(1, "Light", true);
//    Device thermostat(2, "Thermostat", false);
//    Device securityCamera(3, "SecurityCamera", true);
//
//    SmartHome myHome;
//
//    myHome.addDevice(light);
//    myHome.addDevice(thermostat);
//    myHome.addDevice(securityCamera);
//
//    myHome.displayDevices();
//
//    light.toggleStatus();
//    cout << "Toggled light status.\n";
//
//    myHome.displayDevices();
//
//    myHome.removeDevice(2);
//    cout << "Removed thermostat.\n";
//
//    myHome.displayDevices();
//
//    return 0;
//}