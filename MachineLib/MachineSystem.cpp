/**
 * @file MachineSystem.cpp
 * @author Thomas Brown
 */

#include "pch.h"
#include "MachineSystem.h"

/**
 * constuctor
 * @param resourcesDir the path to the resources of the application
 */
MachineSystem::MachineSystem(std::wstring resourcesDir) : mResourcesDir(resourcesDir)
{

}

/**
 * Sets the machine number to be displayed
 * @param machine the integer representation of a machine
 */
void MachineSystem::SetMachineNumber(int machine)
{

}

/**
 * Draws a machine onto a praghical context
 * @param graphics the context to draw on
 */
void MachineSystem::DrawMachine(std::shared_ptr<wxGraphicsContext> graphics)
{
    // This will put the machine where it is supposed to be drawn
    graphics->PushState();
    graphics->Translate(mLocation.x, mLocation.y);

    // Just get something on the screen, this draws a simple crosshair
    graphics->SetPen(*wxRED_PEN);
    graphics->StrokeLine(-20, 0, 20, 0);
    graphics->StrokeLine(0, -20, 0, 20);

    graphics->PopState();
}



