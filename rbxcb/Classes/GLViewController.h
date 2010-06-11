//
//  GLViewController.h
//  rbxcb
//
//  Created by simon eames on 9/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GLView.h"
#import "OpenGLCommon.h"

@interface GLViewController : UIViewController <GLViewDelegate>
{
	GLfloat rotationX;
	GLfloat	rotationY;
	GLfloat rotationZ;
}
-(void)increaseXRotation:(GLfloat)aValue;
-(void)increaseYRotation:(GLfloat)aValue;
-(void)increaseZRotation:(GLfloat)aValue;
-(void)resetRotation;
@end
