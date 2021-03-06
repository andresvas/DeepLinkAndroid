//
//  AppDelegate+CULPlugin.h
//
//

#import "AppDelegate.h"

/**
 *  Category for the AppDelegate that overrides application:continueUserActivity:restorationHandler method, 
 *  so we could handle application launch when user clicks on the link in the browser.
 */
@interface AppDelegate (CULPlugin)

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray *))restorationHandler;

@end
