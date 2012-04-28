//
//  AppDelegate.m
//  GrowlLauncher
//
//  Created by Daniel Siemer on 1/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

@synthesize window = _window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
	NSURL* appURL = [[[[NSBundle mainBundle] bundleURL] URLByAppendingPathComponent:@"../../../../Contents/MacOS/Growl" isDirectory:NO] URLByResolvingSymlinksInPath];
	NSLog(@"Launching Growl at URL: %@", appURL);
	NSDictionary* conf = [NSDictionary dictionary];
	NSError* error = nil;
	[[NSWorkspace sharedWorkspace] launchApplicationAtURL:appURL options:NSWorkspaceLaunchDefault configuration:conf error:&error];
	if (error) {
		NSLog(@"%@", error);
	}
	[NSApp terminate:nil];
}

@end
