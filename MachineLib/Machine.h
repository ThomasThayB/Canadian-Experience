/**
 * @file Machine.h
 * @author Thomas Brown
 *
 * This class represents a Machine
 */

#ifndef CANADIANEXPERIENCE_MACHINELIB_MACHINE_H
#define CANADIANEXPERIENCE_MACHINELIB_MACHINE_H

/**
 * This class owns all components of a machine and responsible for the organization of a machine
 */
class Machine
{
private:
    /// The frame the machine starts
    int mStartFrame;

    /// Elapsed time of the application
    double mElapsed;

    /// The current frame of the machine
    int mCurrentFrame;

    /// The number of the machine
    int mMachineNumber;

public:
    Machine(int machineNum);

    /// Default constructor (disabled)
    Machine() = delete;

    /// Copy constructor (disabled)
    Machine(const Machine &) = delete;

    /// Assignment operator
    void operator=(const Machine &) = delete;

    void Draw(std::shared_ptr<wxGraphicsContext> graphics);
    void SetComponents();
    void Update(double elapsed);
    void Reset();
    void AddComponent();

    /**
     * Sets the current frame of the machine
     * @param frame the frame to be set
     */
    void SetTime(int frame) { mCurrentFrame = frame; }

};

#endif //CANADIANEXPERIENCE_MACHINELIB_MACHINE_H
