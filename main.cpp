#include <iostream>
#include <string>

#include "WorkComponent.h"
#include "SubAssembly.h"
#include "ProductionOrder.h"
#include "MechanicalAssembly.h"
#include "ElectricalAssembly.h"
#include "PaintAndFinishAssembly.h"
#include "FrameSubGroup.h"
#include "SuspensionSubGroup.h"
#include "FinishingSubGroup.h"
#include "Operation.h"
#include "WeldingOperation.h"
#include "InspectionOperation.h"
#include "AssemblyOperation.h"
#include "PaintingOperation.h"

int main()
{
    //Root
    ProductionOrder* order = new ProductionOrder("Car Body Production", "PO-1042");

    //Level 1: Mechanical Assembly
    MechanicalAssembly* mechanical = new MechanicalAssembly("Chassis Build");

    FrameSubGroup* frameGroup = new FrameSubGroup("Frame Sub-Group");
    frameGroup->add(new WeldingOperation("Weld frame rails", 45, 30));
    frameGroup->add(new InspectionOperation("Frame weld QA check", 10));

    SuspensionSubGroup* suspensionGroup = new SuspensionSubGroup("Suspension Sub-Group");
    suspensionGroup->add(new AssemblyOperation("Fit suspension mounts", 25));
    suspensionGroup->add(new InspectionOperation("Suspension QA check", 10));

    mechanical->add(frameGroup);
    mechanical->add(suspensionGroup);

    //Level 1: Electrical Assembly (no sub-group layer underneath)
    ElectricalAssembly* electrical = new ElectricalAssembly("Wiring Harness");
    electrical->add(new AssemblyOperation("Route main harness", 20));
    electrical->add(new AssemblyOperation("Connect battery terminals", 15));
    electrical->add(new InspectionOperation("Electrical safety check", 10));

    //Level 1: Paint and Finish Assembly
    PaintAndFinishAssembly* paintFinish = new PaintAndFinishAssembly("Body Finishing", 60);

    SubAssembly* finishingGroup = new SubAssembly("Finishing Sub-Group");
    finishingGroup->add(new PaintingOperation("Apply primer", 20));
    finishingGroup->add(new PaintingOperation("Apply top coat", 20));
    finishingGroup->add(new InspectionOperation("Final finish QA", 10));

    paintFinish->add(finishingGroup);

    //Assemble full tree under root
    order->add(mechanical);
    order->add(electrical);
    order->add(paintFinish);

    //Demonstrate Composite functionality
    std::cout << "Production Order: " << order->getName() << " (" << order->getOrderNumber() << ")\n";
    std::cout << "Overall status: " << order->getStatus() << "\n";
    std::cout << "Total estimated duration: " << order->estimateDuration() << " minutes\n\n";

    std::cout << "Top-level breakdown:\n";
    for (int i = 0; i < order->getChildCount(); ++i) 
    {
        WorkComponent* branch = order->getChild(i);
        std::cout << "  - " << branch->getName() << " | status: " << branch->getStatus() << " | duration: " << branch->estimateDuration() << " minutes" << "\n";
    }

    std::cout << "\nElectrical branch detail (leaves attached directly, no sub-group):\n";
    for (int i = 0; i < electrical->getChildCount(); ++i)
    {
        WorkComponent* op = electrical->getChild(i);
        std::cout << "  - " << op->getName() << " | duration: " << op->estimateDuration() << " minutes" << "\n";
    }

    //Demonstrate structural change: remove and reattach
    std::cout << "\nRemoving 'Connect battery terminals' from Electrical Assembly...\n";
    WorkComponent* terminalsOp = electrical->getChild(1);
    electrical->remove(terminalsOp);
    std::cout << "Electrical duration after removal: " << electrical->estimateDuration() << " minutes" << "\n";

    std::cout << "Reattaching it under Mechanical Assembly...\n";
    mechanical->add(terminalsOp);
    std::cout << "Mechanical duration after reattachment: " << mechanical->estimateDuration() << " minutes" << "\n";

    std::cout << "\nFinal total estimated duration: " << order->estimateDuration() << " minutes\n";

    //Cleanup (recusrively deletes entire tree)
    delete order;

    return 0;
}