//
//  GLView.h
//  rbxcb
//
//  Created by simon eames on 9/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@protocol GLViewDelegate
- (void)drawView:(UIView *)theView;
- (void)setupView:(UIView *)theView;
@end

@interface GLView : UIView 
{
    
@private

    GLint backingWidth;
    GLint backingHeight;
    
    EAGLContext *context;    
    GLuint viewRenderbuffer, viewFramebuffer;
    GLuint depthRenderbuffer;
    
    NSTimer *animationTimer;
    NSTimeInterval animationInterval;
    
    id <GLViewDelegate>     delegate;
}
@property NSTimeInterval animationInterval;
@property (assign) /* weak ref */ id <GLViewDelegate> delegate;
- (void)startAnimation;
- (void)stopAnimation;
- (void)drawView;
@end
