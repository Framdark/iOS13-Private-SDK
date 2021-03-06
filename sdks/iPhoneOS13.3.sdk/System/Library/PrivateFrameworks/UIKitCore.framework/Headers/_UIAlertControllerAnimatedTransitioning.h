//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIAlertController, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presentation;
    UIAlertController *_alertController;
    UIInteractionProgress *_interactionProgress;
}

@property(retain, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(getter=isPresentation) BOOL presentation; // @synthesize presentation=_presentation;
// - (void).cxx_destruct;
- (void)_animateTransition:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)_alertControllerForContext:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;

@end

