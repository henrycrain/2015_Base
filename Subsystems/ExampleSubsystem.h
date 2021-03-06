#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ExampleSubsystem: public Subsystem {
private:
	// It's desirable that everything possible be under private
	// except for methods that implement subsystem capabilities
public:
	ExampleSubsystem();
	void InitDefaultCommand();
};

#endif
