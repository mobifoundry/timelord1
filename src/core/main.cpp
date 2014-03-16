//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Company: Positively Front Street, Inc
// DBA: mobiFoundry
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options.
// Date: Oct 2nd 2009
// Description: Job Management - Time and materials application
//
// TimeLord1 is a Job based tracking of Labor, Materials and Tasks (to-do list).
// It allows a Contractor to clock in/out personnel, track materials use and
// task completion.  Supports up to 10 job locations with employees/subcontractors,
// materials and tasks at each. Advanced version supports bluetooth/location based
// clock in/out of employees/subcontractors when all jobs must run concurrently
// and on schedule.  Labor and Materials tracking in real time provides for maximizing
// profit by reducing these key costs. Tracking and assigning of Job tasks allows for
// better completion estimates for builders and project planners alike. Timelord1 was
// designed to run on the Nokia E51/71 business phone.
//
// 04Nov09 RNM added Spanish text variables - all ending in "es" the international 2
//         character code for SPAIN (Espana)
//		   Although you sent me an example with "es" on the end of the variable name,
//		   I felt it better to capitalize this, especially thinking ahead to the 20
//		   different language versions we intend to support.  So "es" became "ES"  OK?
//
// 11Nov09 LPM Added code to switch from English to Espana
//
// 12JAN10 LPM Added code for switch to Swedish text provided by Niklas
//
// 14JAN10 LPM split javascript files
//
// 29JAN10 LPM added finish language file Finnish.js
// 05FEB10 LPM v121 fails to store clock in information
// 06FEB10 LPM changed version to v122 to fix above regression
// 10FEB10 LPM improved clockin/clockout
// 15FEB10 LPM moved css after js to improve load time as recommended by Bess Ho
// 20APR10 LPM OVI QA has asked for End Date
//         "Dear Publisher,
//         We have added a compatible device to increase its global distribution for this content.
//         We now have a requirement that all signed content must have an End Publish Date that is on or before the certificate’s expiry date.
//         Since your content was published before this requirement was in effect,
//         we are providing a 30 day window for you to add in the End Publish Date for this content.
//         If the changes are not made after 30 days, we will be unpublishing your content.
//         Should you have any questions, please contact the Ovi Publish Support team at PublishToOvi.Support@nokia.com.
//
//         You can view the whole comment thread at
//         https://publish.ovi.com/download_items/show/38566
//
//         If you have any questions, please contact us through the Support page at https://publish.ovi.com/help/feedback
//         or email us at PublishToOvi.Support@nokia.com."
//
//         Set end date in store to April 20th 2012, two years out
//         Could not do without content getting taken down from store and new QA
//         So reviewing all modules and improving where possible
// 21APR10 LPM Continue improving labor traking features, new screen for each employee with
//         the clock in of out button.  A panel timesheet for each is shown
// 28JUL10 LPM Start of project mongolord
// 02AUG10 LPM Successfully opened mobifoundry web site, httpCallBack got a 3 then a 4 for load complete !
//             Now able to open website and pull down page, next step in the path
// 12JUL11 LPM Started Moving code into Qt webkit or qwebkit and away from wrt 1.0 alonging more advanced features to be added
//
// 15JUL11 LPM started bring timelord into appmobi as first step in removing wrt and replacing with phonegap/webkit
//             allowing to build for iphone and Android smartphones
//
// 09SEP11 LPM iphone /android port
//
// 16MAR14 LPM Qt 5.2.1 port for android and black berry
//--------------------------------------------------------------------------------------//

#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/TimeLordOne/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
