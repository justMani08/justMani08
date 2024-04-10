
#include <iostream>
#include <vector>
#include <string>

// Class representing a Patient
class Patient {
private:
    std::string name;
    int age;
    std::string gender;
    std::string address;

public:
    // Constructor
    Patient(const std::string& n, int a, const std::string& g, const std::string& addr)
        : name(n), age(a), gender(g), address(addr) {}

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getGender() const { return gender; }
    std::string getAddress() const { return address; }

    // Display patient information
    void display() const {
        std::cout << "Name: " << name << "\n"
                  << "Age: " << age << "\n"
                  << "Gender: " << gender << "\n"
                  << "Address: " << address << "\n";
    }
};

// Class representing a Doctor
class Doctor {
private:
    std::string name;
    std::string specialization;

public:
    // Constructor
    Doctor(const std::string& n, const std::string& spec)
        : name(n), specialization(spec) {}

    // Getters
    std::string getName() const { return name; }
    std::string getSpecialization() const { return specialization; }

    // Display doctor information
    void display() const {
        std::cout << "Name: " << name << "\n"
                  << "Specialization: " << specialization << "\n";
    }
};

// Class representing a MedicalRecord
class MedicalRecord {
private:
    Patient patient;
    Doctor doctor;
    std::string diagnosis;

public:
    // Constructor
    MedicalRecord(const Patient& p, const Doctor& d, const std::string& diag)
        : patient(p), doctor(d), diagnosis(diag) {}

    // Display medical record information
    void display() const {
        std::cout << "Patient Information:\n";
        patient.display();
        std::cout << "Doctor Information:\n";
        doctor.display();
        std::cout << "Diagnosis: " << diagnosis << "\n";
    }
};

int main() {
    // Creating sample objects
    Patient patient("Kamlesh", 30, "Male", "123 Main St");
    Doctor doctor("Dr. Manoj", "Cardiologist");
    MedicalRecord record(patient, doctor, "Hypertension");

    // Displaying medical record information
    std::cout << "Medical Record:\n";
    record.display();

    return 0;
}
