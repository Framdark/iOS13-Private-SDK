//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene;

@interface _FBClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (id)initWithScene:(id)arg1 transitionContext:(id)arg2;

@end
