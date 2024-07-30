#include <iostream>
#include <doceditor.hpp>
#include <docview.hpp>
#include <lineitem.hpp>
#include "version.h"

using namespace std;
// 01
int main()
{
    using namespace std;

    cout << "My app version: " << PROJECT_VERSION << endl;

    auto doc = std::make_shared<hw::Document>();
    doc->addGraphicsItem(std::make_shared<graphpr::LineItem>(graphpr::PointD{0.0, 0.0}, graphpr::PointD{1.1, 2.1}));

    
    auto docView = std::make_shared<hw::DocView>();
    docView->setDocument(doc);

    
    docView->addLine(1.0, 1.2, 2.0, -1.7);
    docView->addRect(2.0, 2.0, -2.0, -1.7);

    
    docView->removeItem(0);

   
    docView->importFromFile("/tmp/image.svg");

    docView->exportToFile("/tmp/new_image.svg");

    return 0;
}
