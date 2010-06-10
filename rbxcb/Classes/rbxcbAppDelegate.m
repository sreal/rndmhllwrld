//
//  rbxcbAppDelegate.m
//  rbxcb
//
//  Created by simon eames on 9/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "rbxcbAppDelegate.h"
#import "GLView.h"

@implementation rbxcbAppDelegate

@synthesize window;
@synthesize glView;

- (void)applicationDidFinishLaunching:(UIApplication *)application {
    
	glView.animationInterval = 1.0 / kRenderingFrequency;
	[glView startAnimation];
}


- (void)applicationWillResignActive:(UIApplication *)application {
	glView.animationInterval = 1.0 / kInactiveRenderingFrequency;
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
	glView.animationInterval = 1.0 / 60.0;
}


- (void)dealloc {
	[window release];
	[glView release];
	[super dealloc];
}

@end
