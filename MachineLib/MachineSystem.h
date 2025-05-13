/**
 * @file MachineSystem.h
 * @author Thomas Brown
 *
 * Describes the machine system class
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_MACHINESYSTEM_H
#define CANADIANEXPERIENCE_MACHINELIB_MACHINESYSTEM_H

#include "IMachineSystem.h"

class Machine;

/**
 * This class is responsible for the creation and management of various machines
 */
class MachineSystem : public IMachineSystem
{
private:
    /// The resources directory of the project
    std::wstring mResourcesDir;

    /// The Location of a Machine
    wxPoint mLocation;

    /// The current Frame of the application
    int mCurrentFrame;

    /// The frame rate of the application
    double mFrameRate;

    /// When the machine is set to start
    double mMachineTime;

    /// The flag value of a machine
    int mFlag;

    /// The machine of this system
    std::shared_ptr<Machine> mMachine = nullptr;

public:
    MachineSystem(std::wstring resourcesDir);

    /// Default constructor (disabled)
    MachineSystem() = delete;

    /// Copy constructor (disabled)
    MachineSystem(const MachineSystem &) = delete;

    /// Assignment operator
    void operator=(const MachineSystem &) = delete;

    /**
     * Gets the loaction of a machine
     * @return a point representing the location of the machine
     */
    wxPoint GetLocation() override { return mLocation; }

    /**
     * Gets the time the machine is to start
     * @return double representing time the machine should start
     */
    double GetMachineTime() override { return mMachineTime; }

    /**
     * Retrieves the machine number from machine
     * @return the integer machine number
     */
    int GetMachineNumber() override { return 0; }

    /**
     * Sets the location of a machine
     * @param loaction the location the machine will be set to
     */
    void SetLocation(wxPoint location) override { mLocation = location; }

    /**
     * Sets the current frame of a machine
     * @param frame the frame to be set
     */
    void SetMachineFrame(int frame) override { mCurrentFrame = frame; }

    /**
     * Sets the frame rate of the machine system
     * @param rate the frame rate to be set
     */
    void SetFrameRate(double rate) override { mFrameRate = rate; }

    /**
     * Sets the flag of the machine system
     * @param flag the integer flag value to be set
     */
    void SetFlag(int flag) override { mFlag = flag; }


    void SetMachineNumber(int machine) override;
    void DrawMachine(std::shared_ptr<wxGraphicsContext> graphics) override;


};

#endif //CANADIANEXPERIENCE_MACHINELIB_MACHINESYSTEM_H
